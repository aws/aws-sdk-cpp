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

#include <aws/elasticmapreduce/EMRClient.h>
#include <aws/elasticmapreduce/EMRErrorMarshaller.h>
#include <aws/elasticmapreduce/EMREndpointProvider.h>
#include <aws/elasticmapreduce/model/AddInstanceFleetRequest.h>
#include <aws/elasticmapreduce/model/AddInstanceGroupsRequest.h>
#include <aws/elasticmapreduce/model/AddJobFlowStepsRequest.h>
#include <aws/elasticmapreduce/model/AddTagsRequest.h>
#include <aws/elasticmapreduce/model/CancelStepsRequest.h>
#include <aws/elasticmapreduce/model/CreateSecurityConfigurationRequest.h>
#include <aws/elasticmapreduce/model/CreateStudioRequest.h>
#include <aws/elasticmapreduce/model/CreateStudioSessionMappingRequest.h>
#include <aws/elasticmapreduce/model/DeleteSecurityConfigurationRequest.h>
#include <aws/elasticmapreduce/model/DeleteStudioRequest.h>
#include <aws/elasticmapreduce/model/DeleteStudioSessionMappingRequest.h>
#include <aws/elasticmapreduce/model/DescribeClusterRequest.h>
#include <aws/elasticmapreduce/model/DescribeNotebookExecutionRequest.h>
#include <aws/elasticmapreduce/model/DescribeReleaseLabelRequest.h>
#include <aws/elasticmapreduce/model/DescribeSecurityConfigurationRequest.h>
#include <aws/elasticmapreduce/model/DescribeStepRequest.h>
#include <aws/elasticmapreduce/model/DescribeStudioRequest.h>
#include <aws/elasticmapreduce/model/GetAutoTerminationPolicyRequest.h>
#include <aws/elasticmapreduce/model/GetBlockPublicAccessConfigurationRequest.h>
#include <aws/elasticmapreduce/model/GetManagedScalingPolicyRequest.h>
#include <aws/elasticmapreduce/model/GetStudioSessionMappingRequest.h>
#include <aws/elasticmapreduce/model/ListBootstrapActionsRequest.h>
#include <aws/elasticmapreduce/model/ListClustersRequest.h>
#include <aws/elasticmapreduce/model/ListInstanceFleetsRequest.h>
#include <aws/elasticmapreduce/model/ListInstanceGroupsRequest.h>
#include <aws/elasticmapreduce/model/ListInstancesRequest.h>
#include <aws/elasticmapreduce/model/ListNotebookExecutionsRequest.h>
#include <aws/elasticmapreduce/model/ListReleaseLabelsRequest.h>
#include <aws/elasticmapreduce/model/ListSecurityConfigurationsRequest.h>
#include <aws/elasticmapreduce/model/ListStepsRequest.h>
#include <aws/elasticmapreduce/model/ListStudioSessionMappingsRequest.h>
#include <aws/elasticmapreduce/model/ListStudiosRequest.h>
#include <aws/elasticmapreduce/model/ModifyClusterRequest.h>
#include <aws/elasticmapreduce/model/ModifyInstanceFleetRequest.h>
#include <aws/elasticmapreduce/model/ModifyInstanceGroupsRequest.h>
#include <aws/elasticmapreduce/model/PutAutoScalingPolicyRequest.h>
#include <aws/elasticmapreduce/model/PutAutoTerminationPolicyRequest.h>
#include <aws/elasticmapreduce/model/PutBlockPublicAccessConfigurationRequest.h>
#include <aws/elasticmapreduce/model/PutManagedScalingPolicyRequest.h>
#include <aws/elasticmapreduce/model/RemoveAutoScalingPolicyRequest.h>
#include <aws/elasticmapreduce/model/RemoveAutoTerminationPolicyRequest.h>
#include <aws/elasticmapreduce/model/RemoveManagedScalingPolicyRequest.h>
#include <aws/elasticmapreduce/model/RemoveTagsRequest.h>
#include <aws/elasticmapreduce/model/RunJobFlowRequest.h>
#include <aws/elasticmapreduce/model/SetTerminationProtectionRequest.h>
#include <aws/elasticmapreduce/model/SetVisibleToAllUsersRequest.h>
#include <aws/elasticmapreduce/model/StartNotebookExecutionRequest.h>
#include <aws/elasticmapreduce/model/StopNotebookExecutionRequest.h>
#include <aws/elasticmapreduce/model/TerminateJobFlowsRequest.h>
#include <aws/elasticmapreduce/model/UpdateStudioRequest.h>
#include <aws/elasticmapreduce/model/UpdateStudioSessionMappingRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::EMR;
using namespace Aws::EMR::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* EMRClient::SERVICE_NAME = "elasticmapreduce";
const char* EMRClient::ALLOCATION_TAG = "EMRClient";

EMRClient::EMRClient(const EMR::EMRClientConfiguration& clientConfiguration,
                     std::shared_ptr<EMREndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<EMRErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

EMRClient::EMRClient(const AWSCredentials& credentials,
                     std::shared_ptr<EMREndpointProviderBase> endpointProvider,
                     const EMR::EMRClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<EMRErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

EMRClient::EMRClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                     std::shared_ptr<EMREndpointProviderBase> endpointProvider,
                     const EMR::EMRClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<EMRErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  EMRClient::EMRClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<EMRErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<EMREndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

EMRClient::EMRClient(const AWSCredentials& credentials,
                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<EMRErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<EMREndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

EMRClient::EMRClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<EMRErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<EMREndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
EMRClient::~EMRClient()
{
}

std::shared_ptr<EMREndpointProviderBase>& EMRClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void EMRClient::init(const EMR::EMRClientConfiguration& config)
{
  AWSClient::SetServiceClientName("EMR");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void EMRClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

AddInstanceFleetOutcome EMRClient::AddInstanceFleet(const AddInstanceFleetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AddInstanceFleet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AddInstanceFleet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AddInstanceFleetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AddInstanceFleetOutcomeCallable EMRClient::AddInstanceFleetCallable(const AddInstanceFleetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddInstanceFleetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddInstanceFleet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClient::AddInstanceFleetAsync(const AddInstanceFleetRequest& request, const AddInstanceFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AddInstanceFleet(request), context);
    } );
}

AddInstanceGroupsOutcome EMRClient::AddInstanceGroups(const AddInstanceGroupsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AddInstanceGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AddInstanceGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AddInstanceGroupsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AddInstanceGroupsOutcomeCallable EMRClient::AddInstanceGroupsCallable(const AddInstanceGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddInstanceGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddInstanceGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClient::AddInstanceGroupsAsync(const AddInstanceGroupsRequest& request, const AddInstanceGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AddInstanceGroups(request), context);
    } );
}

AddJobFlowStepsOutcome EMRClient::AddJobFlowSteps(const AddJobFlowStepsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AddJobFlowSteps, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AddJobFlowSteps, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AddJobFlowStepsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AddJobFlowStepsOutcomeCallable EMRClient::AddJobFlowStepsCallable(const AddJobFlowStepsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddJobFlowStepsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddJobFlowSteps(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClient::AddJobFlowStepsAsync(const AddJobFlowStepsRequest& request, const AddJobFlowStepsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AddJobFlowSteps(request), context);
    } );
}

AddTagsOutcome EMRClient::AddTags(const AddTagsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AddTags, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AddTags, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AddTagsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AddTagsOutcomeCallable EMRClient::AddTagsCallable(const AddTagsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddTagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddTags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClient::AddTagsAsync(const AddTagsRequest& request, const AddTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AddTags(request), context);
    } );
}

CancelStepsOutcome EMRClient::CancelSteps(const CancelStepsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CancelSteps, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CancelSteps, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CancelStepsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CancelStepsOutcomeCallable EMRClient::CancelStepsCallable(const CancelStepsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CancelStepsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CancelSteps(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClient::CancelStepsAsync(const CancelStepsRequest& request, const CancelStepsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CancelSteps(request), context);
    } );
}

CreateSecurityConfigurationOutcome EMRClient::CreateSecurityConfiguration(const CreateSecurityConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateSecurityConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateSecurityConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateSecurityConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateSecurityConfigurationOutcomeCallable EMRClient::CreateSecurityConfigurationCallable(const CreateSecurityConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateSecurityConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateSecurityConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClient::CreateSecurityConfigurationAsync(const CreateSecurityConfigurationRequest& request, const CreateSecurityConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateSecurityConfiguration(request), context);
    } );
}

CreateStudioOutcome EMRClient::CreateStudio(const CreateStudioRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateStudio, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateStudio, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateStudioOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateStudioOutcomeCallable EMRClient::CreateStudioCallable(const CreateStudioRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateStudioOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateStudio(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClient::CreateStudioAsync(const CreateStudioRequest& request, const CreateStudioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateStudio(request), context);
    } );
}

CreateStudioSessionMappingOutcome EMRClient::CreateStudioSessionMapping(const CreateStudioSessionMappingRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateStudioSessionMapping, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateStudioSessionMapping, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateStudioSessionMappingOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateStudioSessionMappingOutcomeCallable EMRClient::CreateStudioSessionMappingCallable(const CreateStudioSessionMappingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateStudioSessionMappingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateStudioSessionMapping(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClient::CreateStudioSessionMappingAsync(const CreateStudioSessionMappingRequest& request, const CreateStudioSessionMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateStudioSessionMapping(request), context);
    } );
}

DeleteSecurityConfigurationOutcome EMRClient::DeleteSecurityConfiguration(const DeleteSecurityConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteSecurityConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteSecurityConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteSecurityConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteSecurityConfigurationOutcomeCallable EMRClient::DeleteSecurityConfigurationCallable(const DeleteSecurityConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteSecurityConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteSecurityConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClient::DeleteSecurityConfigurationAsync(const DeleteSecurityConfigurationRequest& request, const DeleteSecurityConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteSecurityConfiguration(request), context);
    } );
}

DeleteStudioOutcome EMRClient::DeleteStudio(const DeleteStudioRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteStudio, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteStudio, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteStudioOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteStudioOutcomeCallable EMRClient::DeleteStudioCallable(const DeleteStudioRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteStudioOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteStudio(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClient::DeleteStudioAsync(const DeleteStudioRequest& request, const DeleteStudioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteStudio(request), context);
    } );
}

DeleteStudioSessionMappingOutcome EMRClient::DeleteStudioSessionMapping(const DeleteStudioSessionMappingRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteStudioSessionMapping, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteStudioSessionMapping, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteStudioSessionMappingOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteStudioSessionMappingOutcomeCallable EMRClient::DeleteStudioSessionMappingCallable(const DeleteStudioSessionMappingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteStudioSessionMappingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteStudioSessionMapping(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClient::DeleteStudioSessionMappingAsync(const DeleteStudioSessionMappingRequest& request, const DeleteStudioSessionMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteStudioSessionMapping(request), context);
    } );
}

DescribeClusterOutcome EMRClient::DescribeCluster(const DescribeClusterRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeCluster, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeCluster, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeClusterOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeClusterOutcomeCallable EMRClient::DescribeClusterCallable(const DescribeClusterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeClusterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeCluster(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClient::DescribeClusterAsync(const DescribeClusterRequest& request, const DescribeClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeCluster(request), context);
    } );
}

DescribeNotebookExecutionOutcome EMRClient::DescribeNotebookExecution(const DescribeNotebookExecutionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeNotebookExecution, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeNotebookExecution, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeNotebookExecutionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeNotebookExecutionOutcomeCallable EMRClient::DescribeNotebookExecutionCallable(const DescribeNotebookExecutionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeNotebookExecutionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeNotebookExecution(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClient::DescribeNotebookExecutionAsync(const DescribeNotebookExecutionRequest& request, const DescribeNotebookExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeNotebookExecution(request), context);
    } );
}

DescribeReleaseLabelOutcome EMRClient::DescribeReleaseLabel(const DescribeReleaseLabelRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeReleaseLabel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeReleaseLabel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeReleaseLabelOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeReleaseLabelOutcomeCallable EMRClient::DescribeReleaseLabelCallable(const DescribeReleaseLabelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeReleaseLabelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeReleaseLabel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClient::DescribeReleaseLabelAsync(const DescribeReleaseLabelRequest& request, const DescribeReleaseLabelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeReleaseLabel(request), context);
    } );
}

DescribeSecurityConfigurationOutcome EMRClient::DescribeSecurityConfiguration(const DescribeSecurityConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeSecurityConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeSecurityConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeSecurityConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeSecurityConfigurationOutcomeCallable EMRClient::DescribeSecurityConfigurationCallable(const DescribeSecurityConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeSecurityConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeSecurityConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClient::DescribeSecurityConfigurationAsync(const DescribeSecurityConfigurationRequest& request, const DescribeSecurityConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeSecurityConfiguration(request), context);
    } );
}

DescribeStepOutcome EMRClient::DescribeStep(const DescribeStepRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeStep, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeStep, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeStepOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeStepOutcomeCallable EMRClient::DescribeStepCallable(const DescribeStepRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeStepOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeStep(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClient::DescribeStepAsync(const DescribeStepRequest& request, const DescribeStepResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeStep(request), context);
    } );
}

DescribeStudioOutcome EMRClient::DescribeStudio(const DescribeStudioRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeStudio, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeStudio, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeStudioOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeStudioOutcomeCallable EMRClient::DescribeStudioCallable(const DescribeStudioRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeStudioOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeStudio(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClient::DescribeStudioAsync(const DescribeStudioRequest& request, const DescribeStudioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeStudio(request), context);
    } );
}

GetAutoTerminationPolicyOutcome EMRClient::GetAutoTerminationPolicy(const GetAutoTerminationPolicyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetAutoTerminationPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetAutoTerminationPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetAutoTerminationPolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetAutoTerminationPolicyOutcomeCallable EMRClient::GetAutoTerminationPolicyCallable(const GetAutoTerminationPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAutoTerminationPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAutoTerminationPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClient::GetAutoTerminationPolicyAsync(const GetAutoTerminationPolicyRequest& request, const GetAutoTerminationPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetAutoTerminationPolicy(request), context);
    } );
}

GetBlockPublicAccessConfigurationOutcome EMRClient::GetBlockPublicAccessConfiguration(const GetBlockPublicAccessConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBlockPublicAccessConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetBlockPublicAccessConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetBlockPublicAccessConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetBlockPublicAccessConfigurationOutcomeCallable EMRClient::GetBlockPublicAccessConfigurationCallable(const GetBlockPublicAccessConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetBlockPublicAccessConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetBlockPublicAccessConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClient::GetBlockPublicAccessConfigurationAsync(const GetBlockPublicAccessConfigurationRequest& request, const GetBlockPublicAccessConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetBlockPublicAccessConfiguration(request), context);
    } );
}

GetManagedScalingPolicyOutcome EMRClient::GetManagedScalingPolicy(const GetManagedScalingPolicyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetManagedScalingPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetManagedScalingPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetManagedScalingPolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetManagedScalingPolicyOutcomeCallable EMRClient::GetManagedScalingPolicyCallable(const GetManagedScalingPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetManagedScalingPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetManagedScalingPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClient::GetManagedScalingPolicyAsync(const GetManagedScalingPolicyRequest& request, const GetManagedScalingPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetManagedScalingPolicy(request), context);
    } );
}

GetStudioSessionMappingOutcome EMRClient::GetStudioSessionMapping(const GetStudioSessionMappingRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetStudioSessionMapping, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetStudioSessionMapping, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetStudioSessionMappingOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetStudioSessionMappingOutcomeCallable EMRClient::GetStudioSessionMappingCallable(const GetStudioSessionMappingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetStudioSessionMappingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetStudioSessionMapping(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClient::GetStudioSessionMappingAsync(const GetStudioSessionMappingRequest& request, const GetStudioSessionMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetStudioSessionMapping(request), context);
    } );
}

ListBootstrapActionsOutcome EMRClient::ListBootstrapActions(const ListBootstrapActionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListBootstrapActions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListBootstrapActions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListBootstrapActionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListBootstrapActionsOutcomeCallable EMRClient::ListBootstrapActionsCallable(const ListBootstrapActionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListBootstrapActionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListBootstrapActions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClient::ListBootstrapActionsAsync(const ListBootstrapActionsRequest& request, const ListBootstrapActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListBootstrapActions(request), context);
    } );
}

ListClustersOutcome EMRClient::ListClusters(const ListClustersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListClusters, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListClusters, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListClustersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListClustersOutcomeCallable EMRClient::ListClustersCallable(const ListClustersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListClustersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListClusters(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClient::ListClustersAsync(const ListClustersRequest& request, const ListClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListClusters(request), context);
    } );
}

ListInstanceFleetsOutcome EMRClient::ListInstanceFleets(const ListInstanceFleetsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListInstanceFleets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListInstanceFleets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListInstanceFleetsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListInstanceFleetsOutcomeCallable EMRClient::ListInstanceFleetsCallable(const ListInstanceFleetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListInstanceFleetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListInstanceFleets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClient::ListInstanceFleetsAsync(const ListInstanceFleetsRequest& request, const ListInstanceFleetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListInstanceFleets(request), context);
    } );
}

ListInstanceGroupsOutcome EMRClient::ListInstanceGroups(const ListInstanceGroupsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListInstanceGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListInstanceGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListInstanceGroupsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListInstanceGroupsOutcomeCallable EMRClient::ListInstanceGroupsCallable(const ListInstanceGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListInstanceGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListInstanceGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClient::ListInstanceGroupsAsync(const ListInstanceGroupsRequest& request, const ListInstanceGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListInstanceGroups(request), context);
    } );
}

ListInstancesOutcome EMRClient::ListInstances(const ListInstancesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListInstancesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListInstancesOutcomeCallable EMRClient::ListInstancesCallable(const ListInstancesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListInstancesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListInstances(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClient::ListInstancesAsync(const ListInstancesRequest& request, const ListInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListInstances(request), context);
    } );
}

ListNotebookExecutionsOutcome EMRClient::ListNotebookExecutions(const ListNotebookExecutionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListNotebookExecutions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListNotebookExecutions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListNotebookExecutionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListNotebookExecutionsOutcomeCallable EMRClient::ListNotebookExecutionsCallable(const ListNotebookExecutionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListNotebookExecutionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListNotebookExecutions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClient::ListNotebookExecutionsAsync(const ListNotebookExecutionsRequest& request, const ListNotebookExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListNotebookExecutions(request), context);
    } );
}

ListReleaseLabelsOutcome EMRClient::ListReleaseLabels(const ListReleaseLabelsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListReleaseLabels, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListReleaseLabels, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListReleaseLabelsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListReleaseLabelsOutcomeCallable EMRClient::ListReleaseLabelsCallable(const ListReleaseLabelsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListReleaseLabelsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListReleaseLabels(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClient::ListReleaseLabelsAsync(const ListReleaseLabelsRequest& request, const ListReleaseLabelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListReleaseLabels(request), context);
    } );
}

ListSecurityConfigurationsOutcome EMRClient::ListSecurityConfigurations(const ListSecurityConfigurationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListSecurityConfigurations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListSecurityConfigurations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListSecurityConfigurationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListSecurityConfigurationsOutcomeCallable EMRClient::ListSecurityConfigurationsCallable(const ListSecurityConfigurationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSecurityConfigurationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSecurityConfigurations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClient::ListSecurityConfigurationsAsync(const ListSecurityConfigurationsRequest& request, const ListSecurityConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListSecurityConfigurations(request), context);
    } );
}

ListStepsOutcome EMRClient::ListSteps(const ListStepsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListSteps, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListSteps, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListStepsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListStepsOutcomeCallable EMRClient::ListStepsCallable(const ListStepsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListStepsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSteps(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClient::ListStepsAsync(const ListStepsRequest& request, const ListStepsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListSteps(request), context);
    } );
}

ListStudioSessionMappingsOutcome EMRClient::ListStudioSessionMappings(const ListStudioSessionMappingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListStudioSessionMappings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListStudioSessionMappings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListStudioSessionMappingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListStudioSessionMappingsOutcomeCallable EMRClient::ListStudioSessionMappingsCallable(const ListStudioSessionMappingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListStudioSessionMappingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListStudioSessionMappings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClient::ListStudioSessionMappingsAsync(const ListStudioSessionMappingsRequest& request, const ListStudioSessionMappingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListStudioSessionMappings(request), context);
    } );
}

ListStudiosOutcome EMRClient::ListStudios(const ListStudiosRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListStudios, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListStudios, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListStudiosOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListStudiosOutcomeCallable EMRClient::ListStudiosCallable(const ListStudiosRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListStudiosOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListStudios(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClient::ListStudiosAsync(const ListStudiosRequest& request, const ListStudiosResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListStudios(request), context);
    } );
}

ModifyClusterOutcome EMRClient::ModifyCluster(const ModifyClusterRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyCluster, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyCluster, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyClusterOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ModifyClusterOutcomeCallable EMRClient::ModifyClusterCallable(const ModifyClusterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyClusterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyCluster(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClient::ModifyClusterAsync(const ModifyClusterRequest& request, const ModifyClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ModifyCluster(request), context);
    } );
}

ModifyInstanceFleetOutcome EMRClient::ModifyInstanceFleet(const ModifyInstanceFleetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyInstanceFleet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyInstanceFleet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyInstanceFleetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ModifyInstanceFleetOutcomeCallable EMRClient::ModifyInstanceFleetCallable(const ModifyInstanceFleetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyInstanceFleetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyInstanceFleet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClient::ModifyInstanceFleetAsync(const ModifyInstanceFleetRequest& request, const ModifyInstanceFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ModifyInstanceFleet(request), context);
    } );
}

ModifyInstanceGroupsOutcome EMRClient::ModifyInstanceGroups(const ModifyInstanceGroupsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyInstanceGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyInstanceGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyInstanceGroupsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ModifyInstanceGroupsOutcomeCallable EMRClient::ModifyInstanceGroupsCallable(const ModifyInstanceGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyInstanceGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyInstanceGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClient::ModifyInstanceGroupsAsync(const ModifyInstanceGroupsRequest& request, const ModifyInstanceGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ModifyInstanceGroups(request), context);
    } );
}

PutAutoScalingPolicyOutcome EMRClient::PutAutoScalingPolicy(const PutAutoScalingPolicyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutAutoScalingPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutAutoScalingPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return PutAutoScalingPolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutAutoScalingPolicyOutcomeCallable EMRClient::PutAutoScalingPolicyCallable(const PutAutoScalingPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutAutoScalingPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutAutoScalingPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClient::PutAutoScalingPolicyAsync(const PutAutoScalingPolicyRequest& request, const PutAutoScalingPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutAutoScalingPolicy(request), context);
    } );
}

PutAutoTerminationPolicyOutcome EMRClient::PutAutoTerminationPolicy(const PutAutoTerminationPolicyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutAutoTerminationPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutAutoTerminationPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return PutAutoTerminationPolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutAutoTerminationPolicyOutcomeCallable EMRClient::PutAutoTerminationPolicyCallable(const PutAutoTerminationPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutAutoTerminationPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutAutoTerminationPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClient::PutAutoTerminationPolicyAsync(const PutAutoTerminationPolicyRequest& request, const PutAutoTerminationPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutAutoTerminationPolicy(request), context);
    } );
}

PutBlockPublicAccessConfigurationOutcome EMRClient::PutBlockPublicAccessConfiguration(const PutBlockPublicAccessConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutBlockPublicAccessConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutBlockPublicAccessConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return PutBlockPublicAccessConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutBlockPublicAccessConfigurationOutcomeCallable EMRClient::PutBlockPublicAccessConfigurationCallable(const PutBlockPublicAccessConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutBlockPublicAccessConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutBlockPublicAccessConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClient::PutBlockPublicAccessConfigurationAsync(const PutBlockPublicAccessConfigurationRequest& request, const PutBlockPublicAccessConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutBlockPublicAccessConfiguration(request), context);
    } );
}

PutManagedScalingPolicyOutcome EMRClient::PutManagedScalingPolicy(const PutManagedScalingPolicyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutManagedScalingPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutManagedScalingPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return PutManagedScalingPolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutManagedScalingPolicyOutcomeCallable EMRClient::PutManagedScalingPolicyCallable(const PutManagedScalingPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutManagedScalingPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutManagedScalingPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClient::PutManagedScalingPolicyAsync(const PutManagedScalingPolicyRequest& request, const PutManagedScalingPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutManagedScalingPolicy(request), context);
    } );
}

RemoveAutoScalingPolicyOutcome EMRClient::RemoveAutoScalingPolicy(const RemoveAutoScalingPolicyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RemoveAutoScalingPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RemoveAutoScalingPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RemoveAutoScalingPolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RemoveAutoScalingPolicyOutcomeCallable EMRClient::RemoveAutoScalingPolicyCallable(const RemoveAutoScalingPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RemoveAutoScalingPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RemoveAutoScalingPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClient::RemoveAutoScalingPolicyAsync(const RemoveAutoScalingPolicyRequest& request, const RemoveAutoScalingPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RemoveAutoScalingPolicy(request), context);
    } );
}

RemoveAutoTerminationPolicyOutcome EMRClient::RemoveAutoTerminationPolicy(const RemoveAutoTerminationPolicyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RemoveAutoTerminationPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RemoveAutoTerminationPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RemoveAutoTerminationPolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RemoveAutoTerminationPolicyOutcomeCallable EMRClient::RemoveAutoTerminationPolicyCallable(const RemoveAutoTerminationPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RemoveAutoTerminationPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RemoveAutoTerminationPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClient::RemoveAutoTerminationPolicyAsync(const RemoveAutoTerminationPolicyRequest& request, const RemoveAutoTerminationPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RemoveAutoTerminationPolicy(request), context);
    } );
}

RemoveManagedScalingPolicyOutcome EMRClient::RemoveManagedScalingPolicy(const RemoveManagedScalingPolicyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RemoveManagedScalingPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RemoveManagedScalingPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RemoveManagedScalingPolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RemoveManagedScalingPolicyOutcomeCallable EMRClient::RemoveManagedScalingPolicyCallable(const RemoveManagedScalingPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RemoveManagedScalingPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RemoveManagedScalingPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClient::RemoveManagedScalingPolicyAsync(const RemoveManagedScalingPolicyRequest& request, const RemoveManagedScalingPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RemoveManagedScalingPolicy(request), context);
    } );
}

RemoveTagsOutcome EMRClient::RemoveTags(const RemoveTagsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RemoveTags, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RemoveTags, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RemoveTagsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RemoveTagsOutcomeCallable EMRClient::RemoveTagsCallable(const RemoveTagsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RemoveTagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RemoveTags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClient::RemoveTagsAsync(const RemoveTagsRequest& request, const RemoveTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RemoveTags(request), context);
    } );
}

RunJobFlowOutcome EMRClient::RunJobFlow(const RunJobFlowRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RunJobFlow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RunJobFlow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RunJobFlowOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RunJobFlowOutcomeCallable EMRClient::RunJobFlowCallable(const RunJobFlowRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RunJobFlowOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RunJobFlow(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClient::RunJobFlowAsync(const RunJobFlowRequest& request, const RunJobFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RunJobFlow(request), context);
    } );
}

SetTerminationProtectionOutcome EMRClient::SetTerminationProtection(const SetTerminationProtectionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SetTerminationProtection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SetTerminationProtection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return SetTerminationProtectionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SetTerminationProtectionOutcomeCallable EMRClient::SetTerminationProtectionCallable(const SetTerminationProtectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SetTerminationProtectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SetTerminationProtection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClient::SetTerminationProtectionAsync(const SetTerminationProtectionRequest& request, const SetTerminationProtectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, SetTerminationProtection(request), context);
    } );
}

SetVisibleToAllUsersOutcome EMRClient::SetVisibleToAllUsers(const SetVisibleToAllUsersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SetVisibleToAllUsers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SetVisibleToAllUsers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return SetVisibleToAllUsersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SetVisibleToAllUsersOutcomeCallable EMRClient::SetVisibleToAllUsersCallable(const SetVisibleToAllUsersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SetVisibleToAllUsersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SetVisibleToAllUsers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClient::SetVisibleToAllUsersAsync(const SetVisibleToAllUsersRequest& request, const SetVisibleToAllUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, SetVisibleToAllUsers(request), context);
    } );
}

StartNotebookExecutionOutcome EMRClient::StartNotebookExecution(const StartNotebookExecutionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartNotebookExecution, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartNotebookExecution, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return StartNotebookExecutionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartNotebookExecutionOutcomeCallable EMRClient::StartNotebookExecutionCallable(const StartNotebookExecutionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartNotebookExecutionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartNotebookExecution(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClient::StartNotebookExecutionAsync(const StartNotebookExecutionRequest& request, const StartNotebookExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StartNotebookExecution(request), context);
    } );
}

StopNotebookExecutionOutcome EMRClient::StopNotebookExecution(const StopNotebookExecutionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StopNotebookExecution, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StopNotebookExecution, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return StopNotebookExecutionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopNotebookExecutionOutcomeCallable EMRClient::StopNotebookExecutionCallable(const StopNotebookExecutionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopNotebookExecutionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopNotebookExecution(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClient::StopNotebookExecutionAsync(const StopNotebookExecutionRequest& request, const StopNotebookExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StopNotebookExecution(request), context);
    } );
}

TerminateJobFlowsOutcome EMRClient::TerminateJobFlows(const TerminateJobFlowsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TerminateJobFlows, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TerminateJobFlows, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return TerminateJobFlowsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TerminateJobFlowsOutcomeCallable EMRClient::TerminateJobFlowsCallable(const TerminateJobFlowsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TerminateJobFlowsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TerminateJobFlows(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClient::TerminateJobFlowsAsync(const TerminateJobFlowsRequest& request, const TerminateJobFlowsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, TerminateJobFlows(request), context);
    } );
}

UpdateStudioOutcome EMRClient::UpdateStudio(const UpdateStudioRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateStudio, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateStudio, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateStudioOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateStudioOutcomeCallable EMRClient::UpdateStudioCallable(const UpdateStudioRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateStudioOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateStudio(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClient::UpdateStudioAsync(const UpdateStudioRequest& request, const UpdateStudioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateStudio(request), context);
    } );
}

UpdateStudioSessionMappingOutcome EMRClient::UpdateStudioSessionMapping(const UpdateStudioSessionMappingRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateStudioSessionMapping, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateStudioSessionMapping, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateStudioSessionMappingOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateStudioSessionMappingOutcomeCallable EMRClient::UpdateStudioSessionMappingCallable(const UpdateStudioSessionMappingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateStudioSessionMappingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateStudioSessionMapping(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClient::UpdateStudioSessionMappingAsync(const UpdateStudioSessionMappingRequest& request, const UpdateStudioSessionMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateStudioSessionMapping(request), context);
    } );
}

