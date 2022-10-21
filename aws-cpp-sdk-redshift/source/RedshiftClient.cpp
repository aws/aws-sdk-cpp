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
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <aws/redshift/RedshiftClient.h>
#include <aws/redshift/RedshiftEndpoint.h>
#include <aws/redshift/RedshiftErrorMarshaller.h>
#include <aws/redshift/model/AcceptReservedNodeExchangeRequest.h>
#include <aws/redshift/model/AddPartnerRequest.h>
#include <aws/redshift/model/AssociateDataShareConsumerRequest.h>
#include <aws/redshift/model/AuthorizeClusterSecurityGroupIngressRequest.h>
#include <aws/redshift/model/AuthorizeDataShareRequest.h>
#include <aws/redshift/model/AuthorizeEndpointAccessRequest.h>
#include <aws/redshift/model/AuthorizeSnapshotAccessRequest.h>
#include <aws/redshift/model/BatchDeleteClusterSnapshotsRequest.h>
#include <aws/redshift/model/BatchModifyClusterSnapshotsRequest.h>
#include <aws/redshift/model/CancelResizeRequest.h>
#include <aws/redshift/model/CopyClusterSnapshotRequest.h>
#include <aws/redshift/model/CreateAuthenticationProfileRequest.h>
#include <aws/redshift/model/CreateClusterRequest.h>
#include <aws/redshift/model/CreateClusterParameterGroupRequest.h>
#include <aws/redshift/model/CreateClusterSecurityGroupRequest.h>
#include <aws/redshift/model/CreateClusterSnapshotRequest.h>
#include <aws/redshift/model/CreateClusterSubnetGroupRequest.h>
#include <aws/redshift/model/CreateEndpointAccessRequest.h>
#include <aws/redshift/model/CreateEventSubscriptionRequest.h>
#include <aws/redshift/model/CreateHsmClientCertificateRequest.h>
#include <aws/redshift/model/CreateHsmConfigurationRequest.h>
#include <aws/redshift/model/CreateScheduledActionRequest.h>
#include <aws/redshift/model/CreateSnapshotCopyGrantRequest.h>
#include <aws/redshift/model/CreateSnapshotScheduleRequest.h>
#include <aws/redshift/model/CreateTagsRequest.h>
#include <aws/redshift/model/CreateUsageLimitRequest.h>
#include <aws/redshift/model/DeauthorizeDataShareRequest.h>
#include <aws/redshift/model/DeleteAuthenticationProfileRequest.h>
#include <aws/redshift/model/DeleteClusterRequest.h>
#include <aws/redshift/model/DeleteClusterParameterGroupRequest.h>
#include <aws/redshift/model/DeleteClusterSecurityGroupRequest.h>
#include <aws/redshift/model/DeleteClusterSnapshotRequest.h>
#include <aws/redshift/model/DeleteClusterSubnetGroupRequest.h>
#include <aws/redshift/model/DeleteEndpointAccessRequest.h>
#include <aws/redshift/model/DeleteEventSubscriptionRequest.h>
#include <aws/redshift/model/DeleteHsmClientCertificateRequest.h>
#include <aws/redshift/model/DeleteHsmConfigurationRequest.h>
#include <aws/redshift/model/DeletePartnerRequest.h>
#include <aws/redshift/model/DeleteScheduledActionRequest.h>
#include <aws/redshift/model/DeleteSnapshotCopyGrantRequest.h>
#include <aws/redshift/model/DeleteSnapshotScheduleRequest.h>
#include <aws/redshift/model/DeleteTagsRequest.h>
#include <aws/redshift/model/DeleteUsageLimitRequest.h>
#include <aws/redshift/model/DescribeAccountAttributesRequest.h>
#include <aws/redshift/model/DescribeAuthenticationProfilesRequest.h>
#include <aws/redshift/model/DescribeClusterDbRevisionsRequest.h>
#include <aws/redshift/model/DescribeClusterParameterGroupsRequest.h>
#include <aws/redshift/model/DescribeClusterParametersRequest.h>
#include <aws/redshift/model/DescribeClusterSecurityGroupsRequest.h>
#include <aws/redshift/model/DescribeClusterSnapshotsRequest.h>
#include <aws/redshift/model/DescribeClusterSubnetGroupsRequest.h>
#include <aws/redshift/model/DescribeClusterTracksRequest.h>
#include <aws/redshift/model/DescribeClusterVersionsRequest.h>
#include <aws/redshift/model/DescribeClustersRequest.h>
#include <aws/redshift/model/DescribeDataSharesRequest.h>
#include <aws/redshift/model/DescribeDataSharesForConsumerRequest.h>
#include <aws/redshift/model/DescribeDataSharesForProducerRequest.h>
#include <aws/redshift/model/DescribeDefaultClusterParametersRequest.h>
#include <aws/redshift/model/DescribeEndpointAccessRequest.h>
#include <aws/redshift/model/DescribeEndpointAuthorizationRequest.h>
#include <aws/redshift/model/DescribeEventCategoriesRequest.h>
#include <aws/redshift/model/DescribeEventSubscriptionsRequest.h>
#include <aws/redshift/model/DescribeEventsRequest.h>
#include <aws/redshift/model/DescribeHsmClientCertificatesRequest.h>
#include <aws/redshift/model/DescribeHsmConfigurationsRequest.h>
#include <aws/redshift/model/DescribeLoggingStatusRequest.h>
#include <aws/redshift/model/DescribeNodeConfigurationOptionsRequest.h>
#include <aws/redshift/model/DescribeOrderableClusterOptionsRequest.h>
#include <aws/redshift/model/DescribePartnersRequest.h>
#include <aws/redshift/model/DescribeReservedNodeExchangeStatusRequest.h>
#include <aws/redshift/model/DescribeReservedNodeOfferingsRequest.h>
#include <aws/redshift/model/DescribeReservedNodesRequest.h>
#include <aws/redshift/model/DescribeResizeRequest.h>
#include <aws/redshift/model/DescribeScheduledActionsRequest.h>
#include <aws/redshift/model/DescribeSnapshotCopyGrantsRequest.h>
#include <aws/redshift/model/DescribeSnapshotSchedulesRequest.h>
#include <aws/redshift/model/DescribeStorageRequest.h>
#include <aws/redshift/model/DescribeTableRestoreStatusRequest.h>
#include <aws/redshift/model/DescribeTagsRequest.h>
#include <aws/redshift/model/DescribeUsageLimitsRequest.h>
#include <aws/redshift/model/DisableLoggingRequest.h>
#include <aws/redshift/model/DisableSnapshotCopyRequest.h>
#include <aws/redshift/model/DisassociateDataShareConsumerRequest.h>
#include <aws/redshift/model/EnableLoggingRequest.h>
#include <aws/redshift/model/EnableSnapshotCopyRequest.h>
#include <aws/redshift/model/GetClusterCredentialsRequest.h>
#include <aws/redshift/model/GetClusterCredentialsWithIAMRequest.h>
#include <aws/redshift/model/GetReservedNodeExchangeConfigurationOptionsRequest.h>
#include <aws/redshift/model/GetReservedNodeExchangeOfferingsRequest.h>
#include <aws/redshift/model/ModifyAquaConfigurationRequest.h>
#include <aws/redshift/model/ModifyAuthenticationProfileRequest.h>
#include <aws/redshift/model/ModifyClusterRequest.h>
#include <aws/redshift/model/ModifyClusterDbRevisionRequest.h>
#include <aws/redshift/model/ModifyClusterIamRolesRequest.h>
#include <aws/redshift/model/ModifyClusterMaintenanceRequest.h>
#include <aws/redshift/model/ModifyClusterParameterGroupRequest.h>
#include <aws/redshift/model/ModifyClusterSnapshotRequest.h>
#include <aws/redshift/model/ModifyClusterSnapshotScheduleRequest.h>
#include <aws/redshift/model/ModifyClusterSubnetGroupRequest.h>
#include <aws/redshift/model/ModifyEndpointAccessRequest.h>
#include <aws/redshift/model/ModifyEventSubscriptionRequest.h>
#include <aws/redshift/model/ModifyScheduledActionRequest.h>
#include <aws/redshift/model/ModifySnapshotCopyRetentionPeriodRequest.h>
#include <aws/redshift/model/ModifySnapshotScheduleRequest.h>
#include <aws/redshift/model/ModifyUsageLimitRequest.h>
#include <aws/redshift/model/PauseClusterRequest.h>
#include <aws/redshift/model/PurchaseReservedNodeOfferingRequest.h>
#include <aws/redshift/model/RebootClusterRequest.h>
#include <aws/redshift/model/RejectDataShareRequest.h>
#include <aws/redshift/model/ResetClusterParameterGroupRequest.h>
#include <aws/redshift/model/ResizeClusterRequest.h>
#include <aws/redshift/model/RestoreFromClusterSnapshotRequest.h>
#include <aws/redshift/model/RestoreTableFromClusterSnapshotRequest.h>
#include <aws/redshift/model/ResumeClusterRequest.h>
#include <aws/redshift/model/RevokeClusterSecurityGroupIngressRequest.h>
#include <aws/redshift/model/RevokeEndpointAccessRequest.h>
#include <aws/redshift/model/RevokeSnapshotAccessRequest.h>
#include <aws/redshift/model/RotateEncryptionKeyRequest.h>
#include <aws/redshift/model/UpdatePartnerStatusRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Redshift;
using namespace Aws::Redshift::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Xml;


const char* RedshiftClient::SERVICE_NAME = "redshift";
const char* RedshiftClient::ALLOCATION_TAG = "RedshiftClient";

RedshiftClient::RedshiftClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<RedshiftErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

RedshiftClient::RedshiftClient(const AWSCredentials& credentials,
                               const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<RedshiftErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

RedshiftClient::RedshiftClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                               const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<RedshiftErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

RedshiftClient::~RedshiftClient()
{
}

void RedshiftClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Redshift");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + RedshiftEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void RedshiftClient::OverrideEndpoint(const Aws::String& endpoint)
{
  if (endpoint.compare(0, 7, "http://") == 0 || endpoint.compare(0, 8, "https://") == 0)
  {
      m_uri = endpoint;
  }
  else
  {
      m_uri = m_configScheme + "://" + endpoint;
  }
}

Aws::String RedshiftClient::ConvertRequestToPresignedUrl(const AmazonSerializableWebServiceRequest& requestToConvert, const char* region) const
{
  Aws::StringStream ss;
  ss << "https://" << RedshiftEndpoint::ForRegion(region);
  ss << "?" << requestToConvert.SerializePayload();

  URI uri(ss.str());
  return GeneratePresignedUrl(uri, Aws::Http::HttpMethod::HTTP_GET, region, 3600);
}

AcceptReservedNodeExchangeOutcome RedshiftClient::AcceptReservedNodeExchange(const AcceptReservedNodeExchangeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AcceptReservedNodeExchangeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

AcceptReservedNodeExchangeOutcomeCallable RedshiftClient::AcceptReservedNodeExchangeCallable(const AcceptReservedNodeExchangeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AcceptReservedNodeExchangeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AcceptReservedNodeExchange(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftClient::AcceptReservedNodeExchangeAsync(const AcceptReservedNodeExchangeRequest& request, const AcceptReservedNodeExchangeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AcceptReservedNodeExchange(request), context);
    } );
}

AddPartnerOutcome RedshiftClient::AddPartner(const AddPartnerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AddPartnerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

AddPartnerOutcomeCallable RedshiftClient::AddPartnerCallable(const AddPartnerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddPartnerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddPartner(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftClient::AddPartnerAsync(const AddPartnerRequest& request, const AddPartnerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AddPartner(request), context);
    } );
}

AssociateDataShareConsumerOutcome RedshiftClient::AssociateDataShareConsumer(const AssociateDataShareConsumerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AssociateDataShareConsumerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

AssociateDataShareConsumerOutcomeCallable RedshiftClient::AssociateDataShareConsumerCallable(const AssociateDataShareConsumerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateDataShareConsumerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateDataShareConsumer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftClient::AssociateDataShareConsumerAsync(const AssociateDataShareConsumerRequest& request, const AssociateDataShareConsumerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AssociateDataShareConsumer(request), context);
    } );
}

AuthorizeClusterSecurityGroupIngressOutcome RedshiftClient::AuthorizeClusterSecurityGroupIngress(const AuthorizeClusterSecurityGroupIngressRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AuthorizeClusterSecurityGroupIngressOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

AuthorizeClusterSecurityGroupIngressOutcomeCallable RedshiftClient::AuthorizeClusterSecurityGroupIngressCallable(const AuthorizeClusterSecurityGroupIngressRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AuthorizeClusterSecurityGroupIngressOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AuthorizeClusterSecurityGroupIngress(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftClient::AuthorizeClusterSecurityGroupIngressAsync(const AuthorizeClusterSecurityGroupIngressRequest& request, const AuthorizeClusterSecurityGroupIngressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AuthorizeClusterSecurityGroupIngress(request), context);
    } );
}

AuthorizeDataShareOutcome RedshiftClient::AuthorizeDataShare(const AuthorizeDataShareRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AuthorizeDataShareOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

AuthorizeDataShareOutcomeCallable RedshiftClient::AuthorizeDataShareCallable(const AuthorizeDataShareRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AuthorizeDataShareOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AuthorizeDataShare(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftClient::AuthorizeDataShareAsync(const AuthorizeDataShareRequest& request, const AuthorizeDataShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AuthorizeDataShare(request), context);
    } );
}

AuthorizeEndpointAccessOutcome RedshiftClient::AuthorizeEndpointAccess(const AuthorizeEndpointAccessRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AuthorizeEndpointAccessOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

AuthorizeEndpointAccessOutcomeCallable RedshiftClient::AuthorizeEndpointAccessCallable(const AuthorizeEndpointAccessRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AuthorizeEndpointAccessOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AuthorizeEndpointAccess(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftClient::AuthorizeEndpointAccessAsync(const AuthorizeEndpointAccessRequest& request, const AuthorizeEndpointAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AuthorizeEndpointAccess(request), context);
    } );
}

AuthorizeSnapshotAccessOutcome RedshiftClient::AuthorizeSnapshotAccess(const AuthorizeSnapshotAccessRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AuthorizeSnapshotAccessOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

AuthorizeSnapshotAccessOutcomeCallable RedshiftClient::AuthorizeSnapshotAccessCallable(const AuthorizeSnapshotAccessRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AuthorizeSnapshotAccessOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AuthorizeSnapshotAccess(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftClient::AuthorizeSnapshotAccessAsync(const AuthorizeSnapshotAccessRequest& request, const AuthorizeSnapshotAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AuthorizeSnapshotAccess(request), context);
    } );
}

BatchDeleteClusterSnapshotsOutcome RedshiftClient::BatchDeleteClusterSnapshots(const BatchDeleteClusterSnapshotsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return BatchDeleteClusterSnapshotsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

BatchDeleteClusterSnapshotsOutcomeCallable RedshiftClient::BatchDeleteClusterSnapshotsCallable(const BatchDeleteClusterSnapshotsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchDeleteClusterSnapshotsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchDeleteClusterSnapshots(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftClient::BatchDeleteClusterSnapshotsAsync(const BatchDeleteClusterSnapshotsRequest& request, const BatchDeleteClusterSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, BatchDeleteClusterSnapshots(request), context);
    } );
}

BatchModifyClusterSnapshotsOutcome RedshiftClient::BatchModifyClusterSnapshots(const BatchModifyClusterSnapshotsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return BatchModifyClusterSnapshotsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

BatchModifyClusterSnapshotsOutcomeCallable RedshiftClient::BatchModifyClusterSnapshotsCallable(const BatchModifyClusterSnapshotsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchModifyClusterSnapshotsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchModifyClusterSnapshots(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftClient::BatchModifyClusterSnapshotsAsync(const BatchModifyClusterSnapshotsRequest& request, const BatchModifyClusterSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, BatchModifyClusterSnapshots(request), context);
    } );
}

CancelResizeOutcome RedshiftClient::CancelResize(const CancelResizeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CancelResizeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CancelResizeOutcomeCallable RedshiftClient::CancelResizeCallable(const CancelResizeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CancelResizeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CancelResize(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftClient::CancelResizeAsync(const CancelResizeRequest& request, const CancelResizeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CancelResize(request), context);
    } );
}

CopyClusterSnapshotOutcome RedshiftClient::CopyClusterSnapshot(const CopyClusterSnapshotRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CopyClusterSnapshotOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CopyClusterSnapshotOutcomeCallable RedshiftClient::CopyClusterSnapshotCallable(const CopyClusterSnapshotRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CopyClusterSnapshotOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CopyClusterSnapshot(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftClient::CopyClusterSnapshotAsync(const CopyClusterSnapshotRequest& request, const CopyClusterSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CopyClusterSnapshot(request), context);
    } );
}

CreateAuthenticationProfileOutcome RedshiftClient::CreateAuthenticationProfile(const CreateAuthenticationProfileRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateAuthenticationProfileOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateAuthenticationProfileOutcomeCallable RedshiftClient::CreateAuthenticationProfileCallable(const CreateAuthenticationProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateAuthenticationProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateAuthenticationProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftClient::CreateAuthenticationProfileAsync(const CreateAuthenticationProfileRequest& request, const CreateAuthenticationProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateAuthenticationProfile(request), context);
    } );
}

CreateClusterOutcome RedshiftClient::CreateCluster(const CreateClusterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateClusterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateClusterOutcomeCallable RedshiftClient::CreateClusterCallable(const CreateClusterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateClusterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateCluster(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftClient::CreateClusterAsync(const CreateClusterRequest& request, const CreateClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateCluster(request), context);
    } );
}

CreateClusterParameterGroupOutcome RedshiftClient::CreateClusterParameterGroup(const CreateClusterParameterGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateClusterParameterGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateClusterParameterGroupOutcomeCallable RedshiftClient::CreateClusterParameterGroupCallable(const CreateClusterParameterGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateClusterParameterGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateClusterParameterGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftClient::CreateClusterParameterGroupAsync(const CreateClusterParameterGroupRequest& request, const CreateClusterParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateClusterParameterGroup(request), context);
    } );
}

CreateClusterSecurityGroupOutcome RedshiftClient::CreateClusterSecurityGroup(const CreateClusterSecurityGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateClusterSecurityGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateClusterSecurityGroupOutcomeCallable RedshiftClient::CreateClusterSecurityGroupCallable(const CreateClusterSecurityGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateClusterSecurityGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateClusterSecurityGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftClient::CreateClusterSecurityGroupAsync(const CreateClusterSecurityGroupRequest& request, const CreateClusterSecurityGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateClusterSecurityGroup(request), context);
    } );
}

CreateClusterSnapshotOutcome RedshiftClient::CreateClusterSnapshot(const CreateClusterSnapshotRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateClusterSnapshotOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateClusterSnapshotOutcomeCallable RedshiftClient::CreateClusterSnapshotCallable(const CreateClusterSnapshotRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateClusterSnapshotOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateClusterSnapshot(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftClient::CreateClusterSnapshotAsync(const CreateClusterSnapshotRequest& request, const CreateClusterSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateClusterSnapshot(request), context);
    } );
}

CreateClusterSubnetGroupOutcome RedshiftClient::CreateClusterSubnetGroup(const CreateClusterSubnetGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateClusterSubnetGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateClusterSubnetGroupOutcomeCallable RedshiftClient::CreateClusterSubnetGroupCallable(const CreateClusterSubnetGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateClusterSubnetGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateClusterSubnetGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftClient::CreateClusterSubnetGroupAsync(const CreateClusterSubnetGroupRequest& request, const CreateClusterSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateClusterSubnetGroup(request), context);
    } );
}

CreateEndpointAccessOutcome RedshiftClient::CreateEndpointAccess(const CreateEndpointAccessRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateEndpointAccessOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateEndpointAccessOutcomeCallable RedshiftClient::CreateEndpointAccessCallable(const CreateEndpointAccessRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateEndpointAccessOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateEndpointAccess(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftClient::CreateEndpointAccessAsync(const CreateEndpointAccessRequest& request, const CreateEndpointAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateEndpointAccess(request), context);
    } );
}

CreateEventSubscriptionOutcome RedshiftClient::CreateEventSubscription(const CreateEventSubscriptionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateEventSubscriptionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateEventSubscriptionOutcomeCallable RedshiftClient::CreateEventSubscriptionCallable(const CreateEventSubscriptionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateEventSubscriptionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateEventSubscription(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftClient::CreateEventSubscriptionAsync(const CreateEventSubscriptionRequest& request, const CreateEventSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateEventSubscription(request), context);
    } );
}

CreateHsmClientCertificateOutcome RedshiftClient::CreateHsmClientCertificate(const CreateHsmClientCertificateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateHsmClientCertificateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateHsmClientCertificateOutcomeCallable RedshiftClient::CreateHsmClientCertificateCallable(const CreateHsmClientCertificateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateHsmClientCertificateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateHsmClientCertificate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftClient::CreateHsmClientCertificateAsync(const CreateHsmClientCertificateRequest& request, const CreateHsmClientCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateHsmClientCertificate(request), context);
    } );
}

CreateHsmConfigurationOutcome RedshiftClient::CreateHsmConfiguration(const CreateHsmConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateHsmConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateHsmConfigurationOutcomeCallable RedshiftClient::CreateHsmConfigurationCallable(const CreateHsmConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateHsmConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateHsmConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftClient::CreateHsmConfigurationAsync(const CreateHsmConfigurationRequest& request, const CreateHsmConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateHsmConfiguration(request), context);
    } );
}

CreateScheduledActionOutcome RedshiftClient::CreateScheduledAction(const CreateScheduledActionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateScheduledActionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateScheduledActionOutcomeCallable RedshiftClient::CreateScheduledActionCallable(const CreateScheduledActionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateScheduledActionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateScheduledAction(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftClient::CreateScheduledActionAsync(const CreateScheduledActionRequest& request, const CreateScheduledActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateScheduledAction(request), context);
    } );
}

CreateSnapshotCopyGrantOutcome RedshiftClient::CreateSnapshotCopyGrant(const CreateSnapshotCopyGrantRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateSnapshotCopyGrantOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateSnapshotCopyGrantOutcomeCallable RedshiftClient::CreateSnapshotCopyGrantCallable(const CreateSnapshotCopyGrantRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateSnapshotCopyGrantOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateSnapshotCopyGrant(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftClient::CreateSnapshotCopyGrantAsync(const CreateSnapshotCopyGrantRequest& request, const CreateSnapshotCopyGrantResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateSnapshotCopyGrant(request), context);
    } );
}

CreateSnapshotScheduleOutcome RedshiftClient::CreateSnapshotSchedule(const CreateSnapshotScheduleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateSnapshotScheduleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateSnapshotScheduleOutcomeCallable RedshiftClient::CreateSnapshotScheduleCallable(const CreateSnapshotScheduleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateSnapshotScheduleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateSnapshotSchedule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftClient::CreateSnapshotScheduleAsync(const CreateSnapshotScheduleRequest& request, const CreateSnapshotScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateSnapshotSchedule(request), context);
    } );
}

CreateTagsOutcome RedshiftClient::CreateTags(const CreateTagsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateTagsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateTagsOutcomeCallable RedshiftClient::CreateTagsCallable(const CreateTagsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateTagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateTags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftClient::CreateTagsAsync(const CreateTagsRequest& request, const CreateTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateTags(request), context);
    } );
}

CreateUsageLimitOutcome RedshiftClient::CreateUsageLimit(const CreateUsageLimitRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateUsageLimitOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateUsageLimitOutcomeCallable RedshiftClient::CreateUsageLimitCallable(const CreateUsageLimitRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateUsageLimitOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateUsageLimit(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftClient::CreateUsageLimitAsync(const CreateUsageLimitRequest& request, const CreateUsageLimitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateUsageLimit(request), context);
    } );
}

DeauthorizeDataShareOutcome RedshiftClient::DeauthorizeDataShare(const DeauthorizeDataShareRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeauthorizeDataShareOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeauthorizeDataShareOutcomeCallable RedshiftClient::DeauthorizeDataShareCallable(const DeauthorizeDataShareRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeauthorizeDataShareOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeauthorizeDataShare(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftClient::DeauthorizeDataShareAsync(const DeauthorizeDataShareRequest& request, const DeauthorizeDataShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeauthorizeDataShare(request), context);
    } );
}

DeleteAuthenticationProfileOutcome RedshiftClient::DeleteAuthenticationProfile(const DeleteAuthenticationProfileRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteAuthenticationProfileOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteAuthenticationProfileOutcomeCallable RedshiftClient::DeleteAuthenticationProfileCallable(const DeleteAuthenticationProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAuthenticationProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAuthenticationProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftClient::DeleteAuthenticationProfileAsync(const DeleteAuthenticationProfileRequest& request, const DeleteAuthenticationProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteAuthenticationProfile(request), context);
    } );
}

DeleteClusterOutcome RedshiftClient::DeleteCluster(const DeleteClusterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteClusterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteClusterOutcomeCallable RedshiftClient::DeleteClusterCallable(const DeleteClusterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteClusterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteCluster(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftClient::DeleteClusterAsync(const DeleteClusterRequest& request, const DeleteClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteCluster(request), context);
    } );
}

DeleteClusterParameterGroupOutcome RedshiftClient::DeleteClusterParameterGroup(const DeleteClusterParameterGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteClusterParameterGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteClusterParameterGroupOutcomeCallable RedshiftClient::DeleteClusterParameterGroupCallable(const DeleteClusterParameterGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteClusterParameterGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteClusterParameterGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftClient::DeleteClusterParameterGroupAsync(const DeleteClusterParameterGroupRequest& request, const DeleteClusterParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteClusterParameterGroup(request), context);
    } );
}

DeleteClusterSecurityGroupOutcome RedshiftClient::DeleteClusterSecurityGroup(const DeleteClusterSecurityGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteClusterSecurityGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteClusterSecurityGroupOutcomeCallable RedshiftClient::DeleteClusterSecurityGroupCallable(const DeleteClusterSecurityGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteClusterSecurityGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteClusterSecurityGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftClient::DeleteClusterSecurityGroupAsync(const DeleteClusterSecurityGroupRequest& request, const DeleteClusterSecurityGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteClusterSecurityGroup(request), context);
    } );
}

DeleteClusterSnapshotOutcome RedshiftClient::DeleteClusterSnapshot(const DeleteClusterSnapshotRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteClusterSnapshotOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteClusterSnapshotOutcomeCallable RedshiftClient::DeleteClusterSnapshotCallable(const DeleteClusterSnapshotRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteClusterSnapshotOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteClusterSnapshot(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftClient::DeleteClusterSnapshotAsync(const DeleteClusterSnapshotRequest& request, const DeleteClusterSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteClusterSnapshot(request), context);
    } );
}

DeleteClusterSubnetGroupOutcome RedshiftClient::DeleteClusterSubnetGroup(const DeleteClusterSubnetGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteClusterSubnetGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteClusterSubnetGroupOutcomeCallable RedshiftClient::DeleteClusterSubnetGroupCallable(const DeleteClusterSubnetGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteClusterSubnetGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteClusterSubnetGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftClient::DeleteClusterSubnetGroupAsync(const DeleteClusterSubnetGroupRequest& request, const DeleteClusterSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteClusterSubnetGroup(request), context);
    } );
}

DeleteEndpointAccessOutcome RedshiftClient::DeleteEndpointAccess(const DeleteEndpointAccessRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteEndpointAccessOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteEndpointAccessOutcomeCallable RedshiftClient::DeleteEndpointAccessCallable(const DeleteEndpointAccessRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteEndpointAccessOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteEndpointAccess(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftClient::DeleteEndpointAccessAsync(const DeleteEndpointAccessRequest& request, const DeleteEndpointAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteEndpointAccess(request), context);
    } );
}

DeleteEventSubscriptionOutcome RedshiftClient::DeleteEventSubscription(const DeleteEventSubscriptionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteEventSubscriptionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteEventSubscriptionOutcomeCallable RedshiftClient::DeleteEventSubscriptionCallable(const DeleteEventSubscriptionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteEventSubscriptionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteEventSubscription(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftClient::DeleteEventSubscriptionAsync(const DeleteEventSubscriptionRequest& request, const DeleteEventSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteEventSubscription(request), context);
    } );
}

DeleteHsmClientCertificateOutcome RedshiftClient::DeleteHsmClientCertificate(const DeleteHsmClientCertificateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteHsmClientCertificateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteHsmClientCertificateOutcomeCallable RedshiftClient::DeleteHsmClientCertificateCallable(const DeleteHsmClientCertificateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteHsmClientCertificateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteHsmClientCertificate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftClient::DeleteHsmClientCertificateAsync(const DeleteHsmClientCertificateRequest& request, const DeleteHsmClientCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteHsmClientCertificate(request), context);
    } );
}

DeleteHsmConfigurationOutcome RedshiftClient::DeleteHsmConfiguration(const DeleteHsmConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteHsmConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteHsmConfigurationOutcomeCallable RedshiftClient::DeleteHsmConfigurationCallable(const DeleteHsmConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteHsmConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteHsmConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftClient::DeleteHsmConfigurationAsync(const DeleteHsmConfigurationRequest& request, const DeleteHsmConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteHsmConfiguration(request), context);
    } );
}

DeletePartnerOutcome RedshiftClient::DeletePartner(const DeletePartnerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeletePartnerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeletePartnerOutcomeCallable RedshiftClient::DeletePartnerCallable(const DeletePartnerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeletePartnerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeletePartner(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftClient::DeletePartnerAsync(const DeletePartnerRequest& request, const DeletePartnerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeletePartner(request), context);
    } );
}

DeleteScheduledActionOutcome RedshiftClient::DeleteScheduledAction(const DeleteScheduledActionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteScheduledActionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteScheduledActionOutcomeCallable RedshiftClient::DeleteScheduledActionCallable(const DeleteScheduledActionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteScheduledActionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteScheduledAction(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftClient::DeleteScheduledActionAsync(const DeleteScheduledActionRequest& request, const DeleteScheduledActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteScheduledAction(request), context);
    } );
}

DeleteSnapshotCopyGrantOutcome RedshiftClient::DeleteSnapshotCopyGrant(const DeleteSnapshotCopyGrantRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteSnapshotCopyGrantOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteSnapshotCopyGrantOutcomeCallable RedshiftClient::DeleteSnapshotCopyGrantCallable(const DeleteSnapshotCopyGrantRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteSnapshotCopyGrantOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteSnapshotCopyGrant(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftClient::DeleteSnapshotCopyGrantAsync(const DeleteSnapshotCopyGrantRequest& request, const DeleteSnapshotCopyGrantResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteSnapshotCopyGrant(request), context);
    } );
}

DeleteSnapshotScheduleOutcome RedshiftClient::DeleteSnapshotSchedule(const DeleteSnapshotScheduleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteSnapshotScheduleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteSnapshotScheduleOutcomeCallable RedshiftClient::DeleteSnapshotScheduleCallable(const DeleteSnapshotScheduleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteSnapshotScheduleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteSnapshotSchedule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftClient::DeleteSnapshotScheduleAsync(const DeleteSnapshotScheduleRequest& request, const DeleteSnapshotScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteSnapshotSchedule(request), context);
    } );
}

DeleteTagsOutcome RedshiftClient::DeleteTags(const DeleteTagsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteTagsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteTagsOutcomeCallable RedshiftClient::DeleteTagsCallable(const DeleteTagsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteTagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteTags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftClient::DeleteTagsAsync(const DeleteTagsRequest& request, const DeleteTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteTags(request), context);
    } );
}

DeleteUsageLimitOutcome RedshiftClient::DeleteUsageLimit(const DeleteUsageLimitRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteUsageLimitOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteUsageLimitOutcomeCallable RedshiftClient::DeleteUsageLimitCallable(const DeleteUsageLimitRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteUsageLimitOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteUsageLimit(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftClient::DeleteUsageLimitAsync(const DeleteUsageLimitRequest& request, const DeleteUsageLimitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteUsageLimit(request), context);
    } );
}

DescribeAccountAttributesOutcome RedshiftClient::DescribeAccountAttributes(const DescribeAccountAttributesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeAccountAttributesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeAccountAttributesOutcomeCallable RedshiftClient::DescribeAccountAttributesCallable(const DescribeAccountAttributesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAccountAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAccountAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftClient::DescribeAccountAttributesAsync(const DescribeAccountAttributesRequest& request, const DescribeAccountAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeAccountAttributes(request), context);
    } );
}

DescribeAuthenticationProfilesOutcome RedshiftClient::DescribeAuthenticationProfiles(const DescribeAuthenticationProfilesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeAuthenticationProfilesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeAuthenticationProfilesOutcomeCallable RedshiftClient::DescribeAuthenticationProfilesCallable(const DescribeAuthenticationProfilesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAuthenticationProfilesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAuthenticationProfiles(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftClient::DescribeAuthenticationProfilesAsync(const DescribeAuthenticationProfilesRequest& request, const DescribeAuthenticationProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeAuthenticationProfiles(request), context);
    } );
}

DescribeClusterDbRevisionsOutcome RedshiftClient::DescribeClusterDbRevisions(const DescribeClusterDbRevisionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeClusterDbRevisionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeClusterDbRevisionsOutcomeCallable RedshiftClient::DescribeClusterDbRevisionsCallable(const DescribeClusterDbRevisionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeClusterDbRevisionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeClusterDbRevisions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftClient::DescribeClusterDbRevisionsAsync(const DescribeClusterDbRevisionsRequest& request, const DescribeClusterDbRevisionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeClusterDbRevisions(request), context);
    } );
}

DescribeClusterParameterGroupsOutcome RedshiftClient::DescribeClusterParameterGroups(const DescribeClusterParameterGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeClusterParameterGroupsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeClusterParameterGroupsOutcomeCallable RedshiftClient::DescribeClusterParameterGroupsCallable(const DescribeClusterParameterGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeClusterParameterGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeClusterParameterGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftClient::DescribeClusterParameterGroupsAsync(const DescribeClusterParameterGroupsRequest& request, const DescribeClusterParameterGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeClusterParameterGroups(request), context);
    } );
}

DescribeClusterParametersOutcome RedshiftClient::DescribeClusterParameters(const DescribeClusterParametersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeClusterParametersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeClusterParametersOutcomeCallable RedshiftClient::DescribeClusterParametersCallable(const DescribeClusterParametersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeClusterParametersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeClusterParameters(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftClient::DescribeClusterParametersAsync(const DescribeClusterParametersRequest& request, const DescribeClusterParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeClusterParameters(request), context);
    } );
}

DescribeClusterSecurityGroupsOutcome RedshiftClient::DescribeClusterSecurityGroups(const DescribeClusterSecurityGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeClusterSecurityGroupsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeClusterSecurityGroupsOutcomeCallable RedshiftClient::DescribeClusterSecurityGroupsCallable(const DescribeClusterSecurityGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeClusterSecurityGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeClusterSecurityGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftClient::DescribeClusterSecurityGroupsAsync(const DescribeClusterSecurityGroupsRequest& request, const DescribeClusterSecurityGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeClusterSecurityGroups(request), context);
    } );
}

DescribeClusterSnapshotsOutcome RedshiftClient::DescribeClusterSnapshots(const DescribeClusterSnapshotsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeClusterSnapshotsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeClusterSnapshotsOutcomeCallable RedshiftClient::DescribeClusterSnapshotsCallable(const DescribeClusterSnapshotsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeClusterSnapshotsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeClusterSnapshots(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftClient::DescribeClusterSnapshotsAsync(const DescribeClusterSnapshotsRequest& request, const DescribeClusterSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeClusterSnapshots(request), context);
    } );
}

DescribeClusterSubnetGroupsOutcome RedshiftClient::DescribeClusterSubnetGroups(const DescribeClusterSubnetGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeClusterSubnetGroupsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeClusterSubnetGroupsOutcomeCallable RedshiftClient::DescribeClusterSubnetGroupsCallable(const DescribeClusterSubnetGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeClusterSubnetGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeClusterSubnetGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftClient::DescribeClusterSubnetGroupsAsync(const DescribeClusterSubnetGroupsRequest& request, const DescribeClusterSubnetGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeClusterSubnetGroups(request), context);
    } );
}

DescribeClusterTracksOutcome RedshiftClient::DescribeClusterTracks(const DescribeClusterTracksRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeClusterTracksOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeClusterTracksOutcomeCallable RedshiftClient::DescribeClusterTracksCallable(const DescribeClusterTracksRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeClusterTracksOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeClusterTracks(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftClient::DescribeClusterTracksAsync(const DescribeClusterTracksRequest& request, const DescribeClusterTracksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeClusterTracks(request), context);
    } );
}

DescribeClusterVersionsOutcome RedshiftClient::DescribeClusterVersions(const DescribeClusterVersionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeClusterVersionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeClusterVersionsOutcomeCallable RedshiftClient::DescribeClusterVersionsCallable(const DescribeClusterVersionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeClusterVersionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeClusterVersions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftClient::DescribeClusterVersionsAsync(const DescribeClusterVersionsRequest& request, const DescribeClusterVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeClusterVersions(request), context);
    } );
}

DescribeClustersOutcome RedshiftClient::DescribeClusters(const DescribeClustersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeClustersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeClustersOutcomeCallable RedshiftClient::DescribeClustersCallable(const DescribeClustersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeClustersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeClusters(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftClient::DescribeClustersAsync(const DescribeClustersRequest& request, const DescribeClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeClusters(request), context);
    } );
}

DescribeDataSharesOutcome RedshiftClient::DescribeDataShares(const DescribeDataSharesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeDataSharesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeDataSharesOutcomeCallable RedshiftClient::DescribeDataSharesCallable(const DescribeDataSharesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDataSharesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDataShares(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftClient::DescribeDataSharesAsync(const DescribeDataSharesRequest& request, const DescribeDataSharesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeDataShares(request), context);
    } );
}

DescribeDataSharesForConsumerOutcome RedshiftClient::DescribeDataSharesForConsumer(const DescribeDataSharesForConsumerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeDataSharesForConsumerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeDataSharesForConsumerOutcomeCallable RedshiftClient::DescribeDataSharesForConsumerCallable(const DescribeDataSharesForConsumerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDataSharesForConsumerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDataSharesForConsumer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftClient::DescribeDataSharesForConsumerAsync(const DescribeDataSharesForConsumerRequest& request, const DescribeDataSharesForConsumerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeDataSharesForConsumer(request), context);
    } );
}

DescribeDataSharesForProducerOutcome RedshiftClient::DescribeDataSharesForProducer(const DescribeDataSharesForProducerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeDataSharesForProducerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeDataSharesForProducerOutcomeCallable RedshiftClient::DescribeDataSharesForProducerCallable(const DescribeDataSharesForProducerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDataSharesForProducerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDataSharesForProducer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftClient::DescribeDataSharesForProducerAsync(const DescribeDataSharesForProducerRequest& request, const DescribeDataSharesForProducerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeDataSharesForProducer(request), context);
    } );
}

DescribeDefaultClusterParametersOutcome RedshiftClient::DescribeDefaultClusterParameters(const DescribeDefaultClusterParametersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeDefaultClusterParametersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeDefaultClusterParametersOutcomeCallable RedshiftClient::DescribeDefaultClusterParametersCallable(const DescribeDefaultClusterParametersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDefaultClusterParametersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDefaultClusterParameters(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftClient::DescribeDefaultClusterParametersAsync(const DescribeDefaultClusterParametersRequest& request, const DescribeDefaultClusterParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeDefaultClusterParameters(request), context);
    } );
}

DescribeEndpointAccessOutcome RedshiftClient::DescribeEndpointAccess(const DescribeEndpointAccessRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeEndpointAccessOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeEndpointAccessOutcomeCallable RedshiftClient::DescribeEndpointAccessCallable(const DescribeEndpointAccessRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEndpointAccessOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEndpointAccess(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftClient::DescribeEndpointAccessAsync(const DescribeEndpointAccessRequest& request, const DescribeEndpointAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeEndpointAccess(request), context);
    } );
}

DescribeEndpointAuthorizationOutcome RedshiftClient::DescribeEndpointAuthorization(const DescribeEndpointAuthorizationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeEndpointAuthorizationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeEndpointAuthorizationOutcomeCallable RedshiftClient::DescribeEndpointAuthorizationCallable(const DescribeEndpointAuthorizationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEndpointAuthorizationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEndpointAuthorization(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftClient::DescribeEndpointAuthorizationAsync(const DescribeEndpointAuthorizationRequest& request, const DescribeEndpointAuthorizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeEndpointAuthorization(request), context);
    } );
}

DescribeEventCategoriesOutcome RedshiftClient::DescribeEventCategories(const DescribeEventCategoriesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeEventCategoriesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeEventCategoriesOutcomeCallable RedshiftClient::DescribeEventCategoriesCallable(const DescribeEventCategoriesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEventCategoriesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEventCategories(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftClient::DescribeEventCategoriesAsync(const DescribeEventCategoriesRequest& request, const DescribeEventCategoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeEventCategories(request), context);
    } );
}

DescribeEventSubscriptionsOutcome RedshiftClient::DescribeEventSubscriptions(const DescribeEventSubscriptionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeEventSubscriptionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeEventSubscriptionsOutcomeCallable RedshiftClient::DescribeEventSubscriptionsCallable(const DescribeEventSubscriptionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEventSubscriptionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEventSubscriptions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftClient::DescribeEventSubscriptionsAsync(const DescribeEventSubscriptionsRequest& request, const DescribeEventSubscriptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeEventSubscriptions(request), context);
    } );
}

DescribeEventsOutcome RedshiftClient::DescribeEvents(const DescribeEventsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeEventsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeEventsOutcomeCallable RedshiftClient::DescribeEventsCallable(const DescribeEventsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEventsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEvents(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftClient::DescribeEventsAsync(const DescribeEventsRequest& request, const DescribeEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeEvents(request), context);
    } );
}

DescribeHsmClientCertificatesOutcome RedshiftClient::DescribeHsmClientCertificates(const DescribeHsmClientCertificatesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeHsmClientCertificatesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeHsmClientCertificatesOutcomeCallable RedshiftClient::DescribeHsmClientCertificatesCallable(const DescribeHsmClientCertificatesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeHsmClientCertificatesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeHsmClientCertificates(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftClient::DescribeHsmClientCertificatesAsync(const DescribeHsmClientCertificatesRequest& request, const DescribeHsmClientCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeHsmClientCertificates(request), context);
    } );
}

DescribeHsmConfigurationsOutcome RedshiftClient::DescribeHsmConfigurations(const DescribeHsmConfigurationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeHsmConfigurationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeHsmConfigurationsOutcomeCallable RedshiftClient::DescribeHsmConfigurationsCallable(const DescribeHsmConfigurationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeHsmConfigurationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeHsmConfigurations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftClient::DescribeHsmConfigurationsAsync(const DescribeHsmConfigurationsRequest& request, const DescribeHsmConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeHsmConfigurations(request), context);
    } );
}

DescribeLoggingStatusOutcome RedshiftClient::DescribeLoggingStatus(const DescribeLoggingStatusRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeLoggingStatusOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeLoggingStatusOutcomeCallable RedshiftClient::DescribeLoggingStatusCallable(const DescribeLoggingStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeLoggingStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeLoggingStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftClient::DescribeLoggingStatusAsync(const DescribeLoggingStatusRequest& request, const DescribeLoggingStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeLoggingStatus(request), context);
    } );
}

DescribeNodeConfigurationOptionsOutcome RedshiftClient::DescribeNodeConfigurationOptions(const DescribeNodeConfigurationOptionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeNodeConfigurationOptionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeNodeConfigurationOptionsOutcomeCallable RedshiftClient::DescribeNodeConfigurationOptionsCallable(const DescribeNodeConfigurationOptionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeNodeConfigurationOptionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeNodeConfigurationOptions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftClient::DescribeNodeConfigurationOptionsAsync(const DescribeNodeConfigurationOptionsRequest& request, const DescribeNodeConfigurationOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeNodeConfigurationOptions(request), context);
    } );
}

DescribeOrderableClusterOptionsOutcome RedshiftClient::DescribeOrderableClusterOptions(const DescribeOrderableClusterOptionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeOrderableClusterOptionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeOrderableClusterOptionsOutcomeCallable RedshiftClient::DescribeOrderableClusterOptionsCallable(const DescribeOrderableClusterOptionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeOrderableClusterOptionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeOrderableClusterOptions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftClient::DescribeOrderableClusterOptionsAsync(const DescribeOrderableClusterOptionsRequest& request, const DescribeOrderableClusterOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeOrderableClusterOptions(request), context);
    } );
}

DescribePartnersOutcome RedshiftClient::DescribePartners(const DescribePartnersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribePartnersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribePartnersOutcomeCallable RedshiftClient::DescribePartnersCallable(const DescribePartnersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribePartnersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribePartners(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftClient::DescribePartnersAsync(const DescribePartnersRequest& request, const DescribePartnersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribePartners(request), context);
    } );
}

DescribeReservedNodeExchangeStatusOutcome RedshiftClient::DescribeReservedNodeExchangeStatus(const DescribeReservedNodeExchangeStatusRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeReservedNodeExchangeStatusOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeReservedNodeExchangeStatusOutcomeCallable RedshiftClient::DescribeReservedNodeExchangeStatusCallable(const DescribeReservedNodeExchangeStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeReservedNodeExchangeStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeReservedNodeExchangeStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftClient::DescribeReservedNodeExchangeStatusAsync(const DescribeReservedNodeExchangeStatusRequest& request, const DescribeReservedNodeExchangeStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeReservedNodeExchangeStatus(request), context);
    } );
}

DescribeReservedNodeOfferingsOutcome RedshiftClient::DescribeReservedNodeOfferings(const DescribeReservedNodeOfferingsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeReservedNodeOfferingsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeReservedNodeOfferingsOutcomeCallable RedshiftClient::DescribeReservedNodeOfferingsCallable(const DescribeReservedNodeOfferingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeReservedNodeOfferingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeReservedNodeOfferings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftClient::DescribeReservedNodeOfferingsAsync(const DescribeReservedNodeOfferingsRequest& request, const DescribeReservedNodeOfferingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeReservedNodeOfferings(request), context);
    } );
}

DescribeReservedNodesOutcome RedshiftClient::DescribeReservedNodes(const DescribeReservedNodesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeReservedNodesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeReservedNodesOutcomeCallable RedshiftClient::DescribeReservedNodesCallable(const DescribeReservedNodesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeReservedNodesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeReservedNodes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftClient::DescribeReservedNodesAsync(const DescribeReservedNodesRequest& request, const DescribeReservedNodesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeReservedNodes(request), context);
    } );
}

DescribeResizeOutcome RedshiftClient::DescribeResize(const DescribeResizeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeResizeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeResizeOutcomeCallable RedshiftClient::DescribeResizeCallable(const DescribeResizeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeResizeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeResize(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftClient::DescribeResizeAsync(const DescribeResizeRequest& request, const DescribeResizeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeResize(request), context);
    } );
}

DescribeScheduledActionsOutcome RedshiftClient::DescribeScheduledActions(const DescribeScheduledActionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeScheduledActionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeScheduledActionsOutcomeCallable RedshiftClient::DescribeScheduledActionsCallable(const DescribeScheduledActionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeScheduledActionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeScheduledActions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftClient::DescribeScheduledActionsAsync(const DescribeScheduledActionsRequest& request, const DescribeScheduledActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeScheduledActions(request), context);
    } );
}

DescribeSnapshotCopyGrantsOutcome RedshiftClient::DescribeSnapshotCopyGrants(const DescribeSnapshotCopyGrantsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeSnapshotCopyGrantsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeSnapshotCopyGrantsOutcomeCallable RedshiftClient::DescribeSnapshotCopyGrantsCallable(const DescribeSnapshotCopyGrantsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeSnapshotCopyGrantsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeSnapshotCopyGrants(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftClient::DescribeSnapshotCopyGrantsAsync(const DescribeSnapshotCopyGrantsRequest& request, const DescribeSnapshotCopyGrantsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeSnapshotCopyGrants(request), context);
    } );
}

DescribeSnapshotSchedulesOutcome RedshiftClient::DescribeSnapshotSchedules(const DescribeSnapshotSchedulesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeSnapshotSchedulesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeSnapshotSchedulesOutcomeCallable RedshiftClient::DescribeSnapshotSchedulesCallable(const DescribeSnapshotSchedulesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeSnapshotSchedulesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeSnapshotSchedules(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftClient::DescribeSnapshotSchedulesAsync(const DescribeSnapshotSchedulesRequest& request, const DescribeSnapshotSchedulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeSnapshotSchedules(request), context);
    } );
}

DescribeStorageOutcome RedshiftClient::DescribeStorage(const DescribeStorageRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeStorageOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeStorageOutcomeCallable RedshiftClient::DescribeStorageCallable(const DescribeStorageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeStorageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeStorage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftClient::DescribeStorageAsync(const DescribeStorageRequest& request, const DescribeStorageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeStorage(request), context);
    } );
}

DescribeTableRestoreStatusOutcome RedshiftClient::DescribeTableRestoreStatus(const DescribeTableRestoreStatusRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeTableRestoreStatusOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeTableRestoreStatusOutcomeCallable RedshiftClient::DescribeTableRestoreStatusCallable(const DescribeTableRestoreStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeTableRestoreStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeTableRestoreStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftClient::DescribeTableRestoreStatusAsync(const DescribeTableRestoreStatusRequest& request, const DescribeTableRestoreStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeTableRestoreStatus(request), context);
    } );
}

DescribeTagsOutcome RedshiftClient::DescribeTags(const DescribeTagsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeTagsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeTagsOutcomeCallable RedshiftClient::DescribeTagsCallable(const DescribeTagsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeTagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeTags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftClient::DescribeTagsAsync(const DescribeTagsRequest& request, const DescribeTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeTags(request), context);
    } );
}

DescribeUsageLimitsOutcome RedshiftClient::DescribeUsageLimits(const DescribeUsageLimitsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeUsageLimitsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeUsageLimitsOutcomeCallable RedshiftClient::DescribeUsageLimitsCallable(const DescribeUsageLimitsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeUsageLimitsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeUsageLimits(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftClient::DescribeUsageLimitsAsync(const DescribeUsageLimitsRequest& request, const DescribeUsageLimitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeUsageLimits(request), context);
    } );
}

DisableLoggingOutcome RedshiftClient::DisableLogging(const DisableLoggingRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DisableLoggingOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DisableLoggingOutcomeCallable RedshiftClient::DisableLoggingCallable(const DisableLoggingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisableLoggingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisableLogging(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftClient::DisableLoggingAsync(const DisableLoggingRequest& request, const DisableLoggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DisableLogging(request), context);
    } );
}

DisableSnapshotCopyOutcome RedshiftClient::DisableSnapshotCopy(const DisableSnapshotCopyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DisableSnapshotCopyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DisableSnapshotCopyOutcomeCallable RedshiftClient::DisableSnapshotCopyCallable(const DisableSnapshotCopyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisableSnapshotCopyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisableSnapshotCopy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftClient::DisableSnapshotCopyAsync(const DisableSnapshotCopyRequest& request, const DisableSnapshotCopyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DisableSnapshotCopy(request), context);
    } );
}

DisassociateDataShareConsumerOutcome RedshiftClient::DisassociateDataShareConsumer(const DisassociateDataShareConsumerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DisassociateDataShareConsumerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DisassociateDataShareConsumerOutcomeCallable RedshiftClient::DisassociateDataShareConsumerCallable(const DisassociateDataShareConsumerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateDataShareConsumerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateDataShareConsumer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftClient::DisassociateDataShareConsumerAsync(const DisassociateDataShareConsumerRequest& request, const DisassociateDataShareConsumerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DisassociateDataShareConsumer(request), context);
    } );
}

EnableLoggingOutcome RedshiftClient::EnableLogging(const EnableLoggingRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return EnableLoggingOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

EnableLoggingOutcomeCallable RedshiftClient::EnableLoggingCallable(const EnableLoggingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< EnableLoggingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->EnableLogging(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftClient::EnableLoggingAsync(const EnableLoggingRequest& request, const EnableLoggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, EnableLogging(request), context);
    } );
}

EnableSnapshotCopyOutcome RedshiftClient::EnableSnapshotCopy(const EnableSnapshotCopyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return EnableSnapshotCopyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

EnableSnapshotCopyOutcomeCallable RedshiftClient::EnableSnapshotCopyCallable(const EnableSnapshotCopyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< EnableSnapshotCopyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->EnableSnapshotCopy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftClient::EnableSnapshotCopyAsync(const EnableSnapshotCopyRequest& request, const EnableSnapshotCopyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, EnableSnapshotCopy(request), context);
    } );
}

GetClusterCredentialsOutcome RedshiftClient::GetClusterCredentials(const GetClusterCredentialsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetClusterCredentialsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

GetClusterCredentialsOutcomeCallable RedshiftClient::GetClusterCredentialsCallable(const GetClusterCredentialsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetClusterCredentialsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetClusterCredentials(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftClient::GetClusterCredentialsAsync(const GetClusterCredentialsRequest& request, const GetClusterCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetClusterCredentials(request), context);
    } );
}

GetClusterCredentialsWithIAMOutcome RedshiftClient::GetClusterCredentialsWithIAM(const GetClusterCredentialsWithIAMRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetClusterCredentialsWithIAMOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

GetClusterCredentialsWithIAMOutcomeCallable RedshiftClient::GetClusterCredentialsWithIAMCallable(const GetClusterCredentialsWithIAMRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetClusterCredentialsWithIAMOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetClusterCredentialsWithIAM(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftClient::GetClusterCredentialsWithIAMAsync(const GetClusterCredentialsWithIAMRequest& request, const GetClusterCredentialsWithIAMResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetClusterCredentialsWithIAM(request), context);
    } );
}

GetReservedNodeExchangeConfigurationOptionsOutcome RedshiftClient::GetReservedNodeExchangeConfigurationOptions(const GetReservedNodeExchangeConfigurationOptionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetReservedNodeExchangeConfigurationOptionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

GetReservedNodeExchangeConfigurationOptionsOutcomeCallable RedshiftClient::GetReservedNodeExchangeConfigurationOptionsCallable(const GetReservedNodeExchangeConfigurationOptionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetReservedNodeExchangeConfigurationOptionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetReservedNodeExchangeConfigurationOptions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftClient::GetReservedNodeExchangeConfigurationOptionsAsync(const GetReservedNodeExchangeConfigurationOptionsRequest& request, const GetReservedNodeExchangeConfigurationOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetReservedNodeExchangeConfigurationOptions(request), context);
    } );
}

GetReservedNodeExchangeOfferingsOutcome RedshiftClient::GetReservedNodeExchangeOfferings(const GetReservedNodeExchangeOfferingsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetReservedNodeExchangeOfferingsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

GetReservedNodeExchangeOfferingsOutcomeCallable RedshiftClient::GetReservedNodeExchangeOfferingsCallable(const GetReservedNodeExchangeOfferingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetReservedNodeExchangeOfferingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetReservedNodeExchangeOfferings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftClient::GetReservedNodeExchangeOfferingsAsync(const GetReservedNodeExchangeOfferingsRequest& request, const GetReservedNodeExchangeOfferingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetReservedNodeExchangeOfferings(request), context);
    } );
}

ModifyAquaConfigurationOutcome RedshiftClient::ModifyAquaConfiguration(const ModifyAquaConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ModifyAquaConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ModifyAquaConfigurationOutcomeCallable RedshiftClient::ModifyAquaConfigurationCallable(const ModifyAquaConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyAquaConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyAquaConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftClient::ModifyAquaConfigurationAsync(const ModifyAquaConfigurationRequest& request, const ModifyAquaConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ModifyAquaConfiguration(request), context);
    } );
}

ModifyAuthenticationProfileOutcome RedshiftClient::ModifyAuthenticationProfile(const ModifyAuthenticationProfileRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ModifyAuthenticationProfileOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ModifyAuthenticationProfileOutcomeCallable RedshiftClient::ModifyAuthenticationProfileCallable(const ModifyAuthenticationProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyAuthenticationProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyAuthenticationProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftClient::ModifyAuthenticationProfileAsync(const ModifyAuthenticationProfileRequest& request, const ModifyAuthenticationProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ModifyAuthenticationProfile(request), context);
    } );
}

ModifyClusterOutcome RedshiftClient::ModifyCluster(const ModifyClusterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ModifyClusterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ModifyClusterOutcomeCallable RedshiftClient::ModifyClusterCallable(const ModifyClusterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyClusterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyCluster(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftClient::ModifyClusterAsync(const ModifyClusterRequest& request, const ModifyClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ModifyCluster(request), context);
    } );
}

ModifyClusterDbRevisionOutcome RedshiftClient::ModifyClusterDbRevision(const ModifyClusterDbRevisionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ModifyClusterDbRevisionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ModifyClusterDbRevisionOutcomeCallable RedshiftClient::ModifyClusterDbRevisionCallable(const ModifyClusterDbRevisionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyClusterDbRevisionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyClusterDbRevision(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftClient::ModifyClusterDbRevisionAsync(const ModifyClusterDbRevisionRequest& request, const ModifyClusterDbRevisionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ModifyClusterDbRevision(request), context);
    } );
}

ModifyClusterIamRolesOutcome RedshiftClient::ModifyClusterIamRoles(const ModifyClusterIamRolesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ModifyClusterIamRolesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ModifyClusterIamRolesOutcomeCallable RedshiftClient::ModifyClusterIamRolesCallable(const ModifyClusterIamRolesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyClusterIamRolesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyClusterIamRoles(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftClient::ModifyClusterIamRolesAsync(const ModifyClusterIamRolesRequest& request, const ModifyClusterIamRolesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ModifyClusterIamRoles(request), context);
    } );
}

ModifyClusterMaintenanceOutcome RedshiftClient::ModifyClusterMaintenance(const ModifyClusterMaintenanceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ModifyClusterMaintenanceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ModifyClusterMaintenanceOutcomeCallable RedshiftClient::ModifyClusterMaintenanceCallable(const ModifyClusterMaintenanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyClusterMaintenanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyClusterMaintenance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftClient::ModifyClusterMaintenanceAsync(const ModifyClusterMaintenanceRequest& request, const ModifyClusterMaintenanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ModifyClusterMaintenance(request), context);
    } );
}

ModifyClusterParameterGroupOutcome RedshiftClient::ModifyClusterParameterGroup(const ModifyClusterParameterGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ModifyClusterParameterGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ModifyClusterParameterGroupOutcomeCallable RedshiftClient::ModifyClusterParameterGroupCallable(const ModifyClusterParameterGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyClusterParameterGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyClusterParameterGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftClient::ModifyClusterParameterGroupAsync(const ModifyClusterParameterGroupRequest& request, const ModifyClusterParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ModifyClusterParameterGroup(request), context);
    } );
}

ModifyClusterSnapshotOutcome RedshiftClient::ModifyClusterSnapshot(const ModifyClusterSnapshotRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ModifyClusterSnapshotOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ModifyClusterSnapshotOutcomeCallable RedshiftClient::ModifyClusterSnapshotCallable(const ModifyClusterSnapshotRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyClusterSnapshotOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyClusterSnapshot(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftClient::ModifyClusterSnapshotAsync(const ModifyClusterSnapshotRequest& request, const ModifyClusterSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ModifyClusterSnapshot(request), context);
    } );
}

ModifyClusterSnapshotScheduleOutcome RedshiftClient::ModifyClusterSnapshotSchedule(const ModifyClusterSnapshotScheduleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ModifyClusterSnapshotScheduleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ModifyClusterSnapshotScheduleOutcomeCallable RedshiftClient::ModifyClusterSnapshotScheduleCallable(const ModifyClusterSnapshotScheduleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyClusterSnapshotScheduleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyClusterSnapshotSchedule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftClient::ModifyClusterSnapshotScheduleAsync(const ModifyClusterSnapshotScheduleRequest& request, const ModifyClusterSnapshotScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ModifyClusterSnapshotSchedule(request), context);
    } );
}

ModifyClusterSubnetGroupOutcome RedshiftClient::ModifyClusterSubnetGroup(const ModifyClusterSubnetGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ModifyClusterSubnetGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ModifyClusterSubnetGroupOutcomeCallable RedshiftClient::ModifyClusterSubnetGroupCallable(const ModifyClusterSubnetGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyClusterSubnetGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyClusterSubnetGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftClient::ModifyClusterSubnetGroupAsync(const ModifyClusterSubnetGroupRequest& request, const ModifyClusterSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ModifyClusterSubnetGroup(request), context);
    } );
}

ModifyEndpointAccessOutcome RedshiftClient::ModifyEndpointAccess(const ModifyEndpointAccessRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ModifyEndpointAccessOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ModifyEndpointAccessOutcomeCallable RedshiftClient::ModifyEndpointAccessCallable(const ModifyEndpointAccessRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyEndpointAccessOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyEndpointAccess(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftClient::ModifyEndpointAccessAsync(const ModifyEndpointAccessRequest& request, const ModifyEndpointAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ModifyEndpointAccess(request), context);
    } );
}

ModifyEventSubscriptionOutcome RedshiftClient::ModifyEventSubscription(const ModifyEventSubscriptionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ModifyEventSubscriptionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ModifyEventSubscriptionOutcomeCallable RedshiftClient::ModifyEventSubscriptionCallable(const ModifyEventSubscriptionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyEventSubscriptionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyEventSubscription(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftClient::ModifyEventSubscriptionAsync(const ModifyEventSubscriptionRequest& request, const ModifyEventSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ModifyEventSubscription(request), context);
    } );
}

ModifyScheduledActionOutcome RedshiftClient::ModifyScheduledAction(const ModifyScheduledActionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ModifyScheduledActionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ModifyScheduledActionOutcomeCallable RedshiftClient::ModifyScheduledActionCallable(const ModifyScheduledActionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyScheduledActionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyScheduledAction(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftClient::ModifyScheduledActionAsync(const ModifyScheduledActionRequest& request, const ModifyScheduledActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ModifyScheduledAction(request), context);
    } );
}

ModifySnapshotCopyRetentionPeriodOutcome RedshiftClient::ModifySnapshotCopyRetentionPeriod(const ModifySnapshotCopyRetentionPeriodRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ModifySnapshotCopyRetentionPeriodOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ModifySnapshotCopyRetentionPeriodOutcomeCallable RedshiftClient::ModifySnapshotCopyRetentionPeriodCallable(const ModifySnapshotCopyRetentionPeriodRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifySnapshotCopyRetentionPeriodOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifySnapshotCopyRetentionPeriod(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftClient::ModifySnapshotCopyRetentionPeriodAsync(const ModifySnapshotCopyRetentionPeriodRequest& request, const ModifySnapshotCopyRetentionPeriodResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ModifySnapshotCopyRetentionPeriod(request), context);
    } );
}

ModifySnapshotScheduleOutcome RedshiftClient::ModifySnapshotSchedule(const ModifySnapshotScheduleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ModifySnapshotScheduleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ModifySnapshotScheduleOutcomeCallable RedshiftClient::ModifySnapshotScheduleCallable(const ModifySnapshotScheduleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifySnapshotScheduleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifySnapshotSchedule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftClient::ModifySnapshotScheduleAsync(const ModifySnapshotScheduleRequest& request, const ModifySnapshotScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ModifySnapshotSchedule(request), context);
    } );
}

ModifyUsageLimitOutcome RedshiftClient::ModifyUsageLimit(const ModifyUsageLimitRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ModifyUsageLimitOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ModifyUsageLimitOutcomeCallable RedshiftClient::ModifyUsageLimitCallable(const ModifyUsageLimitRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyUsageLimitOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyUsageLimit(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftClient::ModifyUsageLimitAsync(const ModifyUsageLimitRequest& request, const ModifyUsageLimitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ModifyUsageLimit(request), context);
    } );
}

PauseClusterOutcome RedshiftClient::PauseCluster(const PauseClusterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PauseClusterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

PauseClusterOutcomeCallable RedshiftClient::PauseClusterCallable(const PauseClusterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PauseClusterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PauseCluster(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftClient::PauseClusterAsync(const PauseClusterRequest& request, const PauseClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PauseCluster(request), context);
    } );
}

PurchaseReservedNodeOfferingOutcome RedshiftClient::PurchaseReservedNodeOffering(const PurchaseReservedNodeOfferingRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PurchaseReservedNodeOfferingOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

PurchaseReservedNodeOfferingOutcomeCallable RedshiftClient::PurchaseReservedNodeOfferingCallable(const PurchaseReservedNodeOfferingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PurchaseReservedNodeOfferingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PurchaseReservedNodeOffering(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftClient::PurchaseReservedNodeOfferingAsync(const PurchaseReservedNodeOfferingRequest& request, const PurchaseReservedNodeOfferingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PurchaseReservedNodeOffering(request), context);
    } );
}

RebootClusterOutcome RedshiftClient::RebootCluster(const RebootClusterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RebootClusterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

RebootClusterOutcomeCallable RedshiftClient::RebootClusterCallable(const RebootClusterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RebootClusterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RebootCluster(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftClient::RebootClusterAsync(const RebootClusterRequest& request, const RebootClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RebootCluster(request), context);
    } );
}

RejectDataShareOutcome RedshiftClient::RejectDataShare(const RejectDataShareRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RejectDataShareOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

RejectDataShareOutcomeCallable RedshiftClient::RejectDataShareCallable(const RejectDataShareRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RejectDataShareOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RejectDataShare(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftClient::RejectDataShareAsync(const RejectDataShareRequest& request, const RejectDataShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RejectDataShare(request), context);
    } );
}

ResetClusterParameterGroupOutcome RedshiftClient::ResetClusterParameterGroup(const ResetClusterParameterGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ResetClusterParameterGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ResetClusterParameterGroupOutcomeCallable RedshiftClient::ResetClusterParameterGroupCallable(const ResetClusterParameterGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ResetClusterParameterGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ResetClusterParameterGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftClient::ResetClusterParameterGroupAsync(const ResetClusterParameterGroupRequest& request, const ResetClusterParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ResetClusterParameterGroup(request), context);
    } );
}

ResizeClusterOutcome RedshiftClient::ResizeCluster(const ResizeClusterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ResizeClusterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ResizeClusterOutcomeCallable RedshiftClient::ResizeClusterCallable(const ResizeClusterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ResizeClusterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ResizeCluster(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftClient::ResizeClusterAsync(const ResizeClusterRequest& request, const ResizeClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ResizeCluster(request), context);
    } );
}

RestoreFromClusterSnapshotOutcome RedshiftClient::RestoreFromClusterSnapshot(const RestoreFromClusterSnapshotRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RestoreFromClusterSnapshotOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

RestoreFromClusterSnapshotOutcomeCallable RedshiftClient::RestoreFromClusterSnapshotCallable(const RestoreFromClusterSnapshotRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RestoreFromClusterSnapshotOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RestoreFromClusterSnapshot(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftClient::RestoreFromClusterSnapshotAsync(const RestoreFromClusterSnapshotRequest& request, const RestoreFromClusterSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RestoreFromClusterSnapshot(request), context);
    } );
}

RestoreTableFromClusterSnapshotOutcome RedshiftClient::RestoreTableFromClusterSnapshot(const RestoreTableFromClusterSnapshotRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RestoreTableFromClusterSnapshotOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

RestoreTableFromClusterSnapshotOutcomeCallable RedshiftClient::RestoreTableFromClusterSnapshotCallable(const RestoreTableFromClusterSnapshotRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RestoreTableFromClusterSnapshotOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RestoreTableFromClusterSnapshot(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftClient::RestoreTableFromClusterSnapshotAsync(const RestoreTableFromClusterSnapshotRequest& request, const RestoreTableFromClusterSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RestoreTableFromClusterSnapshot(request), context);
    } );
}

ResumeClusterOutcome RedshiftClient::ResumeCluster(const ResumeClusterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ResumeClusterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ResumeClusterOutcomeCallable RedshiftClient::ResumeClusterCallable(const ResumeClusterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ResumeClusterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ResumeCluster(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftClient::ResumeClusterAsync(const ResumeClusterRequest& request, const ResumeClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ResumeCluster(request), context);
    } );
}

RevokeClusterSecurityGroupIngressOutcome RedshiftClient::RevokeClusterSecurityGroupIngress(const RevokeClusterSecurityGroupIngressRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RevokeClusterSecurityGroupIngressOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

RevokeClusterSecurityGroupIngressOutcomeCallable RedshiftClient::RevokeClusterSecurityGroupIngressCallable(const RevokeClusterSecurityGroupIngressRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RevokeClusterSecurityGroupIngressOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RevokeClusterSecurityGroupIngress(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftClient::RevokeClusterSecurityGroupIngressAsync(const RevokeClusterSecurityGroupIngressRequest& request, const RevokeClusterSecurityGroupIngressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RevokeClusterSecurityGroupIngress(request), context);
    } );
}

RevokeEndpointAccessOutcome RedshiftClient::RevokeEndpointAccess(const RevokeEndpointAccessRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RevokeEndpointAccessOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

RevokeEndpointAccessOutcomeCallable RedshiftClient::RevokeEndpointAccessCallable(const RevokeEndpointAccessRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RevokeEndpointAccessOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RevokeEndpointAccess(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftClient::RevokeEndpointAccessAsync(const RevokeEndpointAccessRequest& request, const RevokeEndpointAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RevokeEndpointAccess(request), context);
    } );
}

RevokeSnapshotAccessOutcome RedshiftClient::RevokeSnapshotAccess(const RevokeSnapshotAccessRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RevokeSnapshotAccessOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

RevokeSnapshotAccessOutcomeCallable RedshiftClient::RevokeSnapshotAccessCallable(const RevokeSnapshotAccessRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RevokeSnapshotAccessOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RevokeSnapshotAccess(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftClient::RevokeSnapshotAccessAsync(const RevokeSnapshotAccessRequest& request, const RevokeSnapshotAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RevokeSnapshotAccess(request), context);
    } );
}

RotateEncryptionKeyOutcome RedshiftClient::RotateEncryptionKey(const RotateEncryptionKeyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RotateEncryptionKeyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

RotateEncryptionKeyOutcomeCallable RedshiftClient::RotateEncryptionKeyCallable(const RotateEncryptionKeyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RotateEncryptionKeyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RotateEncryptionKey(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftClient::RotateEncryptionKeyAsync(const RotateEncryptionKeyRequest& request, const RotateEncryptionKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RotateEncryptionKey(request), context);
    } );
}

UpdatePartnerStatusOutcome RedshiftClient::UpdatePartnerStatus(const UpdatePartnerStatusRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdatePartnerStatusOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

UpdatePartnerStatusOutcomeCallable RedshiftClient::UpdatePartnerStatusCallable(const UpdatePartnerStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdatePartnerStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdatePartnerStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftClient::UpdatePartnerStatusAsync(const UpdatePartnerStatusRequest& request, const UpdatePartnerStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdatePartnerStatus(request), context);
    } );
}

