/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/Outcome.h>
#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/logging/ErrorMacros.h>

#include <aws/mgn/MgnClient.h>
#include <aws/mgn/MgnErrorMarshaller.h>
#include <aws/mgn/MgnEndpointProvider.h>
#include <aws/mgn/model/ChangeServerLifeCycleStateRequest.h>
#include <aws/mgn/model/CreateLaunchConfigurationTemplateRequest.h>
#include <aws/mgn/model/CreateReplicationConfigurationTemplateRequest.h>
#include <aws/mgn/model/DeleteJobRequest.h>
#include <aws/mgn/model/DeleteLaunchConfigurationTemplateRequest.h>
#include <aws/mgn/model/DeleteReplicationConfigurationTemplateRequest.h>
#include <aws/mgn/model/DeleteSourceServerRequest.h>
#include <aws/mgn/model/DeleteVcenterClientRequest.h>
#include <aws/mgn/model/DescribeJobLogItemsRequest.h>
#include <aws/mgn/model/DescribeJobsRequest.h>
#include <aws/mgn/model/DescribeLaunchConfigurationTemplatesRequest.h>
#include <aws/mgn/model/DescribeReplicationConfigurationTemplatesRequest.h>
#include <aws/mgn/model/DescribeSourceServersRequest.h>
#include <aws/mgn/model/DescribeVcenterClientsRequest.h>
#include <aws/mgn/model/DisconnectFromServiceRequest.h>
#include <aws/mgn/model/FinalizeCutoverRequest.h>
#include <aws/mgn/model/GetLaunchConfigurationRequest.h>
#include <aws/mgn/model/GetReplicationConfigurationRequest.h>
#include <aws/mgn/model/InitializeServiceRequest.h>
#include <aws/mgn/model/ListTagsForResourceRequest.h>
#include <aws/mgn/model/MarkAsArchivedRequest.h>
#include <aws/mgn/model/RetryDataReplicationRequest.h>
#include <aws/mgn/model/StartCutoverRequest.h>
#include <aws/mgn/model/StartReplicationRequest.h>
#include <aws/mgn/model/StartTestRequest.h>
#include <aws/mgn/model/TagResourceRequest.h>
#include <aws/mgn/model/TerminateTargetInstancesRequest.h>
#include <aws/mgn/model/UntagResourceRequest.h>
#include <aws/mgn/model/UpdateLaunchConfigurationRequest.h>
#include <aws/mgn/model/UpdateLaunchConfigurationTemplateRequest.h>
#include <aws/mgn/model/UpdateReplicationConfigurationRequest.h>
#include <aws/mgn/model/UpdateReplicationConfigurationTemplateRequest.h>
#include <aws/mgn/model/UpdateSourceServerReplicationTypeRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::mgn;
using namespace Aws::mgn::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* MgnClient::SERVICE_NAME = "mgn";
const char* MgnClient::ALLOCATION_TAG = "MgnClient";

MgnClient::MgnClient(const mgn::MgnClientConfiguration& clientConfiguration,
                     std::shared_ptr<MgnEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<MgnErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

MgnClient::MgnClient(const AWSCredentials& credentials,
                     std::shared_ptr<MgnEndpointProviderBase> endpointProvider,
                     const mgn::MgnClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<MgnErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

MgnClient::MgnClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                     std::shared_ptr<MgnEndpointProviderBase> endpointProvider,
                     const mgn::MgnClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<MgnErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  MgnClient::MgnClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<MgnErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<MgnEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

MgnClient::MgnClient(const AWSCredentials& credentials,
                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<MgnErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<MgnEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

MgnClient::MgnClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<MgnErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<MgnEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
MgnClient::~MgnClient()
{
}

std::shared_ptr<MgnEndpointProviderBase>& MgnClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void MgnClient::init(const mgn::MgnClientConfiguration& config)
{
  AWSClient::SetServiceClientName("mgn");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void MgnClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

ChangeServerLifeCycleStateOutcome MgnClient::ChangeServerLifeCycleState(const ChangeServerLifeCycleStateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ChangeServerLifeCycleState, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ChangeServerLifeCycleState, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/ChangeServerLifeCycleState");
  return ChangeServerLifeCycleStateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ChangeServerLifeCycleStateOutcomeCallable MgnClient::ChangeServerLifeCycleStateCallable(const ChangeServerLifeCycleStateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ChangeServerLifeCycleStateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ChangeServerLifeCycleState(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MgnClient::ChangeServerLifeCycleStateAsync(const ChangeServerLifeCycleStateRequest& request, const ChangeServerLifeCycleStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ChangeServerLifeCycleState(request), context);
    } );
}

CreateLaunchConfigurationTemplateOutcome MgnClient::CreateLaunchConfigurationTemplate(const CreateLaunchConfigurationTemplateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateLaunchConfigurationTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateLaunchConfigurationTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/CreateLaunchConfigurationTemplate");
  return CreateLaunchConfigurationTemplateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateLaunchConfigurationTemplateOutcomeCallable MgnClient::CreateLaunchConfigurationTemplateCallable(const CreateLaunchConfigurationTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateLaunchConfigurationTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateLaunchConfigurationTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MgnClient::CreateLaunchConfigurationTemplateAsync(const CreateLaunchConfigurationTemplateRequest& request, const CreateLaunchConfigurationTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateLaunchConfigurationTemplate(request), context);
    } );
}

CreateReplicationConfigurationTemplateOutcome MgnClient::CreateReplicationConfigurationTemplate(const CreateReplicationConfigurationTemplateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateReplicationConfigurationTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateReplicationConfigurationTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/CreateReplicationConfigurationTemplate");
  return CreateReplicationConfigurationTemplateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateReplicationConfigurationTemplateOutcomeCallable MgnClient::CreateReplicationConfigurationTemplateCallable(const CreateReplicationConfigurationTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateReplicationConfigurationTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateReplicationConfigurationTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MgnClient::CreateReplicationConfigurationTemplateAsync(const CreateReplicationConfigurationTemplateRequest& request, const CreateReplicationConfigurationTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateReplicationConfigurationTemplate(request), context);
    } );
}

DeleteJobOutcome MgnClient::DeleteJob(const DeleteJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/DeleteJob");
  return DeleteJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteJobOutcomeCallable MgnClient::DeleteJobCallable(const DeleteJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MgnClient::DeleteJobAsync(const DeleteJobRequest& request, const DeleteJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteJob(request), context);
    } );
}

DeleteLaunchConfigurationTemplateOutcome MgnClient::DeleteLaunchConfigurationTemplate(const DeleteLaunchConfigurationTemplateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteLaunchConfigurationTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteLaunchConfigurationTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/DeleteLaunchConfigurationTemplate");
  return DeleteLaunchConfigurationTemplateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteLaunchConfigurationTemplateOutcomeCallable MgnClient::DeleteLaunchConfigurationTemplateCallable(const DeleteLaunchConfigurationTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteLaunchConfigurationTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteLaunchConfigurationTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MgnClient::DeleteLaunchConfigurationTemplateAsync(const DeleteLaunchConfigurationTemplateRequest& request, const DeleteLaunchConfigurationTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteLaunchConfigurationTemplate(request), context);
    } );
}

DeleteReplicationConfigurationTemplateOutcome MgnClient::DeleteReplicationConfigurationTemplate(const DeleteReplicationConfigurationTemplateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteReplicationConfigurationTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteReplicationConfigurationTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/DeleteReplicationConfigurationTemplate");
  return DeleteReplicationConfigurationTemplateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteReplicationConfigurationTemplateOutcomeCallable MgnClient::DeleteReplicationConfigurationTemplateCallable(const DeleteReplicationConfigurationTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteReplicationConfigurationTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteReplicationConfigurationTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MgnClient::DeleteReplicationConfigurationTemplateAsync(const DeleteReplicationConfigurationTemplateRequest& request, const DeleteReplicationConfigurationTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteReplicationConfigurationTemplate(request), context);
    } );
}

DeleteSourceServerOutcome MgnClient::DeleteSourceServer(const DeleteSourceServerRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteSourceServer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteSourceServer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/DeleteSourceServer");
  return DeleteSourceServerOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteSourceServerOutcomeCallable MgnClient::DeleteSourceServerCallable(const DeleteSourceServerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteSourceServerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteSourceServer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MgnClient::DeleteSourceServerAsync(const DeleteSourceServerRequest& request, const DeleteSourceServerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteSourceServer(request), context);
    } );
}

DeleteVcenterClientOutcome MgnClient::DeleteVcenterClient(const DeleteVcenterClientRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteVcenterClient, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteVcenterClient, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/DeleteVcenterClient");
  return DeleteVcenterClientOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteVcenterClientOutcomeCallable MgnClient::DeleteVcenterClientCallable(const DeleteVcenterClientRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteVcenterClientOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteVcenterClient(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MgnClient::DeleteVcenterClientAsync(const DeleteVcenterClientRequest& request, const DeleteVcenterClientResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteVcenterClient(request), context);
    } );
}

DescribeJobLogItemsOutcome MgnClient::DescribeJobLogItems(const DescribeJobLogItemsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeJobLogItems, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeJobLogItems, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/DescribeJobLogItems");
  return DescribeJobLogItemsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeJobLogItemsOutcomeCallable MgnClient::DescribeJobLogItemsCallable(const DescribeJobLogItemsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeJobLogItemsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeJobLogItems(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MgnClient::DescribeJobLogItemsAsync(const DescribeJobLogItemsRequest& request, const DescribeJobLogItemsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeJobLogItems(request), context);
    } );
}

DescribeJobsOutcome MgnClient::DescribeJobs(const DescribeJobsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/DescribeJobs");
  return DescribeJobsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeJobsOutcomeCallable MgnClient::DescribeJobsCallable(const DescribeJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MgnClient::DescribeJobsAsync(const DescribeJobsRequest& request, const DescribeJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeJobs(request), context);
    } );
}

DescribeLaunchConfigurationTemplatesOutcome MgnClient::DescribeLaunchConfigurationTemplates(const DescribeLaunchConfigurationTemplatesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeLaunchConfigurationTemplates, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeLaunchConfigurationTemplates, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/DescribeLaunchConfigurationTemplates");
  return DescribeLaunchConfigurationTemplatesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeLaunchConfigurationTemplatesOutcomeCallable MgnClient::DescribeLaunchConfigurationTemplatesCallable(const DescribeLaunchConfigurationTemplatesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeLaunchConfigurationTemplatesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeLaunchConfigurationTemplates(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MgnClient::DescribeLaunchConfigurationTemplatesAsync(const DescribeLaunchConfigurationTemplatesRequest& request, const DescribeLaunchConfigurationTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeLaunchConfigurationTemplates(request), context);
    } );
}

DescribeReplicationConfigurationTemplatesOutcome MgnClient::DescribeReplicationConfigurationTemplates(const DescribeReplicationConfigurationTemplatesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeReplicationConfigurationTemplates, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeReplicationConfigurationTemplates, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/DescribeReplicationConfigurationTemplates");
  return DescribeReplicationConfigurationTemplatesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeReplicationConfigurationTemplatesOutcomeCallable MgnClient::DescribeReplicationConfigurationTemplatesCallable(const DescribeReplicationConfigurationTemplatesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeReplicationConfigurationTemplatesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeReplicationConfigurationTemplates(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MgnClient::DescribeReplicationConfigurationTemplatesAsync(const DescribeReplicationConfigurationTemplatesRequest& request, const DescribeReplicationConfigurationTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeReplicationConfigurationTemplates(request), context);
    } );
}

DescribeSourceServersOutcome MgnClient::DescribeSourceServers(const DescribeSourceServersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeSourceServers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeSourceServers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/DescribeSourceServers");
  return DescribeSourceServersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeSourceServersOutcomeCallable MgnClient::DescribeSourceServersCallable(const DescribeSourceServersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeSourceServersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeSourceServers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MgnClient::DescribeSourceServersAsync(const DescribeSourceServersRequest& request, const DescribeSourceServersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeSourceServers(request), context);
    } );
}

DescribeVcenterClientsOutcome MgnClient::DescribeVcenterClients(const DescribeVcenterClientsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeVcenterClients, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeVcenterClients, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/DescribeVcenterClients");
  return DescribeVcenterClientsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeVcenterClientsOutcomeCallable MgnClient::DescribeVcenterClientsCallable(const DescribeVcenterClientsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeVcenterClientsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeVcenterClients(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MgnClient::DescribeVcenterClientsAsync(const DescribeVcenterClientsRequest& request, const DescribeVcenterClientsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeVcenterClients(request), context);
    } );
}

DisconnectFromServiceOutcome MgnClient::DisconnectFromService(const DisconnectFromServiceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisconnectFromService, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisconnectFromService, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/DisconnectFromService");
  return DisconnectFromServiceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisconnectFromServiceOutcomeCallable MgnClient::DisconnectFromServiceCallable(const DisconnectFromServiceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisconnectFromServiceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisconnectFromService(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MgnClient::DisconnectFromServiceAsync(const DisconnectFromServiceRequest& request, const DisconnectFromServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DisconnectFromService(request), context);
    } );
}

FinalizeCutoverOutcome MgnClient::FinalizeCutover(const FinalizeCutoverRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, FinalizeCutover, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, FinalizeCutover, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/FinalizeCutover");
  return FinalizeCutoverOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

FinalizeCutoverOutcomeCallable MgnClient::FinalizeCutoverCallable(const FinalizeCutoverRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< FinalizeCutoverOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->FinalizeCutover(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MgnClient::FinalizeCutoverAsync(const FinalizeCutoverRequest& request, const FinalizeCutoverResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, FinalizeCutover(request), context);
    } );
}

GetLaunchConfigurationOutcome MgnClient::GetLaunchConfiguration(const GetLaunchConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetLaunchConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetLaunchConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/GetLaunchConfiguration");
  return GetLaunchConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetLaunchConfigurationOutcomeCallable MgnClient::GetLaunchConfigurationCallable(const GetLaunchConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetLaunchConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetLaunchConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MgnClient::GetLaunchConfigurationAsync(const GetLaunchConfigurationRequest& request, const GetLaunchConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetLaunchConfiguration(request), context);
    } );
}

GetReplicationConfigurationOutcome MgnClient::GetReplicationConfiguration(const GetReplicationConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetReplicationConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetReplicationConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/GetReplicationConfiguration");
  return GetReplicationConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetReplicationConfigurationOutcomeCallable MgnClient::GetReplicationConfigurationCallable(const GetReplicationConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetReplicationConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetReplicationConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MgnClient::GetReplicationConfigurationAsync(const GetReplicationConfigurationRequest& request, const GetReplicationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetReplicationConfiguration(request), context);
    } );
}

InitializeServiceOutcome MgnClient::InitializeService(const InitializeServiceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, InitializeService, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, InitializeService, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/InitializeService");
  return InitializeServiceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

InitializeServiceOutcomeCallable MgnClient::InitializeServiceCallable(const InitializeServiceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< InitializeServiceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->InitializeService(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MgnClient::InitializeServiceAsync(const InitializeServiceRequest& request, const InitializeServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, InitializeService(request), context);
    } );
}

ListTagsForResourceOutcome MgnClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<MgnErrors>(MgnErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return ListTagsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable MgnClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MgnClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTagsForResource(request), context);
    } );
}

MarkAsArchivedOutcome MgnClient::MarkAsArchived(const MarkAsArchivedRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, MarkAsArchived, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, MarkAsArchived, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/MarkAsArchived");
  return MarkAsArchivedOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

MarkAsArchivedOutcomeCallable MgnClient::MarkAsArchivedCallable(const MarkAsArchivedRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< MarkAsArchivedOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->MarkAsArchived(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MgnClient::MarkAsArchivedAsync(const MarkAsArchivedRequest& request, const MarkAsArchivedResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, MarkAsArchived(request), context);
    } );
}

RetryDataReplicationOutcome MgnClient::RetryDataReplication(const RetryDataReplicationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RetryDataReplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RetryDataReplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/RetryDataReplication");
  return RetryDataReplicationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RetryDataReplicationOutcomeCallable MgnClient::RetryDataReplicationCallable(const RetryDataReplicationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RetryDataReplicationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RetryDataReplication(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MgnClient::RetryDataReplicationAsync(const RetryDataReplicationRequest& request, const RetryDataReplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RetryDataReplication(request), context);
    } );
}

StartCutoverOutcome MgnClient::StartCutover(const StartCutoverRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartCutover, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartCutover, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/StartCutover");
  return StartCutoverOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartCutoverOutcomeCallable MgnClient::StartCutoverCallable(const StartCutoverRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartCutoverOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartCutover(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MgnClient::StartCutoverAsync(const StartCutoverRequest& request, const StartCutoverResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StartCutover(request), context);
    } );
}

StartReplicationOutcome MgnClient::StartReplication(const StartReplicationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartReplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartReplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/StartReplication");
  return StartReplicationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartReplicationOutcomeCallable MgnClient::StartReplicationCallable(const StartReplicationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartReplicationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartReplication(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MgnClient::StartReplicationAsync(const StartReplicationRequest& request, const StartReplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StartReplication(request), context);
    } );
}

StartTestOutcome MgnClient::StartTest(const StartTestRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartTest, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartTest, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/StartTest");
  return StartTestOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartTestOutcomeCallable MgnClient::StartTestCallable(const StartTestRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartTestOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartTest(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MgnClient::StartTestAsync(const StartTestRequest& request, const StartTestResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StartTest(request), context);
    } );
}

TagResourceOutcome MgnClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<MgnErrors>(MgnErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return TagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable MgnClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MgnClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, TagResource(request), context);
    } );
}

TerminateTargetInstancesOutcome MgnClient::TerminateTargetInstances(const TerminateTargetInstancesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TerminateTargetInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TerminateTargetInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/TerminateTargetInstances");
  return TerminateTargetInstancesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TerminateTargetInstancesOutcomeCallable MgnClient::TerminateTargetInstancesCallable(const TerminateTargetInstancesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TerminateTargetInstancesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TerminateTargetInstances(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MgnClient::TerminateTargetInstancesAsync(const TerminateTargetInstancesRequest& request, const TerminateTargetInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, TerminateTargetInstances(request), context);
    } );
}

UntagResourceOutcome MgnClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<MgnErrors>(MgnErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<MgnErrors>(MgnErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return UntagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable MgnClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MgnClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UntagResource(request), context);
    } );
}

UpdateLaunchConfigurationOutcome MgnClient::UpdateLaunchConfiguration(const UpdateLaunchConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateLaunchConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateLaunchConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/UpdateLaunchConfiguration");
  return UpdateLaunchConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateLaunchConfigurationOutcomeCallable MgnClient::UpdateLaunchConfigurationCallable(const UpdateLaunchConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateLaunchConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateLaunchConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MgnClient::UpdateLaunchConfigurationAsync(const UpdateLaunchConfigurationRequest& request, const UpdateLaunchConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateLaunchConfiguration(request), context);
    } );
}

UpdateLaunchConfigurationTemplateOutcome MgnClient::UpdateLaunchConfigurationTemplate(const UpdateLaunchConfigurationTemplateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateLaunchConfigurationTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateLaunchConfigurationTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/UpdateLaunchConfigurationTemplate");
  return UpdateLaunchConfigurationTemplateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateLaunchConfigurationTemplateOutcomeCallable MgnClient::UpdateLaunchConfigurationTemplateCallable(const UpdateLaunchConfigurationTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateLaunchConfigurationTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateLaunchConfigurationTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MgnClient::UpdateLaunchConfigurationTemplateAsync(const UpdateLaunchConfigurationTemplateRequest& request, const UpdateLaunchConfigurationTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateLaunchConfigurationTemplate(request), context);
    } );
}

UpdateReplicationConfigurationOutcome MgnClient::UpdateReplicationConfiguration(const UpdateReplicationConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateReplicationConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateReplicationConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/UpdateReplicationConfiguration");
  return UpdateReplicationConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateReplicationConfigurationOutcomeCallable MgnClient::UpdateReplicationConfigurationCallable(const UpdateReplicationConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateReplicationConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateReplicationConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MgnClient::UpdateReplicationConfigurationAsync(const UpdateReplicationConfigurationRequest& request, const UpdateReplicationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateReplicationConfiguration(request), context);
    } );
}

UpdateReplicationConfigurationTemplateOutcome MgnClient::UpdateReplicationConfigurationTemplate(const UpdateReplicationConfigurationTemplateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateReplicationConfigurationTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateReplicationConfigurationTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/UpdateReplicationConfigurationTemplate");
  return UpdateReplicationConfigurationTemplateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateReplicationConfigurationTemplateOutcomeCallable MgnClient::UpdateReplicationConfigurationTemplateCallable(const UpdateReplicationConfigurationTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateReplicationConfigurationTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateReplicationConfigurationTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MgnClient::UpdateReplicationConfigurationTemplateAsync(const UpdateReplicationConfigurationTemplateRequest& request, const UpdateReplicationConfigurationTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateReplicationConfigurationTemplate(request), context);
    } );
}

UpdateSourceServerReplicationTypeOutcome MgnClient::UpdateSourceServerReplicationType(const UpdateSourceServerReplicationTypeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateSourceServerReplicationType, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateSourceServerReplicationType, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/UpdateSourceServerReplicationType");
  return UpdateSourceServerReplicationTypeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateSourceServerReplicationTypeOutcomeCallable MgnClient::UpdateSourceServerReplicationTypeCallable(const UpdateSourceServerReplicationTypeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateSourceServerReplicationTypeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateSourceServerReplicationType(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MgnClient::UpdateSourceServerReplicationTypeAsync(const UpdateSourceServerReplicationTypeRequest& request, const UpdateSourceServerReplicationTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateSourceServerReplicationType(request), context);
    } );
}

