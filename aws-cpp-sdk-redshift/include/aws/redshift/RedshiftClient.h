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
#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/redshift/RedshiftErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/Event.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/redshift/model/AuthorizeClusterSecurityGroupIngressResult.h>
#include <aws/redshift/model/AuthorizeSnapshotAccessResult.h>
#include <aws/redshift/model/CopyClusterSnapshotResult.h>
#include <aws/redshift/model/CreateClusterResult.h>
#include <aws/redshift/model/CreateClusterParameterGroupResult.h>
#include <aws/redshift/model/CreateClusterSecurityGroupResult.h>
#include <aws/redshift/model/CreateClusterSnapshotResult.h>
#include <aws/redshift/model/CreateClusterSubnetGroupResult.h>
#include <aws/redshift/model/CreateEventSubscriptionResult.h>
#include <aws/redshift/model/CreateHsmClientCertificateResult.h>
#include <aws/redshift/model/CreateHsmConfigurationResult.h>
#include <aws/redshift/model/DeleteClusterResult.h>
#include <aws/redshift/model/DeleteClusterSnapshotResult.h>
#include <aws/redshift/model/DescribeClusterParameterGroupsResult.h>
#include <aws/redshift/model/DescribeClusterParametersResult.h>
#include <aws/redshift/model/DescribeClusterSecurityGroupsResult.h>
#include <aws/redshift/model/DescribeClusterSnapshotsResult.h>
#include <aws/redshift/model/DescribeClusterSubnetGroupsResult.h>
#include <aws/redshift/model/DescribeClusterVersionsResult.h>
#include <aws/redshift/model/DescribeClustersResult.h>
#include <aws/redshift/model/DescribeDefaultClusterParametersResult.h>
#include <aws/redshift/model/DescribeEventCategoriesResult.h>
#include <aws/redshift/model/DescribeEventSubscriptionsResult.h>
#include <aws/redshift/model/DescribeEventsResult.h>
#include <aws/redshift/model/DescribeHsmClientCertificatesResult.h>
#include <aws/redshift/model/DescribeHsmConfigurationsResult.h>
#include <aws/redshift/model/DescribeLoggingStatusResult.h>
#include <aws/redshift/model/DescribeOrderableClusterOptionsResult.h>
#include <aws/redshift/model/DescribeReservedNodeOfferingsResult.h>
#include <aws/redshift/model/DescribeReservedNodesResult.h>
#include <aws/redshift/model/DescribeResizeResult.h>
#include <aws/redshift/model/DescribeTagsResult.h>
#include <aws/redshift/model/DisableLoggingResult.h>
#include <aws/redshift/model/DisableSnapshotCopyResult.h>
#include <aws/redshift/model/EnableLoggingResult.h>
#include <aws/redshift/model/EnableSnapshotCopyResult.h>
#include <aws/redshift/model/ModifyClusterResult.h>
#include <aws/redshift/model/ModifyClusterParameterGroupResult.h>
#include <aws/redshift/model/ModifyClusterSubnetGroupResult.h>
#include <aws/redshift/model/ModifyEventSubscriptionResult.h>
#include <aws/redshift/model/ModifySnapshotCopyRetentionPeriodResult.h>
#include <aws/redshift/model/PurchaseReservedNodeOfferingResult.h>
#include <aws/redshift/model/RebootClusterResult.h>
#include <aws/redshift/model/ResetClusterParameterGroupResult.h>
#include <aws/redshift/model/RestoreFromClusterSnapshotResult.h>
#include <aws/redshift/model/RevokeClusterSecurityGroupIngressResult.h>
#include <aws/redshift/model/RevokeSnapshotAccessResult.h>
#include <aws/redshift/model/RotateEncryptionKeyResult.h>
#include <aws/core/NoResult.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <future>

namespace Aws
{

namespace Http
{
  class HttpClient;
  class HttpClientFactory;
} // namespace Http

namespace Utils
{
  template< typename R, typename E> class Outcome;

namespace Threading
{
  class Executor;
} // namespace Threading

namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils

namespace Auth
{
  class AWSCredentials;
  class AWSCredentialsProvider;
} // namespace Auth

namespace Client
{
  class RetryStrategy;
} // namespace Client

namespace Redshift
{

namespace Model
{
  class AuthorizeClusterSecurityGroupIngressRequest;
  class AuthorizeSnapshotAccessRequest;
  class CopyClusterSnapshotRequest;
  class CreateClusterRequest;
  class CreateClusterParameterGroupRequest;
  class CreateClusterSecurityGroupRequest;
  class CreateClusterSnapshotRequest;
  class CreateClusterSubnetGroupRequest;
  class CreateEventSubscriptionRequest;
  class CreateHsmClientCertificateRequest;
  class CreateHsmConfigurationRequest;
  class CreateTagsRequest;
  class DeleteClusterRequest;
  class DeleteClusterParameterGroupRequest;
  class DeleteClusterSecurityGroupRequest;
  class DeleteClusterSnapshotRequest;
  class DeleteClusterSubnetGroupRequest;
  class DeleteEventSubscriptionRequest;
  class DeleteHsmClientCertificateRequest;
  class DeleteHsmConfigurationRequest;
  class DeleteTagsRequest;
  class DescribeClusterParameterGroupsRequest;
  class DescribeClusterParametersRequest;
  class DescribeClusterSecurityGroupsRequest;
  class DescribeClusterSnapshotsRequest;
  class DescribeClusterSubnetGroupsRequest;
  class DescribeClusterVersionsRequest;
  class DescribeClustersRequest;
  class DescribeDefaultClusterParametersRequest;
  class DescribeEventCategoriesRequest;
  class DescribeEventSubscriptionsRequest;
  class DescribeEventsRequest;
  class DescribeHsmClientCertificatesRequest;
  class DescribeHsmConfigurationsRequest;
  class DescribeLoggingStatusRequest;
  class DescribeOrderableClusterOptionsRequest;
  class DescribeReservedNodeOfferingsRequest;
  class DescribeReservedNodesRequest;
  class DescribeResizeRequest;
  class DescribeTagsRequest;
  class DisableLoggingRequest;
  class DisableSnapshotCopyRequest;
  class EnableLoggingRequest;
  class EnableSnapshotCopyRequest;
  class ModifyClusterRequest;
  class ModifyClusterParameterGroupRequest;
  class ModifyClusterSubnetGroupRequest;
  class ModifyEventSubscriptionRequest;
  class ModifySnapshotCopyRetentionPeriodRequest;
  class PurchaseReservedNodeOfferingRequest;
  class RebootClusterRequest;
  class ResetClusterParameterGroupRequest;
  class RestoreFromClusterSnapshotRequest;
  class RevokeClusterSecurityGroupIngressRequest;
  class RevokeSnapshotAccessRequest;
  class RotateEncryptionKeyRequest;

  typedef Utils::Outcome<AuthorizeClusterSecurityGroupIngressResult, Client::AWSError<RedshiftErrors>> AuthorizeClusterSecurityGroupIngressOutcome;
  typedef Utils::Outcome<AuthorizeSnapshotAccessResult, Client::AWSError<RedshiftErrors>> AuthorizeSnapshotAccessOutcome;
  typedef Utils::Outcome<CopyClusterSnapshotResult, Client::AWSError<RedshiftErrors>> CopyClusterSnapshotOutcome;
  typedef Utils::Outcome<CreateClusterResult, Client::AWSError<RedshiftErrors>> CreateClusterOutcome;
  typedef Utils::Outcome<CreateClusterParameterGroupResult, Client::AWSError<RedshiftErrors>> CreateClusterParameterGroupOutcome;
  typedef Utils::Outcome<CreateClusterSecurityGroupResult, Client::AWSError<RedshiftErrors>> CreateClusterSecurityGroupOutcome;
  typedef Utils::Outcome<CreateClusterSnapshotResult, Client::AWSError<RedshiftErrors>> CreateClusterSnapshotOutcome;
  typedef Utils::Outcome<CreateClusterSubnetGroupResult, Client::AWSError<RedshiftErrors>> CreateClusterSubnetGroupOutcome;
  typedef Utils::Outcome<CreateEventSubscriptionResult, Client::AWSError<RedshiftErrors>> CreateEventSubscriptionOutcome;
  typedef Utils::Outcome<CreateHsmClientCertificateResult, Client::AWSError<RedshiftErrors>> CreateHsmClientCertificateOutcome;
  typedef Utils::Outcome<CreateHsmConfigurationResult, Client::AWSError<RedshiftErrors>> CreateHsmConfigurationOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<RedshiftErrors>> CreateTagsOutcome;
  typedef Utils::Outcome<DeleteClusterResult, Client::AWSError<RedshiftErrors>> DeleteClusterOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<RedshiftErrors>> DeleteClusterParameterGroupOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<RedshiftErrors>> DeleteClusterSecurityGroupOutcome;
  typedef Utils::Outcome<DeleteClusterSnapshotResult, Client::AWSError<RedshiftErrors>> DeleteClusterSnapshotOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<RedshiftErrors>> DeleteClusterSubnetGroupOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<RedshiftErrors>> DeleteEventSubscriptionOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<RedshiftErrors>> DeleteHsmClientCertificateOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<RedshiftErrors>> DeleteHsmConfigurationOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<RedshiftErrors>> DeleteTagsOutcome;
  typedef Utils::Outcome<DescribeClusterParameterGroupsResult, Client::AWSError<RedshiftErrors>> DescribeClusterParameterGroupsOutcome;
  typedef Utils::Outcome<DescribeClusterParametersResult, Client::AWSError<RedshiftErrors>> DescribeClusterParametersOutcome;
  typedef Utils::Outcome<DescribeClusterSecurityGroupsResult, Client::AWSError<RedshiftErrors>> DescribeClusterSecurityGroupsOutcome;
  typedef Utils::Outcome<DescribeClusterSnapshotsResult, Client::AWSError<RedshiftErrors>> DescribeClusterSnapshotsOutcome;
  typedef Utils::Outcome<DescribeClusterSubnetGroupsResult, Client::AWSError<RedshiftErrors>> DescribeClusterSubnetGroupsOutcome;
  typedef Utils::Outcome<DescribeClusterVersionsResult, Client::AWSError<RedshiftErrors>> DescribeClusterVersionsOutcome;
  typedef Utils::Outcome<DescribeClustersResult, Client::AWSError<RedshiftErrors>> DescribeClustersOutcome;
  typedef Utils::Outcome<DescribeDefaultClusterParametersResult, Client::AWSError<RedshiftErrors>> DescribeDefaultClusterParametersOutcome;
  typedef Utils::Outcome<DescribeEventCategoriesResult, Client::AWSError<RedshiftErrors>> DescribeEventCategoriesOutcome;
  typedef Utils::Outcome<DescribeEventSubscriptionsResult, Client::AWSError<RedshiftErrors>> DescribeEventSubscriptionsOutcome;
  typedef Utils::Outcome<DescribeEventsResult, Client::AWSError<RedshiftErrors>> DescribeEventsOutcome;
  typedef Utils::Outcome<DescribeHsmClientCertificatesResult, Client::AWSError<RedshiftErrors>> DescribeHsmClientCertificatesOutcome;
  typedef Utils::Outcome<DescribeHsmConfigurationsResult, Client::AWSError<RedshiftErrors>> DescribeHsmConfigurationsOutcome;
  typedef Utils::Outcome<DescribeLoggingStatusResult, Client::AWSError<RedshiftErrors>> DescribeLoggingStatusOutcome;
  typedef Utils::Outcome<DescribeOrderableClusterOptionsResult, Client::AWSError<RedshiftErrors>> DescribeOrderableClusterOptionsOutcome;
  typedef Utils::Outcome<DescribeReservedNodeOfferingsResult, Client::AWSError<RedshiftErrors>> DescribeReservedNodeOfferingsOutcome;
  typedef Utils::Outcome<DescribeReservedNodesResult, Client::AWSError<RedshiftErrors>> DescribeReservedNodesOutcome;
  typedef Utils::Outcome<DescribeResizeResult, Client::AWSError<RedshiftErrors>> DescribeResizeOutcome;
  typedef Utils::Outcome<DescribeTagsResult, Client::AWSError<RedshiftErrors>> DescribeTagsOutcome;
  typedef Utils::Outcome<DisableLoggingResult, Client::AWSError<RedshiftErrors>> DisableLoggingOutcome;
  typedef Utils::Outcome<DisableSnapshotCopyResult, Client::AWSError<RedshiftErrors>> DisableSnapshotCopyOutcome;
  typedef Utils::Outcome<EnableLoggingResult, Client::AWSError<RedshiftErrors>> EnableLoggingOutcome;
  typedef Utils::Outcome<EnableSnapshotCopyResult, Client::AWSError<RedshiftErrors>> EnableSnapshotCopyOutcome;
  typedef Utils::Outcome<ModifyClusterResult, Client::AWSError<RedshiftErrors>> ModifyClusterOutcome;
  typedef Utils::Outcome<ModifyClusterParameterGroupResult, Client::AWSError<RedshiftErrors>> ModifyClusterParameterGroupOutcome;
  typedef Utils::Outcome<ModifyClusterSubnetGroupResult, Client::AWSError<RedshiftErrors>> ModifyClusterSubnetGroupOutcome;
  typedef Utils::Outcome<ModifyEventSubscriptionResult, Client::AWSError<RedshiftErrors>> ModifyEventSubscriptionOutcome;
  typedef Utils::Outcome<ModifySnapshotCopyRetentionPeriodResult, Client::AWSError<RedshiftErrors>> ModifySnapshotCopyRetentionPeriodOutcome;
  typedef Utils::Outcome<PurchaseReservedNodeOfferingResult, Client::AWSError<RedshiftErrors>> PurchaseReservedNodeOfferingOutcome;
  typedef Utils::Outcome<RebootClusterResult, Client::AWSError<RedshiftErrors>> RebootClusterOutcome;
  typedef Utils::Outcome<ResetClusterParameterGroupResult, Client::AWSError<RedshiftErrors>> ResetClusterParameterGroupOutcome;
  typedef Utils::Outcome<RestoreFromClusterSnapshotResult, Client::AWSError<RedshiftErrors>> RestoreFromClusterSnapshotOutcome;
  typedef Utils::Outcome<RevokeClusterSecurityGroupIngressResult, Client::AWSError<RedshiftErrors>> RevokeClusterSecurityGroupIngressOutcome;
  typedef Utils::Outcome<RevokeSnapshotAccessResult, Client::AWSError<RedshiftErrors>> RevokeSnapshotAccessOutcome;
  typedef Utils::Outcome<RotateEncryptionKeyResult, Client::AWSError<RedshiftErrors>> RotateEncryptionKeyOutcome;

  typedef std::future<AuthorizeClusterSecurityGroupIngressOutcome> AuthorizeClusterSecurityGroupIngressOutcomeCallable;
  typedef std::future<AuthorizeSnapshotAccessOutcome> AuthorizeSnapshotAccessOutcomeCallable;
  typedef std::future<CopyClusterSnapshotOutcome> CopyClusterSnapshotOutcomeCallable;
  typedef std::future<CreateClusterOutcome> CreateClusterOutcomeCallable;
  typedef std::future<CreateClusterParameterGroupOutcome> CreateClusterParameterGroupOutcomeCallable;
  typedef std::future<CreateClusterSecurityGroupOutcome> CreateClusterSecurityGroupOutcomeCallable;
  typedef std::future<CreateClusterSnapshotOutcome> CreateClusterSnapshotOutcomeCallable;
  typedef std::future<CreateClusterSubnetGroupOutcome> CreateClusterSubnetGroupOutcomeCallable;
  typedef std::future<CreateEventSubscriptionOutcome> CreateEventSubscriptionOutcomeCallable;
  typedef std::future<CreateHsmClientCertificateOutcome> CreateHsmClientCertificateOutcomeCallable;
  typedef std::future<CreateHsmConfigurationOutcome> CreateHsmConfigurationOutcomeCallable;
  typedef std::future<CreateTagsOutcome> CreateTagsOutcomeCallable;
  typedef std::future<DeleteClusterOutcome> DeleteClusterOutcomeCallable;
  typedef std::future<DeleteClusterParameterGroupOutcome> DeleteClusterParameterGroupOutcomeCallable;
  typedef std::future<DeleteClusterSecurityGroupOutcome> DeleteClusterSecurityGroupOutcomeCallable;
  typedef std::future<DeleteClusterSnapshotOutcome> DeleteClusterSnapshotOutcomeCallable;
  typedef std::future<DeleteClusterSubnetGroupOutcome> DeleteClusterSubnetGroupOutcomeCallable;
  typedef std::future<DeleteEventSubscriptionOutcome> DeleteEventSubscriptionOutcomeCallable;
  typedef std::future<DeleteHsmClientCertificateOutcome> DeleteHsmClientCertificateOutcomeCallable;
  typedef std::future<DeleteHsmConfigurationOutcome> DeleteHsmConfigurationOutcomeCallable;
  typedef std::future<DeleteTagsOutcome> DeleteTagsOutcomeCallable;
  typedef std::future<DescribeClusterParameterGroupsOutcome> DescribeClusterParameterGroupsOutcomeCallable;
  typedef std::future<DescribeClusterParametersOutcome> DescribeClusterParametersOutcomeCallable;
  typedef std::future<DescribeClusterSecurityGroupsOutcome> DescribeClusterSecurityGroupsOutcomeCallable;
  typedef std::future<DescribeClusterSnapshotsOutcome> DescribeClusterSnapshotsOutcomeCallable;
  typedef std::future<DescribeClusterSubnetGroupsOutcome> DescribeClusterSubnetGroupsOutcomeCallable;
  typedef std::future<DescribeClusterVersionsOutcome> DescribeClusterVersionsOutcomeCallable;
  typedef std::future<DescribeClustersOutcome> DescribeClustersOutcomeCallable;
  typedef std::future<DescribeDefaultClusterParametersOutcome> DescribeDefaultClusterParametersOutcomeCallable;
  typedef std::future<DescribeEventCategoriesOutcome> DescribeEventCategoriesOutcomeCallable;
  typedef std::future<DescribeEventSubscriptionsOutcome> DescribeEventSubscriptionsOutcomeCallable;
  typedef std::future<DescribeEventsOutcome> DescribeEventsOutcomeCallable;
  typedef std::future<DescribeHsmClientCertificatesOutcome> DescribeHsmClientCertificatesOutcomeCallable;
  typedef std::future<DescribeHsmConfigurationsOutcome> DescribeHsmConfigurationsOutcomeCallable;
  typedef std::future<DescribeLoggingStatusOutcome> DescribeLoggingStatusOutcomeCallable;
  typedef std::future<DescribeOrderableClusterOptionsOutcome> DescribeOrderableClusterOptionsOutcomeCallable;
  typedef std::future<DescribeReservedNodeOfferingsOutcome> DescribeReservedNodeOfferingsOutcomeCallable;
  typedef std::future<DescribeReservedNodesOutcome> DescribeReservedNodesOutcomeCallable;
  typedef std::future<DescribeResizeOutcome> DescribeResizeOutcomeCallable;
  typedef std::future<DescribeTagsOutcome> DescribeTagsOutcomeCallable;
  typedef std::future<DisableLoggingOutcome> DisableLoggingOutcomeCallable;
  typedef std::future<DisableSnapshotCopyOutcome> DisableSnapshotCopyOutcomeCallable;
  typedef std::future<EnableLoggingOutcome> EnableLoggingOutcomeCallable;
  typedef std::future<EnableSnapshotCopyOutcome> EnableSnapshotCopyOutcomeCallable;
  typedef std::future<ModifyClusterOutcome> ModifyClusterOutcomeCallable;
  typedef std::future<ModifyClusterParameterGroupOutcome> ModifyClusterParameterGroupOutcomeCallable;
  typedef std::future<ModifyClusterSubnetGroupOutcome> ModifyClusterSubnetGroupOutcomeCallable;
  typedef std::future<ModifyEventSubscriptionOutcome> ModifyEventSubscriptionOutcomeCallable;
  typedef std::future<ModifySnapshotCopyRetentionPeriodOutcome> ModifySnapshotCopyRetentionPeriodOutcomeCallable;
  typedef std::future<PurchaseReservedNodeOfferingOutcome> PurchaseReservedNodeOfferingOutcomeCallable;
  typedef std::future<RebootClusterOutcome> RebootClusterOutcomeCallable;
  typedef std::future<ResetClusterParameterGroupOutcome> ResetClusterParameterGroupOutcomeCallable;
  typedef std::future<RestoreFromClusterSnapshotOutcome> RestoreFromClusterSnapshotOutcomeCallable;
  typedef std::future<RevokeClusterSecurityGroupIngressOutcome> RevokeClusterSecurityGroupIngressOutcomeCallable;
  typedef std::future<RevokeSnapshotAccessOutcome> RevokeSnapshotAccessOutcomeCallable;
  typedef std::future<RotateEncryptionKeyOutcome> RotateEncryptionKeyOutcomeCallable;
} // namespace Model

  class RedshiftClient;

  typedef Aws::Utils::Event<RedshiftClient, const Model::AuthorizeClusterSecurityGroupIngressRequest&, const Model::AuthorizeClusterSecurityGroupIngressOutcome&, const Aws::Client::AsyncCallerContext*> AuthorizeClusterSecurityGroupIngressOutcomeReceivedEvent;
  typedef Aws::Utils::Event<RedshiftClient, const Model::AuthorizeSnapshotAccessRequest&, const Model::AuthorizeSnapshotAccessOutcome&, const Aws::Client::AsyncCallerContext*> AuthorizeSnapshotAccessOutcomeReceivedEvent;
  typedef Aws::Utils::Event<RedshiftClient, const Model::CopyClusterSnapshotRequest&, const Model::CopyClusterSnapshotOutcome&, const Aws::Client::AsyncCallerContext*> CopyClusterSnapshotOutcomeReceivedEvent;
  typedef Aws::Utils::Event<RedshiftClient, const Model::CreateClusterRequest&, const Model::CreateClusterOutcome&, const Aws::Client::AsyncCallerContext*> CreateClusterOutcomeReceivedEvent;
  typedef Aws::Utils::Event<RedshiftClient, const Model::CreateClusterParameterGroupRequest&, const Model::CreateClusterParameterGroupOutcome&, const Aws::Client::AsyncCallerContext*> CreateClusterParameterGroupOutcomeReceivedEvent;
  typedef Aws::Utils::Event<RedshiftClient, const Model::CreateClusterSecurityGroupRequest&, const Model::CreateClusterSecurityGroupOutcome&, const Aws::Client::AsyncCallerContext*> CreateClusterSecurityGroupOutcomeReceivedEvent;
  typedef Aws::Utils::Event<RedshiftClient, const Model::CreateClusterSnapshotRequest&, const Model::CreateClusterSnapshotOutcome&, const Aws::Client::AsyncCallerContext*> CreateClusterSnapshotOutcomeReceivedEvent;
  typedef Aws::Utils::Event<RedshiftClient, const Model::CreateClusterSubnetGroupRequest&, const Model::CreateClusterSubnetGroupOutcome&, const Aws::Client::AsyncCallerContext*> CreateClusterSubnetGroupOutcomeReceivedEvent;
  typedef Aws::Utils::Event<RedshiftClient, const Model::CreateEventSubscriptionRequest&, const Model::CreateEventSubscriptionOutcome&, const Aws::Client::AsyncCallerContext*> CreateEventSubscriptionOutcomeReceivedEvent;
  typedef Aws::Utils::Event<RedshiftClient, const Model::CreateHsmClientCertificateRequest&, const Model::CreateHsmClientCertificateOutcome&, const Aws::Client::AsyncCallerContext*> CreateHsmClientCertificateOutcomeReceivedEvent;
  typedef Aws::Utils::Event<RedshiftClient, const Model::CreateHsmConfigurationRequest&, const Model::CreateHsmConfigurationOutcome&, const Aws::Client::AsyncCallerContext*> CreateHsmConfigurationOutcomeReceivedEvent;
  typedef Aws::Utils::Event<RedshiftClient, const Model::CreateTagsRequest&, const Model::CreateTagsOutcome&, const Aws::Client::AsyncCallerContext*> CreateTagsOutcomeReceivedEvent;
  typedef Aws::Utils::Event<RedshiftClient, const Model::DeleteClusterRequest&, const Model::DeleteClusterOutcome&, const Aws::Client::AsyncCallerContext*> DeleteClusterOutcomeReceivedEvent;
  typedef Aws::Utils::Event<RedshiftClient, const Model::DeleteClusterParameterGroupRequest&, const Model::DeleteClusterParameterGroupOutcome&, const Aws::Client::AsyncCallerContext*> DeleteClusterParameterGroupOutcomeReceivedEvent;
  typedef Aws::Utils::Event<RedshiftClient, const Model::DeleteClusterSecurityGroupRequest&, const Model::DeleteClusterSecurityGroupOutcome&, const Aws::Client::AsyncCallerContext*> DeleteClusterSecurityGroupOutcomeReceivedEvent;
  typedef Aws::Utils::Event<RedshiftClient, const Model::DeleteClusterSnapshotRequest&, const Model::DeleteClusterSnapshotOutcome&, const Aws::Client::AsyncCallerContext*> DeleteClusterSnapshotOutcomeReceivedEvent;
  typedef Aws::Utils::Event<RedshiftClient, const Model::DeleteClusterSubnetGroupRequest&, const Model::DeleteClusterSubnetGroupOutcome&, const Aws::Client::AsyncCallerContext*> DeleteClusterSubnetGroupOutcomeReceivedEvent;
  typedef Aws::Utils::Event<RedshiftClient, const Model::DeleteEventSubscriptionRequest&, const Model::DeleteEventSubscriptionOutcome&, const Aws::Client::AsyncCallerContext*> DeleteEventSubscriptionOutcomeReceivedEvent;
  typedef Aws::Utils::Event<RedshiftClient, const Model::DeleteHsmClientCertificateRequest&, const Model::DeleteHsmClientCertificateOutcome&, const Aws::Client::AsyncCallerContext*> DeleteHsmClientCertificateOutcomeReceivedEvent;
  typedef Aws::Utils::Event<RedshiftClient, const Model::DeleteHsmConfigurationRequest&, const Model::DeleteHsmConfigurationOutcome&, const Aws::Client::AsyncCallerContext*> DeleteHsmConfigurationOutcomeReceivedEvent;
  typedef Aws::Utils::Event<RedshiftClient, const Model::DeleteTagsRequest&, const Model::DeleteTagsOutcome&, const Aws::Client::AsyncCallerContext*> DeleteTagsOutcomeReceivedEvent;
  typedef Aws::Utils::Event<RedshiftClient, const Model::DescribeClusterParameterGroupsRequest&, const Model::DescribeClusterParameterGroupsOutcome&, const Aws::Client::AsyncCallerContext*> DescribeClusterParameterGroupsOutcomeReceivedEvent;
  typedef Aws::Utils::Event<RedshiftClient, const Model::DescribeClusterParametersRequest&, const Model::DescribeClusterParametersOutcome&, const Aws::Client::AsyncCallerContext*> DescribeClusterParametersOutcomeReceivedEvent;
  typedef Aws::Utils::Event<RedshiftClient, const Model::DescribeClusterSecurityGroupsRequest&, const Model::DescribeClusterSecurityGroupsOutcome&, const Aws::Client::AsyncCallerContext*> DescribeClusterSecurityGroupsOutcomeReceivedEvent;
  typedef Aws::Utils::Event<RedshiftClient, const Model::DescribeClusterSnapshotsRequest&, const Model::DescribeClusterSnapshotsOutcome&, const Aws::Client::AsyncCallerContext*> DescribeClusterSnapshotsOutcomeReceivedEvent;
  typedef Aws::Utils::Event<RedshiftClient, const Model::DescribeClusterSubnetGroupsRequest&, const Model::DescribeClusterSubnetGroupsOutcome&, const Aws::Client::AsyncCallerContext*> DescribeClusterSubnetGroupsOutcomeReceivedEvent;
  typedef Aws::Utils::Event<RedshiftClient, const Model::DescribeClusterVersionsRequest&, const Model::DescribeClusterVersionsOutcome&, const Aws::Client::AsyncCallerContext*> DescribeClusterVersionsOutcomeReceivedEvent;
  typedef Aws::Utils::Event<RedshiftClient, const Model::DescribeClustersRequest&, const Model::DescribeClustersOutcome&, const Aws::Client::AsyncCallerContext*> DescribeClustersOutcomeReceivedEvent;
  typedef Aws::Utils::Event<RedshiftClient, const Model::DescribeDefaultClusterParametersRequest&, const Model::DescribeDefaultClusterParametersOutcome&, const Aws::Client::AsyncCallerContext*> DescribeDefaultClusterParametersOutcomeReceivedEvent;
  typedef Aws::Utils::Event<RedshiftClient, const Model::DescribeEventCategoriesRequest&, const Model::DescribeEventCategoriesOutcome&, const Aws::Client::AsyncCallerContext*> DescribeEventCategoriesOutcomeReceivedEvent;
  typedef Aws::Utils::Event<RedshiftClient, const Model::DescribeEventSubscriptionsRequest&, const Model::DescribeEventSubscriptionsOutcome&, const Aws::Client::AsyncCallerContext*> DescribeEventSubscriptionsOutcomeReceivedEvent;
  typedef Aws::Utils::Event<RedshiftClient, const Model::DescribeEventsRequest&, const Model::DescribeEventsOutcome&, const Aws::Client::AsyncCallerContext*> DescribeEventsOutcomeReceivedEvent;
  typedef Aws::Utils::Event<RedshiftClient, const Model::DescribeHsmClientCertificatesRequest&, const Model::DescribeHsmClientCertificatesOutcome&, const Aws::Client::AsyncCallerContext*> DescribeHsmClientCertificatesOutcomeReceivedEvent;
  typedef Aws::Utils::Event<RedshiftClient, const Model::DescribeHsmConfigurationsRequest&, const Model::DescribeHsmConfigurationsOutcome&, const Aws::Client::AsyncCallerContext*> DescribeHsmConfigurationsOutcomeReceivedEvent;
  typedef Aws::Utils::Event<RedshiftClient, const Model::DescribeLoggingStatusRequest&, const Model::DescribeLoggingStatusOutcome&, const Aws::Client::AsyncCallerContext*> DescribeLoggingStatusOutcomeReceivedEvent;
  typedef Aws::Utils::Event<RedshiftClient, const Model::DescribeOrderableClusterOptionsRequest&, const Model::DescribeOrderableClusterOptionsOutcome&, const Aws::Client::AsyncCallerContext*> DescribeOrderableClusterOptionsOutcomeReceivedEvent;
  typedef Aws::Utils::Event<RedshiftClient, const Model::DescribeReservedNodeOfferingsRequest&, const Model::DescribeReservedNodeOfferingsOutcome&, const Aws::Client::AsyncCallerContext*> DescribeReservedNodeOfferingsOutcomeReceivedEvent;
  typedef Aws::Utils::Event<RedshiftClient, const Model::DescribeReservedNodesRequest&, const Model::DescribeReservedNodesOutcome&, const Aws::Client::AsyncCallerContext*> DescribeReservedNodesOutcomeReceivedEvent;
  typedef Aws::Utils::Event<RedshiftClient, const Model::DescribeResizeRequest&, const Model::DescribeResizeOutcome&, const Aws::Client::AsyncCallerContext*> DescribeResizeOutcomeReceivedEvent;
  typedef Aws::Utils::Event<RedshiftClient, const Model::DescribeTagsRequest&, const Model::DescribeTagsOutcome&, const Aws::Client::AsyncCallerContext*> DescribeTagsOutcomeReceivedEvent;
  typedef Aws::Utils::Event<RedshiftClient, const Model::DisableLoggingRequest&, const Model::DisableLoggingOutcome&, const Aws::Client::AsyncCallerContext*> DisableLoggingOutcomeReceivedEvent;
  typedef Aws::Utils::Event<RedshiftClient, const Model::DisableSnapshotCopyRequest&, const Model::DisableSnapshotCopyOutcome&, const Aws::Client::AsyncCallerContext*> DisableSnapshotCopyOutcomeReceivedEvent;
  typedef Aws::Utils::Event<RedshiftClient, const Model::EnableLoggingRequest&, const Model::EnableLoggingOutcome&, const Aws::Client::AsyncCallerContext*> EnableLoggingOutcomeReceivedEvent;
  typedef Aws::Utils::Event<RedshiftClient, const Model::EnableSnapshotCopyRequest&, const Model::EnableSnapshotCopyOutcome&, const Aws::Client::AsyncCallerContext*> EnableSnapshotCopyOutcomeReceivedEvent;
  typedef Aws::Utils::Event<RedshiftClient, const Model::ModifyClusterRequest&, const Model::ModifyClusterOutcome&, const Aws::Client::AsyncCallerContext*> ModifyClusterOutcomeReceivedEvent;
  typedef Aws::Utils::Event<RedshiftClient, const Model::ModifyClusterParameterGroupRequest&, const Model::ModifyClusterParameterGroupOutcome&, const Aws::Client::AsyncCallerContext*> ModifyClusterParameterGroupOutcomeReceivedEvent;
  typedef Aws::Utils::Event<RedshiftClient, const Model::ModifyClusterSubnetGroupRequest&, const Model::ModifyClusterSubnetGroupOutcome&, const Aws::Client::AsyncCallerContext*> ModifyClusterSubnetGroupOutcomeReceivedEvent;
  typedef Aws::Utils::Event<RedshiftClient, const Model::ModifyEventSubscriptionRequest&, const Model::ModifyEventSubscriptionOutcome&, const Aws::Client::AsyncCallerContext*> ModifyEventSubscriptionOutcomeReceivedEvent;
  typedef Aws::Utils::Event<RedshiftClient, const Model::ModifySnapshotCopyRetentionPeriodRequest&, const Model::ModifySnapshotCopyRetentionPeriodOutcome&, const Aws::Client::AsyncCallerContext*> ModifySnapshotCopyRetentionPeriodOutcomeReceivedEvent;
  typedef Aws::Utils::Event<RedshiftClient, const Model::PurchaseReservedNodeOfferingRequest&, const Model::PurchaseReservedNodeOfferingOutcome&, const Aws::Client::AsyncCallerContext*> PurchaseReservedNodeOfferingOutcomeReceivedEvent;
  typedef Aws::Utils::Event<RedshiftClient, const Model::RebootClusterRequest&, const Model::RebootClusterOutcome&, const Aws::Client::AsyncCallerContext*> RebootClusterOutcomeReceivedEvent;
  typedef Aws::Utils::Event<RedshiftClient, const Model::ResetClusterParameterGroupRequest&, const Model::ResetClusterParameterGroupOutcome&, const Aws::Client::AsyncCallerContext*> ResetClusterParameterGroupOutcomeReceivedEvent;
  typedef Aws::Utils::Event<RedshiftClient, const Model::RestoreFromClusterSnapshotRequest&, const Model::RestoreFromClusterSnapshotOutcome&, const Aws::Client::AsyncCallerContext*> RestoreFromClusterSnapshotOutcomeReceivedEvent;
  typedef Aws::Utils::Event<RedshiftClient, const Model::RevokeClusterSecurityGroupIngressRequest&, const Model::RevokeClusterSecurityGroupIngressOutcome&, const Aws::Client::AsyncCallerContext*> RevokeClusterSecurityGroupIngressOutcomeReceivedEvent;
  typedef Aws::Utils::Event<RedshiftClient, const Model::RevokeSnapshotAccessRequest&, const Model::RevokeSnapshotAccessOutcome&, const Aws::Client::AsyncCallerContext*> RevokeSnapshotAccessOutcomeReceivedEvent;
  typedef Aws::Utils::Event<RedshiftClient, const Model::RotateEncryptionKeyRequest&, const Model::RotateEncryptionKeyOutcome&, const Aws::Client::AsyncCallerContext*> RotateEncryptionKeyOutcomeReceivedEvent;

  /*
    <fullname>Amazon Redshift</fullname> <b>Overview</b> <p> This is an interface reference for Amazon Redshift. It contains documentation for one of the programming or command line interfaces you can use to manage Amazon Redshift clusters. Note that Amazon Redshift is asynchronous, which means that some interfaces may require techniques, such as polling or asynchronous callback handlers, to determine when a command has been applied. In this reference, the parameter descriptions indicate whether a change is applied immediately, on the next instance reboot, or during the next maintenance window. For a summary of the Amazon Redshift cluster management interfaces, go to <a href="http://docs.aws.amazon.com/redshift/latest/mgmt/using-aws-sdk.html">Using the Amazon Redshift Management Interfaces </a>.</p> <p> Amazon Redshift manages all the work of setting up, operating, and scaling a data warehouse: provisioning capacity, monitoring and backing up the cluster, and applying patches and upgrades to the Amazon Redshift engine. You can focus on using your data to acquire new insights for your business and customers. </p> <p>If you are a first-time user of Amazon Redshift, we recommend that you begin by reading the The <a href="http://docs.aws.amazon.com/redshift/latest/gsg/getting-started.html">Amazon Redshift Getting Started Guide</a></p> <p>If you are a database developer, the <a href="http://docs.aws.amazon.com/redshift/latest/dg/welcome.html">Amazon Redshift Database Developer Guide</a> explains how to design, build, query, and maintain the databases that make up your data warehouse. </p>
  */
  class AWS_REDSHIFT_API RedshiftClient : public Aws::Client::AWSXMLClient
  {
    public:
      typedef Aws::Client::AWSXMLClient BASECLASS;

     /**
      * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
      * is not specified, it will be initialized to default values.
      */
      RedshiftClient(const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

     /**
      * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
      * is not specified, it will be initialized to default values.
      */
      RedshiftClient(const Auth::AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

     /**
      * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
      * the default http client factory will be used
      */
      RedshiftClient(const std::shared_ptr<Auth::AWSCredentialsProvider>& credentialsProvider,
        const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration(),
        const std::shared_ptr<Http::HttpClientFactory const>& httpClientFactory = nullptr);

      ~RedshiftClient();

     /*
       <p> Adds an inbound (ingress) rule to an Amazon Redshift security group. Depending on whether the application accessing your cluster is running on the Internet or an EC2 instance, you can authorize inbound access to either a Classless Interdomain Routing (CIDR) IP address range or an EC2 security group. You can add as many as 20 ingress rules to an Amazon Redshift security group. </p> <note> The EC2 security group must be defined in the AWS region where the cluster resides. </note> <p>For an overview of CIDR blocks, see the Wikipedia article on <a href="http://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing">Classless Inter-Domain Routing</a>. </p> <p> You must also associate the security group with a cluster so that clients running on these IP addresses or the EC2 instance are authorized to connect to the cluster. For information about managing security groups, go to <a href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-security-groups.html">Working with Security Groups</a> in the <i>Amazon Redshift Cluster Management Guide</i>.</p>
     */
     Model::AuthorizeClusterSecurityGroupIngressOutcome AuthorizeClusterSecurityGroupIngress(const Model::AuthorizeClusterSecurityGroupIngressRequest& request) const;

     /*
       <p> Adds an inbound (ingress) rule to an Amazon Redshift security group. Depending on whether the application accessing your cluster is running on the Internet or an EC2 instance, you can authorize inbound access to either a Classless Interdomain Routing (CIDR) IP address range or an EC2 security group. You can add as many as 20 ingress rules to an Amazon Redshift security group. </p> <note> The EC2 security group must be defined in the AWS region where the cluster resides. </note> <p>For an overview of CIDR blocks, see the Wikipedia article on <a href="http://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing">Classless Inter-Domain Routing</a>. </p> <p> You must also associate the security group with a cluster so that clients running on these IP addresses or the EC2 instance are authorized to connect to the cluster. For information about managing security groups, go to <a href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-security-groups.html">Working with Security Groups</a> in the <i>Amazon Redshift Cluster Management Guide</i>.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::AuthorizeClusterSecurityGroupIngressOutcomeCallable AuthorizeClusterSecurityGroupIngressCallable(const Model::AuthorizeClusterSecurityGroupIngressRequest& request) const;

     /*
       <p> Adds an inbound (ingress) rule to an Amazon Redshift security group. Depending on whether the application accessing your cluster is running on the Internet or an EC2 instance, you can authorize inbound access to either a Classless Interdomain Routing (CIDR) IP address range or an EC2 security group. You can add as many as 20 ingress rules to an Amazon Redshift security group. </p> <note> The EC2 security group must be defined in the AWS region where the cluster resides. </note> <p>For an overview of CIDR blocks, see the Wikipedia article on <a href="http://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing">Classless Inter-Domain Routing</a>. </p> <p> You must also associate the security group with a cluster so that clients running on these IP addresses or the EC2 instance are authorized to connect to the cluster. For information about managing security groups, go to <a href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-security-groups.html">Working with Security Groups</a> in the <i>Amazon Redshift Cluster Management Guide</i>.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void AuthorizeClusterSecurityGroupIngressAsync(const Model::AuthorizeClusterSecurityGroupIngressRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p> Authorizes the specified AWS customer account to restore the specified snapshot. </p> <p> For more information about working with snapshots, go to <a href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-snapshots.html">Amazon Redshift Snapshots</a> in the <i>Amazon Redshift Cluster Management Guide</i>. </p>
     */
     Model::AuthorizeSnapshotAccessOutcome AuthorizeSnapshotAccess(const Model::AuthorizeSnapshotAccessRequest& request) const;

     /*
       <p> Authorizes the specified AWS customer account to restore the specified snapshot. </p> <p> For more information about working with snapshots, go to <a href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-snapshots.html">Amazon Redshift Snapshots</a> in the <i>Amazon Redshift Cluster Management Guide</i>. </p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::AuthorizeSnapshotAccessOutcomeCallable AuthorizeSnapshotAccessCallable(const Model::AuthorizeSnapshotAccessRequest& request) const;

     /*
       <p> Authorizes the specified AWS customer account to restore the specified snapshot. </p> <p> For more information about working with snapshots, go to <a href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-snapshots.html">Amazon Redshift Snapshots</a> in the <i>Amazon Redshift Cluster Management Guide</i>. </p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void AuthorizeSnapshotAccessAsync(const Model::AuthorizeSnapshotAccessRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p> Copies the specified automated cluster snapshot to a new manual cluster snapshot. The source must be an automated snapshot and it must be in the available state. </p> <p> When you delete a cluster, Amazon Redshift deletes any automated snapshots of the cluster. Also, when the retention period of the snapshot expires, Amazon Redshift automatically deletes it. If you want to keep an automated snapshot for a longer period, you can make a manual copy of the snapshot. Manual snapshots are retained until you delete them. </p> <p> For more information about working with snapshots, go to <a href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-snapshots.html">Amazon Redshift Snapshots</a> in the <i>Amazon Redshift Cluster Management Guide</i>. </p>
     */
     Model::CopyClusterSnapshotOutcome CopyClusterSnapshot(const Model::CopyClusterSnapshotRequest& request) const;

     /*
       <p> Copies the specified automated cluster snapshot to a new manual cluster snapshot. The source must be an automated snapshot and it must be in the available state. </p> <p> When you delete a cluster, Amazon Redshift deletes any automated snapshots of the cluster. Also, when the retention period of the snapshot expires, Amazon Redshift automatically deletes it. If you want to keep an automated snapshot for a longer period, you can make a manual copy of the snapshot. Manual snapshots are retained until you delete them. </p> <p> For more information about working with snapshots, go to <a href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-snapshots.html">Amazon Redshift Snapshots</a> in the <i>Amazon Redshift Cluster Management Guide</i>. </p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::CopyClusterSnapshotOutcomeCallable CopyClusterSnapshotCallable(const Model::CopyClusterSnapshotRequest& request) const;

     /*
       <p> Copies the specified automated cluster snapshot to a new manual cluster snapshot. The source must be an automated snapshot and it must be in the available state. </p> <p> When you delete a cluster, Amazon Redshift deletes any automated snapshots of the cluster. Also, when the retention period of the snapshot expires, Amazon Redshift automatically deletes it. If you want to keep an automated snapshot for a longer period, you can make a manual copy of the snapshot. Manual snapshots are retained until you delete them. </p> <p> For more information about working with snapshots, go to <a href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-snapshots.html">Amazon Redshift Snapshots</a> in the <i>Amazon Redshift Cluster Management Guide</i>. </p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void CopyClusterSnapshotAsync(const Model::CopyClusterSnapshotRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p> Creates a new cluster. To create the cluster in virtual private cloud (VPC), you must provide cluster subnet group name. If you don't provide a cluster subnet group name or the cluster security group parameter, Amazon Redshift creates a non-VPC cluster, it associates the default cluster security group with the cluster. For more information about managing clusters, go to <a href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-clusters.html">Amazon Redshift Clusters</a> in the <i>Amazon Redshift Cluster Management Guide</i> . </p>
     */
     Model::CreateClusterOutcome CreateCluster(const Model::CreateClusterRequest& request) const;

     /*
       <p> Creates a new cluster. To create the cluster in virtual private cloud (VPC), you must provide cluster subnet group name. If you don't provide a cluster subnet group name or the cluster security group parameter, Amazon Redshift creates a non-VPC cluster, it associates the default cluster security group with the cluster. For more information about managing clusters, go to <a href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-clusters.html">Amazon Redshift Clusters</a> in the <i>Amazon Redshift Cluster Management Guide</i> . </p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::CreateClusterOutcomeCallable CreateClusterCallable(const Model::CreateClusterRequest& request) const;

     /*
       <p> Creates a new cluster. To create the cluster in virtual private cloud (VPC), you must provide cluster subnet group name. If you don't provide a cluster subnet group name or the cluster security group parameter, Amazon Redshift creates a non-VPC cluster, it associates the default cluster security group with the cluster. For more information about managing clusters, go to <a href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-clusters.html">Amazon Redshift Clusters</a> in the <i>Amazon Redshift Cluster Management Guide</i> . </p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void CreateClusterAsync(const Model::CreateClusterRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p> Creates an Amazon Redshift parameter group. </p> <p>Creating parameter groups is independent of creating clusters. You can associate a cluster with a parameter group when you create the cluster. You can also associate an existing cluster with a parameter group after the cluster is created by using <a>ModifyCluster</a>. </p> <p> Parameters in the parameter group define specific behavior that applies to the databases you create on the cluster. For more information about managing parameter groups, go to <a href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-parameter-groups.html">Amazon Redshift Parameter Groups</a> in the <i>Amazon Redshift Cluster Management Guide</i>. </p>
     */
     Model::CreateClusterParameterGroupOutcome CreateClusterParameterGroup(const Model::CreateClusterParameterGroupRequest& request) const;

     /*
       <p> Creates an Amazon Redshift parameter group. </p> <p>Creating parameter groups is independent of creating clusters. You can associate a cluster with a parameter group when you create the cluster. You can also associate an existing cluster with a parameter group after the cluster is created by using <a>ModifyCluster</a>. </p> <p> Parameters in the parameter group define specific behavior that applies to the databases you create on the cluster. For more information about managing parameter groups, go to <a href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-parameter-groups.html">Amazon Redshift Parameter Groups</a> in the <i>Amazon Redshift Cluster Management Guide</i>. </p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::CreateClusterParameterGroupOutcomeCallable CreateClusterParameterGroupCallable(const Model::CreateClusterParameterGroupRequest& request) const;

     /*
       <p> Creates an Amazon Redshift parameter group. </p> <p>Creating parameter groups is independent of creating clusters. You can associate a cluster with a parameter group when you create the cluster. You can also associate an existing cluster with a parameter group after the cluster is created by using <a>ModifyCluster</a>. </p> <p> Parameters in the parameter group define specific behavior that applies to the databases you create on the cluster. For more information about managing parameter groups, go to <a href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-parameter-groups.html">Amazon Redshift Parameter Groups</a> in the <i>Amazon Redshift Cluster Management Guide</i>. </p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void CreateClusterParameterGroupAsync(const Model::CreateClusterParameterGroupRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p> Creates a new Amazon Redshift security group. You use security groups to control access to non-VPC clusters. </p> <p> For information about managing security groups, go to <a href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-security-groups.html">Amazon Redshift Cluster Security Groups</a> in the <i>Amazon Redshift Cluster Management Guide</i>. </p>
     */
     Model::CreateClusterSecurityGroupOutcome CreateClusterSecurityGroup(const Model::CreateClusterSecurityGroupRequest& request) const;

     /*
       <p> Creates a new Amazon Redshift security group. You use security groups to control access to non-VPC clusters. </p> <p> For information about managing security groups, go to <a href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-security-groups.html">Amazon Redshift Cluster Security Groups</a> in the <i>Amazon Redshift Cluster Management Guide</i>. </p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::CreateClusterSecurityGroupOutcomeCallable CreateClusterSecurityGroupCallable(const Model::CreateClusterSecurityGroupRequest& request) const;

     /*
       <p> Creates a new Amazon Redshift security group. You use security groups to control access to non-VPC clusters. </p> <p> For information about managing security groups, go to <a href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-security-groups.html">Amazon Redshift Cluster Security Groups</a> in the <i>Amazon Redshift Cluster Management Guide</i>. </p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void CreateClusterSecurityGroupAsync(const Model::CreateClusterSecurityGroupRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p> Creates a manual snapshot of the specified cluster. The cluster must be in the <code>available</code> state. </p> <p> For more information about working with snapshots, go to <a href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-snapshots.html">Amazon Redshift Snapshots</a> in the <i>Amazon Redshift Cluster Management Guide</i>. </p>
     */
     Model::CreateClusterSnapshotOutcome CreateClusterSnapshot(const Model::CreateClusterSnapshotRequest& request) const;

     /*
       <p> Creates a manual snapshot of the specified cluster. The cluster must be in the <code>available</code> state. </p> <p> For more information about working with snapshots, go to <a href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-snapshots.html">Amazon Redshift Snapshots</a> in the <i>Amazon Redshift Cluster Management Guide</i>. </p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::CreateClusterSnapshotOutcomeCallable CreateClusterSnapshotCallable(const Model::CreateClusterSnapshotRequest& request) const;

     /*
       <p> Creates a manual snapshot of the specified cluster. The cluster must be in the <code>available</code> state. </p> <p> For more information about working with snapshots, go to <a href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-snapshots.html">Amazon Redshift Snapshots</a> in the <i>Amazon Redshift Cluster Management Guide</i>. </p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void CreateClusterSnapshotAsync(const Model::CreateClusterSnapshotRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p> Creates a new Amazon Redshift subnet group. You must provide a list of one or more subnets in your existing Amazon Virtual Private Cloud (Amazon VPC) when creating Amazon Redshift subnet group. </p> <p> For information about subnet groups, go to <a href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-cluster-subnet-groups.html">Amazon Redshift Cluster Subnet Groups</a> in the <i>Amazon Redshift Cluster Management Guide</i>. </p>
     */
     Model::CreateClusterSubnetGroupOutcome CreateClusterSubnetGroup(const Model::CreateClusterSubnetGroupRequest& request) const;

     /*
       <p> Creates a new Amazon Redshift subnet group. You must provide a list of one or more subnets in your existing Amazon Virtual Private Cloud (Amazon VPC) when creating Amazon Redshift subnet group. </p> <p> For information about subnet groups, go to <a href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-cluster-subnet-groups.html">Amazon Redshift Cluster Subnet Groups</a> in the <i>Amazon Redshift Cluster Management Guide</i>. </p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::CreateClusterSubnetGroupOutcomeCallable CreateClusterSubnetGroupCallable(const Model::CreateClusterSubnetGroupRequest& request) const;

     /*
       <p> Creates a new Amazon Redshift subnet group. You must provide a list of one or more subnets in your existing Amazon Virtual Private Cloud (Amazon VPC) when creating Amazon Redshift subnet group. </p> <p> For information about subnet groups, go to <a href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-cluster-subnet-groups.html">Amazon Redshift Cluster Subnet Groups</a> in the <i>Amazon Redshift Cluster Management Guide</i>. </p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void CreateClusterSubnetGroupAsync(const Model::CreateClusterSubnetGroupRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p> Creates an Amazon Redshift event notification subscription. This action requires an ARN (Amazon Resource Name) of an Amazon SNS topic created by either the Amazon Redshift console, the Amazon SNS console, or the Amazon SNS API. To obtain an ARN with Amazon SNS, you must create a topic in Amazon SNS and subscribe to the topic. The ARN is displayed in the SNS console. </p> <p> You can specify the source type, and lists of Amazon Redshift source IDs, event categories, and event severities. Notifications will be sent for all events you want that match those criteria. For example, you can specify source type = cluster, source ID = my-cluster-1 and mycluster2, event categories = Availability, Backup, and severity = ERROR. The subscription will only send notifications for those ERROR events in the Availability and Backup categories for the specified clusters. </p> <p> If you specify both the source type and source IDs, such as source type = cluster and source identifier = my-cluster-1, notifications will be sent for all the cluster events for my-cluster-1. If you specify a source type but do not specify a source identifier, you will receive notice of the events for the objects of that type in your AWS account. If you do not specify either the SourceType nor the SourceIdentifier, you will be notified of events generated from all Amazon Redshift sources belonging to your AWS account. You must specify a source type if you specify a source ID. </p>
     */
     Model::CreateEventSubscriptionOutcome CreateEventSubscription(const Model::CreateEventSubscriptionRequest& request) const;

     /*
       <p> Creates an Amazon Redshift event notification subscription. This action requires an ARN (Amazon Resource Name) of an Amazon SNS topic created by either the Amazon Redshift console, the Amazon SNS console, or the Amazon SNS API. To obtain an ARN with Amazon SNS, you must create a topic in Amazon SNS and subscribe to the topic. The ARN is displayed in the SNS console. </p> <p> You can specify the source type, and lists of Amazon Redshift source IDs, event categories, and event severities. Notifications will be sent for all events you want that match those criteria. For example, you can specify source type = cluster, source ID = my-cluster-1 and mycluster2, event categories = Availability, Backup, and severity = ERROR. The subscription will only send notifications for those ERROR events in the Availability and Backup categories for the specified clusters. </p> <p> If you specify both the source type and source IDs, such as source type = cluster and source identifier = my-cluster-1, notifications will be sent for all the cluster events for my-cluster-1. If you specify a source type but do not specify a source identifier, you will receive notice of the events for the objects of that type in your AWS account. If you do not specify either the SourceType nor the SourceIdentifier, you will be notified of events generated from all Amazon Redshift sources belonging to your AWS account. You must specify a source type if you specify a source ID. </p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::CreateEventSubscriptionOutcomeCallable CreateEventSubscriptionCallable(const Model::CreateEventSubscriptionRequest& request) const;

     /*
       <p> Creates an Amazon Redshift event notification subscription. This action requires an ARN (Amazon Resource Name) of an Amazon SNS topic created by either the Amazon Redshift console, the Amazon SNS console, or the Amazon SNS API. To obtain an ARN with Amazon SNS, you must create a topic in Amazon SNS and subscribe to the topic. The ARN is displayed in the SNS console. </p> <p> You can specify the source type, and lists of Amazon Redshift source IDs, event categories, and event severities. Notifications will be sent for all events you want that match those criteria. For example, you can specify source type = cluster, source ID = my-cluster-1 and mycluster2, event categories = Availability, Backup, and severity = ERROR. The subscription will only send notifications for those ERROR events in the Availability and Backup categories for the specified clusters. </p> <p> If you specify both the source type and source IDs, such as source type = cluster and source identifier = my-cluster-1, notifications will be sent for all the cluster events for my-cluster-1. If you specify a source type but do not specify a source identifier, you will receive notice of the events for the objects of that type in your AWS account. If you do not specify either the SourceType nor the SourceIdentifier, you will be notified of events generated from all Amazon Redshift sources belonging to your AWS account. You must specify a source type if you specify a source ID. </p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void CreateEventSubscriptionAsync(const Model::CreateEventSubscriptionRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Creates an HSM client certificate that an Amazon Redshift cluster will use to connect to the client's HSM in order to store and retrieve the keys used to encrypt the cluster databases.</p> <p>The command returns a public key, which you must store in the HSM. In addition to creating the HSM certificate, you must create an Amazon Redshift HSM configuration that provides a cluster the information needed to store and use encryption keys in the HSM. For more information, go to <a href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-HSM.html">Hardware Security Modules</a> in the Amazon Redshift Cluster Management Guide.</p>
     */
     Model::CreateHsmClientCertificateOutcome CreateHsmClientCertificate(const Model::CreateHsmClientCertificateRequest& request) const;

     /*
       <p>Creates an HSM client certificate that an Amazon Redshift cluster will use to connect to the client's HSM in order to store and retrieve the keys used to encrypt the cluster databases.</p> <p>The command returns a public key, which you must store in the HSM. In addition to creating the HSM certificate, you must create an Amazon Redshift HSM configuration that provides a cluster the information needed to store and use encryption keys in the HSM. For more information, go to <a href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-HSM.html">Hardware Security Modules</a> in the Amazon Redshift Cluster Management Guide.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::CreateHsmClientCertificateOutcomeCallable CreateHsmClientCertificateCallable(const Model::CreateHsmClientCertificateRequest& request) const;

     /*
       <p>Creates an HSM client certificate that an Amazon Redshift cluster will use to connect to the client's HSM in order to store and retrieve the keys used to encrypt the cluster databases.</p> <p>The command returns a public key, which you must store in the HSM. In addition to creating the HSM certificate, you must create an Amazon Redshift HSM configuration that provides a cluster the information needed to store and use encryption keys in the HSM. For more information, go to <a href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-HSM.html">Hardware Security Modules</a> in the Amazon Redshift Cluster Management Guide.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void CreateHsmClientCertificateAsync(const Model::CreateHsmClientCertificateRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Creates an HSM configuration that contains the information required by an Amazon Redshift cluster to store and use database encryption keys in a Hardware Security Module (HSM). After creating the HSM configuration, you can specify it as a parameter when creating a cluster. The cluster will then store its encryption keys in the HSM.</p> <p>In addition to creating an HSM configuration, you must also create an HSM client certificate. For more information, go to <a href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-HSM.html">Hardware Security Modules</a> in the Amazon Redshift Cluster Management Guide.</p>
     */
     Model::CreateHsmConfigurationOutcome CreateHsmConfiguration(const Model::CreateHsmConfigurationRequest& request) const;

     /*
       <p>Creates an HSM configuration that contains the information required by an Amazon Redshift cluster to store and use database encryption keys in a Hardware Security Module (HSM). After creating the HSM configuration, you can specify it as a parameter when creating a cluster. The cluster will then store its encryption keys in the HSM.</p> <p>In addition to creating an HSM configuration, you must also create an HSM client certificate. For more information, go to <a href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-HSM.html">Hardware Security Modules</a> in the Amazon Redshift Cluster Management Guide.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::CreateHsmConfigurationOutcomeCallable CreateHsmConfigurationCallable(const Model::CreateHsmConfigurationRequest& request) const;

     /*
       <p>Creates an HSM configuration that contains the information required by an Amazon Redshift cluster to store and use database encryption keys in a Hardware Security Module (HSM). After creating the HSM configuration, you can specify it as a parameter when creating a cluster. The cluster will then store its encryption keys in the HSM.</p> <p>In addition to creating an HSM configuration, you must also create an HSM client certificate. For more information, go to <a href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-HSM.html">Hardware Security Modules</a> in the Amazon Redshift Cluster Management Guide.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void CreateHsmConfigurationAsync(const Model::CreateHsmConfigurationRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p> Adds one or more tags to a specified resource. </p> <p> A resource can have up to 10 tags. If you try to create more than 10 tags for a resource, you will receive an error and the attempt will fail. </p> <p> If you specify a key that already exists for the resource, the value for that key will be updated with the new value. </p>
     */
     Model::CreateTagsOutcome CreateTags(const Model::CreateTagsRequest& request) const;

     /*
       <p> Adds one or more tags to a specified resource. </p> <p> A resource can have up to 10 tags. If you try to create more than 10 tags for a resource, you will receive an error and the attempt will fail. </p> <p> If you specify a key that already exists for the resource, the value for that key will be updated with the new value. </p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::CreateTagsOutcomeCallable CreateTagsCallable(const Model::CreateTagsRequest& request) const;

     /*
       <p> Adds one or more tags to a specified resource. </p> <p> A resource can have up to 10 tags. If you try to create more than 10 tags for a resource, you will receive an error and the attempt will fail. </p> <p> If you specify a key that already exists for the resource, the value for that key will be updated with the new value. </p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void CreateTagsAsync(const Model::CreateTagsRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p> Deletes a previously provisioned cluster. A successful response from the web service indicates that the request was received correctly. Use <a>DescribeClusters</a> to monitor the status of the deletion. The delete operation cannot be canceled or reverted once submitted. For more information about managing clusters, go to <a href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-clusters.html">Amazon Redshift Clusters</a> in the <i>Amazon Redshift Cluster Management Guide</i> . </p> <p> If you want to shut down the cluster and retain it for future use, set <i>SkipFinalClusterSnapshot</i> to <code>false</code> and specify a name for <i>FinalClusterSnapshotIdentifier</i>. You can later restore this snapshot to resume using the cluster. If a final cluster snapshot is requested, the status of the cluster will be "final-snapshot" while the snapshot is being taken, then it's "deleting" once Amazon Redshift begins deleting the cluster. </p> <p> For more information about managing clusters, go to <a href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-clusters.html">Amazon Redshift Clusters</a> in the <i>Amazon Redshift Cluster Management Guide</i> . </p>
     */
     Model::DeleteClusterOutcome DeleteCluster(const Model::DeleteClusterRequest& request) const;

     /*
       <p> Deletes a previously provisioned cluster. A successful response from the web service indicates that the request was received correctly. Use <a>DescribeClusters</a> to monitor the status of the deletion. The delete operation cannot be canceled or reverted once submitted. For more information about managing clusters, go to <a href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-clusters.html">Amazon Redshift Clusters</a> in the <i>Amazon Redshift Cluster Management Guide</i> . </p> <p> If you want to shut down the cluster and retain it for future use, set <i>SkipFinalClusterSnapshot</i> to <code>false</code> and specify a name for <i>FinalClusterSnapshotIdentifier</i>. You can later restore this snapshot to resume using the cluster. If a final cluster snapshot is requested, the status of the cluster will be "final-snapshot" while the snapshot is being taken, then it's "deleting" once Amazon Redshift begins deleting the cluster. </p> <p> For more information about managing clusters, go to <a href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-clusters.html">Amazon Redshift Clusters</a> in the <i>Amazon Redshift Cluster Management Guide</i> . </p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DeleteClusterOutcomeCallable DeleteClusterCallable(const Model::DeleteClusterRequest& request) const;

     /*
       <p> Deletes a previously provisioned cluster. A successful response from the web service indicates that the request was received correctly. Use <a>DescribeClusters</a> to monitor the status of the deletion. The delete operation cannot be canceled or reverted once submitted. For more information about managing clusters, go to <a href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-clusters.html">Amazon Redshift Clusters</a> in the <i>Amazon Redshift Cluster Management Guide</i> . </p> <p> If you want to shut down the cluster and retain it for future use, set <i>SkipFinalClusterSnapshot</i> to <code>false</code> and specify a name for <i>FinalClusterSnapshotIdentifier</i>. You can later restore this snapshot to resume using the cluster. If a final cluster snapshot is requested, the status of the cluster will be "final-snapshot" while the snapshot is being taken, then it's "deleting" once Amazon Redshift begins deleting the cluster. </p> <p> For more information about managing clusters, go to <a href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-clusters.html">Amazon Redshift Clusters</a> in the <i>Amazon Redshift Cluster Management Guide</i> . </p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DeleteClusterAsync(const Model::DeleteClusterRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p> Deletes a specified Amazon Redshift parameter group. <note>You cannot delete a parameter group if it is associated with a cluster.</note> </p>
     */
     Model::DeleteClusterParameterGroupOutcome DeleteClusterParameterGroup(const Model::DeleteClusterParameterGroupRequest& request) const;

     /*
       <p> Deletes a specified Amazon Redshift parameter group. <note>You cannot delete a parameter group if it is associated with a cluster.</note> </p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DeleteClusterParameterGroupOutcomeCallable DeleteClusterParameterGroupCallable(const Model::DeleteClusterParameterGroupRequest& request) const;

     /*
       <p> Deletes a specified Amazon Redshift parameter group. <note>You cannot delete a parameter group if it is associated with a cluster.</note> </p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DeleteClusterParameterGroupAsync(const Model::DeleteClusterParameterGroupRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p> Deletes an Amazon Redshift security group. </p> <note>You cannot delete a security group that is associated with any clusters. You cannot delete the default security group.</note> <p> For information about managing security groups, go to <a href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-security-groups.html">Amazon Redshift Cluster Security Groups</a> in the <i>Amazon Redshift Cluster Management Guide</i>. </p>
     */
     Model::DeleteClusterSecurityGroupOutcome DeleteClusterSecurityGroup(const Model::DeleteClusterSecurityGroupRequest& request) const;

     /*
       <p> Deletes an Amazon Redshift security group. </p> <note>You cannot delete a security group that is associated with any clusters. You cannot delete the default security group.</note> <p> For information about managing security groups, go to <a href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-security-groups.html">Amazon Redshift Cluster Security Groups</a> in the <i>Amazon Redshift Cluster Management Guide</i>. </p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DeleteClusterSecurityGroupOutcomeCallable DeleteClusterSecurityGroupCallable(const Model::DeleteClusterSecurityGroupRequest& request) const;

     /*
       <p> Deletes an Amazon Redshift security group. </p> <note>You cannot delete a security group that is associated with any clusters. You cannot delete the default security group.</note> <p> For information about managing security groups, go to <a href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-security-groups.html">Amazon Redshift Cluster Security Groups</a> in the <i>Amazon Redshift Cluster Management Guide</i>. </p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DeleteClusterSecurityGroupAsync(const Model::DeleteClusterSecurityGroupRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p> Deletes the specified manual snapshot. The snapshot must be in the <code>available</code> state, with no other users authorized to access the snapshot. </p> <p> Unlike automated snapshots, manual snapshots are retained even after you delete your cluster. Amazon Redshift does not delete your manual snapshots. You must delete manual snapshot explicitly to avoid getting charged. If other accounts are authorized to access the snapshot, you must revoke all of the authorizations before you can delete the snapshot. </p>
     */
     Model::DeleteClusterSnapshotOutcome DeleteClusterSnapshot(const Model::DeleteClusterSnapshotRequest& request) const;

     /*
       <p> Deletes the specified manual snapshot. The snapshot must be in the <code>available</code> state, with no other users authorized to access the snapshot. </p> <p> Unlike automated snapshots, manual snapshots are retained even after you delete your cluster. Amazon Redshift does not delete your manual snapshots. You must delete manual snapshot explicitly to avoid getting charged. If other accounts are authorized to access the snapshot, you must revoke all of the authorizations before you can delete the snapshot. </p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DeleteClusterSnapshotOutcomeCallable DeleteClusterSnapshotCallable(const Model::DeleteClusterSnapshotRequest& request) const;

     /*
       <p> Deletes the specified manual snapshot. The snapshot must be in the <code>available</code> state, with no other users authorized to access the snapshot. </p> <p> Unlike automated snapshots, manual snapshots are retained even after you delete your cluster. Amazon Redshift does not delete your manual snapshots. You must delete manual snapshot explicitly to avoid getting charged. If other accounts are authorized to access the snapshot, you must revoke all of the authorizations before you can delete the snapshot. </p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DeleteClusterSnapshotAsync(const Model::DeleteClusterSnapshotRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p> Deletes the specified cluster subnet group. </p>
     */
     Model::DeleteClusterSubnetGroupOutcome DeleteClusterSubnetGroup(const Model::DeleteClusterSubnetGroupRequest& request) const;

     /*
       <p> Deletes the specified cluster subnet group. </p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DeleteClusterSubnetGroupOutcomeCallable DeleteClusterSubnetGroupCallable(const Model::DeleteClusterSubnetGroupRequest& request) const;

     /*
       <p> Deletes the specified cluster subnet group. </p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DeleteClusterSubnetGroupAsync(const Model::DeleteClusterSubnetGroupRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p> Deletes an Amazon Redshift event notification subscription. </p>
     */
     Model::DeleteEventSubscriptionOutcome DeleteEventSubscription(const Model::DeleteEventSubscriptionRequest& request) const;

     /*
       <p> Deletes an Amazon Redshift event notification subscription. </p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DeleteEventSubscriptionOutcomeCallable DeleteEventSubscriptionCallable(const Model::DeleteEventSubscriptionRequest& request) const;

     /*
       <p> Deletes an Amazon Redshift event notification subscription. </p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DeleteEventSubscriptionAsync(const Model::DeleteEventSubscriptionRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Deletes the specified HSM client certificate.</p>
     */
     Model::DeleteHsmClientCertificateOutcome DeleteHsmClientCertificate(const Model::DeleteHsmClientCertificateRequest& request) const;

     /*
       <p>Deletes the specified HSM client certificate.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DeleteHsmClientCertificateOutcomeCallable DeleteHsmClientCertificateCallable(const Model::DeleteHsmClientCertificateRequest& request) const;

     /*
       <p>Deletes the specified HSM client certificate.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DeleteHsmClientCertificateAsync(const Model::DeleteHsmClientCertificateRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Deletes the specified Amazon Redshift HSM configuration.</p>
     */
     Model::DeleteHsmConfigurationOutcome DeleteHsmConfiguration(const Model::DeleteHsmConfigurationRequest& request) const;

     /*
       <p>Deletes the specified Amazon Redshift HSM configuration.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DeleteHsmConfigurationOutcomeCallable DeleteHsmConfigurationCallable(const Model::DeleteHsmConfigurationRequest& request) const;

     /*
       <p>Deletes the specified Amazon Redshift HSM configuration.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DeleteHsmConfigurationAsync(const Model::DeleteHsmConfigurationRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p> Deletes a tag or tags from a resource. You must provide the ARN of the resource from which you want to delete the tag or tags.</p>
     */
     Model::DeleteTagsOutcome DeleteTags(const Model::DeleteTagsRequest& request) const;

     /*
       <p> Deletes a tag or tags from a resource. You must provide the ARN of the resource from which you want to delete the tag or tags.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DeleteTagsOutcomeCallable DeleteTagsCallable(const Model::DeleteTagsRequest& request) const;

     /*
       <p> Deletes a tag or tags from a resource. You must provide the ARN of the resource from which you want to delete the tag or tags.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DeleteTagsAsync(const Model::DeleteTagsRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p> Returns a list of Amazon Redshift parameter groups, including parameter groups you created and the default parameter group. For each parameter group, the response includes the parameter group name, description, and parameter group family name. You can optionally specify a name to retrieve the description of a specific parameter group. </p> <p> For more information about managing parameter groups, go to <a href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-parameter-groups.html">Amazon Redshift Parameter Groups</a> in the <i>Amazon Redshift Cluster Management Guide</i>. </p> <p>If you specify both tag keys and tag values in the same request, Amazon Redshift returns all parameter groups that match any combination of the specified keys and values. For example, if you have <code>owner</code> and <code>environment</code> for tag keys, and <code>admin</code> and <code>test</code> for tag values, all parameter groups that have any combination of those values are returned.</p> <p>If both tag keys and values are omitted from the request, parameter groups are returned regardless of whether they have tag keys or values associated with them.</p>
     */
     Model::DescribeClusterParameterGroupsOutcome DescribeClusterParameterGroups(const Model::DescribeClusterParameterGroupsRequest& request) const;

     /*
       <p> Returns a list of Amazon Redshift parameter groups, including parameter groups you created and the default parameter group. For each parameter group, the response includes the parameter group name, description, and parameter group family name. You can optionally specify a name to retrieve the description of a specific parameter group. </p> <p> For more information about managing parameter groups, go to <a href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-parameter-groups.html">Amazon Redshift Parameter Groups</a> in the <i>Amazon Redshift Cluster Management Guide</i>. </p> <p>If you specify both tag keys and tag values in the same request, Amazon Redshift returns all parameter groups that match any combination of the specified keys and values. For example, if you have <code>owner</code> and <code>environment</code> for tag keys, and <code>admin</code> and <code>test</code> for tag values, all parameter groups that have any combination of those values are returned.</p> <p>If both tag keys and values are omitted from the request, parameter groups are returned regardless of whether they have tag keys or values associated with them.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DescribeClusterParameterGroupsOutcomeCallable DescribeClusterParameterGroupsCallable(const Model::DescribeClusterParameterGroupsRequest& request) const;

     /*
       <p> Returns a list of Amazon Redshift parameter groups, including parameter groups you created and the default parameter group. For each parameter group, the response includes the parameter group name, description, and parameter group family name. You can optionally specify a name to retrieve the description of a specific parameter group. </p> <p> For more information about managing parameter groups, go to <a href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-parameter-groups.html">Amazon Redshift Parameter Groups</a> in the <i>Amazon Redshift Cluster Management Guide</i>. </p> <p>If you specify both tag keys and tag values in the same request, Amazon Redshift returns all parameter groups that match any combination of the specified keys and values. For example, if you have <code>owner</code> and <code>environment</code> for tag keys, and <code>admin</code> and <code>test</code> for tag values, all parameter groups that have any combination of those values are returned.</p> <p>If both tag keys and values are omitted from the request, parameter groups are returned regardless of whether they have tag keys or values associated with them.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DescribeClusterParameterGroupsAsync(const Model::DescribeClusterParameterGroupsRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p> Returns a detailed list of parameters contained within the specified Amazon Redshift parameter group. For each parameter the response includes information such as parameter name, description, data type, value, whether the parameter value is modifiable, and so on. </p> <p>You can specify <i>source</i> filter to retrieve parameters of only specific type. For example, to retrieve parameters that were modified by a user action such as from <a>ModifyClusterParameterGroup</a>, you can specify <i>source</i> equal to <i>user</i>.</p> <p> For more information about managing parameter groups, go to <a href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-parameter-groups.html">Amazon Redshift Parameter Groups</a> in the <i>Amazon Redshift Cluster Management Guide</i>. </p>
     */
     Model::DescribeClusterParametersOutcome DescribeClusterParameters(const Model::DescribeClusterParametersRequest& request) const;

     /*
       <p> Returns a detailed list of parameters contained within the specified Amazon Redshift parameter group. For each parameter the response includes information such as parameter name, description, data type, value, whether the parameter value is modifiable, and so on. </p> <p>You can specify <i>source</i> filter to retrieve parameters of only specific type. For example, to retrieve parameters that were modified by a user action such as from <a>ModifyClusterParameterGroup</a>, you can specify <i>source</i> equal to <i>user</i>.</p> <p> For more information about managing parameter groups, go to <a href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-parameter-groups.html">Amazon Redshift Parameter Groups</a> in the <i>Amazon Redshift Cluster Management Guide</i>. </p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DescribeClusterParametersOutcomeCallable DescribeClusterParametersCallable(const Model::DescribeClusterParametersRequest& request) const;

     /*
       <p> Returns a detailed list of parameters contained within the specified Amazon Redshift parameter group. For each parameter the response includes information such as parameter name, description, data type, value, whether the parameter value is modifiable, and so on. </p> <p>You can specify <i>source</i> filter to retrieve parameters of only specific type. For example, to retrieve parameters that were modified by a user action such as from <a>ModifyClusterParameterGroup</a>, you can specify <i>source</i> equal to <i>user</i>.</p> <p> For more information about managing parameter groups, go to <a href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-parameter-groups.html">Amazon Redshift Parameter Groups</a> in the <i>Amazon Redshift Cluster Management Guide</i>. </p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DescribeClusterParametersAsync(const Model::DescribeClusterParametersRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p> Returns information about Amazon Redshift security groups. If the name of a security group is specified, the response will contain only information about only that security group. </p> <p> For information about managing security groups, go to <a href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-security-groups.html">Amazon Redshift Cluster Security Groups</a> in the <i>Amazon Redshift Cluster Management Guide</i>. </p> <p>If you specify both tag keys and tag values in the same request, Amazon Redshift returns all security groups that match any combination of the specified keys and values. For example, if you have <code>owner</code> and <code>environment</code> for tag keys, and <code>admin</code> and <code>test</code> for tag values, all security groups that have any combination of those values are returned.</p> <p>If both tag keys and values are omitted from the request, security groups are returned regardless of whether they have tag keys or values associated with them.</p>
     */
     Model::DescribeClusterSecurityGroupsOutcome DescribeClusterSecurityGroups(const Model::DescribeClusterSecurityGroupsRequest& request) const;

     /*
       <p> Returns information about Amazon Redshift security groups. If the name of a security group is specified, the response will contain only information about only that security group. </p> <p> For information about managing security groups, go to <a href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-security-groups.html">Amazon Redshift Cluster Security Groups</a> in the <i>Amazon Redshift Cluster Management Guide</i>. </p> <p>If you specify both tag keys and tag values in the same request, Amazon Redshift returns all security groups that match any combination of the specified keys and values. For example, if you have <code>owner</code> and <code>environment</code> for tag keys, and <code>admin</code> and <code>test</code> for tag values, all security groups that have any combination of those values are returned.</p> <p>If both tag keys and values are omitted from the request, security groups are returned regardless of whether they have tag keys or values associated with them.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DescribeClusterSecurityGroupsOutcomeCallable DescribeClusterSecurityGroupsCallable(const Model::DescribeClusterSecurityGroupsRequest& request) const;

     /*
       <p> Returns information about Amazon Redshift security groups. If the name of a security group is specified, the response will contain only information about only that security group. </p> <p> For information about managing security groups, go to <a href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-security-groups.html">Amazon Redshift Cluster Security Groups</a> in the <i>Amazon Redshift Cluster Management Guide</i>. </p> <p>If you specify both tag keys and tag values in the same request, Amazon Redshift returns all security groups that match any combination of the specified keys and values. For example, if you have <code>owner</code> and <code>environment</code> for tag keys, and <code>admin</code> and <code>test</code> for tag values, all security groups that have any combination of those values are returned.</p> <p>If both tag keys and values are omitted from the request, security groups are returned regardless of whether they have tag keys or values associated with them.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DescribeClusterSecurityGroupsAsync(const Model::DescribeClusterSecurityGroupsRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p> Returns one or more snapshot objects, which contain metadata about your cluster snapshots. By default, this operation returns information about all snapshots of all clusters that are owned by you AWS customer account. No information is returned for snapshots owned by inactive AWS customer accounts. </p> <p>If you specify both tag keys and tag values in the same request, Amazon Redshift returns all snapshots that match any combination of the specified keys and values. For example, if you have <code>owner</code> and <code>environment</code> for tag keys, and <code>admin</code> and <code>test</code> for tag values, all snapshots that have any combination of those values are returned. Only snapshots that you own are returned in the response; shared snapshots are not returned with the tag key and tag value request parameters.</p> <p>If both tag keys and values are omitted from the request, snapshots are returned regardless of whether they have tag keys or values associated with them.</p>
     */
     Model::DescribeClusterSnapshotsOutcome DescribeClusterSnapshots(const Model::DescribeClusterSnapshotsRequest& request) const;

     /*
       <p> Returns one or more snapshot objects, which contain metadata about your cluster snapshots. By default, this operation returns information about all snapshots of all clusters that are owned by you AWS customer account. No information is returned for snapshots owned by inactive AWS customer accounts. </p> <p>If you specify both tag keys and tag values in the same request, Amazon Redshift returns all snapshots that match any combination of the specified keys and values. For example, if you have <code>owner</code> and <code>environment</code> for tag keys, and <code>admin</code> and <code>test</code> for tag values, all snapshots that have any combination of those values are returned. Only snapshots that you own are returned in the response; shared snapshots are not returned with the tag key and tag value request parameters.</p> <p>If both tag keys and values are omitted from the request, snapshots are returned regardless of whether they have tag keys or values associated with them.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DescribeClusterSnapshotsOutcomeCallable DescribeClusterSnapshotsCallable(const Model::DescribeClusterSnapshotsRequest& request) const;

     /*
       <p> Returns one or more snapshot objects, which contain metadata about your cluster snapshots. By default, this operation returns information about all snapshots of all clusters that are owned by you AWS customer account. No information is returned for snapshots owned by inactive AWS customer accounts. </p> <p>If you specify both tag keys and tag values in the same request, Amazon Redshift returns all snapshots that match any combination of the specified keys and values. For example, if you have <code>owner</code> and <code>environment</code> for tag keys, and <code>admin</code> and <code>test</code> for tag values, all snapshots that have any combination of those values are returned. Only snapshots that you own are returned in the response; shared snapshots are not returned with the tag key and tag value request parameters.</p> <p>If both tag keys and values are omitted from the request, snapshots are returned regardless of whether they have tag keys or values associated with them.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DescribeClusterSnapshotsAsync(const Model::DescribeClusterSnapshotsRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p> Returns one or more cluster subnet group objects, which contain metadata about your cluster subnet groups. By default, this operation returns information about all cluster subnet groups that are defined in you AWS account. </p> <p>If you specify both tag keys and tag values in the same request, Amazon Redshift returns all subnet groups that match any combination of the specified keys and values. For example, if you have <code>owner</code> and <code>environment</code> for tag keys, and <code>admin</code> and <code>test</code> for tag values, all subnet groups that have any combination of those values are returned.</p> <p>If both tag keys and values are omitted from the request, subnet groups are returned regardless of whether they have tag keys or values associated with them.</p>
     */
     Model::DescribeClusterSubnetGroupsOutcome DescribeClusterSubnetGroups(const Model::DescribeClusterSubnetGroupsRequest& request) const;

     /*
       <p> Returns one or more cluster subnet group objects, which contain metadata about your cluster subnet groups. By default, this operation returns information about all cluster subnet groups that are defined in you AWS account. </p> <p>If you specify both tag keys and tag values in the same request, Amazon Redshift returns all subnet groups that match any combination of the specified keys and values. For example, if you have <code>owner</code> and <code>environment</code> for tag keys, and <code>admin</code> and <code>test</code> for tag values, all subnet groups that have any combination of those values are returned.</p> <p>If both tag keys and values are omitted from the request, subnet groups are returned regardless of whether they have tag keys or values associated with them.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DescribeClusterSubnetGroupsOutcomeCallable DescribeClusterSubnetGroupsCallable(const Model::DescribeClusterSubnetGroupsRequest& request) const;

     /*
       <p> Returns one or more cluster subnet group objects, which contain metadata about your cluster subnet groups. By default, this operation returns information about all cluster subnet groups that are defined in you AWS account. </p> <p>If you specify both tag keys and tag values in the same request, Amazon Redshift returns all subnet groups that match any combination of the specified keys and values. For example, if you have <code>owner</code> and <code>environment</code> for tag keys, and <code>admin</code> and <code>test</code> for tag values, all subnet groups that have any combination of those values are returned.</p> <p>If both tag keys and values are omitted from the request, subnet groups are returned regardless of whether they have tag keys or values associated with them.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DescribeClusterSubnetGroupsAsync(const Model::DescribeClusterSubnetGroupsRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p> Returns descriptions of the available Amazon Redshift cluster versions. You can call this operation even before creating any clusters to learn more about the Amazon Redshift versions. For more information about managing clusters, go to <a href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-clusters.html">Amazon Redshift Clusters</a> in the <i>Amazon Redshift Cluster Management Guide</i> </p>
     */
     Model::DescribeClusterVersionsOutcome DescribeClusterVersions(const Model::DescribeClusterVersionsRequest& request) const;

     /*
       <p> Returns descriptions of the available Amazon Redshift cluster versions. You can call this operation even before creating any clusters to learn more about the Amazon Redshift versions. For more information about managing clusters, go to <a href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-clusters.html">Amazon Redshift Clusters</a> in the <i>Amazon Redshift Cluster Management Guide</i> </p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DescribeClusterVersionsOutcomeCallable DescribeClusterVersionsCallable(const Model::DescribeClusterVersionsRequest& request) const;

     /*
       <p> Returns descriptions of the available Amazon Redshift cluster versions. You can call this operation even before creating any clusters to learn more about the Amazon Redshift versions. For more information about managing clusters, go to <a href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-clusters.html">Amazon Redshift Clusters</a> in the <i>Amazon Redshift Cluster Management Guide</i> </p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DescribeClusterVersionsAsync(const Model::DescribeClusterVersionsRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p> Returns properties of provisioned clusters including general cluster properties, cluster database properties, maintenance and backup properties, and security and access properties. This operation supports pagination. For more information about managing clusters, go to <a href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-clusters.html">Amazon Redshift Clusters</a> in the <i>Amazon Redshift Cluster Management Guide</i> . </p> <p>If you specify both tag keys and tag values in the same request, Amazon Redshift returns all clusters that match any combination of the specified keys and values. For example, if you have <code>owner</code> and <code>environment</code> for tag keys, and <code>admin</code> and <code>test</code> for tag values, all clusters that have any combination of those values are returned.</p> <p>If both tag keys and values are omitted from the request, clusters are returned regardless of whether they have tag keys or values associated with them.</p>
     */
     Model::DescribeClustersOutcome DescribeClusters(const Model::DescribeClustersRequest& request) const;

     /*
       <p> Returns properties of provisioned clusters including general cluster properties, cluster database properties, maintenance and backup properties, and security and access properties. This operation supports pagination. For more information about managing clusters, go to <a href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-clusters.html">Amazon Redshift Clusters</a> in the <i>Amazon Redshift Cluster Management Guide</i> . </p> <p>If you specify both tag keys and tag values in the same request, Amazon Redshift returns all clusters that match any combination of the specified keys and values. For example, if you have <code>owner</code> and <code>environment</code> for tag keys, and <code>admin</code> and <code>test</code> for tag values, all clusters that have any combination of those values are returned.</p> <p>If both tag keys and values are omitted from the request, clusters are returned regardless of whether they have tag keys or values associated with them.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DescribeClustersOutcomeCallable DescribeClustersCallable(const Model::DescribeClustersRequest& request) const;

     /*
       <p> Returns properties of provisioned clusters including general cluster properties, cluster database properties, maintenance and backup properties, and security and access properties. This operation supports pagination. For more information about managing clusters, go to <a href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-clusters.html">Amazon Redshift Clusters</a> in the <i>Amazon Redshift Cluster Management Guide</i> . </p> <p>If you specify both tag keys and tag values in the same request, Amazon Redshift returns all clusters that match any combination of the specified keys and values. For example, if you have <code>owner</code> and <code>environment</code> for tag keys, and <code>admin</code> and <code>test</code> for tag values, all clusters that have any combination of those values are returned.</p> <p>If both tag keys and values are omitted from the request, clusters are returned regardless of whether they have tag keys or values associated with them.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DescribeClustersAsync(const Model::DescribeClustersRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p> Returns a list of parameter settings for the specified parameter group family. </p> <p> For more information about managing parameter groups, go to <a href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-parameter-groups.html">Amazon Redshift Parameter Groups</a> in the <i>Amazon Redshift Cluster Management Guide</i>. </p>
     */
     Model::DescribeDefaultClusterParametersOutcome DescribeDefaultClusterParameters(const Model::DescribeDefaultClusterParametersRequest& request) const;

     /*
       <p> Returns a list of parameter settings for the specified parameter group family. </p> <p> For more information about managing parameter groups, go to <a href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-parameter-groups.html">Amazon Redshift Parameter Groups</a> in the <i>Amazon Redshift Cluster Management Guide</i>. </p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DescribeDefaultClusterParametersOutcomeCallable DescribeDefaultClusterParametersCallable(const Model::DescribeDefaultClusterParametersRequest& request) const;

     /*
       <p> Returns a list of parameter settings for the specified parameter group family. </p> <p> For more information about managing parameter groups, go to <a href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-parameter-groups.html">Amazon Redshift Parameter Groups</a> in the <i>Amazon Redshift Cluster Management Guide</i>. </p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DescribeDefaultClusterParametersAsync(const Model::DescribeDefaultClusterParametersRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Displays a list of event categories for all event source types, or for a specified source type. For a list of the event categories and source types, go to <a href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-event-notifications.html">Amazon Redshift Event Notifications</a>.</p>
     */
     Model::DescribeEventCategoriesOutcome DescribeEventCategories(const Model::DescribeEventCategoriesRequest& request) const;

     /*
       <p>Displays a list of event categories for all event source types, or for a specified source type. For a list of the event categories and source types, go to <a href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-event-notifications.html">Amazon Redshift Event Notifications</a>.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DescribeEventCategoriesOutcomeCallable DescribeEventCategoriesCallable(const Model::DescribeEventCategoriesRequest& request) const;

     /*
       <p>Displays a list of event categories for all event source types, or for a specified source type. For a list of the event categories and source types, go to <a href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-event-notifications.html">Amazon Redshift Event Notifications</a>.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DescribeEventCategoriesAsync(const Model::DescribeEventCategoriesRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p> Lists descriptions of all the Amazon Redshift event notifications subscription for a customer account. If you specify a subscription name, lists the description for that subscription. </p>
     */
     Model::DescribeEventSubscriptionsOutcome DescribeEventSubscriptions(const Model::DescribeEventSubscriptionsRequest& request) const;

     /*
       <p> Lists descriptions of all the Amazon Redshift event notifications subscription for a customer account. If you specify a subscription name, lists the description for that subscription. </p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DescribeEventSubscriptionsOutcomeCallable DescribeEventSubscriptionsCallable(const Model::DescribeEventSubscriptionsRequest& request) const;

     /*
       <p> Lists descriptions of all the Amazon Redshift event notifications subscription for a customer account. If you specify a subscription name, lists the description for that subscription. </p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DescribeEventSubscriptionsAsync(const Model::DescribeEventSubscriptionsRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p> Returns events related to clusters, security groups, snapshots, and parameter groups for the past 14 days. Events specific to a particular cluster, security group, snapshot or parameter group can be obtained by providing the name as a parameter. By default, the past hour of events are returned. </p>
     */
     Model::DescribeEventsOutcome DescribeEvents(const Model::DescribeEventsRequest& request) const;

     /*
       <p> Returns events related to clusters, security groups, snapshots, and parameter groups for the past 14 days. Events specific to a particular cluster, security group, snapshot or parameter group can be obtained by providing the name as a parameter. By default, the past hour of events are returned. </p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DescribeEventsOutcomeCallable DescribeEventsCallable(const Model::DescribeEventsRequest& request) const;

     /*
       <p> Returns events related to clusters, security groups, snapshots, and parameter groups for the past 14 days. Events specific to a particular cluster, security group, snapshot or parameter group can be obtained by providing the name as a parameter. By default, the past hour of events are returned. </p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DescribeEventsAsync(const Model::DescribeEventsRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Returns information about the specified HSM client certificate. If no certificate ID is specified, returns information about all the HSM certificates owned by your AWS customer account.</p> <p>If you specify both tag keys and tag values in the same request, Amazon Redshift returns all HSM client certificates that match any combination of the specified keys and values. For example, if you have <code>owner</code> and <code>environment</code> for tag keys, and <code>admin</code> and <code>test</code> for tag values, all HSM client certificates that have any combination of those values are returned.</p> <p>If both tag keys and values are omitted from the request, HSM client certificates are returned regardless of whether they have tag keys or values associated with them.</p>
     */
     Model::DescribeHsmClientCertificatesOutcome DescribeHsmClientCertificates(const Model::DescribeHsmClientCertificatesRequest& request) const;

     /*
       <p>Returns information about the specified HSM client certificate. If no certificate ID is specified, returns information about all the HSM certificates owned by your AWS customer account.</p> <p>If you specify both tag keys and tag values in the same request, Amazon Redshift returns all HSM client certificates that match any combination of the specified keys and values. For example, if you have <code>owner</code> and <code>environment</code> for tag keys, and <code>admin</code> and <code>test</code> for tag values, all HSM client certificates that have any combination of those values are returned.</p> <p>If both tag keys and values are omitted from the request, HSM client certificates are returned regardless of whether they have tag keys or values associated with them.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DescribeHsmClientCertificatesOutcomeCallable DescribeHsmClientCertificatesCallable(const Model::DescribeHsmClientCertificatesRequest& request) const;

     /*
       <p>Returns information about the specified HSM client certificate. If no certificate ID is specified, returns information about all the HSM certificates owned by your AWS customer account.</p> <p>If you specify both tag keys and tag values in the same request, Amazon Redshift returns all HSM client certificates that match any combination of the specified keys and values. For example, if you have <code>owner</code> and <code>environment</code> for tag keys, and <code>admin</code> and <code>test</code> for tag values, all HSM client certificates that have any combination of those values are returned.</p> <p>If both tag keys and values are omitted from the request, HSM client certificates are returned regardless of whether they have tag keys or values associated with them.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DescribeHsmClientCertificatesAsync(const Model::DescribeHsmClientCertificatesRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Returns information about the specified Amazon Redshift HSM configuration. If no configuration ID is specified, returns information about all the HSM configurations owned by your AWS customer account.</p> <p>If you specify both tag keys and tag values in the same request, Amazon Redshift returns all HSM connections that match any combination of the specified keys and values. For example, if you have <code>owner</code> and <code>environment</code> for tag keys, and <code>admin</code> and <code>test</code> for tag values, all HSM connections that have any combination of those values are returned.</p> <p>If both tag keys and values are omitted from the request, HSM connections are returned regardless of whether they have tag keys or values associated with them.</p>
     */
     Model::DescribeHsmConfigurationsOutcome DescribeHsmConfigurations(const Model::DescribeHsmConfigurationsRequest& request) const;

     /*
       <p>Returns information about the specified Amazon Redshift HSM configuration. If no configuration ID is specified, returns information about all the HSM configurations owned by your AWS customer account.</p> <p>If you specify both tag keys and tag values in the same request, Amazon Redshift returns all HSM connections that match any combination of the specified keys and values. For example, if you have <code>owner</code> and <code>environment</code> for tag keys, and <code>admin</code> and <code>test</code> for tag values, all HSM connections that have any combination of those values are returned.</p> <p>If both tag keys and values are omitted from the request, HSM connections are returned regardless of whether they have tag keys or values associated with them.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DescribeHsmConfigurationsOutcomeCallable DescribeHsmConfigurationsCallable(const Model::DescribeHsmConfigurationsRequest& request) const;

     /*
       <p>Returns information about the specified Amazon Redshift HSM configuration. If no configuration ID is specified, returns information about all the HSM configurations owned by your AWS customer account.</p> <p>If you specify both tag keys and tag values in the same request, Amazon Redshift returns all HSM connections that match any combination of the specified keys and values. For example, if you have <code>owner</code> and <code>environment</code> for tag keys, and <code>admin</code> and <code>test</code> for tag values, all HSM connections that have any combination of those values are returned.</p> <p>If both tag keys and values are omitted from the request, HSM connections are returned regardless of whether they have tag keys or values associated with them.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DescribeHsmConfigurationsAsync(const Model::DescribeHsmConfigurationsRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Describes whether information, such as queries and connection attempts, is being logged for the specified Amazon Redshift cluster.</p>
     */
     Model::DescribeLoggingStatusOutcome DescribeLoggingStatus(const Model::DescribeLoggingStatusRequest& request) const;

     /*
       <p>Describes whether information, such as queries and connection attempts, is being logged for the specified Amazon Redshift cluster.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DescribeLoggingStatusOutcomeCallable DescribeLoggingStatusCallable(const Model::DescribeLoggingStatusRequest& request) const;

     /*
       <p>Describes whether information, such as queries and connection attempts, is being logged for the specified Amazon Redshift cluster.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DescribeLoggingStatusAsync(const Model::DescribeLoggingStatusRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p> Returns a list of orderable cluster options. Before you create a new cluster you can use this operation to find what options are available, such as the EC2 Availability Zones (AZ) in the specific AWS region that you can specify, and the node types you can request. The node types differ by available storage, memory, CPU and price. With the cost involved you might want to obtain a list of cluster options in the specific region and specify values when creating a cluster. For more information about managing clusters, go to <a href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-clusters.html">Amazon Redshift Clusters</a> in the <i>Amazon Redshift Cluster Management Guide</i> </p>
     */
     Model::DescribeOrderableClusterOptionsOutcome DescribeOrderableClusterOptions(const Model::DescribeOrderableClusterOptionsRequest& request) const;

     /*
       <p> Returns a list of orderable cluster options. Before you create a new cluster you can use this operation to find what options are available, such as the EC2 Availability Zones (AZ) in the specific AWS region that you can specify, and the node types you can request. The node types differ by available storage, memory, CPU and price. With the cost involved you might want to obtain a list of cluster options in the specific region and specify values when creating a cluster. For more information about managing clusters, go to <a href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-clusters.html">Amazon Redshift Clusters</a> in the <i>Amazon Redshift Cluster Management Guide</i> </p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DescribeOrderableClusterOptionsOutcomeCallable DescribeOrderableClusterOptionsCallable(const Model::DescribeOrderableClusterOptionsRequest& request) const;

     /*
       <p> Returns a list of orderable cluster options. Before you create a new cluster you can use this operation to find what options are available, such as the EC2 Availability Zones (AZ) in the specific AWS region that you can specify, and the node types you can request. The node types differ by available storage, memory, CPU and price. With the cost involved you might want to obtain a list of cluster options in the specific region and specify values when creating a cluster. For more information about managing clusters, go to <a href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-clusters.html">Amazon Redshift Clusters</a> in the <i>Amazon Redshift Cluster Management Guide</i> </p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DescribeOrderableClusterOptionsAsync(const Model::DescribeOrderableClusterOptionsRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p> Returns a list of the available reserved node offerings by Amazon Redshift with their descriptions including the node type, the fixed and recurring costs of reserving the node and duration the node will be reserved for you. These descriptions help you determine which reserve node offering you want to purchase. You then use the unique offering ID in you call to <a>PurchaseReservedNodeOffering</a> to reserve one or more nodes for your Amazon Redshift cluster. </p> <p> For more information about managing parameter groups, go to <a href="http://docs.aws.amazon.com/redshift/latest/mgmt/purchase-reserved-node-instance.html">Purchasing Reserved Nodes</a> in the <i>Amazon Redshift Cluster Management Guide</i>. </p>
     */
     Model::DescribeReservedNodeOfferingsOutcome DescribeReservedNodeOfferings(const Model::DescribeReservedNodeOfferingsRequest& request) const;

     /*
       <p> Returns a list of the available reserved node offerings by Amazon Redshift with their descriptions including the node type, the fixed and recurring costs of reserving the node and duration the node will be reserved for you. These descriptions help you determine which reserve node offering you want to purchase. You then use the unique offering ID in you call to <a>PurchaseReservedNodeOffering</a> to reserve one or more nodes for your Amazon Redshift cluster. </p> <p> For more information about managing parameter groups, go to <a href="http://docs.aws.amazon.com/redshift/latest/mgmt/purchase-reserved-node-instance.html">Purchasing Reserved Nodes</a> in the <i>Amazon Redshift Cluster Management Guide</i>. </p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DescribeReservedNodeOfferingsOutcomeCallable DescribeReservedNodeOfferingsCallable(const Model::DescribeReservedNodeOfferingsRequest& request) const;

     /*
       <p> Returns a list of the available reserved node offerings by Amazon Redshift with their descriptions including the node type, the fixed and recurring costs of reserving the node and duration the node will be reserved for you. These descriptions help you determine which reserve node offering you want to purchase. You then use the unique offering ID in you call to <a>PurchaseReservedNodeOffering</a> to reserve one or more nodes for your Amazon Redshift cluster. </p> <p> For more information about managing parameter groups, go to <a href="http://docs.aws.amazon.com/redshift/latest/mgmt/purchase-reserved-node-instance.html">Purchasing Reserved Nodes</a> in the <i>Amazon Redshift Cluster Management Guide</i>. </p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DescribeReservedNodeOfferingsAsync(const Model::DescribeReservedNodeOfferingsRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p> Returns the descriptions of the reserved nodes. </p>
     */
     Model::DescribeReservedNodesOutcome DescribeReservedNodes(const Model::DescribeReservedNodesRequest& request) const;

     /*
       <p> Returns the descriptions of the reserved nodes. </p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DescribeReservedNodesOutcomeCallable DescribeReservedNodesCallable(const Model::DescribeReservedNodesRequest& request) const;

     /*
       <p> Returns the descriptions of the reserved nodes. </p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DescribeReservedNodesAsync(const Model::DescribeReservedNodesRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p> Returns information about the last resize operation for the specified cluster. If no resize operation has ever been initiated for the specified cluster, a <code>HTTP 404</code> error is returned. If a resize operation was initiated and completed, the status of the resize remains as <code>SUCCEEDED</code> until the next resize. </p> <p> A resize operation can be requested using <a>ModifyCluster</a> and specifying a different number or type of nodes for the cluster. </p>
     */
     Model::DescribeResizeOutcome DescribeResize(const Model::DescribeResizeRequest& request) const;

     /*
       <p> Returns information about the last resize operation for the specified cluster. If no resize operation has ever been initiated for the specified cluster, a <code>HTTP 404</code> error is returned. If a resize operation was initiated and completed, the status of the resize remains as <code>SUCCEEDED</code> until the next resize. </p> <p> A resize operation can be requested using <a>ModifyCluster</a> and specifying a different number or type of nodes for the cluster. </p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DescribeResizeOutcomeCallable DescribeResizeCallable(const Model::DescribeResizeRequest& request) const;

     /*
       <p> Returns information about the last resize operation for the specified cluster. If no resize operation has ever been initiated for the specified cluster, a <code>HTTP 404</code> error is returned. If a resize operation was initiated and completed, the status of the resize remains as <code>SUCCEEDED</code> until the next resize. </p> <p> A resize operation can be requested using <a>ModifyCluster</a> and specifying a different number or type of nodes for the cluster. </p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DescribeResizeAsync(const Model::DescribeResizeRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p> Returns a list of tags. You can return tags from a specific resource by specifying an ARN, or you can return all tags for a given type of resource, such as clusters, snapshots, and so on.</p> <p> The following are limitations for <code>DescribeTags</code>: <ul> <li>You cannot specify an ARN and a resource-type value together in the same request.</li> <li>You cannot use the <code>MaxRecords</code> and <code>Marker</code> parameters together with the ARN parameter.</li> <li>The <code>MaxRecords</code> parameter can be a range from 10 to 50 results to return in a request.</li> </ul> </p> <p>If you specify both tag keys and tag values in the same request, Amazon Redshift returns all resources that match any combination of the specified keys and values. For example, if you have <code>owner</code> and <code>environment</code> for tag keys, and <code>admin</code> and <code>test</code> for tag values, all resources that have any combination of those values are returned.</p> <p>If both tag keys and values are omitted from the request, resources are returned regardless of whether they have tag keys or values associated with them.</p>
     */
     Model::DescribeTagsOutcome DescribeTags(const Model::DescribeTagsRequest& request) const;

     /*
       <p> Returns a list of tags. You can return tags from a specific resource by specifying an ARN, or you can return all tags for a given type of resource, such as clusters, snapshots, and so on.</p> <p> The following are limitations for <code>DescribeTags</code>: <ul> <li>You cannot specify an ARN and a resource-type value together in the same request.</li> <li>You cannot use the <code>MaxRecords</code> and <code>Marker</code> parameters together with the ARN parameter.</li> <li>The <code>MaxRecords</code> parameter can be a range from 10 to 50 results to return in a request.</li> </ul> </p> <p>If you specify both tag keys and tag values in the same request, Amazon Redshift returns all resources that match any combination of the specified keys and values. For example, if you have <code>owner</code> and <code>environment</code> for tag keys, and <code>admin</code> and <code>test</code> for tag values, all resources that have any combination of those values are returned.</p> <p>If both tag keys and values are omitted from the request, resources are returned regardless of whether they have tag keys or values associated with them.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DescribeTagsOutcomeCallable DescribeTagsCallable(const Model::DescribeTagsRequest& request) const;

     /*
       <p> Returns a list of tags. You can return tags from a specific resource by specifying an ARN, or you can return all tags for a given type of resource, such as clusters, snapshots, and so on.</p> <p> The following are limitations for <code>DescribeTags</code>: <ul> <li>You cannot specify an ARN and a resource-type value together in the same request.</li> <li>You cannot use the <code>MaxRecords</code> and <code>Marker</code> parameters together with the ARN parameter.</li> <li>The <code>MaxRecords</code> parameter can be a range from 10 to 50 results to return in a request.</li> </ul> </p> <p>If you specify both tag keys and tag values in the same request, Amazon Redshift returns all resources that match any combination of the specified keys and values. For example, if you have <code>owner</code> and <code>environment</code> for tag keys, and <code>admin</code> and <code>test</code> for tag values, all resources that have any combination of those values are returned.</p> <p>If both tag keys and values are omitted from the request, resources are returned regardless of whether they have tag keys or values associated with them.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DescribeTagsAsync(const Model::DescribeTagsRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Stops logging information, such as queries and connection attempts, for the specified Amazon Redshift cluster.</p>
     */
     Model::DisableLoggingOutcome DisableLogging(const Model::DisableLoggingRequest& request) const;

     /*
       <p>Stops logging information, such as queries and connection attempts, for the specified Amazon Redshift cluster.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DisableLoggingOutcomeCallable DisableLoggingCallable(const Model::DisableLoggingRequest& request) const;

     /*
       <p>Stops logging information, such as queries and connection attempts, for the specified Amazon Redshift cluster.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DisableLoggingAsync(const Model::DisableLoggingRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Disables the automatic copying of snapshots from one region to another region for a specified cluster.</p>
     */
     Model::DisableSnapshotCopyOutcome DisableSnapshotCopy(const Model::DisableSnapshotCopyRequest& request) const;

     /*
       <p>Disables the automatic copying of snapshots from one region to another region for a specified cluster.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DisableSnapshotCopyOutcomeCallable DisableSnapshotCopyCallable(const Model::DisableSnapshotCopyRequest& request) const;

     /*
       <p>Disables the automatic copying of snapshots from one region to another region for a specified cluster.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DisableSnapshotCopyAsync(const Model::DisableSnapshotCopyRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Starts logging information, such as queries and connection attempts, for the specified Amazon Redshift cluster.</p>
     */
     Model::EnableLoggingOutcome EnableLogging(const Model::EnableLoggingRequest& request) const;

     /*
       <p>Starts logging information, such as queries and connection attempts, for the specified Amazon Redshift cluster.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::EnableLoggingOutcomeCallable EnableLoggingCallable(const Model::EnableLoggingRequest& request) const;

     /*
       <p>Starts logging information, such as queries and connection attempts, for the specified Amazon Redshift cluster.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void EnableLoggingAsync(const Model::EnableLoggingRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Enables the automatic copy of snapshots from one region to another region for a specified cluster.</p>
     */
     Model::EnableSnapshotCopyOutcome EnableSnapshotCopy(const Model::EnableSnapshotCopyRequest& request) const;

     /*
       <p>Enables the automatic copy of snapshots from one region to another region for a specified cluster.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::EnableSnapshotCopyOutcomeCallable EnableSnapshotCopyCallable(const Model::EnableSnapshotCopyRequest& request) const;

     /*
       <p>Enables the automatic copy of snapshots from one region to another region for a specified cluster.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void EnableSnapshotCopyAsync(const Model::EnableSnapshotCopyRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p> Modifies the settings for a cluster. For example, you can add another security or parameter group, update the preferred maintenance window, or change the master user password. Resetting a cluster password or modifying the security groups associated with a cluster do not need a reboot. However, modifying a parameter group requires a reboot for parameters to take effect. For more information about managing clusters, go to <a href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-clusters.html">Amazon Redshift Clusters</a> in the <i>Amazon Redshift Cluster Management Guide</i> . </p> <p>You can also change node type and the number of nodes to scale up or down the cluster. When resizing a cluster, you must specify both the number of nodes and the node type even if one of the parameters does not change.</p>
     */
     Model::ModifyClusterOutcome ModifyCluster(const Model::ModifyClusterRequest& request) const;

     /*
       <p> Modifies the settings for a cluster. For example, you can add another security or parameter group, update the preferred maintenance window, or change the master user password. Resetting a cluster password or modifying the security groups associated with a cluster do not need a reboot. However, modifying a parameter group requires a reboot for parameters to take effect. For more information about managing clusters, go to <a href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-clusters.html">Amazon Redshift Clusters</a> in the <i>Amazon Redshift Cluster Management Guide</i> . </p> <p>You can also change node type and the number of nodes to scale up or down the cluster. When resizing a cluster, you must specify both the number of nodes and the node type even if one of the parameters does not change.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::ModifyClusterOutcomeCallable ModifyClusterCallable(const Model::ModifyClusterRequest& request) const;

     /*
       <p> Modifies the settings for a cluster. For example, you can add another security or parameter group, update the preferred maintenance window, or change the master user password. Resetting a cluster password or modifying the security groups associated with a cluster do not need a reboot. However, modifying a parameter group requires a reboot for parameters to take effect. For more information about managing clusters, go to <a href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-clusters.html">Amazon Redshift Clusters</a> in the <i>Amazon Redshift Cluster Management Guide</i> . </p> <p>You can also change node type and the number of nodes to scale up or down the cluster. When resizing a cluster, you must specify both the number of nodes and the node type even if one of the parameters does not change.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void ModifyClusterAsync(const Model::ModifyClusterRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p> Modifies the parameters of a parameter group. </p> <p> For more information about managing parameter groups, go to <a href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-parameter-groups.html">Amazon Redshift Parameter Groups</a> in the <i>Amazon Redshift Cluster Management Guide</i>. </p>
     */
     Model::ModifyClusterParameterGroupOutcome ModifyClusterParameterGroup(const Model::ModifyClusterParameterGroupRequest& request) const;

     /*
       <p> Modifies the parameters of a parameter group. </p> <p> For more information about managing parameter groups, go to <a href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-parameter-groups.html">Amazon Redshift Parameter Groups</a> in the <i>Amazon Redshift Cluster Management Guide</i>. </p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::ModifyClusterParameterGroupOutcomeCallable ModifyClusterParameterGroupCallable(const Model::ModifyClusterParameterGroupRequest& request) const;

     /*
       <p> Modifies the parameters of a parameter group. </p> <p> For more information about managing parameter groups, go to <a href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-parameter-groups.html">Amazon Redshift Parameter Groups</a> in the <i>Amazon Redshift Cluster Management Guide</i>. </p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void ModifyClusterParameterGroupAsync(const Model::ModifyClusterParameterGroupRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p> Modifies a cluster subnet group to include the specified list of VPC subnets. The operation replaces the existing list of subnets with the new list of subnets. </p>
     */
     Model::ModifyClusterSubnetGroupOutcome ModifyClusterSubnetGroup(const Model::ModifyClusterSubnetGroupRequest& request) const;

     /*
       <p> Modifies a cluster subnet group to include the specified list of VPC subnets. The operation replaces the existing list of subnets with the new list of subnets. </p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::ModifyClusterSubnetGroupOutcomeCallable ModifyClusterSubnetGroupCallable(const Model::ModifyClusterSubnetGroupRequest& request) const;

     /*
       <p> Modifies a cluster subnet group to include the specified list of VPC subnets. The operation replaces the existing list of subnets with the new list of subnets. </p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void ModifyClusterSubnetGroupAsync(const Model::ModifyClusterSubnetGroupRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p> Modifies an existing Amazon Redshift event notification subscription. </p>
     */
     Model::ModifyEventSubscriptionOutcome ModifyEventSubscription(const Model::ModifyEventSubscriptionRequest& request) const;

     /*
       <p> Modifies an existing Amazon Redshift event notification subscription. </p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::ModifyEventSubscriptionOutcomeCallable ModifyEventSubscriptionCallable(const Model::ModifyEventSubscriptionRequest& request) const;

     /*
       <p> Modifies an existing Amazon Redshift event notification subscription. </p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void ModifyEventSubscriptionAsync(const Model::ModifyEventSubscriptionRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p> Modifies the number of days to retain automated snapshots in the destination region after they are copied from the source region. </p>
     */
     Model::ModifySnapshotCopyRetentionPeriodOutcome ModifySnapshotCopyRetentionPeriod(const Model::ModifySnapshotCopyRetentionPeriodRequest& request) const;

     /*
       <p> Modifies the number of days to retain automated snapshots in the destination region after they are copied from the source region. </p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::ModifySnapshotCopyRetentionPeriodOutcomeCallable ModifySnapshotCopyRetentionPeriodCallable(const Model::ModifySnapshotCopyRetentionPeriodRequest& request) const;

     /*
       <p> Modifies the number of days to retain automated snapshots in the destination region after they are copied from the source region. </p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void ModifySnapshotCopyRetentionPeriodAsync(const Model::ModifySnapshotCopyRetentionPeriodRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p> Allows you to purchase reserved nodes. Amazon Redshift offers a predefined set of reserved node offerings. You can purchase one of the offerings. You can call the <a>DescribeReservedNodeOfferings</a> API to obtain the available reserved node offerings. You can call this API by providing a specific reserved node offering and the number of nodes you want to reserve. </p> <p> For more information about managing parameter groups, go to <a href="http://docs.aws.amazon.com/redshift/latest/mgmt/purchase-reserved-node-instance.html">Purchasing Reserved Nodes</a> in the <i>Amazon Redshift Cluster Management Guide</i>. </p>
     */
     Model::PurchaseReservedNodeOfferingOutcome PurchaseReservedNodeOffering(const Model::PurchaseReservedNodeOfferingRequest& request) const;

     /*
       <p> Allows you to purchase reserved nodes. Amazon Redshift offers a predefined set of reserved node offerings. You can purchase one of the offerings. You can call the <a>DescribeReservedNodeOfferings</a> API to obtain the available reserved node offerings. You can call this API by providing a specific reserved node offering and the number of nodes you want to reserve. </p> <p> For more information about managing parameter groups, go to <a href="http://docs.aws.amazon.com/redshift/latest/mgmt/purchase-reserved-node-instance.html">Purchasing Reserved Nodes</a> in the <i>Amazon Redshift Cluster Management Guide</i>. </p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::PurchaseReservedNodeOfferingOutcomeCallable PurchaseReservedNodeOfferingCallable(const Model::PurchaseReservedNodeOfferingRequest& request) const;

     /*
       <p> Allows you to purchase reserved nodes. Amazon Redshift offers a predefined set of reserved node offerings. You can purchase one of the offerings. You can call the <a>DescribeReservedNodeOfferings</a> API to obtain the available reserved node offerings. You can call this API by providing a specific reserved node offering and the number of nodes you want to reserve. </p> <p> For more information about managing parameter groups, go to <a href="http://docs.aws.amazon.com/redshift/latest/mgmt/purchase-reserved-node-instance.html">Purchasing Reserved Nodes</a> in the <i>Amazon Redshift Cluster Management Guide</i>. </p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void PurchaseReservedNodeOfferingAsync(const Model::PurchaseReservedNodeOfferingRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p> Reboots a cluster. This action is taken as soon as possible. It results in a momentary outage to the cluster, during which the cluster status is set to <code>rebooting</code>. A cluster event is created when the reboot is completed. Any pending cluster modifications (see <a>ModifyCluster</a>) are applied at this reboot. For more information about managing clusters, go to <a href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-clusters.html">Amazon Redshift Clusters</a> in the <i>Amazon Redshift Cluster Management Guide</i> </p>
     */
     Model::RebootClusterOutcome RebootCluster(const Model::RebootClusterRequest& request) const;

     /*
       <p> Reboots a cluster. This action is taken as soon as possible. It results in a momentary outage to the cluster, during which the cluster status is set to <code>rebooting</code>. A cluster event is created when the reboot is completed. Any pending cluster modifications (see <a>ModifyCluster</a>) are applied at this reboot. For more information about managing clusters, go to <a href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-clusters.html">Amazon Redshift Clusters</a> in the <i>Amazon Redshift Cluster Management Guide</i> </p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::RebootClusterOutcomeCallable RebootClusterCallable(const Model::RebootClusterRequest& request) const;

     /*
       <p> Reboots a cluster. This action is taken as soon as possible. It results in a momentary outage to the cluster, during which the cluster status is set to <code>rebooting</code>. A cluster event is created when the reboot is completed. Any pending cluster modifications (see <a>ModifyCluster</a>) are applied at this reboot. For more information about managing clusters, go to <a href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-clusters.html">Amazon Redshift Clusters</a> in the <i>Amazon Redshift Cluster Management Guide</i> </p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void RebootClusterAsync(const Model::RebootClusterRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p> Sets one or more parameters of the specified parameter group to their default values and sets the source values of the parameters to "engine-default". To reset the entire parameter group specify the <i>ResetAllParameters</i> parameter. For parameter changes to take effect you must reboot any associated clusters. </p>
     */
     Model::ResetClusterParameterGroupOutcome ResetClusterParameterGroup(const Model::ResetClusterParameterGroupRequest& request) const;

     /*
       <p> Sets one or more parameters of the specified parameter group to their default values and sets the source values of the parameters to "engine-default". To reset the entire parameter group specify the <i>ResetAllParameters</i> parameter. For parameter changes to take effect you must reboot any associated clusters. </p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::ResetClusterParameterGroupOutcomeCallable ResetClusterParameterGroupCallable(const Model::ResetClusterParameterGroupRequest& request) const;

     /*
       <p> Sets one or more parameters of the specified parameter group to their default values and sets the source values of the parameters to "engine-default". To reset the entire parameter group specify the <i>ResetAllParameters</i> parameter. For parameter changes to take effect you must reboot any associated clusters. </p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void ResetClusterParameterGroupAsync(const Model::ResetClusterParameterGroupRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p> Creates a new cluster from a snapshot. Amazon Redshift creates the resulting cluster with the same configuration as the original cluster from which the snapshot was created, except that the new cluster is created with the default cluster security and parameter group. After Amazon Redshift creates the cluster you can use the <a>ModifyCluster</a> API to associate a different security group and different parameter group with the restored cluster. </p> <p> If you restore a cluster into a VPC, you must provide a cluster subnet group where you want the cluster restored. </p> <p> For more information about working with snapshots, go to <a href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-snapshots.html">Amazon Redshift Snapshots</a> in the <i>Amazon Redshift Cluster Management Guide</i>. </p>
     */
     Model::RestoreFromClusterSnapshotOutcome RestoreFromClusterSnapshot(const Model::RestoreFromClusterSnapshotRequest& request) const;

     /*
       <p> Creates a new cluster from a snapshot. Amazon Redshift creates the resulting cluster with the same configuration as the original cluster from which the snapshot was created, except that the new cluster is created with the default cluster security and parameter group. After Amazon Redshift creates the cluster you can use the <a>ModifyCluster</a> API to associate a different security group and different parameter group with the restored cluster. </p> <p> If you restore a cluster into a VPC, you must provide a cluster subnet group where you want the cluster restored. </p> <p> For more information about working with snapshots, go to <a href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-snapshots.html">Amazon Redshift Snapshots</a> in the <i>Amazon Redshift Cluster Management Guide</i>. </p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::RestoreFromClusterSnapshotOutcomeCallable RestoreFromClusterSnapshotCallable(const Model::RestoreFromClusterSnapshotRequest& request) const;

     /*
       <p> Creates a new cluster from a snapshot. Amazon Redshift creates the resulting cluster with the same configuration as the original cluster from which the snapshot was created, except that the new cluster is created with the default cluster security and parameter group. After Amazon Redshift creates the cluster you can use the <a>ModifyCluster</a> API to associate a different security group and different parameter group with the restored cluster. </p> <p> If you restore a cluster into a VPC, you must provide a cluster subnet group where you want the cluster restored. </p> <p> For more information about working with snapshots, go to <a href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-snapshots.html">Amazon Redshift Snapshots</a> in the <i>Amazon Redshift Cluster Management Guide</i>. </p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void RestoreFromClusterSnapshotAsync(const Model::RestoreFromClusterSnapshotRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p> Revokes an ingress rule in an Amazon Redshift security group for a previously authorized IP range or Amazon EC2 security group. To add an ingress rule, see <a>AuthorizeClusterSecurityGroupIngress</a>. For information about managing security groups, go to <a href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-security-groups.html">Amazon Redshift Cluster Security Groups</a> in the <i>Amazon Redshift Cluster Management Guide</i>. </p>
     */
     Model::RevokeClusterSecurityGroupIngressOutcome RevokeClusterSecurityGroupIngress(const Model::RevokeClusterSecurityGroupIngressRequest& request) const;

     /*
       <p> Revokes an ingress rule in an Amazon Redshift security group for a previously authorized IP range or Amazon EC2 security group. To add an ingress rule, see <a>AuthorizeClusterSecurityGroupIngress</a>. For information about managing security groups, go to <a href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-security-groups.html">Amazon Redshift Cluster Security Groups</a> in the <i>Amazon Redshift Cluster Management Guide</i>. </p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::RevokeClusterSecurityGroupIngressOutcomeCallable RevokeClusterSecurityGroupIngressCallable(const Model::RevokeClusterSecurityGroupIngressRequest& request) const;

     /*
       <p> Revokes an ingress rule in an Amazon Redshift security group for a previously authorized IP range or Amazon EC2 security group. To add an ingress rule, see <a>AuthorizeClusterSecurityGroupIngress</a>. For information about managing security groups, go to <a href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-security-groups.html">Amazon Redshift Cluster Security Groups</a> in the <i>Amazon Redshift Cluster Management Guide</i>. </p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void RevokeClusterSecurityGroupIngressAsync(const Model::RevokeClusterSecurityGroupIngressRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p> Removes the ability of the specified AWS customer account to restore the specified snapshot. If the account is currently restoring the snapshot, the restore will run to completion. </p> <p> For more information about working with snapshots, go to <a href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-snapshots.html">Amazon Redshift Snapshots</a> in the <i>Amazon Redshift Cluster Management Guide</i>. </p>
     */
     Model::RevokeSnapshotAccessOutcome RevokeSnapshotAccess(const Model::RevokeSnapshotAccessRequest& request) const;

     /*
       <p> Removes the ability of the specified AWS customer account to restore the specified snapshot. If the account is currently restoring the snapshot, the restore will run to completion. </p> <p> For more information about working with snapshots, go to <a href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-snapshots.html">Amazon Redshift Snapshots</a> in the <i>Amazon Redshift Cluster Management Guide</i>. </p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::RevokeSnapshotAccessOutcomeCallable RevokeSnapshotAccessCallable(const Model::RevokeSnapshotAccessRequest& request) const;

     /*
       <p> Removes the ability of the specified AWS customer account to restore the specified snapshot. If the account is currently restoring the snapshot, the restore will run to completion. </p> <p> For more information about working with snapshots, go to <a href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-snapshots.html">Amazon Redshift Snapshots</a> in the <i>Amazon Redshift Cluster Management Guide</i>. </p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void RevokeSnapshotAccessAsync(const Model::RevokeSnapshotAccessRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p> Rotates the encryption keys for a cluster. </p>
     */
     Model::RotateEncryptionKeyOutcome RotateEncryptionKey(const Model::RotateEncryptionKeyRequest& request) const;

     /*
       <p> Rotates the encryption keys for a cluster. </p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::RotateEncryptionKeyOutcomeCallable RotateEncryptionKeyCallable(const Model::RotateEncryptionKeyRequest& request) const;

     /*
       <p> Rotates the encryption keys for a cluster. </p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void RotateEncryptionKeyAsync(const Model::RotateEncryptionKeyRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

   /**
    * Adds an event handler for AuthorizeClusterSecurityGroupIngressAsync to call upon completion to the handler chain. You need to call this to
    * use AuthorizeClusterSecurityGroupIngressAsync.
    */
    inline void RegisterAuthorizeClusterSecurityGroupIngressOutcomeReceivedHandler(const AuthorizeClusterSecurityGroupIngressOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onAuthorizeClusterSecurityGroupIngressOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for AuthorizeClusterSecurityGroupIngress.
    */
    inline void ClearAllAuthorizeClusterSecurityGroupIngressOutcomeReceivedHandlers()
    {
      m_onAuthorizeClusterSecurityGroupIngressOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for AuthorizeSnapshotAccessAsync to call upon completion to the handler chain. You need to call this to
    * use AuthorizeSnapshotAccessAsync.
    */
    inline void RegisterAuthorizeSnapshotAccessOutcomeReceivedHandler(const AuthorizeSnapshotAccessOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onAuthorizeSnapshotAccessOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for AuthorizeSnapshotAccess.
    */
    inline void ClearAllAuthorizeSnapshotAccessOutcomeReceivedHandlers()
    {
      m_onAuthorizeSnapshotAccessOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for CopyClusterSnapshotAsync to call upon completion to the handler chain. You need to call this to
    * use CopyClusterSnapshotAsync.
    */
    inline void RegisterCopyClusterSnapshotOutcomeReceivedHandler(const CopyClusterSnapshotOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onCopyClusterSnapshotOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for CopyClusterSnapshot.
    */
    inline void ClearAllCopyClusterSnapshotOutcomeReceivedHandlers()
    {
      m_onCopyClusterSnapshotOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for CreateClusterAsync to call upon completion to the handler chain. You need to call this to
    * use CreateClusterAsync.
    */
    inline void RegisterCreateClusterOutcomeReceivedHandler(const CreateClusterOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onCreateClusterOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for CreateCluster.
    */
    inline void ClearAllCreateClusterOutcomeReceivedHandlers()
    {
      m_onCreateClusterOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for CreateClusterParameterGroupAsync to call upon completion to the handler chain. You need to call this to
    * use CreateClusterParameterGroupAsync.
    */
    inline void RegisterCreateClusterParameterGroupOutcomeReceivedHandler(const CreateClusterParameterGroupOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onCreateClusterParameterGroupOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for CreateClusterParameterGroup.
    */
    inline void ClearAllCreateClusterParameterGroupOutcomeReceivedHandlers()
    {
      m_onCreateClusterParameterGroupOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for CreateClusterSecurityGroupAsync to call upon completion to the handler chain. You need to call this to
    * use CreateClusterSecurityGroupAsync.
    */
    inline void RegisterCreateClusterSecurityGroupOutcomeReceivedHandler(const CreateClusterSecurityGroupOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onCreateClusterSecurityGroupOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for CreateClusterSecurityGroup.
    */
    inline void ClearAllCreateClusterSecurityGroupOutcomeReceivedHandlers()
    {
      m_onCreateClusterSecurityGroupOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for CreateClusterSnapshotAsync to call upon completion to the handler chain. You need to call this to
    * use CreateClusterSnapshotAsync.
    */
    inline void RegisterCreateClusterSnapshotOutcomeReceivedHandler(const CreateClusterSnapshotOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onCreateClusterSnapshotOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for CreateClusterSnapshot.
    */
    inline void ClearAllCreateClusterSnapshotOutcomeReceivedHandlers()
    {
      m_onCreateClusterSnapshotOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for CreateClusterSubnetGroupAsync to call upon completion to the handler chain. You need to call this to
    * use CreateClusterSubnetGroupAsync.
    */
    inline void RegisterCreateClusterSubnetGroupOutcomeReceivedHandler(const CreateClusterSubnetGroupOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onCreateClusterSubnetGroupOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for CreateClusterSubnetGroup.
    */
    inline void ClearAllCreateClusterSubnetGroupOutcomeReceivedHandlers()
    {
      m_onCreateClusterSubnetGroupOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for CreateEventSubscriptionAsync to call upon completion to the handler chain. You need to call this to
    * use CreateEventSubscriptionAsync.
    */
    inline void RegisterCreateEventSubscriptionOutcomeReceivedHandler(const CreateEventSubscriptionOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onCreateEventSubscriptionOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for CreateEventSubscription.
    */
    inline void ClearAllCreateEventSubscriptionOutcomeReceivedHandlers()
    {
      m_onCreateEventSubscriptionOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for CreateHsmClientCertificateAsync to call upon completion to the handler chain. You need to call this to
    * use CreateHsmClientCertificateAsync.
    */
    inline void RegisterCreateHsmClientCertificateOutcomeReceivedHandler(const CreateHsmClientCertificateOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onCreateHsmClientCertificateOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for CreateHsmClientCertificate.
    */
    inline void ClearAllCreateHsmClientCertificateOutcomeReceivedHandlers()
    {
      m_onCreateHsmClientCertificateOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for CreateHsmConfigurationAsync to call upon completion to the handler chain. You need to call this to
    * use CreateHsmConfigurationAsync.
    */
    inline void RegisterCreateHsmConfigurationOutcomeReceivedHandler(const CreateHsmConfigurationOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onCreateHsmConfigurationOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for CreateHsmConfiguration.
    */
    inline void ClearAllCreateHsmConfigurationOutcomeReceivedHandlers()
    {
      m_onCreateHsmConfigurationOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for CreateTagsAsync to call upon completion to the handler chain. You need to call this to
    * use CreateTagsAsync.
    */
    inline void RegisterCreateTagsOutcomeReceivedHandler(const CreateTagsOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onCreateTagsOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for CreateTags.
    */
    inline void ClearAllCreateTagsOutcomeReceivedHandlers()
    {
      m_onCreateTagsOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DeleteClusterAsync to call upon completion to the handler chain. You need to call this to
    * use DeleteClusterAsync.
    */
    inline void RegisterDeleteClusterOutcomeReceivedHandler(const DeleteClusterOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDeleteClusterOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DeleteCluster.
    */
    inline void ClearAllDeleteClusterOutcomeReceivedHandlers()
    {
      m_onDeleteClusterOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DeleteClusterParameterGroupAsync to call upon completion to the handler chain. You need to call this to
    * use DeleteClusterParameterGroupAsync.
    */
    inline void RegisterDeleteClusterParameterGroupOutcomeReceivedHandler(const DeleteClusterParameterGroupOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDeleteClusterParameterGroupOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DeleteClusterParameterGroup.
    */
    inline void ClearAllDeleteClusterParameterGroupOutcomeReceivedHandlers()
    {
      m_onDeleteClusterParameterGroupOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DeleteClusterSecurityGroupAsync to call upon completion to the handler chain. You need to call this to
    * use DeleteClusterSecurityGroupAsync.
    */
    inline void RegisterDeleteClusterSecurityGroupOutcomeReceivedHandler(const DeleteClusterSecurityGroupOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDeleteClusterSecurityGroupOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DeleteClusterSecurityGroup.
    */
    inline void ClearAllDeleteClusterSecurityGroupOutcomeReceivedHandlers()
    {
      m_onDeleteClusterSecurityGroupOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DeleteClusterSnapshotAsync to call upon completion to the handler chain. You need to call this to
    * use DeleteClusterSnapshotAsync.
    */
    inline void RegisterDeleteClusterSnapshotOutcomeReceivedHandler(const DeleteClusterSnapshotOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDeleteClusterSnapshotOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DeleteClusterSnapshot.
    */
    inline void ClearAllDeleteClusterSnapshotOutcomeReceivedHandlers()
    {
      m_onDeleteClusterSnapshotOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DeleteClusterSubnetGroupAsync to call upon completion to the handler chain. You need to call this to
    * use DeleteClusterSubnetGroupAsync.
    */
    inline void RegisterDeleteClusterSubnetGroupOutcomeReceivedHandler(const DeleteClusterSubnetGroupOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDeleteClusterSubnetGroupOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DeleteClusterSubnetGroup.
    */
    inline void ClearAllDeleteClusterSubnetGroupOutcomeReceivedHandlers()
    {
      m_onDeleteClusterSubnetGroupOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DeleteEventSubscriptionAsync to call upon completion to the handler chain. You need to call this to
    * use DeleteEventSubscriptionAsync.
    */
    inline void RegisterDeleteEventSubscriptionOutcomeReceivedHandler(const DeleteEventSubscriptionOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDeleteEventSubscriptionOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DeleteEventSubscription.
    */
    inline void ClearAllDeleteEventSubscriptionOutcomeReceivedHandlers()
    {
      m_onDeleteEventSubscriptionOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DeleteHsmClientCertificateAsync to call upon completion to the handler chain. You need to call this to
    * use DeleteHsmClientCertificateAsync.
    */
    inline void RegisterDeleteHsmClientCertificateOutcomeReceivedHandler(const DeleteHsmClientCertificateOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDeleteHsmClientCertificateOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DeleteHsmClientCertificate.
    */
    inline void ClearAllDeleteHsmClientCertificateOutcomeReceivedHandlers()
    {
      m_onDeleteHsmClientCertificateOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DeleteHsmConfigurationAsync to call upon completion to the handler chain. You need to call this to
    * use DeleteHsmConfigurationAsync.
    */
    inline void RegisterDeleteHsmConfigurationOutcomeReceivedHandler(const DeleteHsmConfigurationOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDeleteHsmConfigurationOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DeleteHsmConfiguration.
    */
    inline void ClearAllDeleteHsmConfigurationOutcomeReceivedHandlers()
    {
      m_onDeleteHsmConfigurationOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DeleteTagsAsync to call upon completion to the handler chain. You need to call this to
    * use DeleteTagsAsync.
    */
    inline void RegisterDeleteTagsOutcomeReceivedHandler(const DeleteTagsOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDeleteTagsOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DeleteTags.
    */
    inline void ClearAllDeleteTagsOutcomeReceivedHandlers()
    {
      m_onDeleteTagsOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DescribeClusterParameterGroupsAsync to call upon completion to the handler chain. You need to call this to
    * use DescribeClusterParameterGroupsAsync.
    */
    inline void RegisterDescribeClusterParameterGroupsOutcomeReceivedHandler(const DescribeClusterParameterGroupsOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDescribeClusterParameterGroupsOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DescribeClusterParameterGroups.
    */
    inline void ClearAllDescribeClusterParameterGroupsOutcomeReceivedHandlers()
    {
      m_onDescribeClusterParameterGroupsOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DescribeClusterParametersAsync to call upon completion to the handler chain. You need to call this to
    * use DescribeClusterParametersAsync.
    */
    inline void RegisterDescribeClusterParametersOutcomeReceivedHandler(const DescribeClusterParametersOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDescribeClusterParametersOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DescribeClusterParameters.
    */
    inline void ClearAllDescribeClusterParametersOutcomeReceivedHandlers()
    {
      m_onDescribeClusterParametersOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DescribeClusterSecurityGroupsAsync to call upon completion to the handler chain. You need to call this to
    * use DescribeClusterSecurityGroupsAsync.
    */
    inline void RegisterDescribeClusterSecurityGroupsOutcomeReceivedHandler(const DescribeClusterSecurityGroupsOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDescribeClusterSecurityGroupsOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DescribeClusterSecurityGroups.
    */
    inline void ClearAllDescribeClusterSecurityGroupsOutcomeReceivedHandlers()
    {
      m_onDescribeClusterSecurityGroupsOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DescribeClusterSnapshotsAsync to call upon completion to the handler chain. You need to call this to
    * use DescribeClusterSnapshotsAsync.
    */
    inline void RegisterDescribeClusterSnapshotsOutcomeReceivedHandler(const DescribeClusterSnapshotsOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDescribeClusterSnapshotsOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DescribeClusterSnapshots.
    */
    inline void ClearAllDescribeClusterSnapshotsOutcomeReceivedHandlers()
    {
      m_onDescribeClusterSnapshotsOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DescribeClusterSubnetGroupsAsync to call upon completion to the handler chain. You need to call this to
    * use DescribeClusterSubnetGroupsAsync.
    */
    inline void RegisterDescribeClusterSubnetGroupsOutcomeReceivedHandler(const DescribeClusterSubnetGroupsOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDescribeClusterSubnetGroupsOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DescribeClusterSubnetGroups.
    */
    inline void ClearAllDescribeClusterSubnetGroupsOutcomeReceivedHandlers()
    {
      m_onDescribeClusterSubnetGroupsOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DescribeClusterVersionsAsync to call upon completion to the handler chain. You need to call this to
    * use DescribeClusterVersionsAsync.
    */
    inline void RegisterDescribeClusterVersionsOutcomeReceivedHandler(const DescribeClusterVersionsOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDescribeClusterVersionsOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DescribeClusterVersions.
    */
    inline void ClearAllDescribeClusterVersionsOutcomeReceivedHandlers()
    {
      m_onDescribeClusterVersionsOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DescribeClustersAsync to call upon completion to the handler chain. You need to call this to
    * use DescribeClustersAsync.
    */
    inline void RegisterDescribeClustersOutcomeReceivedHandler(const DescribeClustersOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDescribeClustersOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DescribeClusters.
    */
    inline void ClearAllDescribeClustersOutcomeReceivedHandlers()
    {
      m_onDescribeClustersOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DescribeDefaultClusterParametersAsync to call upon completion to the handler chain. You need to call this to
    * use DescribeDefaultClusterParametersAsync.
    */
    inline void RegisterDescribeDefaultClusterParametersOutcomeReceivedHandler(const DescribeDefaultClusterParametersOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDescribeDefaultClusterParametersOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DescribeDefaultClusterParameters.
    */
    inline void ClearAllDescribeDefaultClusterParametersOutcomeReceivedHandlers()
    {
      m_onDescribeDefaultClusterParametersOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DescribeEventCategoriesAsync to call upon completion to the handler chain. You need to call this to
    * use DescribeEventCategoriesAsync.
    */
    inline void RegisterDescribeEventCategoriesOutcomeReceivedHandler(const DescribeEventCategoriesOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDescribeEventCategoriesOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DescribeEventCategories.
    */
    inline void ClearAllDescribeEventCategoriesOutcomeReceivedHandlers()
    {
      m_onDescribeEventCategoriesOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DescribeEventSubscriptionsAsync to call upon completion to the handler chain. You need to call this to
    * use DescribeEventSubscriptionsAsync.
    */
    inline void RegisterDescribeEventSubscriptionsOutcomeReceivedHandler(const DescribeEventSubscriptionsOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDescribeEventSubscriptionsOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DescribeEventSubscriptions.
    */
    inline void ClearAllDescribeEventSubscriptionsOutcomeReceivedHandlers()
    {
      m_onDescribeEventSubscriptionsOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DescribeEventsAsync to call upon completion to the handler chain. You need to call this to
    * use DescribeEventsAsync.
    */
    inline void RegisterDescribeEventsOutcomeReceivedHandler(const DescribeEventsOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDescribeEventsOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DescribeEvents.
    */
    inline void ClearAllDescribeEventsOutcomeReceivedHandlers()
    {
      m_onDescribeEventsOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DescribeHsmClientCertificatesAsync to call upon completion to the handler chain. You need to call this to
    * use DescribeHsmClientCertificatesAsync.
    */
    inline void RegisterDescribeHsmClientCertificatesOutcomeReceivedHandler(const DescribeHsmClientCertificatesOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDescribeHsmClientCertificatesOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DescribeHsmClientCertificates.
    */
    inline void ClearAllDescribeHsmClientCertificatesOutcomeReceivedHandlers()
    {
      m_onDescribeHsmClientCertificatesOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DescribeHsmConfigurationsAsync to call upon completion to the handler chain. You need to call this to
    * use DescribeHsmConfigurationsAsync.
    */
    inline void RegisterDescribeHsmConfigurationsOutcomeReceivedHandler(const DescribeHsmConfigurationsOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDescribeHsmConfigurationsOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DescribeHsmConfigurations.
    */
    inline void ClearAllDescribeHsmConfigurationsOutcomeReceivedHandlers()
    {
      m_onDescribeHsmConfigurationsOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DescribeLoggingStatusAsync to call upon completion to the handler chain. You need to call this to
    * use DescribeLoggingStatusAsync.
    */
    inline void RegisterDescribeLoggingStatusOutcomeReceivedHandler(const DescribeLoggingStatusOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDescribeLoggingStatusOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DescribeLoggingStatus.
    */
    inline void ClearAllDescribeLoggingStatusOutcomeReceivedHandlers()
    {
      m_onDescribeLoggingStatusOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DescribeOrderableClusterOptionsAsync to call upon completion to the handler chain. You need to call this to
    * use DescribeOrderableClusterOptionsAsync.
    */
    inline void RegisterDescribeOrderableClusterOptionsOutcomeReceivedHandler(const DescribeOrderableClusterOptionsOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDescribeOrderableClusterOptionsOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DescribeOrderableClusterOptions.
    */
    inline void ClearAllDescribeOrderableClusterOptionsOutcomeReceivedHandlers()
    {
      m_onDescribeOrderableClusterOptionsOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DescribeReservedNodeOfferingsAsync to call upon completion to the handler chain. You need to call this to
    * use DescribeReservedNodeOfferingsAsync.
    */
    inline void RegisterDescribeReservedNodeOfferingsOutcomeReceivedHandler(const DescribeReservedNodeOfferingsOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDescribeReservedNodeOfferingsOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DescribeReservedNodeOfferings.
    */
    inline void ClearAllDescribeReservedNodeOfferingsOutcomeReceivedHandlers()
    {
      m_onDescribeReservedNodeOfferingsOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DescribeReservedNodesAsync to call upon completion to the handler chain. You need to call this to
    * use DescribeReservedNodesAsync.
    */
    inline void RegisterDescribeReservedNodesOutcomeReceivedHandler(const DescribeReservedNodesOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDescribeReservedNodesOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DescribeReservedNodes.
    */
    inline void ClearAllDescribeReservedNodesOutcomeReceivedHandlers()
    {
      m_onDescribeReservedNodesOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DescribeResizeAsync to call upon completion to the handler chain. You need to call this to
    * use DescribeResizeAsync.
    */
    inline void RegisterDescribeResizeOutcomeReceivedHandler(const DescribeResizeOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDescribeResizeOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DescribeResize.
    */
    inline void ClearAllDescribeResizeOutcomeReceivedHandlers()
    {
      m_onDescribeResizeOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DescribeTagsAsync to call upon completion to the handler chain. You need to call this to
    * use DescribeTagsAsync.
    */
    inline void RegisterDescribeTagsOutcomeReceivedHandler(const DescribeTagsOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDescribeTagsOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DescribeTags.
    */
    inline void ClearAllDescribeTagsOutcomeReceivedHandlers()
    {
      m_onDescribeTagsOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DisableLoggingAsync to call upon completion to the handler chain. You need to call this to
    * use DisableLoggingAsync.
    */
    inline void RegisterDisableLoggingOutcomeReceivedHandler(const DisableLoggingOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDisableLoggingOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DisableLogging.
    */
    inline void ClearAllDisableLoggingOutcomeReceivedHandlers()
    {
      m_onDisableLoggingOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DisableSnapshotCopyAsync to call upon completion to the handler chain. You need to call this to
    * use DisableSnapshotCopyAsync.
    */
    inline void RegisterDisableSnapshotCopyOutcomeReceivedHandler(const DisableSnapshotCopyOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDisableSnapshotCopyOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DisableSnapshotCopy.
    */
    inline void ClearAllDisableSnapshotCopyOutcomeReceivedHandlers()
    {
      m_onDisableSnapshotCopyOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for EnableLoggingAsync to call upon completion to the handler chain. You need to call this to
    * use EnableLoggingAsync.
    */
    inline void RegisterEnableLoggingOutcomeReceivedHandler(const EnableLoggingOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onEnableLoggingOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for EnableLogging.
    */
    inline void ClearAllEnableLoggingOutcomeReceivedHandlers()
    {
      m_onEnableLoggingOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for EnableSnapshotCopyAsync to call upon completion to the handler chain. You need to call this to
    * use EnableSnapshotCopyAsync.
    */
    inline void RegisterEnableSnapshotCopyOutcomeReceivedHandler(const EnableSnapshotCopyOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onEnableSnapshotCopyOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for EnableSnapshotCopy.
    */
    inline void ClearAllEnableSnapshotCopyOutcomeReceivedHandlers()
    {
      m_onEnableSnapshotCopyOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for ModifyClusterAsync to call upon completion to the handler chain. You need to call this to
    * use ModifyClusterAsync.
    */
    inline void RegisterModifyClusterOutcomeReceivedHandler(const ModifyClusterOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onModifyClusterOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for ModifyCluster.
    */
    inline void ClearAllModifyClusterOutcomeReceivedHandlers()
    {
      m_onModifyClusterOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for ModifyClusterParameterGroupAsync to call upon completion to the handler chain. You need to call this to
    * use ModifyClusterParameterGroupAsync.
    */
    inline void RegisterModifyClusterParameterGroupOutcomeReceivedHandler(const ModifyClusterParameterGroupOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onModifyClusterParameterGroupOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for ModifyClusterParameterGroup.
    */
    inline void ClearAllModifyClusterParameterGroupOutcomeReceivedHandlers()
    {
      m_onModifyClusterParameterGroupOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for ModifyClusterSubnetGroupAsync to call upon completion to the handler chain. You need to call this to
    * use ModifyClusterSubnetGroupAsync.
    */
    inline void RegisterModifyClusterSubnetGroupOutcomeReceivedHandler(const ModifyClusterSubnetGroupOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onModifyClusterSubnetGroupOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for ModifyClusterSubnetGroup.
    */
    inline void ClearAllModifyClusterSubnetGroupOutcomeReceivedHandlers()
    {
      m_onModifyClusterSubnetGroupOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for ModifyEventSubscriptionAsync to call upon completion to the handler chain. You need to call this to
    * use ModifyEventSubscriptionAsync.
    */
    inline void RegisterModifyEventSubscriptionOutcomeReceivedHandler(const ModifyEventSubscriptionOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onModifyEventSubscriptionOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for ModifyEventSubscription.
    */
    inline void ClearAllModifyEventSubscriptionOutcomeReceivedHandlers()
    {
      m_onModifyEventSubscriptionOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for ModifySnapshotCopyRetentionPeriodAsync to call upon completion to the handler chain. You need to call this to
    * use ModifySnapshotCopyRetentionPeriodAsync.
    */
    inline void RegisterModifySnapshotCopyRetentionPeriodOutcomeReceivedHandler(const ModifySnapshotCopyRetentionPeriodOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onModifySnapshotCopyRetentionPeriodOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for ModifySnapshotCopyRetentionPeriod.
    */
    inline void ClearAllModifySnapshotCopyRetentionPeriodOutcomeReceivedHandlers()
    {
      m_onModifySnapshotCopyRetentionPeriodOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for PurchaseReservedNodeOfferingAsync to call upon completion to the handler chain. You need to call this to
    * use PurchaseReservedNodeOfferingAsync.
    */
    inline void RegisterPurchaseReservedNodeOfferingOutcomeReceivedHandler(const PurchaseReservedNodeOfferingOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onPurchaseReservedNodeOfferingOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for PurchaseReservedNodeOffering.
    */
    inline void ClearAllPurchaseReservedNodeOfferingOutcomeReceivedHandlers()
    {
      m_onPurchaseReservedNodeOfferingOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for RebootClusterAsync to call upon completion to the handler chain. You need to call this to
    * use RebootClusterAsync.
    */
    inline void RegisterRebootClusterOutcomeReceivedHandler(const RebootClusterOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onRebootClusterOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for RebootCluster.
    */
    inline void ClearAllRebootClusterOutcomeReceivedHandlers()
    {
      m_onRebootClusterOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for ResetClusterParameterGroupAsync to call upon completion to the handler chain. You need to call this to
    * use ResetClusterParameterGroupAsync.
    */
    inline void RegisterResetClusterParameterGroupOutcomeReceivedHandler(const ResetClusterParameterGroupOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onResetClusterParameterGroupOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for ResetClusterParameterGroup.
    */
    inline void ClearAllResetClusterParameterGroupOutcomeReceivedHandlers()
    {
      m_onResetClusterParameterGroupOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for RestoreFromClusterSnapshotAsync to call upon completion to the handler chain. You need to call this to
    * use RestoreFromClusterSnapshotAsync.
    */
    inline void RegisterRestoreFromClusterSnapshotOutcomeReceivedHandler(const RestoreFromClusterSnapshotOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onRestoreFromClusterSnapshotOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for RestoreFromClusterSnapshot.
    */
    inline void ClearAllRestoreFromClusterSnapshotOutcomeReceivedHandlers()
    {
      m_onRestoreFromClusterSnapshotOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for RevokeClusterSecurityGroupIngressAsync to call upon completion to the handler chain. You need to call this to
    * use RevokeClusterSecurityGroupIngressAsync.
    */
    inline void RegisterRevokeClusterSecurityGroupIngressOutcomeReceivedHandler(const RevokeClusterSecurityGroupIngressOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onRevokeClusterSecurityGroupIngressOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for RevokeClusterSecurityGroupIngress.
    */
    inline void ClearAllRevokeClusterSecurityGroupIngressOutcomeReceivedHandlers()
    {
      m_onRevokeClusterSecurityGroupIngressOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for RevokeSnapshotAccessAsync to call upon completion to the handler chain. You need to call this to
    * use RevokeSnapshotAccessAsync.
    */
    inline void RegisterRevokeSnapshotAccessOutcomeReceivedHandler(const RevokeSnapshotAccessOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onRevokeSnapshotAccessOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for RevokeSnapshotAccess.
    */
    inline void ClearAllRevokeSnapshotAccessOutcomeReceivedHandlers()
    {
      m_onRevokeSnapshotAccessOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for RotateEncryptionKeyAsync to call upon completion to the handler chain. You need to call this to
    * use RotateEncryptionKeyAsync.
    */
    inline void RegisterRotateEncryptionKeyOutcomeReceivedHandler(const RotateEncryptionKeyOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onRotateEncryptionKeyOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for RotateEncryptionKey.
    */
    inline void ClearAllRotateEncryptionKeyOutcomeReceivedHandlers()
    {
      m_onRotateEncryptionKeyOutcomeReceived.Clear();
    }

  private:
    void init(const Client::ClientConfiguration& clientConfiguration);

    /**Async helpers**/
    void AuthorizeClusterSecurityGroupIngressAsyncHelper(const Model::AuthorizeClusterSecurityGroupIngressRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void AuthorizeSnapshotAccessAsyncHelper(const Model::AuthorizeSnapshotAccessRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void CopyClusterSnapshotAsyncHelper(const Model::CopyClusterSnapshotRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void CreateClusterAsyncHelper(const Model::CreateClusterRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void CreateClusterParameterGroupAsyncHelper(const Model::CreateClusterParameterGroupRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void CreateClusterSecurityGroupAsyncHelper(const Model::CreateClusterSecurityGroupRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void CreateClusterSnapshotAsyncHelper(const Model::CreateClusterSnapshotRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void CreateClusterSubnetGroupAsyncHelper(const Model::CreateClusterSubnetGroupRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void CreateEventSubscriptionAsyncHelper(const Model::CreateEventSubscriptionRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void CreateHsmClientCertificateAsyncHelper(const Model::CreateHsmClientCertificateRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void CreateHsmConfigurationAsyncHelper(const Model::CreateHsmConfigurationRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void CreateTagsAsyncHelper(const Model::CreateTagsRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void DeleteClusterAsyncHelper(const Model::DeleteClusterRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void DeleteClusterParameterGroupAsyncHelper(const Model::DeleteClusterParameterGroupRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void DeleteClusterSecurityGroupAsyncHelper(const Model::DeleteClusterSecurityGroupRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void DeleteClusterSnapshotAsyncHelper(const Model::DeleteClusterSnapshotRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void DeleteClusterSubnetGroupAsyncHelper(const Model::DeleteClusterSubnetGroupRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void DeleteEventSubscriptionAsyncHelper(const Model::DeleteEventSubscriptionRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void DeleteHsmClientCertificateAsyncHelper(const Model::DeleteHsmClientCertificateRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void DeleteHsmConfigurationAsyncHelper(const Model::DeleteHsmConfigurationRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void DeleteTagsAsyncHelper(const Model::DeleteTagsRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void DescribeClusterParameterGroupsAsyncHelper(const Model::DescribeClusterParameterGroupsRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void DescribeClusterParametersAsyncHelper(const Model::DescribeClusterParametersRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void DescribeClusterSecurityGroupsAsyncHelper(const Model::DescribeClusterSecurityGroupsRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void DescribeClusterSnapshotsAsyncHelper(const Model::DescribeClusterSnapshotsRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void DescribeClusterSubnetGroupsAsyncHelper(const Model::DescribeClusterSubnetGroupsRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void DescribeClusterVersionsAsyncHelper(const Model::DescribeClusterVersionsRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void DescribeClustersAsyncHelper(const Model::DescribeClustersRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void DescribeDefaultClusterParametersAsyncHelper(const Model::DescribeDefaultClusterParametersRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void DescribeEventCategoriesAsyncHelper(const Model::DescribeEventCategoriesRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void DescribeEventSubscriptionsAsyncHelper(const Model::DescribeEventSubscriptionsRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void DescribeEventsAsyncHelper(const Model::DescribeEventsRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void DescribeHsmClientCertificatesAsyncHelper(const Model::DescribeHsmClientCertificatesRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void DescribeHsmConfigurationsAsyncHelper(const Model::DescribeHsmConfigurationsRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void DescribeLoggingStatusAsyncHelper(const Model::DescribeLoggingStatusRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void DescribeOrderableClusterOptionsAsyncHelper(const Model::DescribeOrderableClusterOptionsRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void DescribeReservedNodeOfferingsAsyncHelper(const Model::DescribeReservedNodeOfferingsRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void DescribeReservedNodesAsyncHelper(const Model::DescribeReservedNodesRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void DescribeResizeAsyncHelper(const Model::DescribeResizeRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void DescribeTagsAsyncHelper(const Model::DescribeTagsRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void DisableLoggingAsyncHelper(const Model::DisableLoggingRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void DisableSnapshotCopyAsyncHelper(const Model::DisableSnapshotCopyRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void EnableLoggingAsyncHelper(const Model::EnableLoggingRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void EnableSnapshotCopyAsyncHelper(const Model::EnableSnapshotCopyRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void ModifyClusterAsyncHelper(const Model::ModifyClusterRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void ModifyClusterParameterGroupAsyncHelper(const Model::ModifyClusterParameterGroupRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void ModifyClusterSubnetGroupAsyncHelper(const Model::ModifyClusterSubnetGroupRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void ModifyEventSubscriptionAsyncHelper(const Model::ModifyEventSubscriptionRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void ModifySnapshotCopyRetentionPeriodAsyncHelper(const Model::ModifySnapshotCopyRetentionPeriodRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void PurchaseReservedNodeOfferingAsyncHelper(const Model::PurchaseReservedNodeOfferingRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void RebootClusterAsyncHelper(const Model::RebootClusterRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void ResetClusterParameterGroupAsyncHelper(const Model::ResetClusterParameterGroupRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void RestoreFromClusterSnapshotAsyncHelper(const Model::RestoreFromClusterSnapshotRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void RevokeClusterSecurityGroupIngressAsyncHelper(const Model::RevokeClusterSecurityGroupIngressRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void RevokeSnapshotAccessAsyncHelper(const Model::RevokeSnapshotAccessRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void RotateEncryptionKeyAsyncHelper(const Model::RotateEncryptionKeyRequest& request, const Aws::Client::AsyncCallerContext* context) const;

    Aws::String m_uri;
    std::shared_ptr<Utils::Threading::Executor> m_executor;

    /** events **/
    AuthorizeClusterSecurityGroupIngressOutcomeReceivedEvent m_onAuthorizeClusterSecurityGroupIngressOutcomeReceived;
    AuthorizeSnapshotAccessOutcomeReceivedEvent m_onAuthorizeSnapshotAccessOutcomeReceived;
    CopyClusterSnapshotOutcomeReceivedEvent m_onCopyClusterSnapshotOutcomeReceived;
    CreateClusterOutcomeReceivedEvent m_onCreateClusterOutcomeReceived;
    CreateClusterParameterGroupOutcomeReceivedEvent m_onCreateClusterParameterGroupOutcomeReceived;
    CreateClusterSecurityGroupOutcomeReceivedEvent m_onCreateClusterSecurityGroupOutcomeReceived;
    CreateClusterSnapshotOutcomeReceivedEvent m_onCreateClusterSnapshotOutcomeReceived;
    CreateClusterSubnetGroupOutcomeReceivedEvent m_onCreateClusterSubnetGroupOutcomeReceived;
    CreateEventSubscriptionOutcomeReceivedEvent m_onCreateEventSubscriptionOutcomeReceived;
    CreateHsmClientCertificateOutcomeReceivedEvent m_onCreateHsmClientCertificateOutcomeReceived;
    CreateHsmConfigurationOutcomeReceivedEvent m_onCreateHsmConfigurationOutcomeReceived;
    CreateTagsOutcomeReceivedEvent m_onCreateTagsOutcomeReceived;
    DeleteClusterOutcomeReceivedEvent m_onDeleteClusterOutcomeReceived;
    DeleteClusterParameterGroupOutcomeReceivedEvent m_onDeleteClusterParameterGroupOutcomeReceived;
    DeleteClusterSecurityGroupOutcomeReceivedEvent m_onDeleteClusterSecurityGroupOutcomeReceived;
    DeleteClusterSnapshotOutcomeReceivedEvent m_onDeleteClusterSnapshotOutcomeReceived;
    DeleteClusterSubnetGroupOutcomeReceivedEvent m_onDeleteClusterSubnetGroupOutcomeReceived;
    DeleteEventSubscriptionOutcomeReceivedEvent m_onDeleteEventSubscriptionOutcomeReceived;
    DeleteHsmClientCertificateOutcomeReceivedEvent m_onDeleteHsmClientCertificateOutcomeReceived;
    DeleteHsmConfigurationOutcomeReceivedEvent m_onDeleteHsmConfigurationOutcomeReceived;
    DeleteTagsOutcomeReceivedEvent m_onDeleteTagsOutcomeReceived;
    DescribeClusterParameterGroupsOutcomeReceivedEvent m_onDescribeClusterParameterGroupsOutcomeReceived;
    DescribeClusterParametersOutcomeReceivedEvent m_onDescribeClusterParametersOutcomeReceived;
    DescribeClusterSecurityGroupsOutcomeReceivedEvent m_onDescribeClusterSecurityGroupsOutcomeReceived;
    DescribeClusterSnapshotsOutcomeReceivedEvent m_onDescribeClusterSnapshotsOutcomeReceived;
    DescribeClusterSubnetGroupsOutcomeReceivedEvent m_onDescribeClusterSubnetGroupsOutcomeReceived;
    DescribeClusterVersionsOutcomeReceivedEvent m_onDescribeClusterVersionsOutcomeReceived;
    DescribeClustersOutcomeReceivedEvent m_onDescribeClustersOutcomeReceived;
    DescribeDefaultClusterParametersOutcomeReceivedEvent m_onDescribeDefaultClusterParametersOutcomeReceived;
    DescribeEventCategoriesOutcomeReceivedEvent m_onDescribeEventCategoriesOutcomeReceived;
    DescribeEventSubscriptionsOutcomeReceivedEvent m_onDescribeEventSubscriptionsOutcomeReceived;
    DescribeEventsOutcomeReceivedEvent m_onDescribeEventsOutcomeReceived;
    DescribeHsmClientCertificatesOutcomeReceivedEvent m_onDescribeHsmClientCertificatesOutcomeReceived;
    DescribeHsmConfigurationsOutcomeReceivedEvent m_onDescribeHsmConfigurationsOutcomeReceived;
    DescribeLoggingStatusOutcomeReceivedEvent m_onDescribeLoggingStatusOutcomeReceived;
    DescribeOrderableClusterOptionsOutcomeReceivedEvent m_onDescribeOrderableClusterOptionsOutcomeReceived;
    DescribeReservedNodeOfferingsOutcomeReceivedEvent m_onDescribeReservedNodeOfferingsOutcomeReceived;
    DescribeReservedNodesOutcomeReceivedEvent m_onDescribeReservedNodesOutcomeReceived;
    DescribeResizeOutcomeReceivedEvent m_onDescribeResizeOutcomeReceived;
    DescribeTagsOutcomeReceivedEvent m_onDescribeTagsOutcomeReceived;
    DisableLoggingOutcomeReceivedEvent m_onDisableLoggingOutcomeReceived;
    DisableSnapshotCopyOutcomeReceivedEvent m_onDisableSnapshotCopyOutcomeReceived;
    EnableLoggingOutcomeReceivedEvent m_onEnableLoggingOutcomeReceived;
    EnableSnapshotCopyOutcomeReceivedEvent m_onEnableSnapshotCopyOutcomeReceived;
    ModifyClusterOutcomeReceivedEvent m_onModifyClusterOutcomeReceived;
    ModifyClusterParameterGroupOutcomeReceivedEvent m_onModifyClusterParameterGroupOutcomeReceived;
    ModifyClusterSubnetGroupOutcomeReceivedEvent m_onModifyClusterSubnetGroupOutcomeReceived;
    ModifyEventSubscriptionOutcomeReceivedEvent m_onModifyEventSubscriptionOutcomeReceived;
    ModifySnapshotCopyRetentionPeriodOutcomeReceivedEvent m_onModifySnapshotCopyRetentionPeriodOutcomeReceived;
    PurchaseReservedNodeOfferingOutcomeReceivedEvent m_onPurchaseReservedNodeOfferingOutcomeReceived;
    RebootClusterOutcomeReceivedEvent m_onRebootClusterOutcomeReceived;
    ResetClusterParameterGroupOutcomeReceivedEvent m_onResetClusterParameterGroupOutcomeReceived;
    RestoreFromClusterSnapshotOutcomeReceivedEvent m_onRestoreFromClusterSnapshotOutcomeReceived;
    RevokeClusterSecurityGroupIngressOutcomeReceivedEvent m_onRevokeClusterSecurityGroupIngressOutcomeReceived;
    RevokeSnapshotAccessOutcomeReceivedEvent m_onRevokeSnapshotAccessOutcomeReceived;
    RotateEncryptionKeyOutcomeReceivedEvent m_onRotateEncryptionKeyOutcomeReceived;
  };

} // namespace Redshift
} // namespace Aws
