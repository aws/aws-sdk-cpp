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

#include <aws/emr-containers/EMRContainersClient.h>
#include <aws/emr-containers/EMRContainersErrorMarshaller.h>
#include <aws/emr-containers/EMRContainersEndpointProvider.h>
#include <aws/emr-containers/model/CancelJobRunRequest.h>
#include <aws/emr-containers/model/CreateJobTemplateRequest.h>
#include <aws/emr-containers/model/CreateManagedEndpointRequest.h>
#include <aws/emr-containers/model/CreateVirtualClusterRequest.h>
#include <aws/emr-containers/model/DeleteJobTemplateRequest.h>
#include <aws/emr-containers/model/DeleteManagedEndpointRequest.h>
#include <aws/emr-containers/model/DeleteVirtualClusterRequest.h>
#include <aws/emr-containers/model/DescribeJobRunRequest.h>
#include <aws/emr-containers/model/DescribeJobTemplateRequest.h>
#include <aws/emr-containers/model/DescribeManagedEndpointRequest.h>
#include <aws/emr-containers/model/DescribeVirtualClusterRequest.h>
#include <aws/emr-containers/model/ListJobRunsRequest.h>
#include <aws/emr-containers/model/ListJobTemplatesRequest.h>
#include <aws/emr-containers/model/ListManagedEndpointsRequest.h>
#include <aws/emr-containers/model/ListTagsForResourceRequest.h>
#include <aws/emr-containers/model/ListVirtualClustersRequest.h>
#include <aws/emr-containers/model/StartJobRunRequest.h>
#include <aws/emr-containers/model/TagResourceRequest.h>
#include <aws/emr-containers/model/UntagResourceRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::EMRContainers;
using namespace Aws::EMRContainers::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* EMRContainersClient::SERVICE_NAME = "emr-containers";
const char* EMRContainersClient::ALLOCATION_TAG = "EMRContainersClient";

EMRContainersClient::EMRContainersClient(const EMRContainers::EMRContainersClientConfiguration& clientConfiguration,
                                         std::shared_ptr<EMRContainersEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<EMRContainersErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

EMRContainersClient::EMRContainersClient(const AWSCredentials& credentials,
                                         std::shared_ptr<EMRContainersEndpointProviderBase> endpointProvider,
                                         const EMRContainers::EMRContainersClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<EMRContainersErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

EMRContainersClient::EMRContainersClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                         std::shared_ptr<EMRContainersEndpointProviderBase> endpointProvider,
                                         const EMRContainers::EMRContainersClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<EMRContainersErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  EMRContainersClient::EMRContainersClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<EMRContainersErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<EMRContainersEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

EMRContainersClient::EMRContainersClient(const AWSCredentials& credentials,
                                         const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<EMRContainersErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<EMRContainersEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

EMRContainersClient::EMRContainersClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                         const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<EMRContainersErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<EMRContainersEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
EMRContainersClient::~EMRContainersClient()
{
}

std::shared_ptr<EMRContainersEndpointProviderBase>& EMRContainersClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void EMRContainersClient::init(const EMRContainers::EMRContainersClientConfiguration& config)
{
  AWSClient::SetServiceClientName("EMR containers");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void EMRContainersClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

CancelJobRunOutcome EMRContainersClient::CancelJobRun(const CancelJobRunRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CancelJobRun, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CancelJobRun", "Required field: Id, is not set");
    return CancelJobRunOutcome(Aws::Client::AWSError<EMRContainersErrors>(EMRContainersErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  if (!request.VirtualClusterIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CancelJobRun", "Required field: VirtualClusterId, is not set");
    return CancelJobRunOutcome(Aws::Client::AWSError<EMRContainersErrors>(EMRContainersErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VirtualClusterId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CancelJobRun, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/virtualclusters/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVirtualClusterId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/jobruns/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return CancelJobRunOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

CancelJobRunOutcomeCallable EMRContainersClient::CancelJobRunCallable(const CancelJobRunRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CancelJobRunOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CancelJobRun(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRContainersClient::CancelJobRunAsync(const CancelJobRunRequest& request, const CancelJobRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CancelJobRun(request), context);
    } );
}

CreateJobTemplateOutcome EMRContainersClient::CreateJobTemplate(const CreateJobTemplateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateJobTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateJobTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/jobtemplates");
  return CreateJobTemplateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateJobTemplateOutcomeCallable EMRContainersClient::CreateJobTemplateCallable(const CreateJobTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateJobTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateJobTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRContainersClient::CreateJobTemplateAsync(const CreateJobTemplateRequest& request, const CreateJobTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateJobTemplate(request), context);
    } );
}

CreateManagedEndpointOutcome EMRContainersClient::CreateManagedEndpoint(const CreateManagedEndpointRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateManagedEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.VirtualClusterIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateManagedEndpoint", "Required field: VirtualClusterId, is not set");
    return CreateManagedEndpointOutcome(Aws::Client::AWSError<EMRContainersErrors>(EMRContainersErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VirtualClusterId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateManagedEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/virtualclusters/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVirtualClusterId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/endpoints");
  return CreateManagedEndpointOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateManagedEndpointOutcomeCallable EMRContainersClient::CreateManagedEndpointCallable(const CreateManagedEndpointRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateManagedEndpointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateManagedEndpoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRContainersClient::CreateManagedEndpointAsync(const CreateManagedEndpointRequest& request, const CreateManagedEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateManagedEndpoint(request), context);
    } );
}

CreateVirtualClusterOutcome EMRContainersClient::CreateVirtualCluster(const CreateVirtualClusterRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateVirtualCluster, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateVirtualCluster, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/virtualclusters");
  return CreateVirtualClusterOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateVirtualClusterOutcomeCallable EMRContainersClient::CreateVirtualClusterCallable(const CreateVirtualClusterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateVirtualClusterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateVirtualCluster(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRContainersClient::CreateVirtualClusterAsync(const CreateVirtualClusterRequest& request, const CreateVirtualClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateVirtualCluster(request), context);
    } );
}

DeleteJobTemplateOutcome EMRContainersClient::DeleteJobTemplate(const DeleteJobTemplateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteJobTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteJobTemplate", "Required field: Id, is not set");
    return DeleteJobTemplateOutcome(Aws::Client::AWSError<EMRContainersErrors>(EMRContainersErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteJobTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/jobtemplates/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return DeleteJobTemplateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteJobTemplateOutcomeCallable EMRContainersClient::DeleteJobTemplateCallable(const DeleteJobTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteJobTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteJobTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRContainersClient::DeleteJobTemplateAsync(const DeleteJobTemplateRequest& request, const DeleteJobTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteJobTemplate(request), context);
    } );
}

DeleteManagedEndpointOutcome EMRContainersClient::DeleteManagedEndpoint(const DeleteManagedEndpointRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteManagedEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteManagedEndpoint", "Required field: Id, is not set");
    return DeleteManagedEndpointOutcome(Aws::Client::AWSError<EMRContainersErrors>(EMRContainersErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  if (!request.VirtualClusterIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteManagedEndpoint", "Required field: VirtualClusterId, is not set");
    return DeleteManagedEndpointOutcome(Aws::Client::AWSError<EMRContainersErrors>(EMRContainersErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VirtualClusterId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteManagedEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/virtualclusters/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVirtualClusterId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/endpoints/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return DeleteManagedEndpointOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteManagedEndpointOutcomeCallable EMRContainersClient::DeleteManagedEndpointCallable(const DeleteManagedEndpointRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteManagedEndpointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteManagedEndpoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRContainersClient::DeleteManagedEndpointAsync(const DeleteManagedEndpointRequest& request, const DeleteManagedEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteManagedEndpoint(request), context);
    } );
}

DeleteVirtualClusterOutcome EMRContainersClient::DeleteVirtualCluster(const DeleteVirtualClusterRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteVirtualCluster, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteVirtualCluster", "Required field: Id, is not set");
    return DeleteVirtualClusterOutcome(Aws::Client::AWSError<EMRContainersErrors>(EMRContainersErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteVirtualCluster, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/virtualclusters/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return DeleteVirtualClusterOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteVirtualClusterOutcomeCallable EMRContainersClient::DeleteVirtualClusterCallable(const DeleteVirtualClusterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteVirtualClusterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteVirtualCluster(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRContainersClient::DeleteVirtualClusterAsync(const DeleteVirtualClusterRequest& request, const DeleteVirtualClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteVirtualCluster(request), context);
    } );
}

DescribeJobRunOutcome EMRContainersClient::DescribeJobRun(const DescribeJobRunRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeJobRun, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeJobRun", "Required field: Id, is not set");
    return DescribeJobRunOutcome(Aws::Client::AWSError<EMRContainersErrors>(EMRContainersErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  if (!request.VirtualClusterIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeJobRun", "Required field: VirtualClusterId, is not set");
    return DescribeJobRunOutcome(Aws::Client::AWSError<EMRContainersErrors>(EMRContainersErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VirtualClusterId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeJobRun, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/virtualclusters/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVirtualClusterId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/jobruns/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return DescribeJobRunOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeJobRunOutcomeCallable EMRContainersClient::DescribeJobRunCallable(const DescribeJobRunRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeJobRunOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeJobRun(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRContainersClient::DescribeJobRunAsync(const DescribeJobRunRequest& request, const DescribeJobRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeJobRun(request), context);
    } );
}

DescribeJobTemplateOutcome EMRContainersClient::DescribeJobTemplate(const DescribeJobTemplateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeJobTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeJobTemplate", "Required field: Id, is not set");
    return DescribeJobTemplateOutcome(Aws::Client::AWSError<EMRContainersErrors>(EMRContainersErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeJobTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/jobtemplates/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return DescribeJobTemplateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeJobTemplateOutcomeCallable EMRContainersClient::DescribeJobTemplateCallable(const DescribeJobTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeJobTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeJobTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRContainersClient::DescribeJobTemplateAsync(const DescribeJobTemplateRequest& request, const DescribeJobTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeJobTemplate(request), context);
    } );
}

DescribeManagedEndpointOutcome EMRContainersClient::DescribeManagedEndpoint(const DescribeManagedEndpointRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeManagedEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeManagedEndpoint", "Required field: Id, is not set");
    return DescribeManagedEndpointOutcome(Aws::Client::AWSError<EMRContainersErrors>(EMRContainersErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  if (!request.VirtualClusterIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeManagedEndpoint", "Required field: VirtualClusterId, is not set");
    return DescribeManagedEndpointOutcome(Aws::Client::AWSError<EMRContainersErrors>(EMRContainersErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VirtualClusterId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeManagedEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/virtualclusters/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVirtualClusterId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/endpoints/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return DescribeManagedEndpointOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeManagedEndpointOutcomeCallable EMRContainersClient::DescribeManagedEndpointCallable(const DescribeManagedEndpointRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeManagedEndpointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeManagedEndpoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRContainersClient::DescribeManagedEndpointAsync(const DescribeManagedEndpointRequest& request, const DescribeManagedEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeManagedEndpoint(request), context);
    } );
}

DescribeVirtualClusterOutcome EMRContainersClient::DescribeVirtualCluster(const DescribeVirtualClusterRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeVirtualCluster, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeVirtualCluster", "Required field: Id, is not set");
    return DescribeVirtualClusterOutcome(Aws::Client::AWSError<EMRContainersErrors>(EMRContainersErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeVirtualCluster, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/virtualclusters/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return DescribeVirtualClusterOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeVirtualClusterOutcomeCallable EMRContainersClient::DescribeVirtualClusterCallable(const DescribeVirtualClusterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeVirtualClusterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeVirtualCluster(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRContainersClient::DescribeVirtualClusterAsync(const DescribeVirtualClusterRequest& request, const DescribeVirtualClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeVirtualCluster(request), context);
    } );
}

ListJobRunsOutcome EMRContainersClient::ListJobRuns(const ListJobRunsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListJobRuns, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.VirtualClusterIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListJobRuns", "Required field: VirtualClusterId, is not set");
    return ListJobRunsOutcome(Aws::Client::AWSError<EMRContainersErrors>(EMRContainersErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VirtualClusterId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListJobRuns, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/virtualclusters/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVirtualClusterId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/jobruns");
  return ListJobRunsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListJobRunsOutcomeCallable EMRContainersClient::ListJobRunsCallable(const ListJobRunsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListJobRunsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListJobRuns(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRContainersClient::ListJobRunsAsync(const ListJobRunsRequest& request, const ListJobRunsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListJobRuns(request), context);
    } );
}

ListJobTemplatesOutcome EMRContainersClient::ListJobTemplates(const ListJobTemplatesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListJobTemplates, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListJobTemplates, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/jobtemplates");
  return ListJobTemplatesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListJobTemplatesOutcomeCallable EMRContainersClient::ListJobTemplatesCallable(const ListJobTemplatesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListJobTemplatesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListJobTemplates(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRContainersClient::ListJobTemplatesAsync(const ListJobTemplatesRequest& request, const ListJobTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListJobTemplates(request), context);
    } );
}

ListManagedEndpointsOutcome EMRContainersClient::ListManagedEndpoints(const ListManagedEndpointsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListManagedEndpoints, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.VirtualClusterIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListManagedEndpoints", "Required field: VirtualClusterId, is not set");
    return ListManagedEndpointsOutcome(Aws::Client::AWSError<EMRContainersErrors>(EMRContainersErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VirtualClusterId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListManagedEndpoints, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/virtualclusters/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVirtualClusterId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/endpoints");
  return ListManagedEndpointsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListManagedEndpointsOutcomeCallable EMRContainersClient::ListManagedEndpointsCallable(const ListManagedEndpointsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListManagedEndpointsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListManagedEndpoints(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRContainersClient::ListManagedEndpointsAsync(const ListManagedEndpointsRequest& request, const ListManagedEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListManagedEndpoints(request), context);
    } );
}

ListTagsForResourceOutcome EMRContainersClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<EMRContainersErrors>(EMRContainersErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return ListTagsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable EMRContainersClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRContainersClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTagsForResource(request), context);
    } );
}

ListVirtualClustersOutcome EMRContainersClient::ListVirtualClusters(const ListVirtualClustersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListVirtualClusters, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListVirtualClusters, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/virtualclusters");
  return ListVirtualClustersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListVirtualClustersOutcomeCallable EMRContainersClient::ListVirtualClustersCallable(const ListVirtualClustersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListVirtualClustersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListVirtualClusters(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRContainersClient::ListVirtualClustersAsync(const ListVirtualClustersRequest& request, const ListVirtualClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListVirtualClusters(request), context);
    } );
}

StartJobRunOutcome EMRContainersClient::StartJobRun(const StartJobRunRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartJobRun, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.VirtualClusterIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartJobRun", "Required field: VirtualClusterId, is not set");
    return StartJobRunOutcome(Aws::Client::AWSError<EMRContainersErrors>(EMRContainersErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VirtualClusterId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartJobRun, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/virtualclusters/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVirtualClusterId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/jobruns");
  return StartJobRunOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartJobRunOutcomeCallable EMRContainersClient::StartJobRunCallable(const StartJobRunRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartJobRunOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartJobRun(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRContainersClient::StartJobRunAsync(const StartJobRunRequest& request, const StartJobRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StartJobRun(request), context);
    } );
}

TagResourceOutcome EMRContainersClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<EMRContainersErrors>(EMRContainersErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return TagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable EMRContainersClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRContainersClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, TagResource(request), context);
    } );
}

UntagResourceOutcome EMRContainersClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<EMRContainersErrors>(EMRContainersErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<EMRContainersErrors>(EMRContainersErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return UntagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable EMRContainersClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRContainersClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UntagResource(request), context);
    } );
}

