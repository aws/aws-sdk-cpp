/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/opsworks/model/DeregisterElasticIpRequest.h>
#include <aws/opsworks/model/DeregisterInstanceRequest.h>
#include <aws/opsworks/model/DeregisterRdsDbInstanceRequest.h>
#include <aws/opsworks/model/DeregisterVolumeRequest.h>
#include <aws/opsworks/model/DescribeAppsRequest.h>
#include <aws/opsworks/model/DescribeCommandsRequest.h>
#include <aws/opsworks/model/DescribeDeploymentsRequest.h>
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
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG), SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<OpsWorksErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

OpsWorksClient::OpsWorksClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(Aws::MakeShared<HttpClientFactory>(ALLOCATION_TAG), clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials), SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<OpsWorksErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

OpsWorksClient::OpsWorksClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration, const std::shared_ptr<HttpClientFactory const>& httpClientFactory) :
  BASECLASS(httpClientFactory != nullptr ? httpClientFactory : Aws::MakeShared<HttpClientFactory>(ALLOCATION_TAG), clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME, clientConfiguration.region),
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

  if(config.endpointOverride.empty())
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

void OpsWorksClient::AssignInstanceAsync(const AssignInstanceRequest& request) const
{
  m_executor->Submit(&OpsWorksClient::AssignInstanceAsyncHelper, this, request);
}

void OpsWorksClient::AssignInstanceAsyncHelper(const AssignInstanceRequest& request) const
{
  m_onAssignInstanceOutcomeReceived(this, request, AssignInstance(request));
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

void OpsWorksClient::AssignVolumeAsync(const AssignVolumeRequest& request) const
{
  m_executor->Submit(&OpsWorksClient::AssignVolumeAsyncHelper, this, request);
}

void OpsWorksClient::AssignVolumeAsyncHelper(const AssignVolumeRequest& request) const
{
  m_onAssignVolumeOutcomeReceived(this, request, AssignVolume(request));
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

void OpsWorksClient::AssociateElasticIpAsync(const AssociateElasticIpRequest& request) const
{
  m_executor->Submit(&OpsWorksClient::AssociateElasticIpAsyncHelper, this, request);
}

void OpsWorksClient::AssociateElasticIpAsyncHelper(const AssociateElasticIpRequest& request) const
{
  m_onAssociateElasticIpOutcomeReceived(this, request, AssociateElasticIp(request));
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

void OpsWorksClient::AttachElasticLoadBalancerAsync(const AttachElasticLoadBalancerRequest& request) const
{
  m_executor->Submit(&OpsWorksClient::AttachElasticLoadBalancerAsyncHelper, this, request);
}

void OpsWorksClient::AttachElasticLoadBalancerAsyncHelper(const AttachElasticLoadBalancerRequest& request) const
{
  m_onAttachElasticLoadBalancerOutcomeReceived(this, request, AttachElasticLoadBalancer(request));
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

void OpsWorksClient::CloneStackAsync(const CloneStackRequest& request) const
{
  m_executor->Submit(&OpsWorksClient::CloneStackAsyncHelper, this, request);
}

void OpsWorksClient::CloneStackAsyncHelper(const CloneStackRequest& request) const
{
  m_onCloneStackOutcomeReceived(this, request, CloneStack(request));
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

void OpsWorksClient::CreateAppAsync(const CreateAppRequest& request) const
{
  m_executor->Submit(&OpsWorksClient::CreateAppAsyncHelper, this, request);
}

void OpsWorksClient::CreateAppAsyncHelper(const CreateAppRequest& request) const
{
  m_onCreateAppOutcomeReceived(this, request, CreateApp(request));
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

void OpsWorksClient::CreateDeploymentAsync(const CreateDeploymentRequest& request) const
{
  m_executor->Submit(&OpsWorksClient::CreateDeploymentAsyncHelper, this, request);
}

void OpsWorksClient::CreateDeploymentAsyncHelper(const CreateDeploymentRequest& request) const
{
  m_onCreateDeploymentOutcomeReceived(this, request, CreateDeployment(request));
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

void OpsWorksClient::CreateInstanceAsync(const CreateInstanceRequest& request) const
{
  m_executor->Submit(&OpsWorksClient::CreateInstanceAsyncHelper, this, request);
}

void OpsWorksClient::CreateInstanceAsyncHelper(const CreateInstanceRequest& request) const
{
  m_onCreateInstanceOutcomeReceived(this, request, CreateInstance(request));
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

void OpsWorksClient::CreateLayerAsync(const CreateLayerRequest& request) const
{
  m_executor->Submit(&OpsWorksClient::CreateLayerAsyncHelper, this, request);
}

void OpsWorksClient::CreateLayerAsyncHelper(const CreateLayerRequest& request) const
{
  m_onCreateLayerOutcomeReceived(this, request, CreateLayer(request));
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

void OpsWorksClient::CreateStackAsync(const CreateStackRequest& request) const
{
  m_executor->Submit(&OpsWorksClient::CreateStackAsyncHelper, this, request);
}

void OpsWorksClient::CreateStackAsyncHelper(const CreateStackRequest& request) const
{
  m_onCreateStackOutcomeReceived(this, request, CreateStack(request));
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

void OpsWorksClient::CreateUserProfileAsync(const CreateUserProfileRequest& request) const
{
  m_executor->Submit(&OpsWorksClient::CreateUserProfileAsyncHelper, this, request);
}

void OpsWorksClient::CreateUserProfileAsyncHelper(const CreateUserProfileRequest& request) const
{
  m_onCreateUserProfileOutcomeReceived(this, request, CreateUserProfile(request));
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

void OpsWorksClient::DeleteAppAsync(const DeleteAppRequest& request) const
{
  m_executor->Submit(&OpsWorksClient::DeleteAppAsyncHelper, this, request);
}

void OpsWorksClient::DeleteAppAsyncHelper(const DeleteAppRequest& request) const
{
  m_onDeleteAppOutcomeReceived(this, request, DeleteApp(request));
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

void OpsWorksClient::DeleteInstanceAsync(const DeleteInstanceRequest& request) const
{
  m_executor->Submit(&OpsWorksClient::DeleteInstanceAsyncHelper, this, request);
}

void OpsWorksClient::DeleteInstanceAsyncHelper(const DeleteInstanceRequest& request) const
{
  m_onDeleteInstanceOutcomeReceived(this, request, DeleteInstance(request));
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

void OpsWorksClient::DeleteLayerAsync(const DeleteLayerRequest& request) const
{
  m_executor->Submit(&OpsWorksClient::DeleteLayerAsyncHelper, this, request);
}

void OpsWorksClient::DeleteLayerAsyncHelper(const DeleteLayerRequest& request) const
{
  m_onDeleteLayerOutcomeReceived(this, request, DeleteLayer(request));
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

void OpsWorksClient::DeleteStackAsync(const DeleteStackRequest& request) const
{
  m_executor->Submit(&OpsWorksClient::DeleteStackAsyncHelper, this, request);
}

void OpsWorksClient::DeleteStackAsyncHelper(const DeleteStackRequest& request) const
{
  m_onDeleteStackOutcomeReceived(this, request, DeleteStack(request));
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

void OpsWorksClient::DeleteUserProfileAsync(const DeleteUserProfileRequest& request) const
{
  m_executor->Submit(&OpsWorksClient::DeleteUserProfileAsyncHelper, this, request);
}

void OpsWorksClient::DeleteUserProfileAsyncHelper(const DeleteUserProfileRequest& request) const
{
  m_onDeleteUserProfileOutcomeReceived(this, request, DeleteUserProfile(request));
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

void OpsWorksClient::DeregisterElasticIpAsync(const DeregisterElasticIpRequest& request) const
{
  m_executor->Submit(&OpsWorksClient::DeregisterElasticIpAsyncHelper, this, request);
}

void OpsWorksClient::DeregisterElasticIpAsyncHelper(const DeregisterElasticIpRequest& request) const
{
  m_onDeregisterElasticIpOutcomeReceived(this, request, DeregisterElasticIp(request));
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

void OpsWorksClient::DeregisterInstanceAsync(const DeregisterInstanceRequest& request) const
{
  m_executor->Submit(&OpsWorksClient::DeregisterInstanceAsyncHelper, this, request);
}

void OpsWorksClient::DeregisterInstanceAsyncHelper(const DeregisterInstanceRequest& request) const
{
  m_onDeregisterInstanceOutcomeReceived(this, request, DeregisterInstance(request));
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

void OpsWorksClient::DeregisterRdsDbInstanceAsync(const DeregisterRdsDbInstanceRequest& request) const
{
  m_executor->Submit(&OpsWorksClient::DeregisterRdsDbInstanceAsyncHelper, this, request);
}

void OpsWorksClient::DeregisterRdsDbInstanceAsyncHelper(const DeregisterRdsDbInstanceRequest& request) const
{
  m_onDeregisterRdsDbInstanceOutcomeReceived(this, request, DeregisterRdsDbInstance(request));
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

void OpsWorksClient::DeregisterVolumeAsync(const DeregisterVolumeRequest& request) const
{
  m_executor->Submit(&OpsWorksClient::DeregisterVolumeAsyncHelper, this, request);
}

void OpsWorksClient::DeregisterVolumeAsyncHelper(const DeregisterVolumeRequest& request) const
{
  m_onDeregisterVolumeOutcomeReceived(this, request, DeregisterVolume(request));
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

void OpsWorksClient::DescribeAppsAsync(const DescribeAppsRequest& request) const
{
  m_executor->Submit(&OpsWorksClient::DescribeAppsAsyncHelper, this, request);
}

void OpsWorksClient::DescribeAppsAsyncHelper(const DescribeAppsRequest& request) const
{
  m_onDescribeAppsOutcomeReceived(this, request, DescribeApps(request));
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

void OpsWorksClient::DescribeCommandsAsync(const DescribeCommandsRequest& request) const
{
  m_executor->Submit(&OpsWorksClient::DescribeCommandsAsyncHelper, this, request);
}

void OpsWorksClient::DescribeCommandsAsyncHelper(const DescribeCommandsRequest& request) const
{
  m_onDescribeCommandsOutcomeReceived(this, request, DescribeCommands(request));
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

void OpsWorksClient::DescribeDeploymentsAsync(const DescribeDeploymentsRequest& request) const
{
  m_executor->Submit(&OpsWorksClient::DescribeDeploymentsAsyncHelper, this, request);
}

void OpsWorksClient::DescribeDeploymentsAsyncHelper(const DescribeDeploymentsRequest& request) const
{
  m_onDescribeDeploymentsOutcomeReceived(this, request, DescribeDeployments(request));
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

void OpsWorksClient::DescribeElasticIpsAsync(const DescribeElasticIpsRequest& request) const
{
  m_executor->Submit(&OpsWorksClient::DescribeElasticIpsAsyncHelper, this, request);
}

void OpsWorksClient::DescribeElasticIpsAsyncHelper(const DescribeElasticIpsRequest& request) const
{
  m_onDescribeElasticIpsOutcomeReceived(this, request, DescribeElasticIps(request));
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

void OpsWorksClient::DescribeElasticLoadBalancersAsync(const DescribeElasticLoadBalancersRequest& request) const
{
  m_executor->Submit(&OpsWorksClient::DescribeElasticLoadBalancersAsyncHelper, this, request);
}

void OpsWorksClient::DescribeElasticLoadBalancersAsyncHelper(const DescribeElasticLoadBalancersRequest& request) const
{
  m_onDescribeElasticLoadBalancersOutcomeReceived(this, request, DescribeElasticLoadBalancers(request));
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

void OpsWorksClient::DescribeInstancesAsync(const DescribeInstancesRequest& request) const
{
  m_executor->Submit(&OpsWorksClient::DescribeInstancesAsyncHelper, this, request);
}

void OpsWorksClient::DescribeInstancesAsyncHelper(const DescribeInstancesRequest& request) const
{
  m_onDescribeInstancesOutcomeReceived(this, request, DescribeInstances(request));
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

void OpsWorksClient::DescribeLayersAsync(const DescribeLayersRequest& request) const
{
  m_executor->Submit(&OpsWorksClient::DescribeLayersAsyncHelper, this, request);
}

void OpsWorksClient::DescribeLayersAsyncHelper(const DescribeLayersRequest& request) const
{
  m_onDescribeLayersOutcomeReceived(this, request, DescribeLayers(request));
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

void OpsWorksClient::DescribeLoadBasedAutoScalingAsync(const DescribeLoadBasedAutoScalingRequest& request) const
{
  m_executor->Submit(&OpsWorksClient::DescribeLoadBasedAutoScalingAsyncHelper, this, request);
}

void OpsWorksClient::DescribeLoadBasedAutoScalingAsyncHelper(const DescribeLoadBasedAutoScalingRequest& request) const
{
  m_onDescribeLoadBasedAutoScalingOutcomeReceived(this, request, DescribeLoadBasedAutoScaling(request));
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

void OpsWorksClient::DescribeMyUserProfileAsync() const
{
  m_executor->Submit(&OpsWorksClient::DescribeMyUserProfileAsyncHelper, this);
}

void OpsWorksClient::DescribeMyUserProfileAsyncHelper() const
{
  m_onDescribeMyUserProfileOutcomeReceived(this, DescribeMyUserProfile());
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

void OpsWorksClient::DescribePermissionsAsync(const DescribePermissionsRequest& request) const
{
  m_executor->Submit(&OpsWorksClient::DescribePermissionsAsyncHelper, this, request);
}

void OpsWorksClient::DescribePermissionsAsyncHelper(const DescribePermissionsRequest& request) const
{
  m_onDescribePermissionsOutcomeReceived(this, request, DescribePermissions(request));
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

void OpsWorksClient::DescribeRaidArraysAsync(const DescribeRaidArraysRequest& request) const
{
  m_executor->Submit(&OpsWorksClient::DescribeRaidArraysAsyncHelper, this, request);
}

void OpsWorksClient::DescribeRaidArraysAsyncHelper(const DescribeRaidArraysRequest& request) const
{
  m_onDescribeRaidArraysOutcomeReceived(this, request, DescribeRaidArrays(request));
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

void OpsWorksClient::DescribeRdsDbInstancesAsync(const DescribeRdsDbInstancesRequest& request) const
{
  m_executor->Submit(&OpsWorksClient::DescribeRdsDbInstancesAsyncHelper, this, request);
}

void OpsWorksClient::DescribeRdsDbInstancesAsyncHelper(const DescribeRdsDbInstancesRequest& request) const
{
  m_onDescribeRdsDbInstancesOutcomeReceived(this, request, DescribeRdsDbInstances(request));
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

void OpsWorksClient::DescribeServiceErrorsAsync(const DescribeServiceErrorsRequest& request) const
{
  m_executor->Submit(&OpsWorksClient::DescribeServiceErrorsAsyncHelper, this, request);
}

void OpsWorksClient::DescribeServiceErrorsAsyncHelper(const DescribeServiceErrorsRequest& request) const
{
  m_onDescribeServiceErrorsOutcomeReceived(this, request, DescribeServiceErrors(request));
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

void OpsWorksClient::DescribeStackProvisioningParametersAsync(const DescribeStackProvisioningParametersRequest& request) const
{
  m_executor->Submit(&OpsWorksClient::DescribeStackProvisioningParametersAsyncHelper, this, request);
}

void OpsWorksClient::DescribeStackProvisioningParametersAsyncHelper(const DescribeStackProvisioningParametersRequest& request) const
{
  m_onDescribeStackProvisioningParametersOutcomeReceived(this, request, DescribeStackProvisioningParameters(request));
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

void OpsWorksClient::DescribeStackSummaryAsync(const DescribeStackSummaryRequest& request) const
{
  m_executor->Submit(&OpsWorksClient::DescribeStackSummaryAsyncHelper, this, request);
}

void OpsWorksClient::DescribeStackSummaryAsyncHelper(const DescribeStackSummaryRequest& request) const
{
  m_onDescribeStackSummaryOutcomeReceived(this, request, DescribeStackSummary(request));
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

void OpsWorksClient::DescribeStacksAsync(const DescribeStacksRequest& request) const
{
  m_executor->Submit(&OpsWorksClient::DescribeStacksAsyncHelper, this, request);
}

void OpsWorksClient::DescribeStacksAsyncHelper(const DescribeStacksRequest& request) const
{
  m_onDescribeStacksOutcomeReceived(this, request, DescribeStacks(request));
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

void OpsWorksClient::DescribeTimeBasedAutoScalingAsync(const DescribeTimeBasedAutoScalingRequest& request) const
{
  m_executor->Submit(&OpsWorksClient::DescribeTimeBasedAutoScalingAsyncHelper, this, request);
}

void OpsWorksClient::DescribeTimeBasedAutoScalingAsyncHelper(const DescribeTimeBasedAutoScalingRequest& request) const
{
  m_onDescribeTimeBasedAutoScalingOutcomeReceived(this, request, DescribeTimeBasedAutoScaling(request));
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

void OpsWorksClient::DescribeUserProfilesAsync(const DescribeUserProfilesRequest& request) const
{
  m_executor->Submit(&OpsWorksClient::DescribeUserProfilesAsyncHelper, this, request);
}

void OpsWorksClient::DescribeUserProfilesAsyncHelper(const DescribeUserProfilesRequest& request) const
{
  m_onDescribeUserProfilesOutcomeReceived(this, request, DescribeUserProfiles(request));
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

void OpsWorksClient::DescribeVolumesAsync(const DescribeVolumesRequest& request) const
{
  m_executor->Submit(&OpsWorksClient::DescribeVolumesAsyncHelper, this, request);
}

void OpsWorksClient::DescribeVolumesAsyncHelper(const DescribeVolumesRequest& request) const
{
  m_onDescribeVolumesOutcomeReceived(this, request, DescribeVolumes(request));
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

void OpsWorksClient::DetachElasticLoadBalancerAsync(const DetachElasticLoadBalancerRequest& request) const
{
  m_executor->Submit(&OpsWorksClient::DetachElasticLoadBalancerAsyncHelper, this, request);
}

void OpsWorksClient::DetachElasticLoadBalancerAsyncHelper(const DetachElasticLoadBalancerRequest& request) const
{
  m_onDetachElasticLoadBalancerOutcomeReceived(this, request, DetachElasticLoadBalancer(request));
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

void OpsWorksClient::DisassociateElasticIpAsync(const DisassociateElasticIpRequest& request) const
{
  m_executor->Submit(&OpsWorksClient::DisassociateElasticIpAsyncHelper, this, request);
}

void OpsWorksClient::DisassociateElasticIpAsyncHelper(const DisassociateElasticIpRequest& request) const
{
  m_onDisassociateElasticIpOutcomeReceived(this, request, DisassociateElasticIp(request));
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

void OpsWorksClient::GetHostnameSuggestionAsync(const GetHostnameSuggestionRequest& request) const
{
  m_executor->Submit(&OpsWorksClient::GetHostnameSuggestionAsyncHelper, this, request);
}

void OpsWorksClient::GetHostnameSuggestionAsyncHelper(const GetHostnameSuggestionRequest& request) const
{
  m_onGetHostnameSuggestionOutcomeReceived(this, request, GetHostnameSuggestion(request));
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

void OpsWorksClient::GrantAccessAsync(const GrantAccessRequest& request) const
{
  m_executor->Submit(&OpsWorksClient::GrantAccessAsyncHelper, this, request);
}

void OpsWorksClient::GrantAccessAsyncHelper(const GrantAccessRequest& request) const
{
  m_onGrantAccessOutcomeReceived(this, request, GrantAccess(request));
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

void OpsWorksClient::RebootInstanceAsync(const RebootInstanceRequest& request) const
{
  m_executor->Submit(&OpsWorksClient::RebootInstanceAsyncHelper, this, request);
}

void OpsWorksClient::RebootInstanceAsyncHelper(const RebootInstanceRequest& request) const
{
  m_onRebootInstanceOutcomeReceived(this, request, RebootInstance(request));
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

void OpsWorksClient::RegisterElasticIpAsync(const RegisterElasticIpRequest& request) const
{
  m_executor->Submit(&OpsWorksClient::RegisterElasticIpAsyncHelper, this, request);
}

void OpsWorksClient::RegisterElasticIpAsyncHelper(const RegisterElasticIpRequest& request) const
{
  m_onRegisterElasticIpOutcomeReceived(this, request, RegisterElasticIp(request));
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

void OpsWorksClient::RegisterInstanceAsync(const RegisterInstanceRequest& request) const
{
  m_executor->Submit(&OpsWorksClient::RegisterInstanceAsyncHelper, this, request);
}

void OpsWorksClient::RegisterInstanceAsyncHelper(const RegisterInstanceRequest& request) const
{
  m_onRegisterInstanceOutcomeReceived(this, request, RegisterInstance(request));
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

void OpsWorksClient::RegisterRdsDbInstanceAsync(const RegisterRdsDbInstanceRequest& request) const
{
  m_executor->Submit(&OpsWorksClient::RegisterRdsDbInstanceAsyncHelper, this, request);
}

void OpsWorksClient::RegisterRdsDbInstanceAsyncHelper(const RegisterRdsDbInstanceRequest& request) const
{
  m_onRegisterRdsDbInstanceOutcomeReceived(this, request, RegisterRdsDbInstance(request));
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

void OpsWorksClient::RegisterVolumeAsync(const RegisterVolumeRequest& request) const
{
  m_executor->Submit(&OpsWorksClient::RegisterVolumeAsyncHelper, this, request);
}

void OpsWorksClient::RegisterVolumeAsyncHelper(const RegisterVolumeRequest& request) const
{
  m_onRegisterVolumeOutcomeReceived(this, request, RegisterVolume(request));
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

void OpsWorksClient::SetLoadBasedAutoScalingAsync(const SetLoadBasedAutoScalingRequest& request) const
{
  m_executor->Submit(&OpsWorksClient::SetLoadBasedAutoScalingAsyncHelper, this, request);
}

void OpsWorksClient::SetLoadBasedAutoScalingAsyncHelper(const SetLoadBasedAutoScalingRequest& request) const
{
  m_onSetLoadBasedAutoScalingOutcomeReceived(this, request, SetLoadBasedAutoScaling(request));
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

void OpsWorksClient::SetPermissionAsync(const SetPermissionRequest& request) const
{
  m_executor->Submit(&OpsWorksClient::SetPermissionAsyncHelper, this, request);
}

void OpsWorksClient::SetPermissionAsyncHelper(const SetPermissionRequest& request) const
{
  m_onSetPermissionOutcomeReceived(this, request, SetPermission(request));
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

void OpsWorksClient::SetTimeBasedAutoScalingAsync(const SetTimeBasedAutoScalingRequest& request) const
{
  m_executor->Submit(&OpsWorksClient::SetTimeBasedAutoScalingAsyncHelper, this, request);
}

void OpsWorksClient::SetTimeBasedAutoScalingAsyncHelper(const SetTimeBasedAutoScalingRequest& request) const
{
  m_onSetTimeBasedAutoScalingOutcomeReceived(this, request, SetTimeBasedAutoScaling(request));
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

void OpsWorksClient::StartInstanceAsync(const StartInstanceRequest& request) const
{
  m_executor->Submit(&OpsWorksClient::StartInstanceAsyncHelper, this, request);
}

void OpsWorksClient::StartInstanceAsyncHelper(const StartInstanceRequest& request) const
{
  m_onStartInstanceOutcomeReceived(this, request, StartInstance(request));
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

void OpsWorksClient::StartStackAsync(const StartStackRequest& request) const
{
  m_executor->Submit(&OpsWorksClient::StartStackAsyncHelper, this, request);
}

void OpsWorksClient::StartStackAsyncHelper(const StartStackRequest& request) const
{
  m_onStartStackOutcomeReceived(this, request, StartStack(request));
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

void OpsWorksClient::StopInstanceAsync(const StopInstanceRequest& request) const
{
  m_executor->Submit(&OpsWorksClient::StopInstanceAsyncHelper, this, request);
}

void OpsWorksClient::StopInstanceAsyncHelper(const StopInstanceRequest& request) const
{
  m_onStopInstanceOutcomeReceived(this, request, StopInstance(request));
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

void OpsWorksClient::StopStackAsync(const StopStackRequest& request) const
{
  m_executor->Submit(&OpsWorksClient::StopStackAsyncHelper, this, request);
}

void OpsWorksClient::StopStackAsyncHelper(const StopStackRequest& request) const
{
  m_onStopStackOutcomeReceived(this, request, StopStack(request));
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

void OpsWorksClient::UnassignInstanceAsync(const UnassignInstanceRequest& request) const
{
  m_executor->Submit(&OpsWorksClient::UnassignInstanceAsyncHelper, this, request);
}

void OpsWorksClient::UnassignInstanceAsyncHelper(const UnassignInstanceRequest& request) const
{
  m_onUnassignInstanceOutcomeReceived(this, request, UnassignInstance(request));
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

void OpsWorksClient::UnassignVolumeAsync(const UnassignVolumeRequest& request) const
{
  m_executor->Submit(&OpsWorksClient::UnassignVolumeAsyncHelper, this, request);
}

void OpsWorksClient::UnassignVolumeAsyncHelper(const UnassignVolumeRequest& request) const
{
  m_onUnassignVolumeOutcomeReceived(this, request, UnassignVolume(request));
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

void OpsWorksClient::UpdateAppAsync(const UpdateAppRequest& request) const
{
  m_executor->Submit(&OpsWorksClient::UpdateAppAsyncHelper, this, request);
}

void OpsWorksClient::UpdateAppAsyncHelper(const UpdateAppRequest& request) const
{
  m_onUpdateAppOutcomeReceived(this, request, UpdateApp(request));
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

void OpsWorksClient::UpdateElasticIpAsync(const UpdateElasticIpRequest& request) const
{
  m_executor->Submit(&OpsWorksClient::UpdateElasticIpAsyncHelper, this, request);
}

void OpsWorksClient::UpdateElasticIpAsyncHelper(const UpdateElasticIpRequest& request) const
{
  m_onUpdateElasticIpOutcomeReceived(this, request, UpdateElasticIp(request));
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

void OpsWorksClient::UpdateInstanceAsync(const UpdateInstanceRequest& request) const
{
  m_executor->Submit(&OpsWorksClient::UpdateInstanceAsyncHelper, this, request);
}

void OpsWorksClient::UpdateInstanceAsyncHelper(const UpdateInstanceRequest& request) const
{
  m_onUpdateInstanceOutcomeReceived(this, request, UpdateInstance(request));
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

void OpsWorksClient::UpdateLayerAsync(const UpdateLayerRequest& request) const
{
  m_executor->Submit(&OpsWorksClient::UpdateLayerAsyncHelper, this, request);
}

void OpsWorksClient::UpdateLayerAsyncHelper(const UpdateLayerRequest& request) const
{
  m_onUpdateLayerOutcomeReceived(this, request, UpdateLayer(request));
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

void OpsWorksClient::UpdateMyUserProfileAsync(const UpdateMyUserProfileRequest& request) const
{
  m_executor->Submit(&OpsWorksClient::UpdateMyUserProfileAsyncHelper, this, request);
}

void OpsWorksClient::UpdateMyUserProfileAsyncHelper(const UpdateMyUserProfileRequest& request) const
{
  m_onUpdateMyUserProfileOutcomeReceived(this, request, UpdateMyUserProfile(request));
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

void OpsWorksClient::UpdateRdsDbInstanceAsync(const UpdateRdsDbInstanceRequest& request) const
{
  m_executor->Submit(&OpsWorksClient::UpdateRdsDbInstanceAsyncHelper, this, request);
}

void OpsWorksClient::UpdateRdsDbInstanceAsyncHelper(const UpdateRdsDbInstanceRequest& request) const
{
  m_onUpdateRdsDbInstanceOutcomeReceived(this, request, UpdateRdsDbInstance(request));
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

void OpsWorksClient::UpdateStackAsync(const UpdateStackRequest& request) const
{
  m_executor->Submit(&OpsWorksClient::UpdateStackAsyncHelper, this, request);
}

void OpsWorksClient::UpdateStackAsyncHelper(const UpdateStackRequest& request) const
{
  m_onUpdateStackOutcomeReceived(this, request, UpdateStack(request));
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

void OpsWorksClient::UpdateUserProfileAsync(const UpdateUserProfileRequest& request) const
{
  m_executor->Submit(&OpsWorksClient::UpdateUserProfileAsyncHelper, this, request);
}

void OpsWorksClient::UpdateUserProfileAsyncHelper(const UpdateUserProfileRequest& request) const
{
  m_onUpdateUserProfileOutcomeReceived(this, request, UpdateUserProfile(request));
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

void OpsWorksClient::UpdateVolumeAsync(const UpdateVolumeRequest& request) const
{
  m_executor->Submit(&OpsWorksClient::UpdateVolumeAsyncHelper, this, request);
}

void OpsWorksClient::UpdateVolumeAsyncHelper(const UpdateVolumeRequest& request) const
{
  m_onUpdateVolumeOutcomeReceived(this, request, UpdateVolume(request));
}

