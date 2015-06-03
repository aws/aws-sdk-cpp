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
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/redshift/RedshiftClient.h>
#include <aws/redshift/RedshiftEndpoint.h>
#include <aws/redshift/RedshiftErrorMarshaller.h>
#include <aws/redshift/model/AuthorizeClusterSecurityGroupIngressRequest.h>
#include <aws/redshift/model/AuthorizeSnapshotAccessRequest.h>
#include <aws/redshift/model/CopyClusterSnapshotRequest.h>
#include <aws/redshift/model/CreateClusterRequest.h>
#include <aws/redshift/model/CreateClusterParameterGroupRequest.h>
#include <aws/redshift/model/CreateClusterSecurityGroupRequest.h>
#include <aws/redshift/model/CreateClusterSnapshotRequest.h>
#include <aws/redshift/model/CreateClusterSubnetGroupRequest.h>
#include <aws/redshift/model/CreateEventSubscriptionRequest.h>
#include <aws/redshift/model/CreateHsmClientCertificateRequest.h>
#include <aws/redshift/model/CreateHsmConfigurationRequest.h>
#include <aws/redshift/model/CreateTagsRequest.h>
#include <aws/redshift/model/DeleteClusterRequest.h>
#include <aws/redshift/model/DeleteClusterParameterGroupRequest.h>
#include <aws/redshift/model/DeleteClusterSecurityGroupRequest.h>
#include <aws/redshift/model/DeleteClusterSnapshotRequest.h>
#include <aws/redshift/model/DeleteClusterSubnetGroupRequest.h>
#include <aws/redshift/model/DeleteEventSubscriptionRequest.h>
#include <aws/redshift/model/DeleteHsmClientCertificateRequest.h>
#include <aws/redshift/model/DeleteHsmConfigurationRequest.h>
#include <aws/redshift/model/DeleteTagsRequest.h>
#include <aws/redshift/model/DescribeClusterParameterGroupsRequest.h>
#include <aws/redshift/model/DescribeClusterParametersRequest.h>
#include <aws/redshift/model/DescribeClusterSecurityGroupsRequest.h>
#include <aws/redshift/model/DescribeClusterSnapshotsRequest.h>
#include <aws/redshift/model/DescribeClusterSubnetGroupsRequest.h>
#include <aws/redshift/model/DescribeClusterVersionsRequest.h>
#include <aws/redshift/model/DescribeClustersRequest.h>
#include <aws/redshift/model/DescribeDefaultClusterParametersRequest.h>
#include <aws/redshift/model/DescribeEventCategoriesRequest.h>
#include <aws/redshift/model/DescribeEventSubscriptionsRequest.h>
#include <aws/redshift/model/DescribeEventsRequest.h>
#include <aws/redshift/model/DescribeHsmClientCertificatesRequest.h>
#include <aws/redshift/model/DescribeHsmConfigurationsRequest.h>
#include <aws/redshift/model/DescribeLoggingStatusRequest.h>
#include <aws/redshift/model/DescribeOrderableClusterOptionsRequest.h>
#include <aws/redshift/model/DescribeReservedNodeOfferingsRequest.h>
#include <aws/redshift/model/DescribeReservedNodesRequest.h>
#include <aws/redshift/model/DescribeResizeRequest.h>
#include <aws/redshift/model/DescribeTagsRequest.h>
#include <aws/redshift/model/DisableLoggingRequest.h>
#include <aws/redshift/model/DisableSnapshotCopyRequest.h>
#include <aws/redshift/model/EnableLoggingRequest.h>
#include <aws/redshift/model/EnableSnapshotCopyRequest.h>
#include <aws/redshift/model/ModifyClusterRequest.h>
#include <aws/redshift/model/ModifyClusterParameterGroupRequest.h>
#include <aws/redshift/model/ModifyClusterSubnetGroupRequest.h>
#include <aws/redshift/model/ModifyEventSubscriptionRequest.h>
#include <aws/redshift/model/ModifySnapshotCopyRetentionPeriodRequest.h>
#include <aws/redshift/model/PurchaseReservedNodeOfferingRequest.h>
#include <aws/redshift/model/RebootClusterRequest.h>
#include <aws/redshift/model/ResetClusterParameterGroupRequest.h>
#include <aws/redshift/model/RestoreFromClusterSnapshotRequest.h>
#include <aws/redshift/model/RevokeClusterSecurityGroupIngressRequest.h>
#include <aws/redshift/model/RevokeSnapshotAccessRequest.h>
#include <aws/redshift/model/RotateEncryptionKeyRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Redshift;
using namespace Aws::Redshift::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Xml;


static const char* SERVICE_NAME = "redshift";
static const char* ALLOCATION_TAG = "RedshiftClient";

RedshiftClient::RedshiftClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(Aws::MakeShared<HttpClientFactory>(ALLOCATION_TAG), clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG), SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<RedshiftErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

RedshiftClient::RedshiftClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(Aws::MakeShared<HttpClientFactory>(ALLOCATION_TAG), clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials), SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<RedshiftErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

RedshiftClient::RedshiftClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration, const std::shared_ptr<HttpClientFactory const>& httpClientFactory) :
  BASECLASS(httpClientFactory != nullptr ? httpClientFactory : Aws::MakeShared<HttpClientFactory>(ALLOCATION_TAG), clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<RedshiftErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

RedshiftClient::~RedshiftClient()
{
}

void RedshiftClient::init(const ClientConfiguration& config)
{
  Aws::StringStream ss;
  ss << SchemeMapper::ToString(config.scheme) << "://";

  if(config.endpointOverride.empty())
  {
    ss << RedshiftEndpoint::ForRegion(config.region);
  }
  else
  {
    ss << config.endpointOverride;
  }

  m_uri = ss.str();
}

AuthorizeClusterSecurityGroupIngressOutcome RedshiftClient::AuthorizeClusterSecurityGroupIngress(const AuthorizeClusterSecurityGroupIngressRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return AuthorizeClusterSecurityGroupIngressOutcome(AuthorizeClusterSecurityGroupIngressResult(outcome.GetResult()));
  }
  else
  {
    return AuthorizeClusterSecurityGroupIngressOutcome(outcome.GetError());
  }
}

AuthorizeClusterSecurityGroupIngressOutcomeCallable RedshiftClient::AuthorizeClusterSecurityGroupIngressCallable(const AuthorizeClusterSecurityGroupIngressRequest& request) const
{
  return std::async(std::launch::async, &RedshiftClient::AuthorizeClusterSecurityGroupIngress, this, request);
}

void RedshiftClient::AuthorizeClusterSecurityGroupIngressAsync(const AuthorizeClusterSecurityGroupIngressRequest& request) const
{
  m_executor->Submit(&RedshiftClient::AuthorizeClusterSecurityGroupIngressAsyncHelper, this, request);
}

void RedshiftClient::AuthorizeClusterSecurityGroupIngressAsyncHelper(const AuthorizeClusterSecurityGroupIngressRequest& request) const
{
  m_onAuthorizeClusterSecurityGroupIngressOutcomeReceived(this, request, AuthorizeClusterSecurityGroupIngress(request));
}

AuthorizeSnapshotAccessOutcome RedshiftClient::AuthorizeSnapshotAccess(const AuthorizeSnapshotAccessRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return AuthorizeSnapshotAccessOutcome(AuthorizeSnapshotAccessResult(outcome.GetResult()));
  }
  else
  {
    return AuthorizeSnapshotAccessOutcome(outcome.GetError());
  }
}

AuthorizeSnapshotAccessOutcomeCallable RedshiftClient::AuthorizeSnapshotAccessCallable(const AuthorizeSnapshotAccessRequest& request) const
{
  return std::async(std::launch::async, &RedshiftClient::AuthorizeSnapshotAccess, this, request);
}

void RedshiftClient::AuthorizeSnapshotAccessAsync(const AuthorizeSnapshotAccessRequest& request) const
{
  m_executor->Submit(&RedshiftClient::AuthorizeSnapshotAccessAsyncHelper, this, request);
}

void RedshiftClient::AuthorizeSnapshotAccessAsyncHelper(const AuthorizeSnapshotAccessRequest& request) const
{
  m_onAuthorizeSnapshotAccessOutcomeReceived(this, request, AuthorizeSnapshotAccess(request));
}

CopyClusterSnapshotOutcome RedshiftClient::CopyClusterSnapshot(const CopyClusterSnapshotRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CopyClusterSnapshotOutcome(CopyClusterSnapshotResult(outcome.GetResult()));
  }
  else
  {
    return CopyClusterSnapshotOutcome(outcome.GetError());
  }
}

CopyClusterSnapshotOutcomeCallable RedshiftClient::CopyClusterSnapshotCallable(const CopyClusterSnapshotRequest& request) const
{
  return std::async(std::launch::async, &RedshiftClient::CopyClusterSnapshot, this, request);
}

void RedshiftClient::CopyClusterSnapshotAsync(const CopyClusterSnapshotRequest& request) const
{
  m_executor->Submit(&RedshiftClient::CopyClusterSnapshotAsyncHelper, this, request);
}

void RedshiftClient::CopyClusterSnapshotAsyncHelper(const CopyClusterSnapshotRequest& request) const
{
  m_onCopyClusterSnapshotOutcomeReceived(this, request, CopyClusterSnapshot(request));
}

CreateClusterOutcome RedshiftClient::CreateCluster(const CreateClusterRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateClusterOutcome(CreateClusterResult(outcome.GetResult()));
  }
  else
  {
    return CreateClusterOutcome(outcome.GetError());
  }
}

CreateClusterOutcomeCallable RedshiftClient::CreateClusterCallable(const CreateClusterRequest& request) const
{
  return std::async(std::launch::async, &RedshiftClient::CreateCluster, this, request);
}

void RedshiftClient::CreateClusterAsync(const CreateClusterRequest& request) const
{
  m_executor->Submit(&RedshiftClient::CreateClusterAsyncHelper, this, request);
}

void RedshiftClient::CreateClusterAsyncHelper(const CreateClusterRequest& request) const
{
  m_onCreateClusterOutcomeReceived(this, request, CreateCluster(request));
}

CreateClusterParameterGroupOutcome RedshiftClient::CreateClusterParameterGroup(const CreateClusterParameterGroupRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateClusterParameterGroupOutcome(CreateClusterParameterGroupResult(outcome.GetResult()));
  }
  else
  {
    return CreateClusterParameterGroupOutcome(outcome.GetError());
  }
}

CreateClusterParameterGroupOutcomeCallable RedshiftClient::CreateClusterParameterGroupCallable(const CreateClusterParameterGroupRequest& request) const
{
  return std::async(std::launch::async, &RedshiftClient::CreateClusterParameterGroup, this, request);
}

void RedshiftClient::CreateClusterParameterGroupAsync(const CreateClusterParameterGroupRequest& request) const
{
  m_executor->Submit(&RedshiftClient::CreateClusterParameterGroupAsyncHelper, this, request);
}

void RedshiftClient::CreateClusterParameterGroupAsyncHelper(const CreateClusterParameterGroupRequest& request) const
{
  m_onCreateClusterParameterGroupOutcomeReceived(this, request, CreateClusterParameterGroup(request));
}

CreateClusterSecurityGroupOutcome RedshiftClient::CreateClusterSecurityGroup(const CreateClusterSecurityGroupRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateClusterSecurityGroupOutcome(CreateClusterSecurityGroupResult(outcome.GetResult()));
  }
  else
  {
    return CreateClusterSecurityGroupOutcome(outcome.GetError());
  }
}

CreateClusterSecurityGroupOutcomeCallable RedshiftClient::CreateClusterSecurityGroupCallable(const CreateClusterSecurityGroupRequest& request) const
{
  return std::async(std::launch::async, &RedshiftClient::CreateClusterSecurityGroup, this, request);
}

void RedshiftClient::CreateClusterSecurityGroupAsync(const CreateClusterSecurityGroupRequest& request) const
{
  m_executor->Submit(&RedshiftClient::CreateClusterSecurityGroupAsyncHelper, this, request);
}

void RedshiftClient::CreateClusterSecurityGroupAsyncHelper(const CreateClusterSecurityGroupRequest& request) const
{
  m_onCreateClusterSecurityGroupOutcomeReceived(this, request, CreateClusterSecurityGroup(request));
}

CreateClusterSnapshotOutcome RedshiftClient::CreateClusterSnapshot(const CreateClusterSnapshotRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateClusterSnapshotOutcome(CreateClusterSnapshotResult(outcome.GetResult()));
  }
  else
  {
    return CreateClusterSnapshotOutcome(outcome.GetError());
  }
}

CreateClusterSnapshotOutcomeCallable RedshiftClient::CreateClusterSnapshotCallable(const CreateClusterSnapshotRequest& request) const
{
  return std::async(std::launch::async, &RedshiftClient::CreateClusterSnapshot, this, request);
}

void RedshiftClient::CreateClusterSnapshotAsync(const CreateClusterSnapshotRequest& request) const
{
  m_executor->Submit(&RedshiftClient::CreateClusterSnapshotAsyncHelper, this, request);
}

void RedshiftClient::CreateClusterSnapshotAsyncHelper(const CreateClusterSnapshotRequest& request) const
{
  m_onCreateClusterSnapshotOutcomeReceived(this, request, CreateClusterSnapshot(request));
}

CreateClusterSubnetGroupOutcome RedshiftClient::CreateClusterSubnetGroup(const CreateClusterSubnetGroupRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateClusterSubnetGroupOutcome(CreateClusterSubnetGroupResult(outcome.GetResult()));
  }
  else
  {
    return CreateClusterSubnetGroupOutcome(outcome.GetError());
  }
}

CreateClusterSubnetGroupOutcomeCallable RedshiftClient::CreateClusterSubnetGroupCallable(const CreateClusterSubnetGroupRequest& request) const
{
  return std::async(std::launch::async, &RedshiftClient::CreateClusterSubnetGroup, this, request);
}

void RedshiftClient::CreateClusterSubnetGroupAsync(const CreateClusterSubnetGroupRequest& request) const
{
  m_executor->Submit(&RedshiftClient::CreateClusterSubnetGroupAsyncHelper, this, request);
}

void RedshiftClient::CreateClusterSubnetGroupAsyncHelper(const CreateClusterSubnetGroupRequest& request) const
{
  m_onCreateClusterSubnetGroupOutcomeReceived(this, request, CreateClusterSubnetGroup(request));
}

CreateEventSubscriptionOutcome RedshiftClient::CreateEventSubscription(const CreateEventSubscriptionRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateEventSubscriptionOutcome(CreateEventSubscriptionResult(outcome.GetResult()));
  }
  else
  {
    return CreateEventSubscriptionOutcome(outcome.GetError());
  }
}

CreateEventSubscriptionOutcomeCallable RedshiftClient::CreateEventSubscriptionCallable(const CreateEventSubscriptionRequest& request) const
{
  return std::async(std::launch::async, &RedshiftClient::CreateEventSubscription, this, request);
}

void RedshiftClient::CreateEventSubscriptionAsync(const CreateEventSubscriptionRequest& request) const
{
  m_executor->Submit(&RedshiftClient::CreateEventSubscriptionAsyncHelper, this, request);
}

void RedshiftClient::CreateEventSubscriptionAsyncHelper(const CreateEventSubscriptionRequest& request) const
{
  m_onCreateEventSubscriptionOutcomeReceived(this, request, CreateEventSubscription(request));
}

CreateHsmClientCertificateOutcome RedshiftClient::CreateHsmClientCertificate(const CreateHsmClientCertificateRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateHsmClientCertificateOutcome(CreateHsmClientCertificateResult(outcome.GetResult()));
  }
  else
  {
    return CreateHsmClientCertificateOutcome(outcome.GetError());
  }
}

CreateHsmClientCertificateOutcomeCallable RedshiftClient::CreateHsmClientCertificateCallable(const CreateHsmClientCertificateRequest& request) const
{
  return std::async(std::launch::async, &RedshiftClient::CreateHsmClientCertificate, this, request);
}

void RedshiftClient::CreateHsmClientCertificateAsync(const CreateHsmClientCertificateRequest& request) const
{
  m_executor->Submit(&RedshiftClient::CreateHsmClientCertificateAsyncHelper, this, request);
}

void RedshiftClient::CreateHsmClientCertificateAsyncHelper(const CreateHsmClientCertificateRequest& request) const
{
  m_onCreateHsmClientCertificateOutcomeReceived(this, request, CreateHsmClientCertificate(request));
}

CreateHsmConfigurationOutcome RedshiftClient::CreateHsmConfiguration(const CreateHsmConfigurationRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateHsmConfigurationOutcome(CreateHsmConfigurationResult(outcome.GetResult()));
  }
  else
  {
    return CreateHsmConfigurationOutcome(outcome.GetError());
  }
}

CreateHsmConfigurationOutcomeCallable RedshiftClient::CreateHsmConfigurationCallable(const CreateHsmConfigurationRequest& request) const
{
  return std::async(std::launch::async, &RedshiftClient::CreateHsmConfiguration, this, request);
}

void RedshiftClient::CreateHsmConfigurationAsync(const CreateHsmConfigurationRequest& request) const
{
  m_executor->Submit(&RedshiftClient::CreateHsmConfigurationAsyncHelper, this, request);
}

void RedshiftClient::CreateHsmConfigurationAsyncHelper(const CreateHsmConfigurationRequest& request) const
{
  m_onCreateHsmConfigurationOutcomeReceived(this, request, CreateHsmConfiguration(request));
}

CreateTagsOutcome RedshiftClient::CreateTags(const CreateTagsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateTagsOutcome(NoResult());
  }
  else
  {
    return CreateTagsOutcome(outcome.GetError());
  }
}

CreateTagsOutcomeCallable RedshiftClient::CreateTagsCallable(const CreateTagsRequest& request) const
{
  return std::async(std::launch::async, &RedshiftClient::CreateTags, this, request);
}

void RedshiftClient::CreateTagsAsync(const CreateTagsRequest& request) const
{
  m_executor->Submit(&RedshiftClient::CreateTagsAsyncHelper, this, request);
}

void RedshiftClient::CreateTagsAsyncHelper(const CreateTagsRequest& request) const
{
  m_onCreateTagsOutcomeReceived(this, request, CreateTags(request));
}

DeleteClusterOutcome RedshiftClient::DeleteCluster(const DeleteClusterRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteClusterOutcome(DeleteClusterResult(outcome.GetResult()));
  }
  else
  {
    return DeleteClusterOutcome(outcome.GetError());
  }
}

DeleteClusterOutcomeCallable RedshiftClient::DeleteClusterCallable(const DeleteClusterRequest& request) const
{
  return std::async(std::launch::async, &RedshiftClient::DeleteCluster, this, request);
}

void RedshiftClient::DeleteClusterAsync(const DeleteClusterRequest& request) const
{
  m_executor->Submit(&RedshiftClient::DeleteClusterAsyncHelper, this, request);
}

void RedshiftClient::DeleteClusterAsyncHelper(const DeleteClusterRequest& request) const
{
  m_onDeleteClusterOutcomeReceived(this, request, DeleteCluster(request));
}

DeleteClusterParameterGroupOutcome RedshiftClient::DeleteClusterParameterGroup(const DeleteClusterParameterGroupRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteClusterParameterGroupOutcome(NoResult());
  }
  else
  {
    return DeleteClusterParameterGroupOutcome(outcome.GetError());
  }
}

DeleteClusterParameterGroupOutcomeCallable RedshiftClient::DeleteClusterParameterGroupCallable(const DeleteClusterParameterGroupRequest& request) const
{
  return std::async(std::launch::async, &RedshiftClient::DeleteClusterParameterGroup, this, request);
}

void RedshiftClient::DeleteClusterParameterGroupAsync(const DeleteClusterParameterGroupRequest& request) const
{
  m_executor->Submit(&RedshiftClient::DeleteClusterParameterGroupAsyncHelper, this, request);
}

void RedshiftClient::DeleteClusterParameterGroupAsyncHelper(const DeleteClusterParameterGroupRequest& request) const
{
  m_onDeleteClusterParameterGroupOutcomeReceived(this, request, DeleteClusterParameterGroup(request));
}

DeleteClusterSecurityGroupOutcome RedshiftClient::DeleteClusterSecurityGroup(const DeleteClusterSecurityGroupRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteClusterSecurityGroupOutcome(NoResult());
  }
  else
  {
    return DeleteClusterSecurityGroupOutcome(outcome.GetError());
  }
}

DeleteClusterSecurityGroupOutcomeCallable RedshiftClient::DeleteClusterSecurityGroupCallable(const DeleteClusterSecurityGroupRequest& request) const
{
  return std::async(std::launch::async, &RedshiftClient::DeleteClusterSecurityGroup, this, request);
}

void RedshiftClient::DeleteClusterSecurityGroupAsync(const DeleteClusterSecurityGroupRequest& request) const
{
  m_executor->Submit(&RedshiftClient::DeleteClusterSecurityGroupAsyncHelper, this, request);
}

void RedshiftClient::DeleteClusterSecurityGroupAsyncHelper(const DeleteClusterSecurityGroupRequest& request) const
{
  m_onDeleteClusterSecurityGroupOutcomeReceived(this, request, DeleteClusterSecurityGroup(request));
}

DeleteClusterSnapshotOutcome RedshiftClient::DeleteClusterSnapshot(const DeleteClusterSnapshotRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteClusterSnapshotOutcome(DeleteClusterSnapshotResult(outcome.GetResult()));
  }
  else
  {
    return DeleteClusterSnapshotOutcome(outcome.GetError());
  }
}

DeleteClusterSnapshotOutcomeCallable RedshiftClient::DeleteClusterSnapshotCallable(const DeleteClusterSnapshotRequest& request) const
{
  return std::async(std::launch::async, &RedshiftClient::DeleteClusterSnapshot, this, request);
}

void RedshiftClient::DeleteClusterSnapshotAsync(const DeleteClusterSnapshotRequest& request) const
{
  m_executor->Submit(&RedshiftClient::DeleteClusterSnapshotAsyncHelper, this, request);
}

void RedshiftClient::DeleteClusterSnapshotAsyncHelper(const DeleteClusterSnapshotRequest& request) const
{
  m_onDeleteClusterSnapshotOutcomeReceived(this, request, DeleteClusterSnapshot(request));
}

DeleteClusterSubnetGroupOutcome RedshiftClient::DeleteClusterSubnetGroup(const DeleteClusterSubnetGroupRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteClusterSubnetGroupOutcome(NoResult());
  }
  else
  {
    return DeleteClusterSubnetGroupOutcome(outcome.GetError());
  }
}

DeleteClusterSubnetGroupOutcomeCallable RedshiftClient::DeleteClusterSubnetGroupCallable(const DeleteClusterSubnetGroupRequest& request) const
{
  return std::async(std::launch::async, &RedshiftClient::DeleteClusterSubnetGroup, this, request);
}

void RedshiftClient::DeleteClusterSubnetGroupAsync(const DeleteClusterSubnetGroupRequest& request) const
{
  m_executor->Submit(&RedshiftClient::DeleteClusterSubnetGroupAsyncHelper, this, request);
}

void RedshiftClient::DeleteClusterSubnetGroupAsyncHelper(const DeleteClusterSubnetGroupRequest& request) const
{
  m_onDeleteClusterSubnetGroupOutcomeReceived(this, request, DeleteClusterSubnetGroup(request));
}

DeleteEventSubscriptionOutcome RedshiftClient::DeleteEventSubscription(const DeleteEventSubscriptionRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteEventSubscriptionOutcome(NoResult());
  }
  else
  {
    return DeleteEventSubscriptionOutcome(outcome.GetError());
  }
}

DeleteEventSubscriptionOutcomeCallable RedshiftClient::DeleteEventSubscriptionCallable(const DeleteEventSubscriptionRequest& request) const
{
  return std::async(std::launch::async, &RedshiftClient::DeleteEventSubscription, this, request);
}

void RedshiftClient::DeleteEventSubscriptionAsync(const DeleteEventSubscriptionRequest& request) const
{
  m_executor->Submit(&RedshiftClient::DeleteEventSubscriptionAsyncHelper, this, request);
}

void RedshiftClient::DeleteEventSubscriptionAsyncHelper(const DeleteEventSubscriptionRequest& request) const
{
  m_onDeleteEventSubscriptionOutcomeReceived(this, request, DeleteEventSubscription(request));
}

DeleteHsmClientCertificateOutcome RedshiftClient::DeleteHsmClientCertificate(const DeleteHsmClientCertificateRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteHsmClientCertificateOutcome(NoResult());
  }
  else
  {
    return DeleteHsmClientCertificateOutcome(outcome.GetError());
  }
}

DeleteHsmClientCertificateOutcomeCallable RedshiftClient::DeleteHsmClientCertificateCallable(const DeleteHsmClientCertificateRequest& request) const
{
  return std::async(std::launch::async, &RedshiftClient::DeleteHsmClientCertificate, this, request);
}

void RedshiftClient::DeleteHsmClientCertificateAsync(const DeleteHsmClientCertificateRequest& request) const
{
  m_executor->Submit(&RedshiftClient::DeleteHsmClientCertificateAsyncHelper, this, request);
}

void RedshiftClient::DeleteHsmClientCertificateAsyncHelper(const DeleteHsmClientCertificateRequest& request) const
{
  m_onDeleteHsmClientCertificateOutcomeReceived(this, request, DeleteHsmClientCertificate(request));
}

DeleteHsmConfigurationOutcome RedshiftClient::DeleteHsmConfiguration(const DeleteHsmConfigurationRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteHsmConfigurationOutcome(NoResult());
  }
  else
  {
    return DeleteHsmConfigurationOutcome(outcome.GetError());
  }
}

DeleteHsmConfigurationOutcomeCallable RedshiftClient::DeleteHsmConfigurationCallable(const DeleteHsmConfigurationRequest& request) const
{
  return std::async(std::launch::async, &RedshiftClient::DeleteHsmConfiguration, this, request);
}

void RedshiftClient::DeleteHsmConfigurationAsync(const DeleteHsmConfigurationRequest& request) const
{
  m_executor->Submit(&RedshiftClient::DeleteHsmConfigurationAsyncHelper, this, request);
}

void RedshiftClient::DeleteHsmConfigurationAsyncHelper(const DeleteHsmConfigurationRequest& request) const
{
  m_onDeleteHsmConfigurationOutcomeReceived(this, request, DeleteHsmConfiguration(request));
}

DeleteTagsOutcome RedshiftClient::DeleteTags(const DeleteTagsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteTagsOutcome(NoResult());
  }
  else
  {
    return DeleteTagsOutcome(outcome.GetError());
  }
}

DeleteTagsOutcomeCallable RedshiftClient::DeleteTagsCallable(const DeleteTagsRequest& request) const
{
  return std::async(std::launch::async, &RedshiftClient::DeleteTags, this, request);
}

void RedshiftClient::DeleteTagsAsync(const DeleteTagsRequest& request) const
{
  m_executor->Submit(&RedshiftClient::DeleteTagsAsyncHelper, this, request);
}

void RedshiftClient::DeleteTagsAsyncHelper(const DeleteTagsRequest& request) const
{
  m_onDeleteTagsOutcomeReceived(this, request, DeleteTags(request));
}

DescribeClusterParameterGroupsOutcome RedshiftClient::DescribeClusterParameterGroups(const DescribeClusterParameterGroupsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeClusterParameterGroupsOutcome(DescribeClusterParameterGroupsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeClusterParameterGroupsOutcome(outcome.GetError());
  }
}

DescribeClusterParameterGroupsOutcomeCallable RedshiftClient::DescribeClusterParameterGroupsCallable(const DescribeClusterParameterGroupsRequest& request) const
{
  return std::async(std::launch::async, &RedshiftClient::DescribeClusterParameterGroups, this, request);
}

void RedshiftClient::DescribeClusterParameterGroupsAsync(const DescribeClusterParameterGroupsRequest& request) const
{
  m_executor->Submit(&RedshiftClient::DescribeClusterParameterGroupsAsyncHelper, this, request);
}

void RedshiftClient::DescribeClusterParameterGroupsAsyncHelper(const DescribeClusterParameterGroupsRequest& request) const
{
  m_onDescribeClusterParameterGroupsOutcomeReceived(this, request, DescribeClusterParameterGroups(request));
}

DescribeClusterParametersOutcome RedshiftClient::DescribeClusterParameters(const DescribeClusterParametersRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeClusterParametersOutcome(DescribeClusterParametersResult(outcome.GetResult()));
  }
  else
  {
    return DescribeClusterParametersOutcome(outcome.GetError());
  }
}

DescribeClusterParametersOutcomeCallable RedshiftClient::DescribeClusterParametersCallable(const DescribeClusterParametersRequest& request) const
{
  return std::async(std::launch::async, &RedshiftClient::DescribeClusterParameters, this, request);
}

void RedshiftClient::DescribeClusterParametersAsync(const DescribeClusterParametersRequest& request) const
{
  m_executor->Submit(&RedshiftClient::DescribeClusterParametersAsyncHelper, this, request);
}

void RedshiftClient::DescribeClusterParametersAsyncHelper(const DescribeClusterParametersRequest& request) const
{
  m_onDescribeClusterParametersOutcomeReceived(this, request, DescribeClusterParameters(request));
}

DescribeClusterSecurityGroupsOutcome RedshiftClient::DescribeClusterSecurityGroups(const DescribeClusterSecurityGroupsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeClusterSecurityGroupsOutcome(DescribeClusterSecurityGroupsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeClusterSecurityGroupsOutcome(outcome.GetError());
  }
}

DescribeClusterSecurityGroupsOutcomeCallable RedshiftClient::DescribeClusterSecurityGroupsCallable(const DescribeClusterSecurityGroupsRequest& request) const
{
  return std::async(std::launch::async, &RedshiftClient::DescribeClusterSecurityGroups, this, request);
}

void RedshiftClient::DescribeClusterSecurityGroupsAsync(const DescribeClusterSecurityGroupsRequest& request) const
{
  m_executor->Submit(&RedshiftClient::DescribeClusterSecurityGroupsAsyncHelper, this, request);
}

void RedshiftClient::DescribeClusterSecurityGroupsAsyncHelper(const DescribeClusterSecurityGroupsRequest& request) const
{
  m_onDescribeClusterSecurityGroupsOutcomeReceived(this, request, DescribeClusterSecurityGroups(request));
}

DescribeClusterSnapshotsOutcome RedshiftClient::DescribeClusterSnapshots(const DescribeClusterSnapshotsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeClusterSnapshotsOutcome(DescribeClusterSnapshotsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeClusterSnapshotsOutcome(outcome.GetError());
  }
}

DescribeClusterSnapshotsOutcomeCallable RedshiftClient::DescribeClusterSnapshotsCallable(const DescribeClusterSnapshotsRequest& request) const
{
  return std::async(std::launch::async, &RedshiftClient::DescribeClusterSnapshots, this, request);
}

void RedshiftClient::DescribeClusterSnapshotsAsync(const DescribeClusterSnapshotsRequest& request) const
{
  m_executor->Submit(&RedshiftClient::DescribeClusterSnapshotsAsyncHelper, this, request);
}

void RedshiftClient::DescribeClusterSnapshotsAsyncHelper(const DescribeClusterSnapshotsRequest& request) const
{
  m_onDescribeClusterSnapshotsOutcomeReceived(this, request, DescribeClusterSnapshots(request));
}

DescribeClusterSubnetGroupsOutcome RedshiftClient::DescribeClusterSubnetGroups(const DescribeClusterSubnetGroupsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeClusterSubnetGroupsOutcome(DescribeClusterSubnetGroupsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeClusterSubnetGroupsOutcome(outcome.GetError());
  }
}

DescribeClusterSubnetGroupsOutcomeCallable RedshiftClient::DescribeClusterSubnetGroupsCallable(const DescribeClusterSubnetGroupsRequest& request) const
{
  return std::async(std::launch::async, &RedshiftClient::DescribeClusterSubnetGroups, this, request);
}

void RedshiftClient::DescribeClusterSubnetGroupsAsync(const DescribeClusterSubnetGroupsRequest& request) const
{
  m_executor->Submit(&RedshiftClient::DescribeClusterSubnetGroupsAsyncHelper, this, request);
}

void RedshiftClient::DescribeClusterSubnetGroupsAsyncHelper(const DescribeClusterSubnetGroupsRequest& request) const
{
  m_onDescribeClusterSubnetGroupsOutcomeReceived(this, request, DescribeClusterSubnetGroups(request));
}

DescribeClusterVersionsOutcome RedshiftClient::DescribeClusterVersions(const DescribeClusterVersionsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeClusterVersionsOutcome(DescribeClusterVersionsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeClusterVersionsOutcome(outcome.GetError());
  }
}

DescribeClusterVersionsOutcomeCallable RedshiftClient::DescribeClusterVersionsCallable(const DescribeClusterVersionsRequest& request) const
{
  return std::async(std::launch::async, &RedshiftClient::DescribeClusterVersions, this, request);
}

void RedshiftClient::DescribeClusterVersionsAsync(const DescribeClusterVersionsRequest& request) const
{
  m_executor->Submit(&RedshiftClient::DescribeClusterVersionsAsyncHelper, this, request);
}

void RedshiftClient::DescribeClusterVersionsAsyncHelper(const DescribeClusterVersionsRequest& request) const
{
  m_onDescribeClusterVersionsOutcomeReceived(this, request, DescribeClusterVersions(request));
}

DescribeClustersOutcome RedshiftClient::DescribeClusters(const DescribeClustersRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeClustersOutcome(DescribeClustersResult(outcome.GetResult()));
  }
  else
  {
    return DescribeClustersOutcome(outcome.GetError());
  }
}

DescribeClustersOutcomeCallable RedshiftClient::DescribeClustersCallable(const DescribeClustersRequest& request) const
{
  return std::async(std::launch::async, &RedshiftClient::DescribeClusters, this, request);
}

void RedshiftClient::DescribeClustersAsync(const DescribeClustersRequest& request) const
{
  m_executor->Submit(&RedshiftClient::DescribeClustersAsyncHelper, this, request);
}

void RedshiftClient::DescribeClustersAsyncHelper(const DescribeClustersRequest& request) const
{
  m_onDescribeClustersOutcomeReceived(this, request, DescribeClusters(request));
}

DescribeDefaultClusterParametersOutcome RedshiftClient::DescribeDefaultClusterParameters(const DescribeDefaultClusterParametersRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeDefaultClusterParametersOutcome(DescribeDefaultClusterParametersResult(outcome.GetResult()));
  }
  else
  {
    return DescribeDefaultClusterParametersOutcome(outcome.GetError());
  }
}

DescribeDefaultClusterParametersOutcomeCallable RedshiftClient::DescribeDefaultClusterParametersCallable(const DescribeDefaultClusterParametersRequest& request) const
{
  return std::async(std::launch::async, &RedshiftClient::DescribeDefaultClusterParameters, this, request);
}

void RedshiftClient::DescribeDefaultClusterParametersAsync(const DescribeDefaultClusterParametersRequest& request) const
{
  m_executor->Submit(&RedshiftClient::DescribeDefaultClusterParametersAsyncHelper, this, request);
}

void RedshiftClient::DescribeDefaultClusterParametersAsyncHelper(const DescribeDefaultClusterParametersRequest& request) const
{
  m_onDescribeDefaultClusterParametersOutcomeReceived(this, request, DescribeDefaultClusterParameters(request));
}

DescribeEventCategoriesOutcome RedshiftClient::DescribeEventCategories(const DescribeEventCategoriesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeEventCategoriesOutcome(DescribeEventCategoriesResult(outcome.GetResult()));
  }
  else
  {
    return DescribeEventCategoriesOutcome(outcome.GetError());
  }
}

DescribeEventCategoriesOutcomeCallable RedshiftClient::DescribeEventCategoriesCallable(const DescribeEventCategoriesRequest& request) const
{
  return std::async(std::launch::async, &RedshiftClient::DescribeEventCategories, this, request);
}

void RedshiftClient::DescribeEventCategoriesAsync(const DescribeEventCategoriesRequest& request) const
{
  m_executor->Submit(&RedshiftClient::DescribeEventCategoriesAsyncHelper, this, request);
}

void RedshiftClient::DescribeEventCategoriesAsyncHelper(const DescribeEventCategoriesRequest& request) const
{
  m_onDescribeEventCategoriesOutcomeReceived(this, request, DescribeEventCategories(request));
}

DescribeEventSubscriptionsOutcome RedshiftClient::DescribeEventSubscriptions(const DescribeEventSubscriptionsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeEventSubscriptionsOutcome(DescribeEventSubscriptionsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeEventSubscriptionsOutcome(outcome.GetError());
  }
}

DescribeEventSubscriptionsOutcomeCallable RedshiftClient::DescribeEventSubscriptionsCallable(const DescribeEventSubscriptionsRequest& request) const
{
  return std::async(std::launch::async, &RedshiftClient::DescribeEventSubscriptions, this, request);
}

void RedshiftClient::DescribeEventSubscriptionsAsync(const DescribeEventSubscriptionsRequest& request) const
{
  m_executor->Submit(&RedshiftClient::DescribeEventSubscriptionsAsyncHelper, this, request);
}

void RedshiftClient::DescribeEventSubscriptionsAsyncHelper(const DescribeEventSubscriptionsRequest& request) const
{
  m_onDescribeEventSubscriptionsOutcomeReceived(this, request, DescribeEventSubscriptions(request));
}

DescribeEventsOutcome RedshiftClient::DescribeEvents(const DescribeEventsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeEventsOutcome(DescribeEventsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeEventsOutcome(outcome.GetError());
  }
}

DescribeEventsOutcomeCallable RedshiftClient::DescribeEventsCallable(const DescribeEventsRequest& request) const
{
  return std::async(std::launch::async, &RedshiftClient::DescribeEvents, this, request);
}

void RedshiftClient::DescribeEventsAsync(const DescribeEventsRequest& request) const
{
  m_executor->Submit(&RedshiftClient::DescribeEventsAsyncHelper, this, request);
}

void RedshiftClient::DescribeEventsAsyncHelper(const DescribeEventsRequest& request) const
{
  m_onDescribeEventsOutcomeReceived(this, request, DescribeEvents(request));
}

DescribeHsmClientCertificatesOutcome RedshiftClient::DescribeHsmClientCertificates(const DescribeHsmClientCertificatesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeHsmClientCertificatesOutcome(DescribeHsmClientCertificatesResult(outcome.GetResult()));
  }
  else
  {
    return DescribeHsmClientCertificatesOutcome(outcome.GetError());
  }
}

DescribeHsmClientCertificatesOutcomeCallable RedshiftClient::DescribeHsmClientCertificatesCallable(const DescribeHsmClientCertificatesRequest& request) const
{
  return std::async(std::launch::async, &RedshiftClient::DescribeHsmClientCertificates, this, request);
}

void RedshiftClient::DescribeHsmClientCertificatesAsync(const DescribeHsmClientCertificatesRequest& request) const
{
  m_executor->Submit(&RedshiftClient::DescribeHsmClientCertificatesAsyncHelper, this, request);
}

void RedshiftClient::DescribeHsmClientCertificatesAsyncHelper(const DescribeHsmClientCertificatesRequest& request) const
{
  m_onDescribeHsmClientCertificatesOutcomeReceived(this, request, DescribeHsmClientCertificates(request));
}

DescribeHsmConfigurationsOutcome RedshiftClient::DescribeHsmConfigurations(const DescribeHsmConfigurationsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeHsmConfigurationsOutcome(DescribeHsmConfigurationsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeHsmConfigurationsOutcome(outcome.GetError());
  }
}

DescribeHsmConfigurationsOutcomeCallable RedshiftClient::DescribeHsmConfigurationsCallable(const DescribeHsmConfigurationsRequest& request) const
{
  return std::async(std::launch::async, &RedshiftClient::DescribeHsmConfigurations, this, request);
}

void RedshiftClient::DescribeHsmConfigurationsAsync(const DescribeHsmConfigurationsRequest& request) const
{
  m_executor->Submit(&RedshiftClient::DescribeHsmConfigurationsAsyncHelper, this, request);
}

void RedshiftClient::DescribeHsmConfigurationsAsyncHelper(const DescribeHsmConfigurationsRequest& request) const
{
  m_onDescribeHsmConfigurationsOutcomeReceived(this, request, DescribeHsmConfigurations(request));
}

DescribeLoggingStatusOutcome RedshiftClient::DescribeLoggingStatus(const DescribeLoggingStatusRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeLoggingStatusOutcome(DescribeLoggingStatusResult(outcome.GetResult()));
  }
  else
  {
    return DescribeLoggingStatusOutcome(outcome.GetError());
  }
}

DescribeLoggingStatusOutcomeCallable RedshiftClient::DescribeLoggingStatusCallable(const DescribeLoggingStatusRequest& request) const
{
  return std::async(std::launch::async, &RedshiftClient::DescribeLoggingStatus, this, request);
}

void RedshiftClient::DescribeLoggingStatusAsync(const DescribeLoggingStatusRequest& request) const
{
  m_executor->Submit(&RedshiftClient::DescribeLoggingStatusAsyncHelper, this, request);
}

void RedshiftClient::DescribeLoggingStatusAsyncHelper(const DescribeLoggingStatusRequest& request) const
{
  m_onDescribeLoggingStatusOutcomeReceived(this, request, DescribeLoggingStatus(request));
}

DescribeOrderableClusterOptionsOutcome RedshiftClient::DescribeOrderableClusterOptions(const DescribeOrderableClusterOptionsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeOrderableClusterOptionsOutcome(DescribeOrderableClusterOptionsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeOrderableClusterOptionsOutcome(outcome.GetError());
  }
}

DescribeOrderableClusterOptionsOutcomeCallable RedshiftClient::DescribeOrderableClusterOptionsCallable(const DescribeOrderableClusterOptionsRequest& request) const
{
  return std::async(std::launch::async, &RedshiftClient::DescribeOrderableClusterOptions, this, request);
}

void RedshiftClient::DescribeOrderableClusterOptionsAsync(const DescribeOrderableClusterOptionsRequest& request) const
{
  m_executor->Submit(&RedshiftClient::DescribeOrderableClusterOptionsAsyncHelper, this, request);
}

void RedshiftClient::DescribeOrderableClusterOptionsAsyncHelper(const DescribeOrderableClusterOptionsRequest& request) const
{
  m_onDescribeOrderableClusterOptionsOutcomeReceived(this, request, DescribeOrderableClusterOptions(request));
}

DescribeReservedNodeOfferingsOutcome RedshiftClient::DescribeReservedNodeOfferings(const DescribeReservedNodeOfferingsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeReservedNodeOfferingsOutcome(DescribeReservedNodeOfferingsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeReservedNodeOfferingsOutcome(outcome.GetError());
  }
}

DescribeReservedNodeOfferingsOutcomeCallable RedshiftClient::DescribeReservedNodeOfferingsCallable(const DescribeReservedNodeOfferingsRequest& request) const
{
  return std::async(std::launch::async, &RedshiftClient::DescribeReservedNodeOfferings, this, request);
}

void RedshiftClient::DescribeReservedNodeOfferingsAsync(const DescribeReservedNodeOfferingsRequest& request) const
{
  m_executor->Submit(&RedshiftClient::DescribeReservedNodeOfferingsAsyncHelper, this, request);
}

void RedshiftClient::DescribeReservedNodeOfferingsAsyncHelper(const DescribeReservedNodeOfferingsRequest& request) const
{
  m_onDescribeReservedNodeOfferingsOutcomeReceived(this, request, DescribeReservedNodeOfferings(request));
}

DescribeReservedNodesOutcome RedshiftClient::DescribeReservedNodes(const DescribeReservedNodesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeReservedNodesOutcome(DescribeReservedNodesResult(outcome.GetResult()));
  }
  else
  {
    return DescribeReservedNodesOutcome(outcome.GetError());
  }
}

DescribeReservedNodesOutcomeCallable RedshiftClient::DescribeReservedNodesCallable(const DescribeReservedNodesRequest& request) const
{
  return std::async(std::launch::async, &RedshiftClient::DescribeReservedNodes, this, request);
}

void RedshiftClient::DescribeReservedNodesAsync(const DescribeReservedNodesRequest& request) const
{
  m_executor->Submit(&RedshiftClient::DescribeReservedNodesAsyncHelper, this, request);
}

void RedshiftClient::DescribeReservedNodesAsyncHelper(const DescribeReservedNodesRequest& request) const
{
  m_onDescribeReservedNodesOutcomeReceived(this, request, DescribeReservedNodes(request));
}

DescribeResizeOutcome RedshiftClient::DescribeResize(const DescribeResizeRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeResizeOutcome(DescribeResizeResult(outcome.GetResult()));
  }
  else
  {
    return DescribeResizeOutcome(outcome.GetError());
  }
}

DescribeResizeOutcomeCallable RedshiftClient::DescribeResizeCallable(const DescribeResizeRequest& request) const
{
  return std::async(std::launch::async, &RedshiftClient::DescribeResize, this, request);
}

void RedshiftClient::DescribeResizeAsync(const DescribeResizeRequest& request) const
{
  m_executor->Submit(&RedshiftClient::DescribeResizeAsyncHelper, this, request);
}

void RedshiftClient::DescribeResizeAsyncHelper(const DescribeResizeRequest& request) const
{
  m_onDescribeResizeOutcomeReceived(this, request, DescribeResize(request));
}

DescribeTagsOutcome RedshiftClient::DescribeTags(const DescribeTagsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeTagsOutcome(DescribeTagsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeTagsOutcome(outcome.GetError());
  }
}

DescribeTagsOutcomeCallable RedshiftClient::DescribeTagsCallable(const DescribeTagsRequest& request) const
{
  return std::async(std::launch::async, &RedshiftClient::DescribeTags, this, request);
}

void RedshiftClient::DescribeTagsAsync(const DescribeTagsRequest& request) const
{
  m_executor->Submit(&RedshiftClient::DescribeTagsAsyncHelper, this, request);
}

void RedshiftClient::DescribeTagsAsyncHelper(const DescribeTagsRequest& request) const
{
  m_onDescribeTagsOutcomeReceived(this, request, DescribeTags(request));
}

DisableLoggingOutcome RedshiftClient::DisableLogging(const DisableLoggingRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DisableLoggingOutcome(DisableLoggingResult(outcome.GetResult()));
  }
  else
  {
    return DisableLoggingOutcome(outcome.GetError());
  }
}

DisableLoggingOutcomeCallable RedshiftClient::DisableLoggingCallable(const DisableLoggingRequest& request) const
{
  return std::async(std::launch::async, &RedshiftClient::DisableLogging, this, request);
}

void RedshiftClient::DisableLoggingAsync(const DisableLoggingRequest& request) const
{
  m_executor->Submit(&RedshiftClient::DisableLoggingAsyncHelper, this, request);
}

void RedshiftClient::DisableLoggingAsyncHelper(const DisableLoggingRequest& request) const
{
  m_onDisableLoggingOutcomeReceived(this, request, DisableLogging(request));
}

DisableSnapshotCopyOutcome RedshiftClient::DisableSnapshotCopy(const DisableSnapshotCopyRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DisableSnapshotCopyOutcome(DisableSnapshotCopyResult(outcome.GetResult()));
  }
  else
  {
    return DisableSnapshotCopyOutcome(outcome.GetError());
  }
}

DisableSnapshotCopyOutcomeCallable RedshiftClient::DisableSnapshotCopyCallable(const DisableSnapshotCopyRequest& request) const
{
  return std::async(std::launch::async, &RedshiftClient::DisableSnapshotCopy, this, request);
}

void RedshiftClient::DisableSnapshotCopyAsync(const DisableSnapshotCopyRequest& request) const
{
  m_executor->Submit(&RedshiftClient::DisableSnapshotCopyAsyncHelper, this, request);
}

void RedshiftClient::DisableSnapshotCopyAsyncHelper(const DisableSnapshotCopyRequest& request) const
{
  m_onDisableSnapshotCopyOutcomeReceived(this, request, DisableSnapshotCopy(request));
}

EnableLoggingOutcome RedshiftClient::EnableLogging(const EnableLoggingRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return EnableLoggingOutcome(EnableLoggingResult(outcome.GetResult()));
  }
  else
  {
    return EnableLoggingOutcome(outcome.GetError());
  }
}

EnableLoggingOutcomeCallable RedshiftClient::EnableLoggingCallable(const EnableLoggingRequest& request) const
{
  return std::async(std::launch::async, &RedshiftClient::EnableLogging, this, request);
}

void RedshiftClient::EnableLoggingAsync(const EnableLoggingRequest& request) const
{
  m_executor->Submit(&RedshiftClient::EnableLoggingAsyncHelper, this, request);
}

void RedshiftClient::EnableLoggingAsyncHelper(const EnableLoggingRequest& request) const
{
  m_onEnableLoggingOutcomeReceived(this, request, EnableLogging(request));
}

EnableSnapshotCopyOutcome RedshiftClient::EnableSnapshotCopy(const EnableSnapshotCopyRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return EnableSnapshotCopyOutcome(EnableSnapshotCopyResult(outcome.GetResult()));
  }
  else
  {
    return EnableSnapshotCopyOutcome(outcome.GetError());
  }
}

EnableSnapshotCopyOutcomeCallable RedshiftClient::EnableSnapshotCopyCallable(const EnableSnapshotCopyRequest& request) const
{
  return std::async(std::launch::async, &RedshiftClient::EnableSnapshotCopy, this, request);
}

void RedshiftClient::EnableSnapshotCopyAsync(const EnableSnapshotCopyRequest& request) const
{
  m_executor->Submit(&RedshiftClient::EnableSnapshotCopyAsyncHelper, this, request);
}

void RedshiftClient::EnableSnapshotCopyAsyncHelper(const EnableSnapshotCopyRequest& request) const
{
  m_onEnableSnapshotCopyOutcomeReceived(this, request, EnableSnapshotCopy(request));
}

ModifyClusterOutcome RedshiftClient::ModifyCluster(const ModifyClusterRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ModifyClusterOutcome(ModifyClusterResult(outcome.GetResult()));
  }
  else
  {
    return ModifyClusterOutcome(outcome.GetError());
  }
}

ModifyClusterOutcomeCallable RedshiftClient::ModifyClusterCallable(const ModifyClusterRequest& request) const
{
  return std::async(std::launch::async, &RedshiftClient::ModifyCluster, this, request);
}

void RedshiftClient::ModifyClusterAsync(const ModifyClusterRequest& request) const
{
  m_executor->Submit(&RedshiftClient::ModifyClusterAsyncHelper, this, request);
}

void RedshiftClient::ModifyClusterAsyncHelper(const ModifyClusterRequest& request) const
{
  m_onModifyClusterOutcomeReceived(this, request, ModifyCluster(request));
}

ModifyClusterParameterGroupOutcome RedshiftClient::ModifyClusterParameterGroup(const ModifyClusterParameterGroupRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ModifyClusterParameterGroupOutcome(ModifyClusterParameterGroupResult(outcome.GetResult()));
  }
  else
  {
    return ModifyClusterParameterGroupOutcome(outcome.GetError());
  }
}

ModifyClusterParameterGroupOutcomeCallable RedshiftClient::ModifyClusterParameterGroupCallable(const ModifyClusterParameterGroupRequest& request) const
{
  return std::async(std::launch::async, &RedshiftClient::ModifyClusterParameterGroup, this, request);
}

void RedshiftClient::ModifyClusterParameterGroupAsync(const ModifyClusterParameterGroupRequest& request) const
{
  m_executor->Submit(&RedshiftClient::ModifyClusterParameterGroupAsyncHelper, this, request);
}

void RedshiftClient::ModifyClusterParameterGroupAsyncHelper(const ModifyClusterParameterGroupRequest& request) const
{
  m_onModifyClusterParameterGroupOutcomeReceived(this, request, ModifyClusterParameterGroup(request));
}

ModifyClusterSubnetGroupOutcome RedshiftClient::ModifyClusterSubnetGroup(const ModifyClusterSubnetGroupRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ModifyClusterSubnetGroupOutcome(ModifyClusterSubnetGroupResult(outcome.GetResult()));
  }
  else
  {
    return ModifyClusterSubnetGroupOutcome(outcome.GetError());
  }
}

ModifyClusterSubnetGroupOutcomeCallable RedshiftClient::ModifyClusterSubnetGroupCallable(const ModifyClusterSubnetGroupRequest& request) const
{
  return std::async(std::launch::async, &RedshiftClient::ModifyClusterSubnetGroup, this, request);
}

void RedshiftClient::ModifyClusterSubnetGroupAsync(const ModifyClusterSubnetGroupRequest& request) const
{
  m_executor->Submit(&RedshiftClient::ModifyClusterSubnetGroupAsyncHelper, this, request);
}

void RedshiftClient::ModifyClusterSubnetGroupAsyncHelper(const ModifyClusterSubnetGroupRequest& request) const
{
  m_onModifyClusterSubnetGroupOutcomeReceived(this, request, ModifyClusterSubnetGroup(request));
}

ModifyEventSubscriptionOutcome RedshiftClient::ModifyEventSubscription(const ModifyEventSubscriptionRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ModifyEventSubscriptionOutcome(ModifyEventSubscriptionResult(outcome.GetResult()));
  }
  else
  {
    return ModifyEventSubscriptionOutcome(outcome.GetError());
  }
}

ModifyEventSubscriptionOutcomeCallable RedshiftClient::ModifyEventSubscriptionCallable(const ModifyEventSubscriptionRequest& request) const
{
  return std::async(std::launch::async, &RedshiftClient::ModifyEventSubscription, this, request);
}

void RedshiftClient::ModifyEventSubscriptionAsync(const ModifyEventSubscriptionRequest& request) const
{
  m_executor->Submit(&RedshiftClient::ModifyEventSubscriptionAsyncHelper, this, request);
}

void RedshiftClient::ModifyEventSubscriptionAsyncHelper(const ModifyEventSubscriptionRequest& request) const
{
  m_onModifyEventSubscriptionOutcomeReceived(this, request, ModifyEventSubscription(request));
}

ModifySnapshotCopyRetentionPeriodOutcome RedshiftClient::ModifySnapshotCopyRetentionPeriod(const ModifySnapshotCopyRetentionPeriodRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ModifySnapshotCopyRetentionPeriodOutcome(ModifySnapshotCopyRetentionPeriodResult(outcome.GetResult()));
  }
  else
  {
    return ModifySnapshotCopyRetentionPeriodOutcome(outcome.GetError());
  }
}

ModifySnapshotCopyRetentionPeriodOutcomeCallable RedshiftClient::ModifySnapshotCopyRetentionPeriodCallable(const ModifySnapshotCopyRetentionPeriodRequest& request) const
{
  return std::async(std::launch::async, &RedshiftClient::ModifySnapshotCopyRetentionPeriod, this, request);
}

void RedshiftClient::ModifySnapshotCopyRetentionPeriodAsync(const ModifySnapshotCopyRetentionPeriodRequest& request) const
{
  m_executor->Submit(&RedshiftClient::ModifySnapshotCopyRetentionPeriodAsyncHelper, this, request);
}

void RedshiftClient::ModifySnapshotCopyRetentionPeriodAsyncHelper(const ModifySnapshotCopyRetentionPeriodRequest& request) const
{
  m_onModifySnapshotCopyRetentionPeriodOutcomeReceived(this, request, ModifySnapshotCopyRetentionPeriod(request));
}

PurchaseReservedNodeOfferingOutcome RedshiftClient::PurchaseReservedNodeOffering(const PurchaseReservedNodeOfferingRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return PurchaseReservedNodeOfferingOutcome(PurchaseReservedNodeOfferingResult(outcome.GetResult()));
  }
  else
  {
    return PurchaseReservedNodeOfferingOutcome(outcome.GetError());
  }
}

PurchaseReservedNodeOfferingOutcomeCallable RedshiftClient::PurchaseReservedNodeOfferingCallable(const PurchaseReservedNodeOfferingRequest& request) const
{
  return std::async(std::launch::async, &RedshiftClient::PurchaseReservedNodeOffering, this, request);
}

void RedshiftClient::PurchaseReservedNodeOfferingAsync(const PurchaseReservedNodeOfferingRequest& request) const
{
  m_executor->Submit(&RedshiftClient::PurchaseReservedNodeOfferingAsyncHelper, this, request);
}

void RedshiftClient::PurchaseReservedNodeOfferingAsyncHelper(const PurchaseReservedNodeOfferingRequest& request) const
{
  m_onPurchaseReservedNodeOfferingOutcomeReceived(this, request, PurchaseReservedNodeOffering(request));
}

RebootClusterOutcome RedshiftClient::RebootCluster(const RebootClusterRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return RebootClusterOutcome(RebootClusterResult(outcome.GetResult()));
  }
  else
  {
    return RebootClusterOutcome(outcome.GetError());
  }
}

RebootClusterOutcomeCallable RedshiftClient::RebootClusterCallable(const RebootClusterRequest& request) const
{
  return std::async(std::launch::async, &RedshiftClient::RebootCluster, this, request);
}

void RedshiftClient::RebootClusterAsync(const RebootClusterRequest& request) const
{
  m_executor->Submit(&RedshiftClient::RebootClusterAsyncHelper, this, request);
}

void RedshiftClient::RebootClusterAsyncHelper(const RebootClusterRequest& request) const
{
  m_onRebootClusterOutcomeReceived(this, request, RebootCluster(request));
}

ResetClusterParameterGroupOutcome RedshiftClient::ResetClusterParameterGroup(const ResetClusterParameterGroupRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ResetClusterParameterGroupOutcome(ResetClusterParameterGroupResult(outcome.GetResult()));
  }
  else
  {
    return ResetClusterParameterGroupOutcome(outcome.GetError());
  }
}

ResetClusterParameterGroupOutcomeCallable RedshiftClient::ResetClusterParameterGroupCallable(const ResetClusterParameterGroupRequest& request) const
{
  return std::async(std::launch::async, &RedshiftClient::ResetClusterParameterGroup, this, request);
}

void RedshiftClient::ResetClusterParameterGroupAsync(const ResetClusterParameterGroupRequest& request) const
{
  m_executor->Submit(&RedshiftClient::ResetClusterParameterGroupAsyncHelper, this, request);
}

void RedshiftClient::ResetClusterParameterGroupAsyncHelper(const ResetClusterParameterGroupRequest& request) const
{
  m_onResetClusterParameterGroupOutcomeReceived(this, request, ResetClusterParameterGroup(request));
}

RestoreFromClusterSnapshotOutcome RedshiftClient::RestoreFromClusterSnapshot(const RestoreFromClusterSnapshotRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return RestoreFromClusterSnapshotOutcome(RestoreFromClusterSnapshotResult(outcome.GetResult()));
  }
  else
  {
    return RestoreFromClusterSnapshotOutcome(outcome.GetError());
  }
}

RestoreFromClusterSnapshotOutcomeCallable RedshiftClient::RestoreFromClusterSnapshotCallable(const RestoreFromClusterSnapshotRequest& request) const
{
  return std::async(std::launch::async, &RedshiftClient::RestoreFromClusterSnapshot, this, request);
}

void RedshiftClient::RestoreFromClusterSnapshotAsync(const RestoreFromClusterSnapshotRequest& request) const
{
  m_executor->Submit(&RedshiftClient::RestoreFromClusterSnapshotAsyncHelper, this, request);
}

void RedshiftClient::RestoreFromClusterSnapshotAsyncHelper(const RestoreFromClusterSnapshotRequest& request) const
{
  m_onRestoreFromClusterSnapshotOutcomeReceived(this, request, RestoreFromClusterSnapshot(request));
}

RevokeClusterSecurityGroupIngressOutcome RedshiftClient::RevokeClusterSecurityGroupIngress(const RevokeClusterSecurityGroupIngressRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return RevokeClusterSecurityGroupIngressOutcome(RevokeClusterSecurityGroupIngressResult(outcome.GetResult()));
  }
  else
  {
    return RevokeClusterSecurityGroupIngressOutcome(outcome.GetError());
  }
}

RevokeClusterSecurityGroupIngressOutcomeCallable RedshiftClient::RevokeClusterSecurityGroupIngressCallable(const RevokeClusterSecurityGroupIngressRequest& request) const
{
  return std::async(std::launch::async, &RedshiftClient::RevokeClusterSecurityGroupIngress, this, request);
}

void RedshiftClient::RevokeClusterSecurityGroupIngressAsync(const RevokeClusterSecurityGroupIngressRequest& request) const
{
  m_executor->Submit(&RedshiftClient::RevokeClusterSecurityGroupIngressAsyncHelper, this, request);
}

void RedshiftClient::RevokeClusterSecurityGroupIngressAsyncHelper(const RevokeClusterSecurityGroupIngressRequest& request) const
{
  m_onRevokeClusterSecurityGroupIngressOutcomeReceived(this, request, RevokeClusterSecurityGroupIngress(request));
}

RevokeSnapshotAccessOutcome RedshiftClient::RevokeSnapshotAccess(const RevokeSnapshotAccessRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return RevokeSnapshotAccessOutcome(RevokeSnapshotAccessResult(outcome.GetResult()));
  }
  else
  {
    return RevokeSnapshotAccessOutcome(outcome.GetError());
  }
}

RevokeSnapshotAccessOutcomeCallable RedshiftClient::RevokeSnapshotAccessCallable(const RevokeSnapshotAccessRequest& request) const
{
  return std::async(std::launch::async, &RedshiftClient::RevokeSnapshotAccess, this, request);
}

void RedshiftClient::RevokeSnapshotAccessAsync(const RevokeSnapshotAccessRequest& request) const
{
  m_executor->Submit(&RedshiftClient::RevokeSnapshotAccessAsyncHelper, this, request);
}

void RedshiftClient::RevokeSnapshotAccessAsyncHelper(const RevokeSnapshotAccessRequest& request) const
{
  m_onRevokeSnapshotAccessOutcomeReceived(this, request, RevokeSnapshotAccess(request));
}

RotateEncryptionKeyOutcome RedshiftClient::RotateEncryptionKey(const RotateEncryptionKeyRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return RotateEncryptionKeyOutcome(RotateEncryptionKeyResult(outcome.GetResult()));
  }
  else
  {
    return RotateEncryptionKeyOutcome(outcome.GetError());
  }
}

RotateEncryptionKeyOutcomeCallable RedshiftClient::RotateEncryptionKeyCallable(const RotateEncryptionKeyRequest& request) const
{
  return std::async(std::launch::async, &RedshiftClient::RotateEncryptionKey, this, request);
}

void RedshiftClient::RotateEncryptionKeyAsync(const RotateEncryptionKeyRequest& request) const
{
  m_executor->Submit(&RedshiftClient::RotateEncryptionKeyAsyncHelper, this, request);
}

void RedshiftClient::RotateEncryptionKeyAsyncHelper(const RotateEncryptionKeyRequest& request) const
{
  m_onRotateEncryptionKeyOutcomeReceived(this, request, RotateEncryptionKey(request));
}

