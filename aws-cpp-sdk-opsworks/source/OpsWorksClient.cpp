/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
#include <aws/opsworks/OpsWorksClient.h>
#include <aws/opsworks/OpsWorksEndpoint.h>
#include <aws/opsworks/OpsWorksErrorMarshaller.h>
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
#include <aws/opsworks/model/UnassignInstanceRequest.h>
#include <aws/opsworks/model/UnassignVolumeRequest.h>
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

static const char* SERVICE_NAME = "opsworks";
static const char* ALLOCATION_TAG = "OpsWorksClient";

OpsWorksClient::OpsWorksClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(Aws::MakeShared<HttpClientFactory>(ALLOCATION_TAG), clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.authenticationRegion.empty() ? RegionMapper::GetRegionName(clientConfiguration.region) : clientConfiguration.authenticationRegion),
    Aws::MakeShared<OpsWorksErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

OpsWorksClient::OpsWorksClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(Aws::MakeShared<HttpClientFactory>(ALLOCATION_TAG), clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.authenticationRegion.empty() ? RegionMapper::GetRegionName(clientConfiguration.region) : clientConfiguration.authenticationRegion),
    Aws::MakeShared<OpsWorksErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

OpsWorksClient::OpsWorksClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration, const std::shared_ptr<HttpClientFactory const>& httpClientFactory) :
  BASECLASS(httpClientFactory != nullptr ? httpClientFactory : Aws::MakeShared<HttpClientFactory>(ALLOCATION_TAG), clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.authenticationRegion.empty() ? RegionMapper::GetRegionName(clientConfiguration.region) : clientConfiguration.authenticationRegion),
    Aws::MakeShared<OpsWorksErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

OpsWorksClient::~OpsWorksClient()
{
}

void OpsWorksClient::init(const ClientConfiguration& config)
{
  Aws::StringStream ss;
  ss << SchemeMapper::ToString(config.scheme) << "://";

  if(config.endpointOverride.empty() && config.authenticationRegion.empty())
  {
    ss << OpsWorksEndpoint::ForRegion(config.region);
  }
  else
  {
    ss << config.endpointOverride;
  }

  m_uri = ss.str();
}
AssignInstanceOutcome OpsWorksClient::AssignInstance(const AssignInstanceRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return AssignInstanceOutcome(NoResult());
  }
  else
  {
    return AssignInstanceOutcome(outcome.GetError());
  }
}

AssignInstanceOutcomeCallable OpsWorksClient::AssignInstanceCallable(const AssignInstanceRequest& request) const
{
  return std::async(std::launch::async, &OpsWorksClient::AssignInstance, this, request);
}

void OpsWorksClient::AssignInstanceAsync(const AssignInstanceRequest& request, const AssignInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&OpsWorksClient::AssignInstanceAsyncHelper, this, request, handler, context);
}

void OpsWorksClient::AssignInstanceAsyncHelper(const AssignInstanceRequest& request, const AssignInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AssignInstance(request), context);
}

AssignVolumeOutcome OpsWorksClient::AssignVolume(const AssignVolumeRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return AssignVolumeOutcome(NoResult());
  }
  else
  {
    return AssignVolumeOutcome(outcome.GetError());
  }
}

AssignVolumeOutcomeCallable OpsWorksClient::AssignVolumeCallable(const AssignVolumeRequest& request) const
{
  return std::async(std::launch::async, &OpsWorksClient::AssignVolume, this, request);
}

void OpsWorksClient::AssignVolumeAsync(const AssignVolumeRequest& request, const AssignVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&OpsWorksClient::AssignVolumeAsyncHelper, this, request, handler, context);
}

void OpsWorksClient::AssignVolumeAsyncHelper(const AssignVolumeRequest& request, const AssignVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AssignVolume(request), context);
}

AssociateElasticIpOutcome OpsWorksClient::AssociateElasticIp(const AssociateElasticIpRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return AssociateElasticIpOutcome(NoResult());
  }
  else
  {
    return AssociateElasticIpOutcome(outcome.GetError());
  }
}

AssociateElasticIpOutcomeCallable OpsWorksClient::AssociateElasticIpCallable(const AssociateElasticIpRequest& request) const
{
  return std::async(std::launch::async, &OpsWorksClient::AssociateElasticIp, this, request);
}

void OpsWorksClient::AssociateElasticIpAsync(const AssociateElasticIpRequest& request, const AssociateElasticIpResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&OpsWorksClient::AssociateElasticIpAsyncHelper, this, request, handler, context);
}

void OpsWorksClient::AssociateElasticIpAsyncHelper(const AssociateElasticIpRequest& request, const AssociateElasticIpResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AssociateElasticIp(request), context);
}

AttachElasticLoadBalancerOutcome OpsWorksClient::AttachElasticLoadBalancer(const AttachElasticLoadBalancerRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return AttachElasticLoadBalancerOutcome(NoResult());
  }
  else
  {
    return AttachElasticLoadBalancerOutcome(outcome.GetError());
  }
}

AttachElasticLoadBalancerOutcomeCallable OpsWorksClient::AttachElasticLoadBalancerCallable(const AttachElasticLoadBalancerRequest& request) const
{
  return std::async(std::launch::async, &OpsWorksClient::AttachElasticLoadBalancer, this, request);
}

void OpsWorksClient::AttachElasticLoadBalancerAsync(const AttachElasticLoadBalancerRequest& request, const AttachElasticLoadBalancerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&OpsWorksClient::AttachElasticLoadBalancerAsyncHelper, this, request, handler, context);
}

void OpsWorksClient::AttachElasticLoadBalancerAsyncHelper(const AttachElasticLoadBalancerRequest& request, const AttachElasticLoadBalancerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AttachElasticLoadBalancer(request), context);
}

CloneStackOutcome OpsWorksClient::CloneStack(const CloneStackRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CloneStackOutcome(CloneStackResult(outcome.GetResult()));
  }
  else
  {
    return CloneStackOutcome(outcome.GetError());
  }
}

CloneStackOutcomeCallable OpsWorksClient::CloneStackCallable(const CloneStackRequest& request) const
{
  return std::async(std::launch::async, &OpsWorksClient::CloneStack, this, request);
}

void OpsWorksClient::CloneStackAsync(const CloneStackRequest& request, const CloneStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&OpsWorksClient::CloneStackAsyncHelper, this, request, handler, context);
}

void OpsWorksClient::CloneStackAsyncHelper(const CloneStackRequest& request, const CloneStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CloneStack(request), context);
}

CreateAppOutcome OpsWorksClient::CreateApp(const CreateAppRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateAppOutcome(CreateAppResult(outcome.GetResult()));
  }
  else
  {
    return CreateAppOutcome(outcome.GetError());
  }
}

CreateAppOutcomeCallable OpsWorksClient::CreateAppCallable(const CreateAppRequest& request) const
{
  return std::async(std::launch::async, &OpsWorksClient::CreateApp, this, request);
}

void OpsWorksClient::CreateAppAsync(const CreateAppRequest& request, const CreateAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&OpsWorksClient::CreateAppAsyncHelper, this, request, handler, context);
}

void OpsWorksClient::CreateAppAsyncHelper(const CreateAppRequest& request, const CreateAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateApp(request), context);
}

CreateDeploymentOutcome OpsWorksClient::CreateDeployment(const CreateDeploymentRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateDeploymentOutcome(CreateDeploymentResult(outcome.GetResult()));
  }
  else
  {
    return CreateDeploymentOutcome(outcome.GetError());
  }
}

CreateDeploymentOutcomeCallable OpsWorksClient::CreateDeploymentCallable(const CreateDeploymentRequest& request) const
{
  return std::async(std::launch::async, &OpsWorksClient::CreateDeployment, this, request);
}

void OpsWorksClient::CreateDeploymentAsync(const CreateDeploymentRequest& request, const CreateDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&OpsWorksClient::CreateDeploymentAsyncHelper, this, request, handler, context);
}

void OpsWorksClient::CreateDeploymentAsyncHelper(const CreateDeploymentRequest& request, const CreateDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateDeployment(request), context);
}

CreateInstanceOutcome OpsWorksClient::CreateInstance(const CreateInstanceRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateInstanceOutcome(CreateInstanceResult(outcome.GetResult()));
  }
  else
  {
    return CreateInstanceOutcome(outcome.GetError());
  }
}

CreateInstanceOutcomeCallable OpsWorksClient::CreateInstanceCallable(const CreateInstanceRequest& request) const
{
  return std::async(std::launch::async, &OpsWorksClient::CreateInstance, this, request);
}

void OpsWorksClient::CreateInstanceAsync(const CreateInstanceRequest& request, const CreateInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&OpsWorksClient::CreateInstanceAsyncHelper, this, request, handler, context);
}

void OpsWorksClient::CreateInstanceAsyncHelper(const CreateInstanceRequest& request, const CreateInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateInstance(request), context);
}

CreateLayerOutcome OpsWorksClient::CreateLayer(const CreateLayerRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateLayerOutcome(CreateLayerResult(outcome.GetResult()));
  }
  else
  {
    return CreateLayerOutcome(outcome.GetError());
  }
}

CreateLayerOutcomeCallable OpsWorksClient::CreateLayerCallable(const CreateLayerRequest& request) const
{
  return std::async(std::launch::async, &OpsWorksClient::CreateLayer, this, request);
}

void OpsWorksClient::CreateLayerAsync(const CreateLayerRequest& request, const CreateLayerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&OpsWorksClient::CreateLayerAsyncHelper, this, request, handler, context);
}

void OpsWorksClient::CreateLayerAsyncHelper(const CreateLayerRequest& request, const CreateLayerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateLayer(request), context);
}

CreateStackOutcome OpsWorksClient::CreateStack(const CreateStackRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateStackOutcome(CreateStackResult(outcome.GetResult()));
  }
  else
  {
    return CreateStackOutcome(outcome.GetError());
  }
}

CreateStackOutcomeCallable OpsWorksClient::CreateStackCallable(const CreateStackRequest& request) const
{
  return std::async(std::launch::async, &OpsWorksClient::CreateStack, this, request);
}

void OpsWorksClient::CreateStackAsync(const CreateStackRequest& request, const CreateStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&OpsWorksClient::CreateStackAsyncHelper, this, request, handler, context);
}

void OpsWorksClient::CreateStackAsyncHelper(const CreateStackRequest& request, const CreateStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateStack(request), context);
}

CreateUserProfileOutcome OpsWorksClient::CreateUserProfile(const CreateUserProfileRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateUserProfileOutcome(CreateUserProfileResult(outcome.GetResult()));
  }
  else
  {
    return CreateUserProfileOutcome(outcome.GetError());
  }
}

CreateUserProfileOutcomeCallable OpsWorksClient::CreateUserProfileCallable(const CreateUserProfileRequest& request) const
{
  return std::async(std::launch::async, &OpsWorksClient::CreateUserProfile, this, request);
}

void OpsWorksClient::CreateUserProfileAsync(const CreateUserProfileRequest& request, const CreateUserProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&OpsWorksClient::CreateUserProfileAsyncHelper, this, request, handler, context);
}

void OpsWorksClient::CreateUserProfileAsyncHelper(const CreateUserProfileRequest& request, const CreateUserProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateUserProfile(request), context);
}

DeleteAppOutcome OpsWorksClient::DeleteApp(const DeleteAppRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteAppOutcome(NoResult());
  }
  else
  {
    return DeleteAppOutcome(outcome.GetError());
  }
}

DeleteAppOutcomeCallable OpsWorksClient::DeleteAppCallable(const DeleteAppRequest& request) const
{
  return std::async(std::launch::async, &OpsWorksClient::DeleteApp, this, request);
}

void OpsWorksClient::DeleteAppAsync(const DeleteAppRequest& request, const DeleteAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&OpsWorksClient::DeleteAppAsyncHelper, this, request, handler, context);
}

void OpsWorksClient::DeleteAppAsyncHelper(const DeleteAppRequest& request, const DeleteAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteApp(request), context);
}

DeleteInstanceOutcome OpsWorksClient::DeleteInstance(const DeleteInstanceRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteInstanceOutcome(NoResult());
  }
  else
  {
    return DeleteInstanceOutcome(outcome.GetError());
  }
}

DeleteInstanceOutcomeCallable OpsWorksClient::DeleteInstanceCallable(const DeleteInstanceRequest& request) const
{
  return std::async(std::launch::async, &OpsWorksClient::DeleteInstance, this, request);
}

void OpsWorksClient::DeleteInstanceAsync(const DeleteInstanceRequest& request, const DeleteInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&OpsWorksClient::DeleteInstanceAsyncHelper, this, request, handler, context);
}

void OpsWorksClient::DeleteInstanceAsyncHelper(const DeleteInstanceRequest& request, const DeleteInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteInstance(request), context);
}

DeleteLayerOutcome OpsWorksClient::DeleteLayer(const DeleteLayerRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteLayerOutcome(NoResult());
  }
  else
  {
    return DeleteLayerOutcome(outcome.GetError());
  }
}

DeleteLayerOutcomeCallable OpsWorksClient::DeleteLayerCallable(const DeleteLayerRequest& request) const
{
  return std::async(std::launch::async, &OpsWorksClient::DeleteLayer, this, request);
}

void OpsWorksClient::DeleteLayerAsync(const DeleteLayerRequest& request, const DeleteLayerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&OpsWorksClient::DeleteLayerAsyncHelper, this, request, handler, context);
}

void OpsWorksClient::DeleteLayerAsyncHelper(const DeleteLayerRequest& request, const DeleteLayerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteLayer(request), context);
}

DeleteStackOutcome OpsWorksClient::DeleteStack(const DeleteStackRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteStackOutcome(NoResult());
  }
  else
  {
    return DeleteStackOutcome(outcome.GetError());
  }
}

DeleteStackOutcomeCallable OpsWorksClient::DeleteStackCallable(const DeleteStackRequest& request) const
{
  return std::async(std::launch::async, &OpsWorksClient::DeleteStack, this, request);
}

void OpsWorksClient::DeleteStackAsync(const DeleteStackRequest& request, const DeleteStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&OpsWorksClient::DeleteStackAsyncHelper, this, request, handler, context);
}

void OpsWorksClient::DeleteStackAsyncHelper(const DeleteStackRequest& request, const DeleteStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteStack(request), context);
}

DeleteUserProfileOutcome OpsWorksClient::DeleteUserProfile(const DeleteUserProfileRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteUserProfileOutcome(NoResult());
  }
  else
  {
    return DeleteUserProfileOutcome(outcome.GetError());
  }
}

DeleteUserProfileOutcomeCallable OpsWorksClient::DeleteUserProfileCallable(const DeleteUserProfileRequest& request) const
{
  return std::async(std::launch::async, &OpsWorksClient::DeleteUserProfile, this, request);
}

void OpsWorksClient::DeleteUserProfileAsync(const DeleteUserProfileRequest& request, const DeleteUserProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&OpsWorksClient::DeleteUserProfileAsyncHelper, this, request, handler, context);
}

void OpsWorksClient::DeleteUserProfileAsyncHelper(const DeleteUserProfileRequest& request, const DeleteUserProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteUserProfile(request), context);
}

DeregisterEcsClusterOutcome OpsWorksClient::DeregisterEcsCluster(const DeregisterEcsClusterRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeregisterEcsClusterOutcome(NoResult());
  }
  else
  {
    return DeregisterEcsClusterOutcome(outcome.GetError());
  }
}

DeregisterEcsClusterOutcomeCallable OpsWorksClient::DeregisterEcsClusterCallable(const DeregisterEcsClusterRequest& request) const
{
  return std::async(std::launch::async, &OpsWorksClient::DeregisterEcsCluster, this, request);
}

void OpsWorksClient::DeregisterEcsClusterAsync(const DeregisterEcsClusterRequest& request, const DeregisterEcsClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&OpsWorksClient::DeregisterEcsClusterAsyncHelper, this, request, handler, context);
}

void OpsWorksClient::DeregisterEcsClusterAsyncHelper(const DeregisterEcsClusterRequest& request, const DeregisterEcsClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeregisterEcsCluster(request), context);
}

DeregisterElasticIpOutcome OpsWorksClient::DeregisterElasticIp(const DeregisterElasticIpRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeregisterElasticIpOutcome(NoResult());
  }
  else
  {
    return DeregisterElasticIpOutcome(outcome.GetError());
  }
}

DeregisterElasticIpOutcomeCallable OpsWorksClient::DeregisterElasticIpCallable(const DeregisterElasticIpRequest& request) const
{
  return std::async(std::launch::async, &OpsWorksClient::DeregisterElasticIp, this, request);
}

void OpsWorksClient::DeregisterElasticIpAsync(const DeregisterElasticIpRequest& request, const DeregisterElasticIpResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&OpsWorksClient::DeregisterElasticIpAsyncHelper, this, request, handler, context);
}

void OpsWorksClient::DeregisterElasticIpAsyncHelper(const DeregisterElasticIpRequest& request, const DeregisterElasticIpResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeregisterElasticIp(request), context);
}

DeregisterInstanceOutcome OpsWorksClient::DeregisterInstance(const DeregisterInstanceRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeregisterInstanceOutcome(NoResult());
  }
  else
  {
    return DeregisterInstanceOutcome(outcome.GetError());
  }
}

DeregisterInstanceOutcomeCallable OpsWorksClient::DeregisterInstanceCallable(const DeregisterInstanceRequest& request) const
{
  return std::async(std::launch::async, &OpsWorksClient::DeregisterInstance, this, request);
}

void OpsWorksClient::DeregisterInstanceAsync(const DeregisterInstanceRequest& request, const DeregisterInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&OpsWorksClient::DeregisterInstanceAsyncHelper, this, request, handler, context);
}

void OpsWorksClient::DeregisterInstanceAsyncHelper(const DeregisterInstanceRequest& request, const DeregisterInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeregisterInstance(request), context);
}

DeregisterRdsDbInstanceOutcome OpsWorksClient::DeregisterRdsDbInstance(const DeregisterRdsDbInstanceRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeregisterRdsDbInstanceOutcome(NoResult());
  }
  else
  {
    return DeregisterRdsDbInstanceOutcome(outcome.GetError());
  }
}

DeregisterRdsDbInstanceOutcomeCallable OpsWorksClient::DeregisterRdsDbInstanceCallable(const DeregisterRdsDbInstanceRequest& request) const
{
  return std::async(std::launch::async, &OpsWorksClient::DeregisterRdsDbInstance, this, request);
}

void OpsWorksClient::DeregisterRdsDbInstanceAsync(const DeregisterRdsDbInstanceRequest& request, const DeregisterRdsDbInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&OpsWorksClient::DeregisterRdsDbInstanceAsyncHelper, this, request, handler, context);
}

void OpsWorksClient::DeregisterRdsDbInstanceAsyncHelper(const DeregisterRdsDbInstanceRequest& request, const DeregisterRdsDbInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeregisterRdsDbInstance(request), context);
}

DeregisterVolumeOutcome OpsWorksClient::DeregisterVolume(const DeregisterVolumeRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeregisterVolumeOutcome(NoResult());
  }
  else
  {
    return DeregisterVolumeOutcome(outcome.GetError());
  }
}

DeregisterVolumeOutcomeCallable OpsWorksClient::DeregisterVolumeCallable(const DeregisterVolumeRequest& request) const
{
  return std::async(std::launch::async, &OpsWorksClient::DeregisterVolume, this, request);
}

void OpsWorksClient::DeregisterVolumeAsync(const DeregisterVolumeRequest& request, const DeregisterVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&OpsWorksClient::DeregisterVolumeAsyncHelper, this, request, handler, context);
}

void OpsWorksClient::DeregisterVolumeAsyncHelper(const DeregisterVolumeRequest& request, const DeregisterVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeregisterVolume(request), context);
}

DescribeAgentVersionsOutcome OpsWorksClient::DescribeAgentVersions(const DescribeAgentVersionsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeAgentVersionsOutcome(DescribeAgentVersionsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeAgentVersionsOutcome(outcome.GetError());
  }
}

DescribeAgentVersionsOutcomeCallable OpsWorksClient::DescribeAgentVersionsCallable(const DescribeAgentVersionsRequest& request) const
{
  return std::async(std::launch::async, &OpsWorksClient::DescribeAgentVersions, this, request);
}

void OpsWorksClient::DescribeAgentVersionsAsync(const DescribeAgentVersionsRequest& request, const DescribeAgentVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&OpsWorksClient::DescribeAgentVersionsAsyncHelper, this, request, handler, context);
}

void OpsWorksClient::DescribeAgentVersionsAsyncHelper(const DescribeAgentVersionsRequest& request, const DescribeAgentVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeAgentVersions(request), context);
}

DescribeAppsOutcome OpsWorksClient::DescribeApps(const DescribeAppsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeAppsOutcome(DescribeAppsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeAppsOutcome(outcome.GetError());
  }
}

DescribeAppsOutcomeCallable OpsWorksClient::DescribeAppsCallable(const DescribeAppsRequest& request) const
{
  return std::async(std::launch::async, &OpsWorksClient::DescribeApps, this, request);
}

void OpsWorksClient::DescribeAppsAsync(const DescribeAppsRequest& request, const DescribeAppsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&OpsWorksClient::DescribeAppsAsyncHelper, this, request, handler, context);
}

void OpsWorksClient::DescribeAppsAsyncHelper(const DescribeAppsRequest& request, const DescribeAppsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeApps(request), context);
}

DescribeCommandsOutcome OpsWorksClient::DescribeCommands(const DescribeCommandsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeCommandsOutcome(DescribeCommandsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeCommandsOutcome(outcome.GetError());
  }
}

DescribeCommandsOutcomeCallable OpsWorksClient::DescribeCommandsCallable(const DescribeCommandsRequest& request) const
{
  return std::async(std::launch::async, &OpsWorksClient::DescribeCommands, this, request);
}

void OpsWorksClient::DescribeCommandsAsync(const DescribeCommandsRequest& request, const DescribeCommandsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&OpsWorksClient::DescribeCommandsAsyncHelper, this, request, handler, context);
}

void OpsWorksClient::DescribeCommandsAsyncHelper(const DescribeCommandsRequest& request, const DescribeCommandsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeCommands(request), context);
}

DescribeDeploymentsOutcome OpsWorksClient::DescribeDeployments(const DescribeDeploymentsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeDeploymentsOutcome(DescribeDeploymentsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeDeploymentsOutcome(outcome.GetError());
  }
}

DescribeDeploymentsOutcomeCallable OpsWorksClient::DescribeDeploymentsCallable(const DescribeDeploymentsRequest& request) const
{
  return std::async(std::launch::async, &OpsWorksClient::DescribeDeployments, this, request);
}

void OpsWorksClient::DescribeDeploymentsAsync(const DescribeDeploymentsRequest& request, const DescribeDeploymentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&OpsWorksClient::DescribeDeploymentsAsyncHelper, this, request, handler, context);
}

void OpsWorksClient::DescribeDeploymentsAsyncHelper(const DescribeDeploymentsRequest& request, const DescribeDeploymentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeDeployments(request), context);
}

DescribeEcsClustersOutcome OpsWorksClient::DescribeEcsClusters(const DescribeEcsClustersRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeEcsClustersOutcome(DescribeEcsClustersResult(outcome.GetResult()));
  }
  else
  {
    return DescribeEcsClustersOutcome(outcome.GetError());
  }
}

DescribeEcsClustersOutcomeCallable OpsWorksClient::DescribeEcsClustersCallable(const DescribeEcsClustersRequest& request) const
{
  return std::async(std::launch::async, &OpsWorksClient::DescribeEcsClusters, this, request);
}

void OpsWorksClient::DescribeEcsClustersAsync(const DescribeEcsClustersRequest& request, const DescribeEcsClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&OpsWorksClient::DescribeEcsClustersAsyncHelper, this, request, handler, context);
}

void OpsWorksClient::DescribeEcsClustersAsyncHelper(const DescribeEcsClustersRequest& request, const DescribeEcsClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeEcsClusters(request), context);
}

DescribeElasticIpsOutcome OpsWorksClient::DescribeElasticIps(const DescribeElasticIpsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeElasticIpsOutcome(DescribeElasticIpsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeElasticIpsOutcome(outcome.GetError());
  }
}

DescribeElasticIpsOutcomeCallable OpsWorksClient::DescribeElasticIpsCallable(const DescribeElasticIpsRequest& request) const
{
  return std::async(std::launch::async, &OpsWorksClient::DescribeElasticIps, this, request);
}

void OpsWorksClient::DescribeElasticIpsAsync(const DescribeElasticIpsRequest& request, const DescribeElasticIpsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&OpsWorksClient::DescribeElasticIpsAsyncHelper, this, request, handler, context);
}

void OpsWorksClient::DescribeElasticIpsAsyncHelper(const DescribeElasticIpsRequest& request, const DescribeElasticIpsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeElasticIps(request), context);
}

DescribeElasticLoadBalancersOutcome OpsWorksClient::DescribeElasticLoadBalancers(const DescribeElasticLoadBalancersRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeElasticLoadBalancersOutcome(DescribeElasticLoadBalancersResult(outcome.GetResult()));
  }
  else
  {
    return DescribeElasticLoadBalancersOutcome(outcome.GetError());
  }
}

DescribeElasticLoadBalancersOutcomeCallable OpsWorksClient::DescribeElasticLoadBalancersCallable(const DescribeElasticLoadBalancersRequest& request) const
{
  return std::async(std::launch::async, &OpsWorksClient::DescribeElasticLoadBalancers, this, request);
}

void OpsWorksClient::DescribeElasticLoadBalancersAsync(const DescribeElasticLoadBalancersRequest& request, const DescribeElasticLoadBalancersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&OpsWorksClient::DescribeElasticLoadBalancersAsyncHelper, this, request, handler, context);
}

void OpsWorksClient::DescribeElasticLoadBalancersAsyncHelper(const DescribeElasticLoadBalancersRequest& request, const DescribeElasticLoadBalancersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeElasticLoadBalancers(request), context);
}

DescribeInstancesOutcome OpsWorksClient::DescribeInstances(const DescribeInstancesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeInstancesOutcome(DescribeInstancesResult(outcome.GetResult()));
  }
  else
  {
    return DescribeInstancesOutcome(outcome.GetError());
  }
}

DescribeInstancesOutcomeCallable OpsWorksClient::DescribeInstancesCallable(const DescribeInstancesRequest& request) const
{
  return std::async(std::launch::async, &OpsWorksClient::DescribeInstances, this, request);
}

void OpsWorksClient::DescribeInstancesAsync(const DescribeInstancesRequest& request, const DescribeInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&OpsWorksClient::DescribeInstancesAsyncHelper, this, request, handler, context);
}

void OpsWorksClient::DescribeInstancesAsyncHelper(const DescribeInstancesRequest& request, const DescribeInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeInstances(request), context);
}

DescribeLayersOutcome OpsWorksClient::DescribeLayers(const DescribeLayersRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeLayersOutcome(DescribeLayersResult(outcome.GetResult()));
  }
  else
  {
    return DescribeLayersOutcome(outcome.GetError());
  }
}

DescribeLayersOutcomeCallable OpsWorksClient::DescribeLayersCallable(const DescribeLayersRequest& request) const
{
  return std::async(std::launch::async, &OpsWorksClient::DescribeLayers, this, request);
}

void OpsWorksClient::DescribeLayersAsync(const DescribeLayersRequest& request, const DescribeLayersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&OpsWorksClient::DescribeLayersAsyncHelper, this, request, handler, context);
}

void OpsWorksClient::DescribeLayersAsyncHelper(const DescribeLayersRequest& request, const DescribeLayersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeLayers(request), context);
}

DescribeLoadBasedAutoScalingOutcome OpsWorksClient::DescribeLoadBasedAutoScaling(const DescribeLoadBasedAutoScalingRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeLoadBasedAutoScalingOutcome(DescribeLoadBasedAutoScalingResult(outcome.GetResult()));
  }
  else
  {
    return DescribeLoadBasedAutoScalingOutcome(outcome.GetError());
  }
}

DescribeLoadBasedAutoScalingOutcomeCallable OpsWorksClient::DescribeLoadBasedAutoScalingCallable(const DescribeLoadBasedAutoScalingRequest& request) const
{
  return std::async(std::launch::async, &OpsWorksClient::DescribeLoadBasedAutoScaling, this, request);
}

void OpsWorksClient::DescribeLoadBasedAutoScalingAsync(const DescribeLoadBasedAutoScalingRequest& request, const DescribeLoadBasedAutoScalingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&OpsWorksClient::DescribeLoadBasedAutoScalingAsyncHelper, this, request, handler, context);
}

void OpsWorksClient::DescribeLoadBasedAutoScalingAsyncHelper(const DescribeLoadBasedAutoScalingRequest& request, const DescribeLoadBasedAutoScalingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeLoadBasedAutoScaling(request), context);
}

DescribeMyUserProfileOutcome OpsWorksClient::DescribeMyUserProfile() const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeMyUserProfileOutcome(DescribeMyUserProfileResult(outcome.GetResult()));
  }
  else
  {
    return DescribeMyUserProfileOutcome(outcome.GetError());
  }
}

DescribeMyUserProfileOutcomeCallable OpsWorksClient::DescribeMyUserProfileCallable() const
{
  return std::async(std::launch::async, &OpsWorksClient::DescribeMyUserProfile, this);
}

void OpsWorksClient::DescribeMyUserProfileAsync(const DescribeMyUserProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&OpsWorksClient::DescribeMyUserProfileAsyncHelper, this, handler, context);
}

void OpsWorksClient::DescribeMyUserProfileAsyncHelper(const DescribeMyUserProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, DescribeMyUserProfile(), context);
}

DescribePermissionsOutcome OpsWorksClient::DescribePermissions(const DescribePermissionsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribePermissionsOutcome(DescribePermissionsResult(outcome.GetResult()));
  }
  else
  {
    return DescribePermissionsOutcome(outcome.GetError());
  }
}

DescribePermissionsOutcomeCallable OpsWorksClient::DescribePermissionsCallable(const DescribePermissionsRequest& request) const
{
  return std::async(std::launch::async, &OpsWorksClient::DescribePermissions, this, request);
}

void OpsWorksClient::DescribePermissionsAsync(const DescribePermissionsRequest& request, const DescribePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&OpsWorksClient::DescribePermissionsAsyncHelper, this, request, handler, context);
}

void OpsWorksClient::DescribePermissionsAsyncHelper(const DescribePermissionsRequest& request, const DescribePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribePermissions(request), context);
}

DescribeRaidArraysOutcome OpsWorksClient::DescribeRaidArrays(const DescribeRaidArraysRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeRaidArraysOutcome(DescribeRaidArraysResult(outcome.GetResult()));
  }
  else
  {
    return DescribeRaidArraysOutcome(outcome.GetError());
  }
}

DescribeRaidArraysOutcomeCallable OpsWorksClient::DescribeRaidArraysCallable(const DescribeRaidArraysRequest& request) const
{
  return std::async(std::launch::async, &OpsWorksClient::DescribeRaidArrays, this, request);
}

void OpsWorksClient::DescribeRaidArraysAsync(const DescribeRaidArraysRequest& request, const DescribeRaidArraysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&OpsWorksClient::DescribeRaidArraysAsyncHelper, this, request, handler, context);
}

void OpsWorksClient::DescribeRaidArraysAsyncHelper(const DescribeRaidArraysRequest& request, const DescribeRaidArraysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeRaidArrays(request), context);
}

DescribeRdsDbInstancesOutcome OpsWorksClient::DescribeRdsDbInstances(const DescribeRdsDbInstancesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeRdsDbInstancesOutcome(DescribeRdsDbInstancesResult(outcome.GetResult()));
  }
  else
  {
    return DescribeRdsDbInstancesOutcome(outcome.GetError());
  }
}

DescribeRdsDbInstancesOutcomeCallable OpsWorksClient::DescribeRdsDbInstancesCallable(const DescribeRdsDbInstancesRequest& request) const
{
  return std::async(std::launch::async, &OpsWorksClient::DescribeRdsDbInstances, this, request);
}

void OpsWorksClient::DescribeRdsDbInstancesAsync(const DescribeRdsDbInstancesRequest& request, const DescribeRdsDbInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&OpsWorksClient::DescribeRdsDbInstancesAsyncHelper, this, request, handler, context);
}

void OpsWorksClient::DescribeRdsDbInstancesAsyncHelper(const DescribeRdsDbInstancesRequest& request, const DescribeRdsDbInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeRdsDbInstances(request), context);
}

DescribeServiceErrorsOutcome OpsWorksClient::DescribeServiceErrors(const DescribeServiceErrorsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeServiceErrorsOutcome(DescribeServiceErrorsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeServiceErrorsOutcome(outcome.GetError());
  }
}

DescribeServiceErrorsOutcomeCallable OpsWorksClient::DescribeServiceErrorsCallable(const DescribeServiceErrorsRequest& request) const
{
  return std::async(std::launch::async, &OpsWorksClient::DescribeServiceErrors, this, request);
}

void OpsWorksClient::DescribeServiceErrorsAsync(const DescribeServiceErrorsRequest& request, const DescribeServiceErrorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&OpsWorksClient::DescribeServiceErrorsAsyncHelper, this, request, handler, context);
}

void OpsWorksClient::DescribeServiceErrorsAsyncHelper(const DescribeServiceErrorsRequest& request, const DescribeServiceErrorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeServiceErrors(request), context);
}

DescribeStackProvisioningParametersOutcome OpsWorksClient::DescribeStackProvisioningParameters(const DescribeStackProvisioningParametersRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeStackProvisioningParametersOutcome(DescribeStackProvisioningParametersResult(outcome.GetResult()));
  }
  else
  {
    return DescribeStackProvisioningParametersOutcome(outcome.GetError());
  }
}

DescribeStackProvisioningParametersOutcomeCallable OpsWorksClient::DescribeStackProvisioningParametersCallable(const DescribeStackProvisioningParametersRequest& request) const
{
  return std::async(std::launch::async, &OpsWorksClient::DescribeStackProvisioningParameters, this, request);
}

void OpsWorksClient::DescribeStackProvisioningParametersAsync(const DescribeStackProvisioningParametersRequest& request, const DescribeStackProvisioningParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&OpsWorksClient::DescribeStackProvisioningParametersAsyncHelper, this, request, handler, context);
}

void OpsWorksClient::DescribeStackProvisioningParametersAsyncHelper(const DescribeStackProvisioningParametersRequest& request, const DescribeStackProvisioningParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeStackProvisioningParameters(request), context);
}

DescribeStackSummaryOutcome OpsWorksClient::DescribeStackSummary(const DescribeStackSummaryRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeStackSummaryOutcome(DescribeStackSummaryResult(outcome.GetResult()));
  }
  else
  {
    return DescribeStackSummaryOutcome(outcome.GetError());
  }
}

DescribeStackSummaryOutcomeCallable OpsWorksClient::DescribeStackSummaryCallable(const DescribeStackSummaryRequest& request) const
{
  return std::async(std::launch::async, &OpsWorksClient::DescribeStackSummary, this, request);
}

void OpsWorksClient::DescribeStackSummaryAsync(const DescribeStackSummaryRequest& request, const DescribeStackSummaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&OpsWorksClient::DescribeStackSummaryAsyncHelper, this, request, handler, context);
}

void OpsWorksClient::DescribeStackSummaryAsyncHelper(const DescribeStackSummaryRequest& request, const DescribeStackSummaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeStackSummary(request), context);
}

DescribeStacksOutcome OpsWorksClient::DescribeStacks(const DescribeStacksRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeStacksOutcome(DescribeStacksResult(outcome.GetResult()));
  }
  else
  {
    return DescribeStacksOutcome(outcome.GetError());
  }
}

DescribeStacksOutcomeCallable OpsWorksClient::DescribeStacksCallable(const DescribeStacksRequest& request) const
{
  return std::async(std::launch::async, &OpsWorksClient::DescribeStacks, this, request);
}

void OpsWorksClient::DescribeStacksAsync(const DescribeStacksRequest& request, const DescribeStacksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&OpsWorksClient::DescribeStacksAsyncHelper, this, request, handler, context);
}

void OpsWorksClient::DescribeStacksAsyncHelper(const DescribeStacksRequest& request, const DescribeStacksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeStacks(request), context);
}

DescribeTimeBasedAutoScalingOutcome OpsWorksClient::DescribeTimeBasedAutoScaling(const DescribeTimeBasedAutoScalingRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeTimeBasedAutoScalingOutcome(DescribeTimeBasedAutoScalingResult(outcome.GetResult()));
  }
  else
  {
    return DescribeTimeBasedAutoScalingOutcome(outcome.GetError());
  }
}

DescribeTimeBasedAutoScalingOutcomeCallable OpsWorksClient::DescribeTimeBasedAutoScalingCallable(const DescribeTimeBasedAutoScalingRequest& request) const
{
  return std::async(std::launch::async, &OpsWorksClient::DescribeTimeBasedAutoScaling, this, request);
}

void OpsWorksClient::DescribeTimeBasedAutoScalingAsync(const DescribeTimeBasedAutoScalingRequest& request, const DescribeTimeBasedAutoScalingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&OpsWorksClient::DescribeTimeBasedAutoScalingAsyncHelper, this, request, handler, context);
}

void OpsWorksClient::DescribeTimeBasedAutoScalingAsyncHelper(const DescribeTimeBasedAutoScalingRequest& request, const DescribeTimeBasedAutoScalingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeTimeBasedAutoScaling(request), context);
}

DescribeUserProfilesOutcome OpsWorksClient::DescribeUserProfiles(const DescribeUserProfilesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeUserProfilesOutcome(DescribeUserProfilesResult(outcome.GetResult()));
  }
  else
  {
    return DescribeUserProfilesOutcome(outcome.GetError());
  }
}

DescribeUserProfilesOutcomeCallable OpsWorksClient::DescribeUserProfilesCallable(const DescribeUserProfilesRequest& request) const
{
  return std::async(std::launch::async, &OpsWorksClient::DescribeUserProfiles, this, request);
}

void OpsWorksClient::DescribeUserProfilesAsync(const DescribeUserProfilesRequest& request, const DescribeUserProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&OpsWorksClient::DescribeUserProfilesAsyncHelper, this, request, handler, context);
}

void OpsWorksClient::DescribeUserProfilesAsyncHelper(const DescribeUserProfilesRequest& request, const DescribeUserProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeUserProfiles(request), context);
}

DescribeVolumesOutcome OpsWorksClient::DescribeVolumes(const DescribeVolumesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeVolumesOutcome(DescribeVolumesResult(outcome.GetResult()));
  }
  else
  {
    return DescribeVolumesOutcome(outcome.GetError());
  }
}

DescribeVolumesOutcomeCallable OpsWorksClient::DescribeVolumesCallable(const DescribeVolumesRequest& request) const
{
  return std::async(std::launch::async, &OpsWorksClient::DescribeVolumes, this, request);
}

void OpsWorksClient::DescribeVolumesAsync(const DescribeVolumesRequest& request, const DescribeVolumesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&OpsWorksClient::DescribeVolumesAsyncHelper, this, request, handler, context);
}

void OpsWorksClient::DescribeVolumesAsyncHelper(const DescribeVolumesRequest& request, const DescribeVolumesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeVolumes(request), context);
}

DetachElasticLoadBalancerOutcome OpsWorksClient::DetachElasticLoadBalancer(const DetachElasticLoadBalancerRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DetachElasticLoadBalancerOutcome(NoResult());
  }
  else
  {
    return DetachElasticLoadBalancerOutcome(outcome.GetError());
  }
}

DetachElasticLoadBalancerOutcomeCallable OpsWorksClient::DetachElasticLoadBalancerCallable(const DetachElasticLoadBalancerRequest& request) const
{
  return std::async(std::launch::async, &OpsWorksClient::DetachElasticLoadBalancer, this, request);
}

void OpsWorksClient::DetachElasticLoadBalancerAsync(const DetachElasticLoadBalancerRequest& request, const DetachElasticLoadBalancerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&OpsWorksClient::DetachElasticLoadBalancerAsyncHelper, this, request, handler, context);
}

void OpsWorksClient::DetachElasticLoadBalancerAsyncHelper(const DetachElasticLoadBalancerRequest& request, const DetachElasticLoadBalancerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DetachElasticLoadBalancer(request), context);
}

DisassociateElasticIpOutcome OpsWorksClient::DisassociateElasticIp(const DisassociateElasticIpRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DisassociateElasticIpOutcome(NoResult());
  }
  else
  {
    return DisassociateElasticIpOutcome(outcome.GetError());
  }
}

DisassociateElasticIpOutcomeCallable OpsWorksClient::DisassociateElasticIpCallable(const DisassociateElasticIpRequest& request) const
{
  return std::async(std::launch::async, &OpsWorksClient::DisassociateElasticIp, this, request);
}

void OpsWorksClient::DisassociateElasticIpAsync(const DisassociateElasticIpRequest& request, const DisassociateElasticIpResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&OpsWorksClient::DisassociateElasticIpAsyncHelper, this, request, handler, context);
}

void OpsWorksClient::DisassociateElasticIpAsyncHelper(const DisassociateElasticIpRequest& request, const DisassociateElasticIpResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisassociateElasticIp(request), context);
}

GetHostnameSuggestionOutcome OpsWorksClient::GetHostnameSuggestion(const GetHostnameSuggestionRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetHostnameSuggestionOutcome(GetHostnameSuggestionResult(outcome.GetResult()));
  }
  else
  {
    return GetHostnameSuggestionOutcome(outcome.GetError());
  }
}

GetHostnameSuggestionOutcomeCallable OpsWorksClient::GetHostnameSuggestionCallable(const GetHostnameSuggestionRequest& request) const
{
  return std::async(std::launch::async, &OpsWorksClient::GetHostnameSuggestion, this, request);
}

void OpsWorksClient::GetHostnameSuggestionAsync(const GetHostnameSuggestionRequest& request, const GetHostnameSuggestionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&OpsWorksClient::GetHostnameSuggestionAsyncHelper, this, request, handler, context);
}

void OpsWorksClient::GetHostnameSuggestionAsyncHelper(const GetHostnameSuggestionRequest& request, const GetHostnameSuggestionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetHostnameSuggestion(request), context);
}

GrantAccessOutcome OpsWorksClient::GrantAccess(const GrantAccessRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GrantAccessOutcome(GrantAccessResult(outcome.GetResult()));
  }
  else
  {
    return GrantAccessOutcome(outcome.GetError());
  }
}

GrantAccessOutcomeCallable OpsWorksClient::GrantAccessCallable(const GrantAccessRequest& request) const
{
  return std::async(std::launch::async, &OpsWorksClient::GrantAccess, this, request);
}

void OpsWorksClient::GrantAccessAsync(const GrantAccessRequest& request, const GrantAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&OpsWorksClient::GrantAccessAsyncHelper, this, request, handler, context);
}

void OpsWorksClient::GrantAccessAsyncHelper(const GrantAccessRequest& request, const GrantAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GrantAccess(request), context);
}

RebootInstanceOutcome OpsWorksClient::RebootInstance(const RebootInstanceRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return RebootInstanceOutcome(NoResult());
  }
  else
  {
    return RebootInstanceOutcome(outcome.GetError());
  }
}

RebootInstanceOutcomeCallable OpsWorksClient::RebootInstanceCallable(const RebootInstanceRequest& request) const
{
  return std::async(std::launch::async, &OpsWorksClient::RebootInstance, this, request);
}

void OpsWorksClient::RebootInstanceAsync(const RebootInstanceRequest& request, const RebootInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&OpsWorksClient::RebootInstanceAsyncHelper, this, request, handler, context);
}

void OpsWorksClient::RebootInstanceAsyncHelper(const RebootInstanceRequest& request, const RebootInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RebootInstance(request), context);
}

RegisterEcsClusterOutcome OpsWorksClient::RegisterEcsCluster(const RegisterEcsClusterRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return RegisterEcsClusterOutcome(RegisterEcsClusterResult(outcome.GetResult()));
  }
  else
  {
    return RegisterEcsClusterOutcome(outcome.GetError());
  }
}

RegisterEcsClusterOutcomeCallable OpsWorksClient::RegisterEcsClusterCallable(const RegisterEcsClusterRequest& request) const
{
  return std::async(std::launch::async, &OpsWorksClient::RegisterEcsCluster, this, request);
}

void OpsWorksClient::RegisterEcsClusterAsync(const RegisterEcsClusterRequest& request, const RegisterEcsClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&OpsWorksClient::RegisterEcsClusterAsyncHelper, this, request, handler, context);
}

void OpsWorksClient::RegisterEcsClusterAsyncHelper(const RegisterEcsClusterRequest& request, const RegisterEcsClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RegisterEcsCluster(request), context);
}

RegisterElasticIpOutcome OpsWorksClient::RegisterElasticIp(const RegisterElasticIpRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return RegisterElasticIpOutcome(RegisterElasticIpResult(outcome.GetResult()));
  }
  else
  {
    return RegisterElasticIpOutcome(outcome.GetError());
  }
}

RegisterElasticIpOutcomeCallable OpsWorksClient::RegisterElasticIpCallable(const RegisterElasticIpRequest& request) const
{
  return std::async(std::launch::async, &OpsWorksClient::RegisterElasticIp, this, request);
}

void OpsWorksClient::RegisterElasticIpAsync(const RegisterElasticIpRequest& request, const RegisterElasticIpResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&OpsWorksClient::RegisterElasticIpAsyncHelper, this, request, handler, context);
}

void OpsWorksClient::RegisterElasticIpAsyncHelper(const RegisterElasticIpRequest& request, const RegisterElasticIpResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RegisterElasticIp(request), context);
}

RegisterInstanceOutcome OpsWorksClient::RegisterInstance(const RegisterInstanceRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return RegisterInstanceOutcome(RegisterInstanceResult(outcome.GetResult()));
  }
  else
  {
    return RegisterInstanceOutcome(outcome.GetError());
  }
}

RegisterInstanceOutcomeCallable OpsWorksClient::RegisterInstanceCallable(const RegisterInstanceRequest& request) const
{
  return std::async(std::launch::async, &OpsWorksClient::RegisterInstance, this, request);
}

void OpsWorksClient::RegisterInstanceAsync(const RegisterInstanceRequest& request, const RegisterInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&OpsWorksClient::RegisterInstanceAsyncHelper, this, request, handler, context);
}

void OpsWorksClient::RegisterInstanceAsyncHelper(const RegisterInstanceRequest& request, const RegisterInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RegisterInstance(request), context);
}

RegisterRdsDbInstanceOutcome OpsWorksClient::RegisterRdsDbInstance(const RegisterRdsDbInstanceRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return RegisterRdsDbInstanceOutcome(NoResult());
  }
  else
  {
    return RegisterRdsDbInstanceOutcome(outcome.GetError());
  }
}

RegisterRdsDbInstanceOutcomeCallable OpsWorksClient::RegisterRdsDbInstanceCallable(const RegisterRdsDbInstanceRequest& request) const
{
  return std::async(std::launch::async, &OpsWorksClient::RegisterRdsDbInstance, this, request);
}

void OpsWorksClient::RegisterRdsDbInstanceAsync(const RegisterRdsDbInstanceRequest& request, const RegisterRdsDbInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&OpsWorksClient::RegisterRdsDbInstanceAsyncHelper, this, request, handler, context);
}

void OpsWorksClient::RegisterRdsDbInstanceAsyncHelper(const RegisterRdsDbInstanceRequest& request, const RegisterRdsDbInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RegisterRdsDbInstance(request), context);
}

RegisterVolumeOutcome OpsWorksClient::RegisterVolume(const RegisterVolumeRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return RegisterVolumeOutcome(RegisterVolumeResult(outcome.GetResult()));
  }
  else
  {
    return RegisterVolumeOutcome(outcome.GetError());
  }
}

RegisterVolumeOutcomeCallable OpsWorksClient::RegisterVolumeCallable(const RegisterVolumeRequest& request) const
{
  return std::async(std::launch::async, &OpsWorksClient::RegisterVolume, this, request);
}

void OpsWorksClient::RegisterVolumeAsync(const RegisterVolumeRequest& request, const RegisterVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&OpsWorksClient::RegisterVolumeAsyncHelper, this, request, handler, context);
}

void OpsWorksClient::RegisterVolumeAsyncHelper(const RegisterVolumeRequest& request, const RegisterVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RegisterVolume(request), context);
}

SetLoadBasedAutoScalingOutcome OpsWorksClient::SetLoadBasedAutoScaling(const SetLoadBasedAutoScalingRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return SetLoadBasedAutoScalingOutcome(NoResult());
  }
  else
  {
    return SetLoadBasedAutoScalingOutcome(outcome.GetError());
  }
}

SetLoadBasedAutoScalingOutcomeCallable OpsWorksClient::SetLoadBasedAutoScalingCallable(const SetLoadBasedAutoScalingRequest& request) const
{
  return std::async(std::launch::async, &OpsWorksClient::SetLoadBasedAutoScaling, this, request);
}

void OpsWorksClient::SetLoadBasedAutoScalingAsync(const SetLoadBasedAutoScalingRequest& request, const SetLoadBasedAutoScalingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&OpsWorksClient::SetLoadBasedAutoScalingAsyncHelper, this, request, handler, context);
}

void OpsWorksClient::SetLoadBasedAutoScalingAsyncHelper(const SetLoadBasedAutoScalingRequest& request, const SetLoadBasedAutoScalingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SetLoadBasedAutoScaling(request), context);
}

SetPermissionOutcome OpsWorksClient::SetPermission(const SetPermissionRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return SetPermissionOutcome(NoResult());
  }
  else
  {
    return SetPermissionOutcome(outcome.GetError());
  }
}

SetPermissionOutcomeCallable OpsWorksClient::SetPermissionCallable(const SetPermissionRequest& request) const
{
  return std::async(std::launch::async, &OpsWorksClient::SetPermission, this, request);
}

void OpsWorksClient::SetPermissionAsync(const SetPermissionRequest& request, const SetPermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&OpsWorksClient::SetPermissionAsyncHelper, this, request, handler, context);
}

void OpsWorksClient::SetPermissionAsyncHelper(const SetPermissionRequest& request, const SetPermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SetPermission(request), context);
}

SetTimeBasedAutoScalingOutcome OpsWorksClient::SetTimeBasedAutoScaling(const SetTimeBasedAutoScalingRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return SetTimeBasedAutoScalingOutcome(NoResult());
  }
  else
  {
    return SetTimeBasedAutoScalingOutcome(outcome.GetError());
  }
}

SetTimeBasedAutoScalingOutcomeCallable OpsWorksClient::SetTimeBasedAutoScalingCallable(const SetTimeBasedAutoScalingRequest& request) const
{
  return std::async(std::launch::async, &OpsWorksClient::SetTimeBasedAutoScaling, this, request);
}

void OpsWorksClient::SetTimeBasedAutoScalingAsync(const SetTimeBasedAutoScalingRequest& request, const SetTimeBasedAutoScalingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&OpsWorksClient::SetTimeBasedAutoScalingAsyncHelper, this, request, handler, context);
}

void OpsWorksClient::SetTimeBasedAutoScalingAsyncHelper(const SetTimeBasedAutoScalingRequest& request, const SetTimeBasedAutoScalingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SetTimeBasedAutoScaling(request), context);
}

StartInstanceOutcome OpsWorksClient::StartInstance(const StartInstanceRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return StartInstanceOutcome(NoResult());
  }
  else
  {
    return StartInstanceOutcome(outcome.GetError());
  }
}

StartInstanceOutcomeCallable OpsWorksClient::StartInstanceCallable(const StartInstanceRequest& request) const
{
  return std::async(std::launch::async, &OpsWorksClient::StartInstance, this, request);
}

void OpsWorksClient::StartInstanceAsync(const StartInstanceRequest& request, const StartInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&OpsWorksClient::StartInstanceAsyncHelper, this, request, handler, context);
}

void OpsWorksClient::StartInstanceAsyncHelper(const StartInstanceRequest& request, const StartInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartInstance(request), context);
}

StartStackOutcome OpsWorksClient::StartStack(const StartStackRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return StartStackOutcome(NoResult());
  }
  else
  {
    return StartStackOutcome(outcome.GetError());
  }
}

StartStackOutcomeCallable OpsWorksClient::StartStackCallable(const StartStackRequest& request) const
{
  return std::async(std::launch::async, &OpsWorksClient::StartStack, this, request);
}

void OpsWorksClient::StartStackAsync(const StartStackRequest& request, const StartStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&OpsWorksClient::StartStackAsyncHelper, this, request, handler, context);
}

void OpsWorksClient::StartStackAsyncHelper(const StartStackRequest& request, const StartStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartStack(request), context);
}

StopInstanceOutcome OpsWorksClient::StopInstance(const StopInstanceRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return StopInstanceOutcome(NoResult());
  }
  else
  {
    return StopInstanceOutcome(outcome.GetError());
  }
}

StopInstanceOutcomeCallable OpsWorksClient::StopInstanceCallable(const StopInstanceRequest& request) const
{
  return std::async(std::launch::async, &OpsWorksClient::StopInstance, this, request);
}

void OpsWorksClient::StopInstanceAsync(const StopInstanceRequest& request, const StopInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&OpsWorksClient::StopInstanceAsyncHelper, this, request, handler, context);
}

void OpsWorksClient::StopInstanceAsyncHelper(const StopInstanceRequest& request, const StopInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StopInstance(request), context);
}

StopStackOutcome OpsWorksClient::StopStack(const StopStackRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return StopStackOutcome(NoResult());
  }
  else
  {
    return StopStackOutcome(outcome.GetError());
  }
}

StopStackOutcomeCallable OpsWorksClient::StopStackCallable(const StopStackRequest& request) const
{
  return std::async(std::launch::async, &OpsWorksClient::StopStack, this, request);
}

void OpsWorksClient::StopStackAsync(const StopStackRequest& request, const StopStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&OpsWorksClient::StopStackAsyncHelper, this, request, handler, context);
}

void OpsWorksClient::StopStackAsyncHelper(const StopStackRequest& request, const StopStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StopStack(request), context);
}

UnassignInstanceOutcome OpsWorksClient::UnassignInstance(const UnassignInstanceRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return UnassignInstanceOutcome(NoResult());
  }
  else
  {
    return UnassignInstanceOutcome(outcome.GetError());
  }
}

UnassignInstanceOutcomeCallable OpsWorksClient::UnassignInstanceCallable(const UnassignInstanceRequest& request) const
{
  return std::async(std::launch::async, &OpsWorksClient::UnassignInstance, this, request);
}

void OpsWorksClient::UnassignInstanceAsync(const UnassignInstanceRequest& request, const UnassignInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&OpsWorksClient::UnassignInstanceAsyncHelper, this, request, handler, context);
}

void OpsWorksClient::UnassignInstanceAsyncHelper(const UnassignInstanceRequest& request, const UnassignInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UnassignInstance(request), context);
}

UnassignVolumeOutcome OpsWorksClient::UnassignVolume(const UnassignVolumeRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return UnassignVolumeOutcome(NoResult());
  }
  else
  {
    return UnassignVolumeOutcome(outcome.GetError());
  }
}

UnassignVolumeOutcomeCallable OpsWorksClient::UnassignVolumeCallable(const UnassignVolumeRequest& request) const
{
  return std::async(std::launch::async, &OpsWorksClient::UnassignVolume, this, request);
}

void OpsWorksClient::UnassignVolumeAsync(const UnassignVolumeRequest& request, const UnassignVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&OpsWorksClient::UnassignVolumeAsyncHelper, this, request, handler, context);
}

void OpsWorksClient::UnassignVolumeAsyncHelper(const UnassignVolumeRequest& request, const UnassignVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UnassignVolume(request), context);
}

UpdateAppOutcome OpsWorksClient::UpdateApp(const UpdateAppRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return UpdateAppOutcome(NoResult());
  }
  else
  {
    return UpdateAppOutcome(outcome.GetError());
  }
}

UpdateAppOutcomeCallable OpsWorksClient::UpdateAppCallable(const UpdateAppRequest& request) const
{
  return std::async(std::launch::async, &OpsWorksClient::UpdateApp, this, request);
}

void OpsWorksClient::UpdateAppAsync(const UpdateAppRequest& request, const UpdateAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&OpsWorksClient::UpdateAppAsyncHelper, this, request, handler, context);
}

void OpsWorksClient::UpdateAppAsyncHelper(const UpdateAppRequest& request, const UpdateAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateApp(request), context);
}

UpdateElasticIpOutcome OpsWorksClient::UpdateElasticIp(const UpdateElasticIpRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return UpdateElasticIpOutcome(NoResult());
  }
  else
  {
    return UpdateElasticIpOutcome(outcome.GetError());
  }
}

UpdateElasticIpOutcomeCallable OpsWorksClient::UpdateElasticIpCallable(const UpdateElasticIpRequest& request) const
{
  return std::async(std::launch::async, &OpsWorksClient::UpdateElasticIp, this, request);
}

void OpsWorksClient::UpdateElasticIpAsync(const UpdateElasticIpRequest& request, const UpdateElasticIpResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&OpsWorksClient::UpdateElasticIpAsyncHelper, this, request, handler, context);
}

void OpsWorksClient::UpdateElasticIpAsyncHelper(const UpdateElasticIpRequest& request, const UpdateElasticIpResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateElasticIp(request), context);
}

UpdateInstanceOutcome OpsWorksClient::UpdateInstance(const UpdateInstanceRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return UpdateInstanceOutcome(NoResult());
  }
  else
  {
    return UpdateInstanceOutcome(outcome.GetError());
  }
}

UpdateInstanceOutcomeCallable OpsWorksClient::UpdateInstanceCallable(const UpdateInstanceRequest& request) const
{
  return std::async(std::launch::async, &OpsWorksClient::UpdateInstance, this, request);
}

void OpsWorksClient::UpdateInstanceAsync(const UpdateInstanceRequest& request, const UpdateInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&OpsWorksClient::UpdateInstanceAsyncHelper, this, request, handler, context);
}

void OpsWorksClient::UpdateInstanceAsyncHelper(const UpdateInstanceRequest& request, const UpdateInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateInstance(request), context);
}

UpdateLayerOutcome OpsWorksClient::UpdateLayer(const UpdateLayerRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return UpdateLayerOutcome(NoResult());
  }
  else
  {
    return UpdateLayerOutcome(outcome.GetError());
  }
}

UpdateLayerOutcomeCallable OpsWorksClient::UpdateLayerCallable(const UpdateLayerRequest& request) const
{
  return std::async(std::launch::async, &OpsWorksClient::UpdateLayer, this, request);
}

void OpsWorksClient::UpdateLayerAsync(const UpdateLayerRequest& request, const UpdateLayerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&OpsWorksClient::UpdateLayerAsyncHelper, this, request, handler, context);
}

void OpsWorksClient::UpdateLayerAsyncHelper(const UpdateLayerRequest& request, const UpdateLayerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateLayer(request), context);
}

UpdateMyUserProfileOutcome OpsWorksClient::UpdateMyUserProfile(const UpdateMyUserProfileRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return UpdateMyUserProfileOutcome(NoResult());
  }
  else
  {
    return UpdateMyUserProfileOutcome(outcome.GetError());
  }
}

UpdateMyUserProfileOutcomeCallable OpsWorksClient::UpdateMyUserProfileCallable(const UpdateMyUserProfileRequest& request) const
{
  return std::async(std::launch::async, &OpsWorksClient::UpdateMyUserProfile, this, request);
}

void OpsWorksClient::UpdateMyUserProfileAsync(const UpdateMyUserProfileRequest& request, const UpdateMyUserProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&OpsWorksClient::UpdateMyUserProfileAsyncHelper, this, request, handler, context);
}

void OpsWorksClient::UpdateMyUserProfileAsyncHelper(const UpdateMyUserProfileRequest& request, const UpdateMyUserProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateMyUserProfile(request), context);
}

UpdateRdsDbInstanceOutcome OpsWorksClient::UpdateRdsDbInstance(const UpdateRdsDbInstanceRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return UpdateRdsDbInstanceOutcome(NoResult());
  }
  else
  {
    return UpdateRdsDbInstanceOutcome(outcome.GetError());
  }
}

UpdateRdsDbInstanceOutcomeCallable OpsWorksClient::UpdateRdsDbInstanceCallable(const UpdateRdsDbInstanceRequest& request) const
{
  return std::async(std::launch::async, &OpsWorksClient::UpdateRdsDbInstance, this, request);
}

void OpsWorksClient::UpdateRdsDbInstanceAsync(const UpdateRdsDbInstanceRequest& request, const UpdateRdsDbInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&OpsWorksClient::UpdateRdsDbInstanceAsyncHelper, this, request, handler, context);
}

void OpsWorksClient::UpdateRdsDbInstanceAsyncHelper(const UpdateRdsDbInstanceRequest& request, const UpdateRdsDbInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateRdsDbInstance(request), context);
}

UpdateStackOutcome OpsWorksClient::UpdateStack(const UpdateStackRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return UpdateStackOutcome(NoResult());
  }
  else
  {
    return UpdateStackOutcome(outcome.GetError());
  }
}

UpdateStackOutcomeCallable OpsWorksClient::UpdateStackCallable(const UpdateStackRequest& request) const
{
  return std::async(std::launch::async, &OpsWorksClient::UpdateStack, this, request);
}

void OpsWorksClient::UpdateStackAsync(const UpdateStackRequest& request, const UpdateStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&OpsWorksClient::UpdateStackAsyncHelper, this, request, handler, context);
}

void OpsWorksClient::UpdateStackAsyncHelper(const UpdateStackRequest& request, const UpdateStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateStack(request), context);
}

UpdateUserProfileOutcome OpsWorksClient::UpdateUserProfile(const UpdateUserProfileRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return UpdateUserProfileOutcome(NoResult());
  }
  else
  {
    return UpdateUserProfileOutcome(outcome.GetError());
  }
}

UpdateUserProfileOutcomeCallable OpsWorksClient::UpdateUserProfileCallable(const UpdateUserProfileRequest& request) const
{
  return std::async(std::launch::async, &OpsWorksClient::UpdateUserProfile, this, request);
}

void OpsWorksClient::UpdateUserProfileAsync(const UpdateUserProfileRequest& request, const UpdateUserProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&OpsWorksClient::UpdateUserProfileAsyncHelper, this, request, handler, context);
}

void OpsWorksClient::UpdateUserProfileAsyncHelper(const UpdateUserProfileRequest& request, const UpdateUserProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateUserProfile(request), context);
}

UpdateVolumeOutcome OpsWorksClient::UpdateVolume(const UpdateVolumeRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return UpdateVolumeOutcome(NoResult());
  }
  else
  {
    return UpdateVolumeOutcome(outcome.GetError());
  }
}

UpdateVolumeOutcomeCallable OpsWorksClient::UpdateVolumeCallable(const UpdateVolumeRequest& request) const
{
  return std::async(std::launch::async, &OpsWorksClient::UpdateVolume, this, request);
}

void OpsWorksClient::UpdateVolumeAsync(const UpdateVolumeRequest& request, const UpdateVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&OpsWorksClient::UpdateVolumeAsyncHelper, this, request, handler, context);
}

void OpsWorksClient::UpdateVolumeAsyncHelper(const UpdateVolumeRequest& request, const UpdateVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateVolume(request), context);
}

