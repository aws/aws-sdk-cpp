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

#include <aws/opsworks/OpsWorksClient.h>
#include <aws/opsworks/OpsWorksErrorMarshaller.h>
#include <aws/opsworks/OpsWorksEndpointProvider.h>
#include <aws/opsworks/model/AssignInstanceRequest.h>
#include <aws/opsworks/model/AssignVolumeRequest.h>
#include <aws/opsworks/model/AssociateElasticIpRequest.h>
#include <aws/opsworks/model/AttachElasticLoadBalancerRequest.h>
#include <aws/opsworks/model/CloneStackRequest.h>
#include <aws/opsworks/model/CreateAppRequest.h>
#include <aws/opsworks/model/CreateDeploymentRequest.h>
#include <aws/opsworks/model/CreateInstanceRequest.h>
#include <aws/opsworks/model/CreateLayerRequest.h>
#include <aws/opsworks/model/CreateStackRequest.h>
#include <aws/opsworks/model/CreateUserProfileRequest.h>
#include <aws/opsworks/model/DeleteAppRequest.h>
#include <aws/opsworks/model/DeleteInstanceRequest.h>
#include <aws/opsworks/model/DeleteLayerRequest.h>
#include <aws/opsworks/model/DeleteStackRequest.h>
#include <aws/opsworks/model/DeleteUserProfileRequest.h>
#include <aws/opsworks/model/DeregisterEcsClusterRequest.h>
#include <aws/opsworks/model/DeregisterElasticIpRequest.h>
#include <aws/opsworks/model/DeregisterInstanceRequest.h>
#include <aws/opsworks/model/DeregisterRdsDbInstanceRequest.h>
#include <aws/opsworks/model/DeregisterVolumeRequest.h>
#include <aws/opsworks/model/DescribeAgentVersionsRequest.h>
#include <aws/opsworks/model/DescribeAppsRequest.h>
#include <aws/opsworks/model/DescribeCommandsRequest.h>
#include <aws/opsworks/model/DescribeDeploymentsRequest.h>
#include <aws/opsworks/model/DescribeEcsClustersRequest.h>
#include <aws/opsworks/model/DescribeElasticIpsRequest.h>
#include <aws/opsworks/model/DescribeElasticLoadBalancersRequest.h>
#include <aws/opsworks/model/DescribeInstancesRequest.h>
#include <aws/opsworks/model/DescribeLayersRequest.h>
#include <aws/opsworks/model/DescribeLoadBasedAutoScalingRequest.h>
#include <aws/opsworks/model/DescribePermissionsRequest.h>
#include <aws/opsworks/model/DescribeRaidArraysRequest.h>
#include <aws/opsworks/model/DescribeRdsDbInstancesRequest.h>
#include <aws/opsworks/model/DescribeServiceErrorsRequest.h>
#include <aws/opsworks/model/DescribeStackProvisioningParametersRequest.h>
#include <aws/opsworks/model/DescribeStackSummaryRequest.h>
#include <aws/opsworks/model/DescribeStacksRequest.h>
#include <aws/opsworks/model/DescribeTimeBasedAutoScalingRequest.h>
#include <aws/opsworks/model/DescribeUserProfilesRequest.h>
#include <aws/opsworks/model/DescribeVolumesRequest.h>
#include <aws/opsworks/model/DetachElasticLoadBalancerRequest.h>
#include <aws/opsworks/model/DisassociateElasticIpRequest.h>
#include <aws/opsworks/model/GetHostnameSuggestionRequest.h>
#include <aws/opsworks/model/GrantAccessRequest.h>
#include <aws/opsworks/model/ListTagsRequest.h>
#include <aws/opsworks/model/RebootInstanceRequest.h>
#include <aws/opsworks/model/RegisterEcsClusterRequest.h>
#include <aws/opsworks/model/RegisterElasticIpRequest.h>
#include <aws/opsworks/model/RegisterInstanceRequest.h>
#include <aws/opsworks/model/RegisterRdsDbInstanceRequest.h>
#include <aws/opsworks/model/RegisterVolumeRequest.h>
#include <aws/opsworks/model/SetLoadBasedAutoScalingRequest.h>
#include <aws/opsworks/model/SetPermissionRequest.h>
#include <aws/opsworks/model/SetTimeBasedAutoScalingRequest.h>
#include <aws/opsworks/model/StartInstanceRequest.h>
#include <aws/opsworks/model/StartStackRequest.h>
#include <aws/opsworks/model/StopInstanceRequest.h>
#include <aws/opsworks/model/StopStackRequest.h>
#include <aws/opsworks/model/TagResourceRequest.h>
#include <aws/opsworks/model/UnassignInstanceRequest.h>
#include <aws/opsworks/model/UnassignVolumeRequest.h>
#include <aws/opsworks/model/UntagResourceRequest.h>
#include <aws/opsworks/model/UpdateAppRequest.h>
#include <aws/opsworks/model/UpdateElasticIpRequest.h>
#include <aws/opsworks/model/UpdateInstanceRequest.h>
#include <aws/opsworks/model/UpdateLayerRequest.h>
#include <aws/opsworks/model/UpdateMyUserProfileRequest.h>
#include <aws/opsworks/model/UpdateRdsDbInstanceRequest.h>
#include <aws/opsworks/model/UpdateStackRequest.h>
#include <aws/opsworks/model/UpdateUserProfileRequest.h>
#include <aws/opsworks/model/UpdateVolumeRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::OpsWorks;
using namespace Aws::OpsWorks::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* OpsWorksClient::SERVICE_NAME = "opsworks";
const char* OpsWorksClient::ALLOCATION_TAG = "OpsWorksClient";

OpsWorksClient::OpsWorksClient(const OpsWorks::OpsWorksClientConfiguration& clientConfiguration,
                               std::shared_ptr<OpsWorksEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<OpsWorksErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

OpsWorksClient::OpsWorksClient(const AWSCredentials& credentials,
                               std::shared_ptr<OpsWorksEndpointProviderBase> endpointProvider,
                               const OpsWorks::OpsWorksClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<OpsWorksErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

OpsWorksClient::OpsWorksClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                               std::shared_ptr<OpsWorksEndpointProviderBase> endpointProvider,
                               const OpsWorks::OpsWorksClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<OpsWorksErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  OpsWorksClient::OpsWorksClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<OpsWorksErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<OpsWorksEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

OpsWorksClient::OpsWorksClient(const AWSCredentials& credentials,
                               const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<OpsWorksErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<OpsWorksEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

OpsWorksClient::OpsWorksClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                               const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<OpsWorksErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<OpsWorksEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
OpsWorksClient::~OpsWorksClient()
{
}

std::shared_ptr<OpsWorksEndpointProviderBase>& OpsWorksClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void OpsWorksClient::init(const OpsWorks::OpsWorksClientConfiguration& config)
{
  AWSClient::SetServiceClientName("OpsWorks");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void OpsWorksClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

AssignInstanceOutcome OpsWorksClient::AssignInstance(const AssignInstanceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssignInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssignInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AssignInstanceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AssignInstanceOutcomeCallable OpsWorksClient::AssignInstanceCallable(const AssignInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssignInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssignInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::AssignInstanceAsync(const AssignInstanceRequest& request, const AssignInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AssignInstance(request), context);
    } );
}

AssignVolumeOutcome OpsWorksClient::AssignVolume(const AssignVolumeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssignVolume, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssignVolume, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AssignVolumeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AssignVolumeOutcomeCallable OpsWorksClient::AssignVolumeCallable(const AssignVolumeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssignVolumeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssignVolume(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::AssignVolumeAsync(const AssignVolumeRequest& request, const AssignVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AssignVolume(request), context);
    } );
}

AssociateElasticIpOutcome OpsWorksClient::AssociateElasticIp(const AssociateElasticIpRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateElasticIp, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociateElasticIp, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AssociateElasticIpOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AssociateElasticIpOutcomeCallable OpsWorksClient::AssociateElasticIpCallable(const AssociateElasticIpRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateElasticIpOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateElasticIp(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::AssociateElasticIpAsync(const AssociateElasticIpRequest& request, const AssociateElasticIpResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AssociateElasticIp(request), context);
    } );
}

AttachElasticLoadBalancerOutcome OpsWorksClient::AttachElasticLoadBalancer(const AttachElasticLoadBalancerRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AttachElasticLoadBalancer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AttachElasticLoadBalancer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AttachElasticLoadBalancerOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AttachElasticLoadBalancerOutcomeCallable OpsWorksClient::AttachElasticLoadBalancerCallable(const AttachElasticLoadBalancerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AttachElasticLoadBalancerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AttachElasticLoadBalancer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::AttachElasticLoadBalancerAsync(const AttachElasticLoadBalancerRequest& request, const AttachElasticLoadBalancerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AttachElasticLoadBalancer(request), context);
    } );
}

CloneStackOutcome OpsWorksClient::CloneStack(const CloneStackRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CloneStack, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CloneStack, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CloneStackOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CloneStackOutcomeCallable OpsWorksClient::CloneStackCallable(const CloneStackRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CloneStackOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CloneStack(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::CloneStackAsync(const CloneStackRequest& request, const CloneStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CloneStack(request), context);
    } );
}

CreateAppOutcome OpsWorksClient::CreateApp(const CreateAppRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateApp, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateApp, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateAppOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateAppOutcomeCallable OpsWorksClient::CreateAppCallable(const CreateAppRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateAppOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateApp(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::CreateAppAsync(const CreateAppRequest& request, const CreateAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateApp(request), context);
    } );
}

CreateDeploymentOutcome OpsWorksClient::CreateDeployment(const CreateDeploymentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateDeployment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateDeployment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateDeploymentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDeploymentOutcomeCallable OpsWorksClient::CreateDeploymentCallable(const CreateDeploymentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDeploymentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDeployment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::CreateDeploymentAsync(const CreateDeploymentRequest& request, const CreateDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateDeployment(request), context);
    } );
}

CreateInstanceOutcome OpsWorksClient::CreateInstance(const CreateInstanceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateInstanceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateInstanceOutcomeCallable OpsWorksClient::CreateInstanceCallable(const CreateInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::CreateInstanceAsync(const CreateInstanceRequest& request, const CreateInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateInstance(request), context);
    } );
}

CreateLayerOutcome OpsWorksClient::CreateLayer(const CreateLayerRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateLayer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateLayer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateLayerOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateLayerOutcomeCallable OpsWorksClient::CreateLayerCallable(const CreateLayerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateLayerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateLayer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::CreateLayerAsync(const CreateLayerRequest& request, const CreateLayerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateLayer(request), context);
    } );
}

CreateStackOutcome OpsWorksClient::CreateStack(const CreateStackRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateStack, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateStack, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateStackOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateStackOutcomeCallable OpsWorksClient::CreateStackCallable(const CreateStackRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateStackOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateStack(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::CreateStackAsync(const CreateStackRequest& request, const CreateStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateStack(request), context);
    } );
}

CreateUserProfileOutcome OpsWorksClient::CreateUserProfile(const CreateUserProfileRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateUserProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateUserProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateUserProfileOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateUserProfileOutcomeCallable OpsWorksClient::CreateUserProfileCallable(const CreateUserProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateUserProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateUserProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::CreateUserProfileAsync(const CreateUserProfileRequest& request, const CreateUserProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateUserProfile(request), context);
    } );
}

DeleteAppOutcome OpsWorksClient::DeleteApp(const DeleteAppRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteApp, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteApp, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteAppOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteAppOutcomeCallable OpsWorksClient::DeleteAppCallable(const DeleteAppRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAppOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteApp(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::DeleteAppAsync(const DeleteAppRequest& request, const DeleteAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteApp(request), context);
    } );
}

DeleteInstanceOutcome OpsWorksClient::DeleteInstance(const DeleteInstanceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteInstanceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteInstanceOutcomeCallable OpsWorksClient::DeleteInstanceCallable(const DeleteInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::DeleteInstanceAsync(const DeleteInstanceRequest& request, const DeleteInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteInstance(request), context);
    } );
}

DeleteLayerOutcome OpsWorksClient::DeleteLayer(const DeleteLayerRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteLayer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteLayer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteLayerOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteLayerOutcomeCallable OpsWorksClient::DeleteLayerCallable(const DeleteLayerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteLayerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteLayer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::DeleteLayerAsync(const DeleteLayerRequest& request, const DeleteLayerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteLayer(request), context);
    } );
}

DeleteStackOutcome OpsWorksClient::DeleteStack(const DeleteStackRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteStack, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteStack, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteStackOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteStackOutcomeCallable OpsWorksClient::DeleteStackCallable(const DeleteStackRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteStackOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteStack(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::DeleteStackAsync(const DeleteStackRequest& request, const DeleteStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteStack(request), context);
    } );
}

DeleteUserProfileOutcome OpsWorksClient::DeleteUserProfile(const DeleteUserProfileRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteUserProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteUserProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteUserProfileOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteUserProfileOutcomeCallable OpsWorksClient::DeleteUserProfileCallable(const DeleteUserProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteUserProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteUserProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::DeleteUserProfileAsync(const DeleteUserProfileRequest& request, const DeleteUserProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteUserProfile(request), context);
    } );
}

DeregisterEcsClusterOutcome OpsWorksClient::DeregisterEcsCluster(const DeregisterEcsClusterRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeregisterEcsCluster, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeregisterEcsCluster, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeregisterEcsClusterOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeregisterEcsClusterOutcomeCallable OpsWorksClient::DeregisterEcsClusterCallable(const DeregisterEcsClusterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeregisterEcsClusterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeregisterEcsCluster(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::DeregisterEcsClusterAsync(const DeregisterEcsClusterRequest& request, const DeregisterEcsClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeregisterEcsCluster(request), context);
    } );
}

DeregisterElasticIpOutcome OpsWorksClient::DeregisterElasticIp(const DeregisterElasticIpRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeregisterElasticIp, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeregisterElasticIp, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeregisterElasticIpOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeregisterElasticIpOutcomeCallable OpsWorksClient::DeregisterElasticIpCallable(const DeregisterElasticIpRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeregisterElasticIpOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeregisterElasticIp(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::DeregisterElasticIpAsync(const DeregisterElasticIpRequest& request, const DeregisterElasticIpResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeregisterElasticIp(request), context);
    } );
}

DeregisterInstanceOutcome OpsWorksClient::DeregisterInstance(const DeregisterInstanceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeregisterInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeregisterInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeregisterInstanceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeregisterInstanceOutcomeCallable OpsWorksClient::DeregisterInstanceCallable(const DeregisterInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeregisterInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeregisterInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::DeregisterInstanceAsync(const DeregisterInstanceRequest& request, const DeregisterInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeregisterInstance(request), context);
    } );
}

DeregisterRdsDbInstanceOutcome OpsWorksClient::DeregisterRdsDbInstance(const DeregisterRdsDbInstanceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeregisterRdsDbInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeregisterRdsDbInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeregisterRdsDbInstanceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeregisterRdsDbInstanceOutcomeCallable OpsWorksClient::DeregisterRdsDbInstanceCallable(const DeregisterRdsDbInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeregisterRdsDbInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeregisterRdsDbInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::DeregisterRdsDbInstanceAsync(const DeregisterRdsDbInstanceRequest& request, const DeregisterRdsDbInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeregisterRdsDbInstance(request), context);
    } );
}

DeregisterVolumeOutcome OpsWorksClient::DeregisterVolume(const DeregisterVolumeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeregisterVolume, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeregisterVolume, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeregisterVolumeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeregisterVolumeOutcomeCallable OpsWorksClient::DeregisterVolumeCallable(const DeregisterVolumeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeregisterVolumeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeregisterVolume(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::DeregisterVolumeAsync(const DeregisterVolumeRequest& request, const DeregisterVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeregisterVolume(request), context);
    } );
}

DescribeAgentVersionsOutcome OpsWorksClient::DescribeAgentVersions(const DescribeAgentVersionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeAgentVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeAgentVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeAgentVersionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeAgentVersionsOutcomeCallable OpsWorksClient::DescribeAgentVersionsCallable(const DescribeAgentVersionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAgentVersionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAgentVersions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::DescribeAgentVersionsAsync(const DescribeAgentVersionsRequest& request, const DescribeAgentVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeAgentVersions(request), context);
    } );
}

DescribeAppsOutcome OpsWorksClient::DescribeApps(const DescribeAppsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeApps, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeApps, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeAppsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeAppsOutcomeCallable OpsWorksClient::DescribeAppsCallable(const DescribeAppsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAppsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeApps(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::DescribeAppsAsync(const DescribeAppsRequest& request, const DescribeAppsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeApps(request), context);
    } );
}

DescribeCommandsOutcome OpsWorksClient::DescribeCommands(const DescribeCommandsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeCommands, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeCommands, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeCommandsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeCommandsOutcomeCallable OpsWorksClient::DescribeCommandsCallable(const DescribeCommandsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeCommandsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeCommands(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::DescribeCommandsAsync(const DescribeCommandsRequest& request, const DescribeCommandsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeCommands(request), context);
    } );
}

DescribeDeploymentsOutcome OpsWorksClient::DescribeDeployments(const DescribeDeploymentsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeDeployments, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeDeployments, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeDeploymentsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeDeploymentsOutcomeCallable OpsWorksClient::DescribeDeploymentsCallable(const DescribeDeploymentsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDeploymentsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDeployments(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::DescribeDeploymentsAsync(const DescribeDeploymentsRequest& request, const DescribeDeploymentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeDeployments(request), context);
    } );
}

DescribeEcsClustersOutcome OpsWorksClient::DescribeEcsClusters(const DescribeEcsClustersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeEcsClusters, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeEcsClusters, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeEcsClustersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeEcsClustersOutcomeCallable OpsWorksClient::DescribeEcsClustersCallable(const DescribeEcsClustersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEcsClustersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEcsClusters(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::DescribeEcsClustersAsync(const DescribeEcsClustersRequest& request, const DescribeEcsClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeEcsClusters(request), context);
    } );
}

DescribeElasticIpsOutcome OpsWorksClient::DescribeElasticIps(const DescribeElasticIpsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeElasticIps, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeElasticIps, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeElasticIpsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeElasticIpsOutcomeCallable OpsWorksClient::DescribeElasticIpsCallable(const DescribeElasticIpsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeElasticIpsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeElasticIps(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::DescribeElasticIpsAsync(const DescribeElasticIpsRequest& request, const DescribeElasticIpsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeElasticIps(request), context);
    } );
}

DescribeElasticLoadBalancersOutcome OpsWorksClient::DescribeElasticLoadBalancers(const DescribeElasticLoadBalancersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeElasticLoadBalancers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeElasticLoadBalancers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeElasticLoadBalancersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeElasticLoadBalancersOutcomeCallable OpsWorksClient::DescribeElasticLoadBalancersCallable(const DescribeElasticLoadBalancersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeElasticLoadBalancersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeElasticLoadBalancers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::DescribeElasticLoadBalancersAsync(const DescribeElasticLoadBalancersRequest& request, const DescribeElasticLoadBalancersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeElasticLoadBalancers(request), context);
    } );
}

DescribeInstancesOutcome OpsWorksClient::DescribeInstances(const DescribeInstancesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeInstancesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeInstancesOutcomeCallable OpsWorksClient::DescribeInstancesCallable(const DescribeInstancesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeInstancesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeInstances(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::DescribeInstancesAsync(const DescribeInstancesRequest& request, const DescribeInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeInstances(request), context);
    } );
}

DescribeLayersOutcome OpsWorksClient::DescribeLayers(const DescribeLayersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeLayers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeLayers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeLayersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeLayersOutcomeCallable OpsWorksClient::DescribeLayersCallable(const DescribeLayersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeLayersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeLayers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::DescribeLayersAsync(const DescribeLayersRequest& request, const DescribeLayersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeLayers(request), context);
    } );
}

DescribeLoadBasedAutoScalingOutcome OpsWorksClient::DescribeLoadBasedAutoScaling(const DescribeLoadBasedAutoScalingRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeLoadBasedAutoScaling, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeLoadBasedAutoScaling, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeLoadBasedAutoScalingOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeLoadBasedAutoScalingOutcomeCallable OpsWorksClient::DescribeLoadBasedAutoScalingCallable(const DescribeLoadBasedAutoScalingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeLoadBasedAutoScalingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeLoadBasedAutoScaling(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::DescribeLoadBasedAutoScalingAsync(const DescribeLoadBasedAutoScalingRequest& request, const DescribeLoadBasedAutoScalingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeLoadBasedAutoScaling(request), context);
    } );
}

DescribeMyUserProfileOutcome OpsWorksClient::DescribeMyUserProfile() const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeMyUserProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  static const Aws::Vector<Aws::Endpoint::EndpointParameter> staticEndpointParameters;
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(staticEndpointParameters);
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeMyUserProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeMyUserProfileOutcome(MakeRequest(endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER, "DescribeMyUserProfile"));
}

DescribeMyUserProfileOutcomeCallable OpsWorksClient::DescribeMyUserProfileCallable() const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeMyUserProfileOutcome() > >(ALLOCATION_TAG, [this](){ return this->DescribeMyUserProfile(); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::DescribeMyUserProfileAsync(const DescribeMyUserProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, handler, context]()
    {
      handler(this, DescribeMyUserProfile(), context);
    } );
}

DescribeOperatingSystemsOutcome OpsWorksClient::DescribeOperatingSystems() const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeOperatingSystems, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  static const Aws::Vector<Aws::Endpoint::EndpointParameter> staticEndpointParameters;
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(staticEndpointParameters);
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeOperatingSystems, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeOperatingSystemsOutcome(MakeRequest(endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER, "DescribeOperatingSystems"));
}

DescribeOperatingSystemsOutcomeCallable OpsWorksClient::DescribeOperatingSystemsCallable() const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeOperatingSystemsOutcome() > >(ALLOCATION_TAG, [this](){ return this->DescribeOperatingSystems(); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::DescribeOperatingSystemsAsync(const DescribeOperatingSystemsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, handler, context]()
    {
      handler(this, DescribeOperatingSystems(), context);
    } );
}

DescribePermissionsOutcome OpsWorksClient::DescribePermissions(const DescribePermissionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribePermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribePermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribePermissionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribePermissionsOutcomeCallable OpsWorksClient::DescribePermissionsCallable(const DescribePermissionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribePermissionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribePermissions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::DescribePermissionsAsync(const DescribePermissionsRequest& request, const DescribePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribePermissions(request), context);
    } );
}

DescribeRaidArraysOutcome OpsWorksClient::DescribeRaidArrays(const DescribeRaidArraysRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeRaidArrays, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeRaidArrays, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeRaidArraysOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeRaidArraysOutcomeCallable OpsWorksClient::DescribeRaidArraysCallable(const DescribeRaidArraysRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeRaidArraysOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeRaidArrays(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::DescribeRaidArraysAsync(const DescribeRaidArraysRequest& request, const DescribeRaidArraysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeRaidArrays(request), context);
    } );
}

DescribeRdsDbInstancesOutcome OpsWorksClient::DescribeRdsDbInstances(const DescribeRdsDbInstancesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeRdsDbInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeRdsDbInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeRdsDbInstancesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeRdsDbInstancesOutcomeCallable OpsWorksClient::DescribeRdsDbInstancesCallable(const DescribeRdsDbInstancesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeRdsDbInstancesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeRdsDbInstances(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::DescribeRdsDbInstancesAsync(const DescribeRdsDbInstancesRequest& request, const DescribeRdsDbInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeRdsDbInstances(request), context);
    } );
}

DescribeServiceErrorsOutcome OpsWorksClient::DescribeServiceErrors(const DescribeServiceErrorsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeServiceErrors, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeServiceErrors, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeServiceErrorsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeServiceErrorsOutcomeCallable OpsWorksClient::DescribeServiceErrorsCallable(const DescribeServiceErrorsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeServiceErrorsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeServiceErrors(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::DescribeServiceErrorsAsync(const DescribeServiceErrorsRequest& request, const DescribeServiceErrorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeServiceErrors(request), context);
    } );
}

DescribeStackProvisioningParametersOutcome OpsWorksClient::DescribeStackProvisioningParameters(const DescribeStackProvisioningParametersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeStackProvisioningParameters, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeStackProvisioningParameters, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeStackProvisioningParametersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeStackProvisioningParametersOutcomeCallable OpsWorksClient::DescribeStackProvisioningParametersCallable(const DescribeStackProvisioningParametersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeStackProvisioningParametersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeStackProvisioningParameters(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::DescribeStackProvisioningParametersAsync(const DescribeStackProvisioningParametersRequest& request, const DescribeStackProvisioningParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeStackProvisioningParameters(request), context);
    } );
}

DescribeStackSummaryOutcome OpsWorksClient::DescribeStackSummary(const DescribeStackSummaryRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeStackSummary, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeStackSummary, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeStackSummaryOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeStackSummaryOutcomeCallable OpsWorksClient::DescribeStackSummaryCallable(const DescribeStackSummaryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeStackSummaryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeStackSummary(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::DescribeStackSummaryAsync(const DescribeStackSummaryRequest& request, const DescribeStackSummaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeStackSummary(request), context);
    } );
}

DescribeStacksOutcome OpsWorksClient::DescribeStacks(const DescribeStacksRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeStacks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeStacks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeStacksOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeStacksOutcomeCallable OpsWorksClient::DescribeStacksCallable(const DescribeStacksRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeStacksOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeStacks(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::DescribeStacksAsync(const DescribeStacksRequest& request, const DescribeStacksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeStacks(request), context);
    } );
}

DescribeTimeBasedAutoScalingOutcome OpsWorksClient::DescribeTimeBasedAutoScaling(const DescribeTimeBasedAutoScalingRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeTimeBasedAutoScaling, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeTimeBasedAutoScaling, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeTimeBasedAutoScalingOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeTimeBasedAutoScalingOutcomeCallable OpsWorksClient::DescribeTimeBasedAutoScalingCallable(const DescribeTimeBasedAutoScalingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeTimeBasedAutoScalingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeTimeBasedAutoScaling(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::DescribeTimeBasedAutoScalingAsync(const DescribeTimeBasedAutoScalingRequest& request, const DescribeTimeBasedAutoScalingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeTimeBasedAutoScaling(request), context);
    } );
}

DescribeUserProfilesOutcome OpsWorksClient::DescribeUserProfiles(const DescribeUserProfilesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeUserProfiles, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeUserProfiles, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeUserProfilesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeUserProfilesOutcomeCallable OpsWorksClient::DescribeUserProfilesCallable(const DescribeUserProfilesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeUserProfilesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeUserProfiles(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::DescribeUserProfilesAsync(const DescribeUserProfilesRequest& request, const DescribeUserProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeUserProfiles(request), context);
    } );
}

DescribeVolumesOutcome OpsWorksClient::DescribeVolumes(const DescribeVolumesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeVolumes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeVolumes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeVolumesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeVolumesOutcomeCallable OpsWorksClient::DescribeVolumesCallable(const DescribeVolumesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeVolumesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeVolumes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::DescribeVolumesAsync(const DescribeVolumesRequest& request, const DescribeVolumesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeVolumes(request), context);
    } );
}

DetachElasticLoadBalancerOutcome OpsWorksClient::DetachElasticLoadBalancer(const DetachElasticLoadBalancerRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DetachElasticLoadBalancer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DetachElasticLoadBalancer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DetachElasticLoadBalancerOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DetachElasticLoadBalancerOutcomeCallable OpsWorksClient::DetachElasticLoadBalancerCallable(const DetachElasticLoadBalancerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DetachElasticLoadBalancerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DetachElasticLoadBalancer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::DetachElasticLoadBalancerAsync(const DetachElasticLoadBalancerRequest& request, const DetachElasticLoadBalancerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DetachElasticLoadBalancer(request), context);
    } );
}

DisassociateElasticIpOutcome OpsWorksClient::DisassociateElasticIp(const DisassociateElasticIpRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociateElasticIp, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisassociateElasticIp, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DisassociateElasticIpOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisassociateElasticIpOutcomeCallable OpsWorksClient::DisassociateElasticIpCallable(const DisassociateElasticIpRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateElasticIpOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateElasticIp(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::DisassociateElasticIpAsync(const DisassociateElasticIpRequest& request, const DisassociateElasticIpResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DisassociateElasticIp(request), context);
    } );
}

GetHostnameSuggestionOutcome OpsWorksClient::GetHostnameSuggestion(const GetHostnameSuggestionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetHostnameSuggestion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetHostnameSuggestion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetHostnameSuggestionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetHostnameSuggestionOutcomeCallable OpsWorksClient::GetHostnameSuggestionCallable(const GetHostnameSuggestionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetHostnameSuggestionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetHostnameSuggestion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::GetHostnameSuggestionAsync(const GetHostnameSuggestionRequest& request, const GetHostnameSuggestionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetHostnameSuggestion(request), context);
    } );
}

GrantAccessOutcome OpsWorksClient::GrantAccess(const GrantAccessRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GrantAccess, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GrantAccess, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GrantAccessOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GrantAccessOutcomeCallable OpsWorksClient::GrantAccessCallable(const GrantAccessRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GrantAccessOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GrantAccess(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::GrantAccessAsync(const GrantAccessRequest& request, const GrantAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GrantAccess(request), context);
    } );
}

ListTagsOutcome OpsWorksClient::ListTags(const ListTagsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTags, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTags, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListTagsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTagsOutcomeCallable OpsWorksClient::ListTagsCallable(const ListTagsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::ListTagsAsync(const ListTagsRequest& request, const ListTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTags(request), context);
    } );
}

RebootInstanceOutcome OpsWorksClient::RebootInstance(const RebootInstanceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RebootInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RebootInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RebootInstanceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RebootInstanceOutcomeCallable OpsWorksClient::RebootInstanceCallable(const RebootInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RebootInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RebootInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::RebootInstanceAsync(const RebootInstanceRequest& request, const RebootInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RebootInstance(request), context);
    } );
}

RegisterEcsClusterOutcome OpsWorksClient::RegisterEcsCluster(const RegisterEcsClusterRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RegisterEcsCluster, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RegisterEcsCluster, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RegisterEcsClusterOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RegisterEcsClusterOutcomeCallable OpsWorksClient::RegisterEcsClusterCallable(const RegisterEcsClusterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RegisterEcsClusterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RegisterEcsCluster(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::RegisterEcsClusterAsync(const RegisterEcsClusterRequest& request, const RegisterEcsClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RegisterEcsCluster(request), context);
    } );
}

RegisterElasticIpOutcome OpsWorksClient::RegisterElasticIp(const RegisterElasticIpRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RegisterElasticIp, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RegisterElasticIp, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RegisterElasticIpOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RegisterElasticIpOutcomeCallable OpsWorksClient::RegisterElasticIpCallable(const RegisterElasticIpRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RegisterElasticIpOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RegisterElasticIp(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::RegisterElasticIpAsync(const RegisterElasticIpRequest& request, const RegisterElasticIpResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RegisterElasticIp(request), context);
    } );
}

RegisterInstanceOutcome OpsWorksClient::RegisterInstance(const RegisterInstanceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RegisterInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RegisterInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RegisterInstanceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RegisterInstanceOutcomeCallable OpsWorksClient::RegisterInstanceCallable(const RegisterInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RegisterInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RegisterInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::RegisterInstanceAsync(const RegisterInstanceRequest& request, const RegisterInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RegisterInstance(request), context);
    } );
}

RegisterRdsDbInstanceOutcome OpsWorksClient::RegisterRdsDbInstance(const RegisterRdsDbInstanceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RegisterRdsDbInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RegisterRdsDbInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RegisterRdsDbInstanceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RegisterRdsDbInstanceOutcomeCallable OpsWorksClient::RegisterRdsDbInstanceCallable(const RegisterRdsDbInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RegisterRdsDbInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RegisterRdsDbInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::RegisterRdsDbInstanceAsync(const RegisterRdsDbInstanceRequest& request, const RegisterRdsDbInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RegisterRdsDbInstance(request), context);
    } );
}

RegisterVolumeOutcome OpsWorksClient::RegisterVolume(const RegisterVolumeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RegisterVolume, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RegisterVolume, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RegisterVolumeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RegisterVolumeOutcomeCallable OpsWorksClient::RegisterVolumeCallable(const RegisterVolumeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RegisterVolumeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RegisterVolume(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::RegisterVolumeAsync(const RegisterVolumeRequest& request, const RegisterVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RegisterVolume(request), context);
    } );
}

SetLoadBasedAutoScalingOutcome OpsWorksClient::SetLoadBasedAutoScaling(const SetLoadBasedAutoScalingRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SetLoadBasedAutoScaling, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SetLoadBasedAutoScaling, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return SetLoadBasedAutoScalingOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SetLoadBasedAutoScalingOutcomeCallable OpsWorksClient::SetLoadBasedAutoScalingCallable(const SetLoadBasedAutoScalingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SetLoadBasedAutoScalingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SetLoadBasedAutoScaling(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::SetLoadBasedAutoScalingAsync(const SetLoadBasedAutoScalingRequest& request, const SetLoadBasedAutoScalingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, SetLoadBasedAutoScaling(request), context);
    } );
}

SetPermissionOutcome OpsWorksClient::SetPermission(const SetPermissionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SetPermission, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SetPermission, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return SetPermissionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SetPermissionOutcomeCallable OpsWorksClient::SetPermissionCallable(const SetPermissionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SetPermissionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SetPermission(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::SetPermissionAsync(const SetPermissionRequest& request, const SetPermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, SetPermission(request), context);
    } );
}

SetTimeBasedAutoScalingOutcome OpsWorksClient::SetTimeBasedAutoScaling(const SetTimeBasedAutoScalingRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SetTimeBasedAutoScaling, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SetTimeBasedAutoScaling, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return SetTimeBasedAutoScalingOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SetTimeBasedAutoScalingOutcomeCallable OpsWorksClient::SetTimeBasedAutoScalingCallable(const SetTimeBasedAutoScalingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SetTimeBasedAutoScalingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SetTimeBasedAutoScaling(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::SetTimeBasedAutoScalingAsync(const SetTimeBasedAutoScalingRequest& request, const SetTimeBasedAutoScalingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, SetTimeBasedAutoScaling(request), context);
    } );
}

StartInstanceOutcome OpsWorksClient::StartInstance(const StartInstanceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return StartInstanceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartInstanceOutcomeCallable OpsWorksClient::StartInstanceCallable(const StartInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::StartInstanceAsync(const StartInstanceRequest& request, const StartInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StartInstance(request), context);
    } );
}

StartStackOutcome OpsWorksClient::StartStack(const StartStackRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartStack, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartStack, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return StartStackOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartStackOutcomeCallable OpsWorksClient::StartStackCallable(const StartStackRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartStackOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartStack(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::StartStackAsync(const StartStackRequest& request, const StartStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StartStack(request), context);
    } );
}

StopInstanceOutcome OpsWorksClient::StopInstance(const StopInstanceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StopInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StopInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return StopInstanceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopInstanceOutcomeCallable OpsWorksClient::StopInstanceCallable(const StopInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::StopInstanceAsync(const StopInstanceRequest& request, const StopInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StopInstance(request), context);
    } );
}

StopStackOutcome OpsWorksClient::StopStack(const StopStackRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StopStack, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StopStack, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return StopStackOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopStackOutcomeCallable OpsWorksClient::StopStackCallable(const StopStackRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopStackOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopStack(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::StopStackAsync(const StopStackRequest& request, const StopStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StopStack(request), context);
    } );
}

TagResourceOutcome OpsWorksClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return TagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable OpsWorksClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, TagResource(request), context);
    } );
}

UnassignInstanceOutcome OpsWorksClient::UnassignInstance(const UnassignInstanceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UnassignInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UnassignInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UnassignInstanceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UnassignInstanceOutcomeCallable OpsWorksClient::UnassignInstanceCallable(const UnassignInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UnassignInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UnassignInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::UnassignInstanceAsync(const UnassignInstanceRequest& request, const UnassignInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UnassignInstance(request), context);
    } );
}

UnassignVolumeOutcome OpsWorksClient::UnassignVolume(const UnassignVolumeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UnassignVolume, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UnassignVolume, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UnassignVolumeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UnassignVolumeOutcomeCallable OpsWorksClient::UnassignVolumeCallable(const UnassignVolumeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UnassignVolumeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UnassignVolume(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::UnassignVolumeAsync(const UnassignVolumeRequest& request, const UnassignVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UnassignVolume(request), context);
    } );
}

UntagResourceOutcome OpsWorksClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UntagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable OpsWorksClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UntagResource(request), context);
    } );
}

UpdateAppOutcome OpsWorksClient::UpdateApp(const UpdateAppRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateApp, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateApp, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateAppOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateAppOutcomeCallable OpsWorksClient::UpdateAppCallable(const UpdateAppRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateAppOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateApp(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::UpdateAppAsync(const UpdateAppRequest& request, const UpdateAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateApp(request), context);
    } );
}

UpdateElasticIpOutcome OpsWorksClient::UpdateElasticIp(const UpdateElasticIpRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateElasticIp, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateElasticIp, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateElasticIpOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateElasticIpOutcomeCallable OpsWorksClient::UpdateElasticIpCallable(const UpdateElasticIpRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateElasticIpOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateElasticIp(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::UpdateElasticIpAsync(const UpdateElasticIpRequest& request, const UpdateElasticIpResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateElasticIp(request), context);
    } );
}

UpdateInstanceOutcome OpsWorksClient::UpdateInstance(const UpdateInstanceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateInstanceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateInstanceOutcomeCallable OpsWorksClient::UpdateInstanceCallable(const UpdateInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::UpdateInstanceAsync(const UpdateInstanceRequest& request, const UpdateInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateInstance(request), context);
    } );
}

UpdateLayerOutcome OpsWorksClient::UpdateLayer(const UpdateLayerRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateLayer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateLayer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateLayerOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateLayerOutcomeCallable OpsWorksClient::UpdateLayerCallable(const UpdateLayerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateLayerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateLayer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::UpdateLayerAsync(const UpdateLayerRequest& request, const UpdateLayerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateLayer(request), context);
    } );
}

UpdateMyUserProfileOutcome OpsWorksClient::UpdateMyUserProfile(const UpdateMyUserProfileRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateMyUserProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateMyUserProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateMyUserProfileOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateMyUserProfileOutcomeCallable OpsWorksClient::UpdateMyUserProfileCallable(const UpdateMyUserProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateMyUserProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateMyUserProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::UpdateMyUserProfileAsync(const UpdateMyUserProfileRequest& request, const UpdateMyUserProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateMyUserProfile(request), context);
    } );
}

UpdateRdsDbInstanceOutcome OpsWorksClient::UpdateRdsDbInstance(const UpdateRdsDbInstanceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateRdsDbInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateRdsDbInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateRdsDbInstanceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateRdsDbInstanceOutcomeCallable OpsWorksClient::UpdateRdsDbInstanceCallable(const UpdateRdsDbInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateRdsDbInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateRdsDbInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::UpdateRdsDbInstanceAsync(const UpdateRdsDbInstanceRequest& request, const UpdateRdsDbInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateRdsDbInstance(request), context);
    } );
}

UpdateStackOutcome OpsWorksClient::UpdateStack(const UpdateStackRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateStack, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateStack, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateStackOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateStackOutcomeCallable OpsWorksClient::UpdateStackCallable(const UpdateStackRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateStackOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateStack(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::UpdateStackAsync(const UpdateStackRequest& request, const UpdateStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateStack(request), context);
    } );
}

UpdateUserProfileOutcome OpsWorksClient::UpdateUserProfile(const UpdateUserProfileRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateUserProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateUserProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateUserProfileOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateUserProfileOutcomeCallable OpsWorksClient::UpdateUserProfileCallable(const UpdateUserProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateUserProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateUserProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::UpdateUserProfileAsync(const UpdateUserProfileRequest& request, const UpdateUserProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateUserProfile(request), context);
    } );
}

UpdateVolumeOutcome OpsWorksClient::UpdateVolume(const UpdateVolumeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateVolume, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateVolume, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateVolumeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateVolumeOutcomeCallable OpsWorksClient::UpdateVolumeCallable(const UpdateVolumeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateVolumeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateVolume(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::UpdateVolumeAsync(const UpdateVolumeRequest& request, const UpdateVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateVolume(request), context);
    } );
}

