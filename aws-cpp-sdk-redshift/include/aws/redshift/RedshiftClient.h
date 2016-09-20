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
#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/redshift/RedshiftErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
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
#include <aws/redshift/model/CreateSnapshotCopyGrantResult.h>
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
#include <aws/redshift/model/DescribeSnapshotCopyGrantsResult.h>
#include <aws/redshift/model/DescribeTableRestoreStatusResult.h>
#include <aws/redshift/model/DescribeTagsResult.h>
#include <aws/redshift/model/DisableLoggingResult.h>
#include <aws/redshift/model/DisableSnapshotCopyResult.h>
#include <aws/redshift/model/EnableLoggingResult.h>
#include <aws/redshift/model/EnableSnapshotCopyResult.h>
#include <aws/redshift/model/ModifyClusterResult.h>
#include <aws/redshift/model/ModifyClusterIamRolesResult.h>
#include <aws/redshift/model/ModifyClusterParameterGroupResult.h>
#include <aws/redshift/model/ModifyClusterSubnetGroupResult.h>
#include <aws/redshift/model/ModifyEventSubscriptionResult.h>
#include <aws/redshift/model/ModifySnapshotCopyRetentionPeriodResult.h>
#include <aws/redshift/model/PurchaseReservedNodeOfferingResult.h>
#include <aws/redshift/model/RebootClusterResult.h>
#include <aws/redshift/model/ResetClusterParameterGroupResult.h>
#include <aws/redshift/model/RestoreFromClusterSnapshotResult.h>
#include <aws/redshift/model/RestoreTableFromClusterSnapshotResult.h>
#include <aws/redshift/model/RevokeClusterSecurityGroupIngressResult.h>
#include <aws/redshift/model/RevokeSnapshotAccessResult.h>
#include <aws/redshift/model/RotateEncryptionKeyResult.h>
#include <aws/core/NoResult.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <future>
#include <functional>

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
        class CreateSnapshotCopyGrantRequest;
        class CreateTagsRequest;
        class DeleteClusterRequest;
        class DeleteClusterParameterGroupRequest;
        class DeleteClusterSecurityGroupRequest;
        class DeleteClusterSnapshotRequest;
        class DeleteClusterSubnetGroupRequest;
        class DeleteEventSubscriptionRequest;
        class DeleteHsmClientCertificateRequest;
        class DeleteHsmConfigurationRequest;
        class DeleteSnapshotCopyGrantRequest;
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
        class DescribeSnapshotCopyGrantsRequest;
        class DescribeTableRestoreStatusRequest;
        class DescribeTagsRequest;
        class DisableLoggingRequest;
        class DisableSnapshotCopyRequest;
        class EnableLoggingRequest;
        class EnableSnapshotCopyRequest;
        class ModifyClusterRequest;
        class ModifyClusterIamRolesRequest;
        class ModifyClusterParameterGroupRequest;
        class ModifyClusterSubnetGroupRequest;
        class ModifyEventSubscriptionRequest;
        class ModifySnapshotCopyRetentionPeriodRequest;
        class PurchaseReservedNodeOfferingRequest;
        class RebootClusterRequest;
        class ResetClusterParameterGroupRequest;
        class RestoreFromClusterSnapshotRequest;
        class RestoreTableFromClusterSnapshotRequest;
        class RevokeClusterSecurityGroupIngressRequest;
        class RevokeSnapshotAccessRequest;
        class RotateEncryptionKeyRequest;

        typedef Aws::Utils::Outcome<AuthorizeClusterSecurityGroupIngressResult, Aws::Client::AWSError<RedshiftErrors>> AuthorizeClusterSecurityGroupIngressOutcome;
        typedef Aws::Utils::Outcome<AuthorizeSnapshotAccessResult, Aws::Client::AWSError<RedshiftErrors>> AuthorizeSnapshotAccessOutcome;
        typedef Aws::Utils::Outcome<CopyClusterSnapshotResult, Aws::Client::AWSError<RedshiftErrors>> CopyClusterSnapshotOutcome;
        typedef Aws::Utils::Outcome<CreateClusterResult, Aws::Client::AWSError<RedshiftErrors>> CreateClusterOutcome;
        typedef Aws::Utils::Outcome<CreateClusterParameterGroupResult, Aws::Client::AWSError<RedshiftErrors>> CreateClusterParameterGroupOutcome;
        typedef Aws::Utils::Outcome<CreateClusterSecurityGroupResult, Aws::Client::AWSError<RedshiftErrors>> CreateClusterSecurityGroupOutcome;
        typedef Aws::Utils::Outcome<CreateClusterSnapshotResult, Aws::Client::AWSError<RedshiftErrors>> CreateClusterSnapshotOutcome;
        typedef Aws::Utils::Outcome<CreateClusterSubnetGroupResult, Aws::Client::AWSError<RedshiftErrors>> CreateClusterSubnetGroupOutcome;
        typedef Aws::Utils::Outcome<CreateEventSubscriptionResult, Aws::Client::AWSError<RedshiftErrors>> CreateEventSubscriptionOutcome;
        typedef Aws::Utils::Outcome<CreateHsmClientCertificateResult, Aws::Client::AWSError<RedshiftErrors>> CreateHsmClientCertificateOutcome;
        typedef Aws::Utils::Outcome<CreateHsmConfigurationResult, Aws::Client::AWSError<RedshiftErrors>> CreateHsmConfigurationOutcome;
        typedef Aws::Utils::Outcome<CreateSnapshotCopyGrantResult, Aws::Client::AWSError<RedshiftErrors>> CreateSnapshotCopyGrantOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<RedshiftErrors>> CreateTagsOutcome;
        typedef Aws::Utils::Outcome<DeleteClusterResult, Aws::Client::AWSError<RedshiftErrors>> DeleteClusterOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<RedshiftErrors>> DeleteClusterParameterGroupOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<RedshiftErrors>> DeleteClusterSecurityGroupOutcome;
        typedef Aws::Utils::Outcome<DeleteClusterSnapshotResult, Aws::Client::AWSError<RedshiftErrors>> DeleteClusterSnapshotOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<RedshiftErrors>> DeleteClusterSubnetGroupOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<RedshiftErrors>> DeleteEventSubscriptionOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<RedshiftErrors>> DeleteHsmClientCertificateOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<RedshiftErrors>> DeleteHsmConfigurationOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<RedshiftErrors>> DeleteSnapshotCopyGrantOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<RedshiftErrors>> DeleteTagsOutcome;
        typedef Aws::Utils::Outcome<DescribeClusterParameterGroupsResult, Aws::Client::AWSError<RedshiftErrors>> DescribeClusterParameterGroupsOutcome;
        typedef Aws::Utils::Outcome<DescribeClusterParametersResult, Aws::Client::AWSError<RedshiftErrors>> DescribeClusterParametersOutcome;
        typedef Aws::Utils::Outcome<DescribeClusterSecurityGroupsResult, Aws::Client::AWSError<RedshiftErrors>> DescribeClusterSecurityGroupsOutcome;
        typedef Aws::Utils::Outcome<DescribeClusterSnapshotsResult, Aws::Client::AWSError<RedshiftErrors>> DescribeClusterSnapshotsOutcome;
        typedef Aws::Utils::Outcome<DescribeClusterSubnetGroupsResult, Aws::Client::AWSError<RedshiftErrors>> DescribeClusterSubnetGroupsOutcome;
        typedef Aws::Utils::Outcome<DescribeClusterVersionsResult, Aws::Client::AWSError<RedshiftErrors>> DescribeClusterVersionsOutcome;
        typedef Aws::Utils::Outcome<DescribeClustersResult, Aws::Client::AWSError<RedshiftErrors>> DescribeClustersOutcome;
        typedef Aws::Utils::Outcome<DescribeDefaultClusterParametersResult, Aws::Client::AWSError<RedshiftErrors>> DescribeDefaultClusterParametersOutcome;
        typedef Aws::Utils::Outcome<DescribeEventCategoriesResult, Aws::Client::AWSError<RedshiftErrors>> DescribeEventCategoriesOutcome;
        typedef Aws::Utils::Outcome<DescribeEventSubscriptionsResult, Aws::Client::AWSError<RedshiftErrors>> DescribeEventSubscriptionsOutcome;
        typedef Aws::Utils::Outcome<DescribeEventsResult, Aws::Client::AWSError<RedshiftErrors>> DescribeEventsOutcome;
        typedef Aws::Utils::Outcome<DescribeHsmClientCertificatesResult, Aws::Client::AWSError<RedshiftErrors>> DescribeHsmClientCertificatesOutcome;
        typedef Aws::Utils::Outcome<DescribeHsmConfigurationsResult, Aws::Client::AWSError<RedshiftErrors>> DescribeHsmConfigurationsOutcome;
        typedef Aws::Utils::Outcome<DescribeLoggingStatusResult, Aws::Client::AWSError<RedshiftErrors>> DescribeLoggingStatusOutcome;
        typedef Aws::Utils::Outcome<DescribeOrderableClusterOptionsResult, Aws::Client::AWSError<RedshiftErrors>> DescribeOrderableClusterOptionsOutcome;
        typedef Aws::Utils::Outcome<DescribeReservedNodeOfferingsResult, Aws::Client::AWSError<RedshiftErrors>> DescribeReservedNodeOfferingsOutcome;
        typedef Aws::Utils::Outcome<DescribeReservedNodesResult, Aws::Client::AWSError<RedshiftErrors>> DescribeReservedNodesOutcome;
        typedef Aws::Utils::Outcome<DescribeResizeResult, Aws::Client::AWSError<RedshiftErrors>> DescribeResizeOutcome;
        typedef Aws::Utils::Outcome<DescribeSnapshotCopyGrantsResult, Aws::Client::AWSError<RedshiftErrors>> DescribeSnapshotCopyGrantsOutcome;
        typedef Aws::Utils::Outcome<DescribeTableRestoreStatusResult, Aws::Client::AWSError<RedshiftErrors>> DescribeTableRestoreStatusOutcome;
        typedef Aws::Utils::Outcome<DescribeTagsResult, Aws::Client::AWSError<RedshiftErrors>> DescribeTagsOutcome;
        typedef Aws::Utils::Outcome<DisableLoggingResult, Aws::Client::AWSError<RedshiftErrors>> DisableLoggingOutcome;
        typedef Aws::Utils::Outcome<DisableSnapshotCopyResult, Aws::Client::AWSError<RedshiftErrors>> DisableSnapshotCopyOutcome;
        typedef Aws::Utils::Outcome<EnableLoggingResult, Aws::Client::AWSError<RedshiftErrors>> EnableLoggingOutcome;
        typedef Aws::Utils::Outcome<EnableSnapshotCopyResult, Aws::Client::AWSError<RedshiftErrors>> EnableSnapshotCopyOutcome;
        typedef Aws::Utils::Outcome<ModifyClusterResult, Aws::Client::AWSError<RedshiftErrors>> ModifyClusterOutcome;
        typedef Aws::Utils::Outcome<ModifyClusterIamRolesResult, Aws::Client::AWSError<RedshiftErrors>> ModifyClusterIamRolesOutcome;
        typedef Aws::Utils::Outcome<ModifyClusterParameterGroupResult, Aws::Client::AWSError<RedshiftErrors>> ModifyClusterParameterGroupOutcome;
        typedef Aws::Utils::Outcome<ModifyClusterSubnetGroupResult, Aws::Client::AWSError<RedshiftErrors>> ModifyClusterSubnetGroupOutcome;
        typedef Aws::Utils::Outcome<ModifyEventSubscriptionResult, Aws::Client::AWSError<RedshiftErrors>> ModifyEventSubscriptionOutcome;
        typedef Aws::Utils::Outcome<ModifySnapshotCopyRetentionPeriodResult, Aws::Client::AWSError<RedshiftErrors>> ModifySnapshotCopyRetentionPeriodOutcome;
        typedef Aws::Utils::Outcome<PurchaseReservedNodeOfferingResult, Aws::Client::AWSError<RedshiftErrors>> PurchaseReservedNodeOfferingOutcome;
        typedef Aws::Utils::Outcome<RebootClusterResult, Aws::Client::AWSError<RedshiftErrors>> RebootClusterOutcome;
        typedef Aws::Utils::Outcome<ResetClusterParameterGroupResult, Aws::Client::AWSError<RedshiftErrors>> ResetClusterParameterGroupOutcome;
        typedef Aws::Utils::Outcome<RestoreFromClusterSnapshotResult, Aws::Client::AWSError<RedshiftErrors>> RestoreFromClusterSnapshotOutcome;
        typedef Aws::Utils::Outcome<RestoreTableFromClusterSnapshotResult, Aws::Client::AWSError<RedshiftErrors>> RestoreTableFromClusterSnapshotOutcome;
        typedef Aws::Utils::Outcome<RevokeClusterSecurityGroupIngressResult, Aws::Client::AWSError<RedshiftErrors>> RevokeClusterSecurityGroupIngressOutcome;
        typedef Aws::Utils::Outcome<RevokeSnapshotAccessResult, Aws::Client::AWSError<RedshiftErrors>> RevokeSnapshotAccessOutcome;
        typedef Aws::Utils::Outcome<RotateEncryptionKeyResult, Aws::Client::AWSError<RedshiftErrors>> RotateEncryptionKeyOutcome;

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
        typedef std::future<CreateSnapshotCopyGrantOutcome> CreateSnapshotCopyGrantOutcomeCallable;
        typedef std::future<CreateTagsOutcome> CreateTagsOutcomeCallable;
        typedef std::future<DeleteClusterOutcome> DeleteClusterOutcomeCallable;
        typedef std::future<DeleteClusterParameterGroupOutcome> DeleteClusterParameterGroupOutcomeCallable;
        typedef std::future<DeleteClusterSecurityGroupOutcome> DeleteClusterSecurityGroupOutcomeCallable;
        typedef std::future<DeleteClusterSnapshotOutcome> DeleteClusterSnapshotOutcomeCallable;
        typedef std::future<DeleteClusterSubnetGroupOutcome> DeleteClusterSubnetGroupOutcomeCallable;
        typedef std::future<DeleteEventSubscriptionOutcome> DeleteEventSubscriptionOutcomeCallable;
        typedef std::future<DeleteHsmClientCertificateOutcome> DeleteHsmClientCertificateOutcomeCallable;
        typedef std::future<DeleteHsmConfigurationOutcome> DeleteHsmConfigurationOutcomeCallable;
        typedef std::future<DeleteSnapshotCopyGrantOutcome> DeleteSnapshotCopyGrantOutcomeCallable;
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
        typedef std::future<DescribeSnapshotCopyGrantsOutcome> DescribeSnapshotCopyGrantsOutcomeCallable;
        typedef std::future<DescribeTableRestoreStatusOutcome> DescribeTableRestoreStatusOutcomeCallable;
        typedef std::future<DescribeTagsOutcome> DescribeTagsOutcomeCallable;
        typedef std::future<DisableLoggingOutcome> DisableLoggingOutcomeCallable;
        typedef std::future<DisableSnapshotCopyOutcome> DisableSnapshotCopyOutcomeCallable;
        typedef std::future<EnableLoggingOutcome> EnableLoggingOutcomeCallable;
        typedef std::future<EnableSnapshotCopyOutcome> EnableSnapshotCopyOutcomeCallable;
        typedef std::future<ModifyClusterOutcome> ModifyClusterOutcomeCallable;
        typedef std::future<ModifyClusterIamRolesOutcome> ModifyClusterIamRolesOutcomeCallable;
        typedef std::future<ModifyClusterParameterGroupOutcome> ModifyClusterParameterGroupOutcomeCallable;
        typedef std::future<ModifyClusterSubnetGroupOutcome> ModifyClusterSubnetGroupOutcomeCallable;
        typedef std::future<ModifyEventSubscriptionOutcome> ModifyEventSubscriptionOutcomeCallable;
        typedef std::future<ModifySnapshotCopyRetentionPeriodOutcome> ModifySnapshotCopyRetentionPeriodOutcomeCallable;
        typedef std::future<PurchaseReservedNodeOfferingOutcome> PurchaseReservedNodeOfferingOutcomeCallable;
        typedef std::future<RebootClusterOutcome> RebootClusterOutcomeCallable;
        typedef std::future<ResetClusterParameterGroupOutcome> ResetClusterParameterGroupOutcomeCallable;
        typedef std::future<RestoreFromClusterSnapshotOutcome> RestoreFromClusterSnapshotOutcomeCallable;
        typedef std::future<RestoreTableFromClusterSnapshotOutcome> RestoreTableFromClusterSnapshotOutcomeCallable;
        typedef std::future<RevokeClusterSecurityGroupIngressOutcome> RevokeClusterSecurityGroupIngressOutcomeCallable;
        typedef std::future<RevokeSnapshotAccessOutcome> RevokeSnapshotAccessOutcomeCallable;
        typedef std::future<RotateEncryptionKeyOutcome> RotateEncryptionKeyOutcomeCallable;
} // namespace Model

  class RedshiftClient;

    typedef std::function<void(const RedshiftClient*, const Model::AuthorizeClusterSecurityGroupIngressRequest&, const Model::AuthorizeClusterSecurityGroupIngressOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AuthorizeClusterSecurityGroupIngressResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::AuthorizeSnapshotAccessRequest&, const Model::AuthorizeSnapshotAccessOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AuthorizeSnapshotAccessResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::CopyClusterSnapshotRequest&, const Model::CopyClusterSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CopyClusterSnapshotResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::CreateClusterRequest&, const Model::CreateClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateClusterResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::CreateClusterParameterGroupRequest&, const Model::CreateClusterParameterGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateClusterParameterGroupResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::CreateClusterSecurityGroupRequest&, const Model::CreateClusterSecurityGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateClusterSecurityGroupResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::CreateClusterSnapshotRequest&, const Model::CreateClusterSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateClusterSnapshotResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::CreateClusterSubnetGroupRequest&, const Model::CreateClusterSubnetGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateClusterSubnetGroupResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::CreateEventSubscriptionRequest&, const Model::CreateEventSubscriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateEventSubscriptionResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::CreateHsmClientCertificateRequest&, const Model::CreateHsmClientCertificateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateHsmClientCertificateResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::CreateHsmConfigurationRequest&, const Model::CreateHsmConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateHsmConfigurationResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::CreateSnapshotCopyGrantRequest&, const Model::CreateSnapshotCopyGrantOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSnapshotCopyGrantResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::CreateTagsRequest&, const Model::CreateTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTagsResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::DeleteClusterRequest&, const Model::DeleteClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteClusterResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::DeleteClusterParameterGroupRequest&, const Model::DeleteClusterParameterGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteClusterParameterGroupResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::DeleteClusterSecurityGroupRequest&, const Model::DeleteClusterSecurityGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteClusterSecurityGroupResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::DeleteClusterSnapshotRequest&, const Model::DeleteClusterSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteClusterSnapshotResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::DeleteClusterSubnetGroupRequest&, const Model::DeleteClusterSubnetGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteClusterSubnetGroupResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::DeleteEventSubscriptionRequest&, const Model::DeleteEventSubscriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteEventSubscriptionResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::DeleteHsmClientCertificateRequest&, const Model::DeleteHsmClientCertificateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteHsmClientCertificateResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::DeleteHsmConfigurationRequest&, const Model::DeleteHsmConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteHsmConfigurationResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::DeleteSnapshotCopyGrantRequest&, const Model::DeleteSnapshotCopyGrantOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSnapshotCopyGrantResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::DeleteTagsRequest&, const Model::DeleteTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTagsResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::DescribeClusterParameterGroupsRequest&, const Model::DescribeClusterParameterGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeClusterParameterGroupsResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::DescribeClusterParametersRequest&, const Model::DescribeClusterParametersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeClusterParametersResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::DescribeClusterSecurityGroupsRequest&, const Model::DescribeClusterSecurityGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeClusterSecurityGroupsResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::DescribeClusterSnapshotsRequest&, const Model::DescribeClusterSnapshotsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeClusterSnapshotsResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::DescribeClusterSubnetGroupsRequest&, const Model::DescribeClusterSubnetGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeClusterSubnetGroupsResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::DescribeClusterVersionsRequest&, const Model::DescribeClusterVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeClusterVersionsResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::DescribeClustersRequest&, const Model::DescribeClustersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeClustersResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::DescribeDefaultClusterParametersRequest&, const Model::DescribeDefaultClusterParametersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDefaultClusterParametersResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::DescribeEventCategoriesRequest&, const Model::DescribeEventCategoriesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEventCategoriesResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::DescribeEventSubscriptionsRequest&, const Model::DescribeEventSubscriptionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEventSubscriptionsResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::DescribeEventsRequest&, const Model::DescribeEventsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEventsResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::DescribeHsmClientCertificatesRequest&, const Model::DescribeHsmClientCertificatesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeHsmClientCertificatesResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::DescribeHsmConfigurationsRequest&, const Model::DescribeHsmConfigurationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeHsmConfigurationsResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::DescribeLoggingStatusRequest&, const Model::DescribeLoggingStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeLoggingStatusResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::DescribeOrderableClusterOptionsRequest&, const Model::DescribeOrderableClusterOptionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeOrderableClusterOptionsResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::DescribeReservedNodeOfferingsRequest&, const Model::DescribeReservedNodeOfferingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeReservedNodeOfferingsResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::DescribeReservedNodesRequest&, const Model::DescribeReservedNodesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeReservedNodesResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::DescribeResizeRequest&, const Model::DescribeResizeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeResizeResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::DescribeSnapshotCopyGrantsRequest&, const Model::DescribeSnapshotCopyGrantsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSnapshotCopyGrantsResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::DescribeTableRestoreStatusRequest&, const Model::DescribeTableRestoreStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTableRestoreStatusResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::DescribeTagsRequest&, const Model::DescribeTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTagsResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::DisableLoggingRequest&, const Model::DisableLoggingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisableLoggingResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::DisableSnapshotCopyRequest&, const Model::DisableSnapshotCopyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisableSnapshotCopyResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::EnableLoggingRequest&, const Model::EnableLoggingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > EnableLoggingResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::EnableSnapshotCopyRequest&, const Model::EnableSnapshotCopyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > EnableSnapshotCopyResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::ModifyClusterRequest&, const Model::ModifyClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyClusterResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::ModifyClusterIamRolesRequest&, const Model::ModifyClusterIamRolesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyClusterIamRolesResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::ModifyClusterParameterGroupRequest&, const Model::ModifyClusterParameterGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyClusterParameterGroupResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::ModifyClusterSubnetGroupRequest&, const Model::ModifyClusterSubnetGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyClusterSubnetGroupResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::ModifyEventSubscriptionRequest&, const Model::ModifyEventSubscriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyEventSubscriptionResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::ModifySnapshotCopyRetentionPeriodRequest&, const Model::ModifySnapshotCopyRetentionPeriodOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifySnapshotCopyRetentionPeriodResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::PurchaseReservedNodeOfferingRequest&, const Model::PurchaseReservedNodeOfferingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PurchaseReservedNodeOfferingResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::RebootClusterRequest&, const Model::RebootClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RebootClusterResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::ResetClusterParameterGroupRequest&, const Model::ResetClusterParameterGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ResetClusterParameterGroupResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::RestoreFromClusterSnapshotRequest&, const Model::RestoreFromClusterSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RestoreFromClusterSnapshotResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::RestoreTableFromClusterSnapshotRequest&, const Model::RestoreTableFromClusterSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RestoreTableFromClusterSnapshotResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::RevokeClusterSecurityGroupIngressRequest&, const Model::RevokeClusterSecurityGroupIngressOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RevokeClusterSecurityGroupIngressResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::RevokeSnapshotAccessRequest&, const Model::RevokeSnapshotAccessOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RevokeSnapshotAccessResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::RotateEncryptionKeyRequest&, const Model::RotateEncryptionKeyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RotateEncryptionKeyResponseReceivedHandler;

  /**
   * <fullname>Amazon Redshift</fullname> <p> <b>Overview</b> </p> <p>This is an
   * interface reference for Amazon Redshift. It contains documentation for one of
   * the programming or command line interfaces you can use to manage Amazon Redshift
   * clusters. Note that Amazon Redshift is asynchronous, which means that some
   * interfaces may require techniques, such as polling or asynchronous callback
   * handlers, to determine when a command has been applied. In this reference, the
   * parameter descriptions indicate whether a change is applied immediately, on the
   * next instance reboot, or during the next maintenance window. For a summary of
   * the Amazon Redshift cluster management interfaces, go to <a
   * href="http://docs.aws.amazon.com/redshift/latest/mgmt/using-aws-sdk.html">Using
   * the Amazon Redshift Management Interfaces</a>.</p> <p>Amazon Redshift manages
   * all the work of setting up, operating, and scaling a data warehouse:
   * provisioning capacity, monitoring and backing up the cluster, and applying
   * patches and upgrades to the Amazon Redshift engine. You can focus on using your
   * data to acquire new insights for your business and customers.</p> <p>If you are
   * a first-time user of Amazon Redshift, we recommend that you begin by reading the
   * <a
   * href="http://docs.aws.amazon.com/redshift/latest/gsg/getting-started.html">Amazon
   * Redshift Getting Started Guide</a>.</p> <p>If you are a database developer, the
   * <a href="http://docs.aws.amazon.com/redshift/latest/dg/welcome.html">Amazon
   * Redshift Database Developer Guide</a> explains how to design, build, query, and
   * maintain the databases that make up your data warehouse. </p>
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
            const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

        virtual ~RedshiftClient();

        /**
         * <p>Adds an inbound (ingress) rule to an Amazon Redshift security group.
         * Depending on whether the application accessing your cluster is running on the
         * Internet or an Amazon EC2 instance, you can authorize inbound access to either a
         * Classless Interdomain Routing (CIDR)/Internet Protocol (IP) range or to an
         * Amazon EC2 security group. You can add as many as 20 ingress rules to an Amazon
         * Redshift security group.</p> <p>If you authorize access to an Amazon EC2
         * security group, specify <i>EC2SecurityGroupName</i> and
         * <i>EC2SecurityGroupOwnerId</i>. The Amazon EC2 security group and Amazon
         * Redshift cluster must be in the same AWS region. </p> <p>If you authorize access
         * to a CIDR/IP address range, specify <i>CIDRIP</i>. For an overview of CIDR
         * blocks, see the Wikipedia article on <a
         * href="http://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing">Classless
         * Inter-Domain Routing</a>. </p> <p>You must also associate the security group
         * with a cluster so that clients running on these IP addresses or the EC2 instance
         * are authorized to connect to the cluster. For information about managing
         * security groups, go to <a
         * href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-security-groups.html">Working
         * with Security Groups</a> in the <i>Amazon Redshift Cluster Management
         * Guide</i>.</p>
         */
        virtual Model::AuthorizeClusterSecurityGroupIngressOutcome AuthorizeClusterSecurityGroupIngress(const Model::AuthorizeClusterSecurityGroupIngressRequest& request) const;

        /**
         * <p>Adds an inbound (ingress) rule to an Amazon Redshift security group.
         * Depending on whether the application accessing your cluster is running on the
         * Internet or an Amazon EC2 instance, you can authorize inbound access to either a
         * Classless Interdomain Routing (CIDR)/Internet Protocol (IP) range or to an
         * Amazon EC2 security group. You can add as many as 20 ingress rules to an Amazon
         * Redshift security group.</p> <p>If you authorize access to an Amazon EC2
         * security group, specify <i>EC2SecurityGroupName</i> and
         * <i>EC2SecurityGroupOwnerId</i>. The Amazon EC2 security group and Amazon
         * Redshift cluster must be in the same AWS region. </p> <p>If you authorize access
         * to a CIDR/IP address range, specify <i>CIDRIP</i>. For an overview of CIDR
         * blocks, see the Wikipedia article on <a
         * href="http://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing">Classless
         * Inter-Domain Routing</a>. </p> <p>You must also associate the security group
         * with a cluster so that clients running on these IP addresses or the EC2 instance
         * are authorized to connect to the cluster. For information about managing
         * security groups, go to <a
         * href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-security-groups.html">Working
         * with Security Groups</a> in the <i>Amazon Redshift Cluster Management
         * Guide</i>.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AuthorizeClusterSecurityGroupIngressOutcomeCallable AuthorizeClusterSecurityGroupIngressCallable(const Model::AuthorizeClusterSecurityGroupIngressRequest& request) const;

        /**
         * <p>Adds an inbound (ingress) rule to an Amazon Redshift security group.
         * Depending on whether the application accessing your cluster is running on the
         * Internet or an Amazon EC2 instance, you can authorize inbound access to either a
         * Classless Interdomain Routing (CIDR)/Internet Protocol (IP) range or to an
         * Amazon EC2 security group. You can add as many as 20 ingress rules to an Amazon
         * Redshift security group.</p> <p>If you authorize access to an Amazon EC2
         * security group, specify <i>EC2SecurityGroupName</i> and
         * <i>EC2SecurityGroupOwnerId</i>. The Amazon EC2 security group and Amazon
         * Redshift cluster must be in the same AWS region. </p> <p>If you authorize access
         * to a CIDR/IP address range, specify <i>CIDRIP</i>. For an overview of CIDR
         * blocks, see the Wikipedia article on <a
         * href="http://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing">Classless
         * Inter-Domain Routing</a>. </p> <p>You must also associate the security group
         * with a cluster so that clients running on these IP addresses or the EC2 instance
         * are authorized to connect to the cluster. For information about managing
         * security groups, go to <a
         * href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-security-groups.html">Working
         * with Security Groups</a> in the <i>Amazon Redshift Cluster Management
         * Guide</i>.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AuthorizeClusterSecurityGroupIngressAsync(const Model::AuthorizeClusterSecurityGroupIngressRequest& request, const AuthorizeClusterSecurityGroupIngressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Authorizes the specified AWS customer account to restore the specified
         * snapshot.</p> <p> For more information about working with snapshots, go to <a
         * href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-snapshots.html">Amazon
         * Redshift Snapshots</a> in the <i>Amazon Redshift Cluster Management
         * Guide</i>.</p>
         */
        virtual Model::AuthorizeSnapshotAccessOutcome AuthorizeSnapshotAccess(const Model::AuthorizeSnapshotAccessRequest& request) const;

        /**
         * <p>Authorizes the specified AWS customer account to restore the specified
         * snapshot.</p> <p> For more information about working with snapshots, go to <a
         * href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-snapshots.html">Amazon
         * Redshift Snapshots</a> in the <i>Amazon Redshift Cluster Management
         * Guide</i>.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AuthorizeSnapshotAccessOutcomeCallable AuthorizeSnapshotAccessCallable(const Model::AuthorizeSnapshotAccessRequest& request) const;

        /**
         * <p>Authorizes the specified AWS customer account to restore the specified
         * snapshot.</p> <p> For more information about working with snapshots, go to <a
         * href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-snapshots.html">Amazon
         * Redshift Snapshots</a> in the <i>Amazon Redshift Cluster Management
         * Guide</i>.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AuthorizeSnapshotAccessAsync(const Model::AuthorizeSnapshotAccessRequest& request, const AuthorizeSnapshotAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Copies the specified automated cluster snapshot to a new manual cluster
         * snapshot. The source must be an automated snapshot and it must be in the
         * available state.</p> <p>When you delete a cluster, Amazon Redshift deletes any
         * automated snapshots of the cluster. Also, when the retention period of the
         * snapshot expires, Amazon Redshift automatically deletes it. If you want to keep
         * an automated snapshot for a longer period, you can make a manual copy of the
         * snapshot. Manual snapshots are retained until you delete them.</p> <p> For more
         * information about working with snapshots, go to <a
         * href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-snapshots.html">Amazon
         * Redshift Snapshots</a> in the <i>Amazon Redshift Cluster Management
         * Guide</i>.</p>
         */
        virtual Model::CopyClusterSnapshotOutcome CopyClusterSnapshot(const Model::CopyClusterSnapshotRequest& request) const;

        /**
         * <p>Copies the specified automated cluster snapshot to a new manual cluster
         * snapshot. The source must be an automated snapshot and it must be in the
         * available state.</p> <p>When you delete a cluster, Amazon Redshift deletes any
         * automated snapshots of the cluster. Also, when the retention period of the
         * snapshot expires, Amazon Redshift automatically deletes it. If you want to keep
         * an automated snapshot for a longer period, you can make a manual copy of the
         * snapshot. Manual snapshots are retained until you delete them.</p> <p> For more
         * information about working with snapshots, go to <a
         * href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-snapshots.html">Amazon
         * Redshift Snapshots</a> in the <i>Amazon Redshift Cluster Management
         * Guide</i>.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CopyClusterSnapshotOutcomeCallable CopyClusterSnapshotCallable(const Model::CopyClusterSnapshotRequest& request) const;

        /**
         * <p>Copies the specified automated cluster snapshot to a new manual cluster
         * snapshot. The source must be an automated snapshot and it must be in the
         * available state.</p> <p>When you delete a cluster, Amazon Redshift deletes any
         * automated snapshots of the cluster. Also, when the retention period of the
         * snapshot expires, Amazon Redshift automatically deletes it. If you want to keep
         * an automated snapshot for a longer period, you can make a manual copy of the
         * snapshot. Manual snapshots are retained until you delete them.</p> <p> For more
         * information about working with snapshots, go to <a
         * href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-snapshots.html">Amazon
         * Redshift Snapshots</a> in the <i>Amazon Redshift Cluster Management
         * Guide</i>.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CopyClusterSnapshotAsync(const Model::CopyClusterSnapshotRequest& request, const CopyClusterSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new cluster.</p> <p>To create the cluster in Virtual Private Cloud
         * (VPC), you must provide a cluster subnet group name. The cluster subnet group
         * identifies the subnets of your VPC that Amazon Redshift uses when creating the
         * cluster. For more information about managing clusters, go to <a
         * href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-clusters.html">Amazon
         * Redshift Clusters</a> in the <i>Amazon Redshift Cluster Management
         * Guide</i>.</p>
         */
        virtual Model::CreateClusterOutcome CreateCluster(const Model::CreateClusterRequest& request) const;

        /**
         * <p>Creates a new cluster.</p> <p>To create the cluster in Virtual Private Cloud
         * (VPC), you must provide a cluster subnet group name. The cluster subnet group
         * identifies the subnets of your VPC that Amazon Redshift uses when creating the
         * cluster. For more information about managing clusters, go to <a
         * href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-clusters.html">Amazon
         * Redshift Clusters</a> in the <i>Amazon Redshift Cluster Management
         * Guide</i>.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateClusterOutcomeCallable CreateClusterCallable(const Model::CreateClusterRequest& request) const;

        /**
         * <p>Creates a new cluster.</p> <p>To create the cluster in Virtual Private Cloud
         * (VPC), you must provide a cluster subnet group name. The cluster subnet group
         * identifies the subnets of your VPC that Amazon Redshift uses when creating the
         * cluster. For more information about managing clusters, go to <a
         * href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-clusters.html">Amazon
         * Redshift Clusters</a> in the <i>Amazon Redshift Cluster Management
         * Guide</i>.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateClusterAsync(const Model::CreateClusterRequest& request, const CreateClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an Amazon Redshift parameter group.</p> <p>Creating parameter groups
         * is independent of creating clusters. You can associate a cluster with a
         * parameter group when you create the cluster. You can also associate an existing
         * cluster with a parameter group after the cluster is created by using
         * <a>ModifyCluster</a>. </p> <p>Parameters in the parameter group define specific
         * behavior that applies to the databases you create on the cluster. For more
         * information about parameters and parameter groups, go to <a
         * href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-parameter-groups.html">Amazon
         * Redshift Parameter Groups</a> in the <i>Amazon Redshift Cluster Management
         * Guide</i>.</p>
         */
        virtual Model::CreateClusterParameterGroupOutcome CreateClusterParameterGroup(const Model::CreateClusterParameterGroupRequest& request) const;

        /**
         * <p>Creates an Amazon Redshift parameter group.</p> <p>Creating parameter groups
         * is independent of creating clusters. You can associate a cluster with a
         * parameter group when you create the cluster. You can also associate an existing
         * cluster with a parameter group after the cluster is created by using
         * <a>ModifyCluster</a>. </p> <p>Parameters in the parameter group define specific
         * behavior that applies to the databases you create on the cluster. For more
         * information about parameters and parameter groups, go to <a
         * href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-parameter-groups.html">Amazon
         * Redshift Parameter Groups</a> in the <i>Amazon Redshift Cluster Management
         * Guide</i>.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateClusterParameterGroupOutcomeCallable CreateClusterParameterGroupCallable(const Model::CreateClusterParameterGroupRequest& request) const;

        /**
         * <p>Creates an Amazon Redshift parameter group.</p> <p>Creating parameter groups
         * is independent of creating clusters. You can associate a cluster with a
         * parameter group when you create the cluster. You can also associate an existing
         * cluster with a parameter group after the cluster is created by using
         * <a>ModifyCluster</a>. </p> <p>Parameters in the parameter group define specific
         * behavior that applies to the databases you create on the cluster. For more
         * information about parameters and parameter groups, go to <a
         * href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-parameter-groups.html">Amazon
         * Redshift Parameter Groups</a> in the <i>Amazon Redshift Cluster Management
         * Guide</i>.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateClusterParameterGroupAsync(const Model::CreateClusterParameterGroupRequest& request, const CreateClusterParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new Amazon Redshift security group. You use security groups to
         * control access to non-VPC clusters.</p> <p> For information about managing
         * security groups, go to <a
         * href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-security-groups.html">Amazon
         * Redshift Cluster Security Groups</a> in the <i>Amazon Redshift Cluster
         * Management Guide</i>.</p>
         */
        virtual Model::CreateClusterSecurityGroupOutcome CreateClusterSecurityGroup(const Model::CreateClusterSecurityGroupRequest& request) const;

        /**
         * <p>Creates a new Amazon Redshift security group. You use security groups to
         * control access to non-VPC clusters.</p> <p> For information about managing
         * security groups, go to <a
         * href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-security-groups.html">Amazon
         * Redshift Cluster Security Groups</a> in the <i>Amazon Redshift Cluster
         * Management Guide</i>.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateClusterSecurityGroupOutcomeCallable CreateClusterSecurityGroupCallable(const Model::CreateClusterSecurityGroupRequest& request) const;

        /**
         * <p>Creates a new Amazon Redshift security group. You use security groups to
         * control access to non-VPC clusters.</p> <p> For information about managing
         * security groups, go to <a
         * href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-security-groups.html">Amazon
         * Redshift Cluster Security Groups</a> in the <i>Amazon Redshift Cluster
         * Management Guide</i>.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateClusterSecurityGroupAsync(const Model::CreateClusterSecurityGroupRequest& request, const CreateClusterSecurityGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a manual snapshot of the specified cluster. The cluster must be in
         * the <code>available</code> state. </p> <p> For more information about working
         * with snapshots, go to <a
         * href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-snapshots.html">Amazon
         * Redshift Snapshots</a> in the <i>Amazon Redshift Cluster Management
         * Guide</i>.</p>
         */
        virtual Model::CreateClusterSnapshotOutcome CreateClusterSnapshot(const Model::CreateClusterSnapshotRequest& request) const;

        /**
         * <p>Creates a manual snapshot of the specified cluster. The cluster must be in
         * the <code>available</code> state. </p> <p> For more information about working
         * with snapshots, go to <a
         * href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-snapshots.html">Amazon
         * Redshift Snapshots</a> in the <i>Amazon Redshift Cluster Management
         * Guide</i>.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateClusterSnapshotOutcomeCallable CreateClusterSnapshotCallable(const Model::CreateClusterSnapshotRequest& request) const;

        /**
         * <p>Creates a manual snapshot of the specified cluster. The cluster must be in
         * the <code>available</code> state. </p> <p> For more information about working
         * with snapshots, go to <a
         * href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-snapshots.html">Amazon
         * Redshift Snapshots</a> in the <i>Amazon Redshift Cluster Management
         * Guide</i>.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateClusterSnapshotAsync(const Model::CreateClusterSnapshotRequest& request, const CreateClusterSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new Amazon Redshift subnet group. You must provide a list of one or
         * more subnets in your existing Amazon Virtual Private Cloud (Amazon VPC) when
         * creating Amazon Redshift subnet group.</p> <p> For information about subnet
         * groups, go to <a
         * href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-cluster-subnet-groups.html">Amazon
         * Redshift Cluster Subnet Groups</a> in the <i>Amazon Redshift Cluster Management
         * Guide</i>.</p>
         */
        virtual Model::CreateClusterSubnetGroupOutcome CreateClusterSubnetGroup(const Model::CreateClusterSubnetGroupRequest& request) const;

        /**
         * <p>Creates a new Amazon Redshift subnet group. You must provide a list of one or
         * more subnets in your existing Amazon Virtual Private Cloud (Amazon VPC) when
         * creating Amazon Redshift subnet group.</p> <p> For information about subnet
         * groups, go to <a
         * href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-cluster-subnet-groups.html">Amazon
         * Redshift Cluster Subnet Groups</a> in the <i>Amazon Redshift Cluster Management
         * Guide</i>.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateClusterSubnetGroupOutcomeCallable CreateClusterSubnetGroupCallable(const Model::CreateClusterSubnetGroupRequest& request) const;

        /**
         * <p>Creates a new Amazon Redshift subnet group. You must provide a list of one or
         * more subnets in your existing Amazon Virtual Private Cloud (Amazon VPC) when
         * creating Amazon Redshift subnet group.</p> <p> For information about subnet
         * groups, go to <a
         * href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-cluster-subnet-groups.html">Amazon
         * Redshift Cluster Subnet Groups</a> in the <i>Amazon Redshift Cluster Management
         * Guide</i>.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateClusterSubnetGroupAsync(const Model::CreateClusterSubnetGroupRequest& request, const CreateClusterSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an Amazon Redshift event notification subscription. This action
         * requires an ARN (Amazon Resource Name) of an Amazon SNS topic created by either
         * the Amazon Redshift console, the Amazon SNS console, or the Amazon SNS API. To
         * obtain an ARN with Amazon SNS, you must create a topic in Amazon SNS and
         * subscribe to the topic. The ARN is displayed in the SNS console.</p> <p>You can
         * specify the source type, and lists of Amazon Redshift source IDs, event
         * categories, and event severities. Notifications will be sent for all events you
         * want that match those criteria. For example, you can specify source type =
         * cluster, source ID = my-cluster-1 and mycluster2, event categories =
         * Availability, Backup, and severity = ERROR. The subscription will only send
         * notifications for those ERROR events in the Availability and Backup categories
         * for the specified clusters.</p> <p>If you specify both the source type and
         * source IDs, such as source type = cluster and source identifier = my-cluster-1,
         * notifications will be sent for all the cluster events for my-cluster-1. If you
         * specify a source type but do not specify a source identifier, you will receive
         * notice of the events for the objects of that type in your AWS account. If you do
         * not specify either the SourceType nor the SourceIdentifier, you will be notified
         * of events generated from all Amazon Redshift sources belonging to your AWS
         * account. You must specify a source type if you specify a source ID.</p>
         */
        virtual Model::CreateEventSubscriptionOutcome CreateEventSubscription(const Model::CreateEventSubscriptionRequest& request) const;

        /**
         * <p>Creates an Amazon Redshift event notification subscription. This action
         * requires an ARN (Amazon Resource Name) of an Amazon SNS topic created by either
         * the Amazon Redshift console, the Amazon SNS console, or the Amazon SNS API. To
         * obtain an ARN with Amazon SNS, you must create a topic in Amazon SNS and
         * subscribe to the topic. The ARN is displayed in the SNS console.</p> <p>You can
         * specify the source type, and lists of Amazon Redshift source IDs, event
         * categories, and event severities. Notifications will be sent for all events you
         * want that match those criteria. For example, you can specify source type =
         * cluster, source ID = my-cluster-1 and mycluster2, event categories =
         * Availability, Backup, and severity = ERROR. The subscription will only send
         * notifications for those ERROR events in the Availability and Backup categories
         * for the specified clusters.</p> <p>If you specify both the source type and
         * source IDs, such as source type = cluster and source identifier = my-cluster-1,
         * notifications will be sent for all the cluster events for my-cluster-1. If you
         * specify a source type but do not specify a source identifier, you will receive
         * notice of the events for the objects of that type in your AWS account. If you do
         * not specify either the SourceType nor the SourceIdentifier, you will be notified
         * of events generated from all Amazon Redshift sources belonging to your AWS
         * account. You must specify a source type if you specify a source ID.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateEventSubscriptionOutcomeCallable CreateEventSubscriptionCallable(const Model::CreateEventSubscriptionRequest& request) const;

        /**
         * <p>Creates an Amazon Redshift event notification subscription. This action
         * requires an ARN (Amazon Resource Name) of an Amazon SNS topic created by either
         * the Amazon Redshift console, the Amazon SNS console, or the Amazon SNS API. To
         * obtain an ARN with Amazon SNS, you must create a topic in Amazon SNS and
         * subscribe to the topic. The ARN is displayed in the SNS console.</p> <p>You can
         * specify the source type, and lists of Amazon Redshift source IDs, event
         * categories, and event severities. Notifications will be sent for all events you
         * want that match those criteria. For example, you can specify source type =
         * cluster, source ID = my-cluster-1 and mycluster2, event categories =
         * Availability, Backup, and severity = ERROR. The subscription will only send
         * notifications for those ERROR events in the Availability and Backup categories
         * for the specified clusters.</p> <p>If you specify both the source type and
         * source IDs, such as source type = cluster and source identifier = my-cluster-1,
         * notifications will be sent for all the cluster events for my-cluster-1. If you
         * specify a source type but do not specify a source identifier, you will receive
         * notice of the events for the objects of that type in your AWS account. If you do
         * not specify either the SourceType nor the SourceIdentifier, you will be notified
         * of events generated from all Amazon Redshift sources belonging to your AWS
         * account. You must specify a source type if you specify a source ID.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateEventSubscriptionAsync(const Model::CreateEventSubscriptionRequest& request, const CreateEventSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an HSM client certificate that an Amazon Redshift cluster will use to
         * connect to the client's HSM in order to store and retrieve the keys used to
         * encrypt the cluster databases.</p> <p>The command returns a public key, which
         * you must store in the HSM. In addition to creating the HSM certificate, you must
         * create an Amazon Redshift HSM configuration that provides a cluster the
         * information needed to store and use encryption keys in the HSM. For more
         * information, go to <a
         * href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-HSM.html">Hardware
         * Security Modules</a> in the Amazon Redshift Cluster Management Guide.</p>
         */
        virtual Model::CreateHsmClientCertificateOutcome CreateHsmClientCertificate(const Model::CreateHsmClientCertificateRequest& request) const;

        /**
         * <p>Creates an HSM client certificate that an Amazon Redshift cluster will use to
         * connect to the client's HSM in order to store and retrieve the keys used to
         * encrypt the cluster databases.</p> <p>The command returns a public key, which
         * you must store in the HSM. In addition to creating the HSM certificate, you must
         * create an Amazon Redshift HSM configuration that provides a cluster the
         * information needed to store and use encryption keys in the HSM. For more
         * information, go to <a
         * href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-HSM.html">Hardware
         * Security Modules</a> in the Amazon Redshift Cluster Management Guide.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateHsmClientCertificateOutcomeCallable CreateHsmClientCertificateCallable(const Model::CreateHsmClientCertificateRequest& request) const;

        /**
         * <p>Creates an HSM client certificate that an Amazon Redshift cluster will use to
         * connect to the client's HSM in order to store and retrieve the keys used to
         * encrypt the cluster databases.</p> <p>The command returns a public key, which
         * you must store in the HSM. In addition to creating the HSM certificate, you must
         * create an Amazon Redshift HSM configuration that provides a cluster the
         * information needed to store and use encryption keys in the HSM. For more
         * information, go to <a
         * href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-HSM.html">Hardware
         * Security Modules</a> in the Amazon Redshift Cluster Management Guide.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateHsmClientCertificateAsync(const Model::CreateHsmClientCertificateRequest& request, const CreateHsmClientCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an HSM configuration that contains the information required by an
         * Amazon Redshift cluster to store and use database encryption keys in a Hardware
         * Security Module (HSM). After creating the HSM configuration, you can specify it
         * as a parameter when creating a cluster. The cluster will then store its
         * encryption keys in the HSM.</p> <p>In addition to creating an HSM configuration,
         * you must also create an HSM client certificate. For more information, go to <a
         * href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-HSM.html">Hardware
         * Security Modules</a> in the Amazon Redshift Cluster Management Guide.</p>
         */
        virtual Model::CreateHsmConfigurationOutcome CreateHsmConfiguration(const Model::CreateHsmConfigurationRequest& request) const;

        /**
         * <p>Creates an HSM configuration that contains the information required by an
         * Amazon Redshift cluster to store and use database encryption keys in a Hardware
         * Security Module (HSM). After creating the HSM configuration, you can specify it
         * as a parameter when creating a cluster. The cluster will then store its
         * encryption keys in the HSM.</p> <p>In addition to creating an HSM configuration,
         * you must also create an HSM client certificate. For more information, go to <a
         * href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-HSM.html">Hardware
         * Security Modules</a> in the Amazon Redshift Cluster Management Guide.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateHsmConfigurationOutcomeCallable CreateHsmConfigurationCallable(const Model::CreateHsmConfigurationRequest& request) const;

        /**
         * <p>Creates an HSM configuration that contains the information required by an
         * Amazon Redshift cluster to store and use database encryption keys in a Hardware
         * Security Module (HSM). After creating the HSM configuration, you can specify it
         * as a parameter when creating a cluster. The cluster will then store its
         * encryption keys in the HSM.</p> <p>In addition to creating an HSM configuration,
         * you must also create an HSM client certificate. For more information, go to <a
         * href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-HSM.html">Hardware
         * Security Modules</a> in the Amazon Redshift Cluster Management Guide.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateHsmConfigurationAsync(const Model::CreateHsmConfigurationRequest& request, const CreateHsmConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a snapshot copy grant that permits Amazon Redshift to use a customer
         * master key (CMK) from AWS Key Management Service (AWS KMS) to encrypt copied
         * snapshots in a destination region.</p> <p> For more information about managing
         * snapshot copy grants, go to <a
         * href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-db-encryption.html">Amazon
         * Redshift Database Encryption</a> in the <i>Amazon Redshift Cluster Management
         * Guide</i>. </p>
         */
        virtual Model::CreateSnapshotCopyGrantOutcome CreateSnapshotCopyGrant(const Model::CreateSnapshotCopyGrantRequest& request) const;

        /**
         * <p>Creates a snapshot copy grant that permits Amazon Redshift to use a customer
         * master key (CMK) from AWS Key Management Service (AWS KMS) to encrypt copied
         * snapshots in a destination region.</p> <p> For more information about managing
         * snapshot copy grants, go to <a
         * href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-db-encryption.html">Amazon
         * Redshift Database Encryption</a> in the <i>Amazon Redshift Cluster Management
         * Guide</i>. </p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateSnapshotCopyGrantOutcomeCallable CreateSnapshotCopyGrantCallable(const Model::CreateSnapshotCopyGrantRequest& request) const;

        /**
         * <p>Creates a snapshot copy grant that permits Amazon Redshift to use a customer
         * master key (CMK) from AWS Key Management Service (AWS KMS) to encrypt copied
         * snapshots in a destination region.</p> <p> For more information about managing
         * snapshot copy grants, go to <a
         * href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-db-encryption.html">Amazon
         * Redshift Database Encryption</a> in the <i>Amazon Redshift Cluster Management
         * Guide</i>. </p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateSnapshotCopyGrantAsync(const Model::CreateSnapshotCopyGrantRequest& request, const CreateSnapshotCopyGrantResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds one or more tags to a specified resource.</p> <p>A resource can have up
         * to 10 tags. If you try to create more than 10 tags for a resource, you will
         * receive an error and the attempt will fail.</p> <p>If you specify a key that
         * already exists for the resource, the value for that key will be updated with the
         * new value.</p>
         */
        virtual Model::CreateTagsOutcome CreateTags(const Model::CreateTagsRequest& request) const;

        /**
         * <p>Adds one or more tags to a specified resource.</p> <p>A resource can have up
         * to 10 tags. If you try to create more than 10 tags for a resource, you will
         * receive an error and the attempt will fail.</p> <p>If you specify a key that
         * already exists for the resource, the value for that key will be updated with the
         * new value.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateTagsOutcomeCallable CreateTagsCallable(const Model::CreateTagsRequest& request) const;

        /**
         * <p>Adds one or more tags to a specified resource.</p> <p>A resource can have up
         * to 10 tags. If you try to create more than 10 tags for a resource, you will
         * receive an error and the attempt will fail.</p> <p>If you specify a key that
         * already exists for the resource, the value for that key will be updated with the
         * new value.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateTagsAsync(const Model::CreateTagsRequest& request, const CreateTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a previously provisioned cluster. A successful response from the web
         * service indicates that the request was received correctly. Use
         * <a>DescribeClusters</a> to monitor the status of the deletion. The delete
         * operation cannot be canceled or reverted once submitted. For more information
         * about managing clusters, go to <a
         * href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-clusters.html">Amazon
         * Redshift Clusters</a> in the <i>Amazon Redshift Cluster Management
         * Guide</i>.</p> <p>If you want to shut down the cluster and retain it for future
         * use, set <i>SkipFinalClusterSnapshot</i> to <code>false</code> and specify a
         * name for <i>FinalClusterSnapshotIdentifier</i>. You can later restore this
         * snapshot to resume using the cluster. If a final cluster snapshot is requested,
         * the status of the cluster will be "final-snapshot" while the snapshot is being
         * taken, then it's "deleting" once Amazon Redshift begins deleting the cluster.
         * </p> <p> For more information about managing clusters, go to <a
         * href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-clusters.html">Amazon
         * Redshift Clusters</a> in the <i>Amazon Redshift Cluster Management
         * Guide</i>.</p>
         */
        virtual Model::DeleteClusterOutcome DeleteCluster(const Model::DeleteClusterRequest& request) const;

        /**
         * <p>Deletes a previously provisioned cluster. A successful response from the web
         * service indicates that the request was received correctly. Use
         * <a>DescribeClusters</a> to monitor the status of the deletion. The delete
         * operation cannot be canceled or reverted once submitted. For more information
         * about managing clusters, go to <a
         * href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-clusters.html">Amazon
         * Redshift Clusters</a> in the <i>Amazon Redshift Cluster Management
         * Guide</i>.</p> <p>If you want to shut down the cluster and retain it for future
         * use, set <i>SkipFinalClusterSnapshot</i> to <code>false</code> and specify a
         * name for <i>FinalClusterSnapshotIdentifier</i>. You can later restore this
         * snapshot to resume using the cluster. If a final cluster snapshot is requested,
         * the status of the cluster will be "final-snapshot" while the snapshot is being
         * taken, then it's "deleting" once Amazon Redshift begins deleting the cluster.
         * </p> <p> For more information about managing clusters, go to <a
         * href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-clusters.html">Amazon
         * Redshift Clusters</a> in the <i>Amazon Redshift Cluster Management
         * Guide</i>.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteClusterOutcomeCallable DeleteClusterCallable(const Model::DeleteClusterRequest& request) const;

        /**
         * <p>Deletes a previously provisioned cluster. A successful response from the web
         * service indicates that the request was received correctly. Use
         * <a>DescribeClusters</a> to monitor the status of the deletion. The delete
         * operation cannot be canceled or reverted once submitted. For more information
         * about managing clusters, go to <a
         * href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-clusters.html">Amazon
         * Redshift Clusters</a> in the <i>Amazon Redshift Cluster Management
         * Guide</i>.</p> <p>If you want to shut down the cluster and retain it for future
         * use, set <i>SkipFinalClusterSnapshot</i> to <code>false</code> and specify a
         * name for <i>FinalClusterSnapshotIdentifier</i>. You can later restore this
         * snapshot to resume using the cluster. If a final cluster snapshot is requested,
         * the status of the cluster will be "final-snapshot" while the snapshot is being
         * taken, then it's "deleting" once Amazon Redshift begins deleting the cluster.
         * </p> <p> For more information about managing clusters, go to <a
         * href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-clusters.html">Amazon
         * Redshift Clusters</a> in the <i>Amazon Redshift Cluster Management
         * Guide</i>.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteClusterAsync(const Model::DeleteClusterRequest& request, const DeleteClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a specified Amazon Redshift parameter group.</p> <note> <p>You cannot
         * delete a parameter group if it is associated with a cluster.</p> </note>
         */
        virtual Model::DeleteClusterParameterGroupOutcome DeleteClusterParameterGroup(const Model::DeleteClusterParameterGroupRequest& request) const;

        /**
         * <p>Deletes a specified Amazon Redshift parameter group.</p> <note> <p>You cannot
         * delete a parameter group if it is associated with a cluster.</p> </note>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteClusterParameterGroupOutcomeCallable DeleteClusterParameterGroupCallable(const Model::DeleteClusterParameterGroupRequest& request) const;

        /**
         * <p>Deletes a specified Amazon Redshift parameter group.</p> <note> <p>You cannot
         * delete a parameter group if it is associated with a cluster.</p> </note>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteClusterParameterGroupAsync(const Model::DeleteClusterParameterGroupRequest& request, const DeleteClusterParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an Amazon Redshift security group.</p> <note> <p>You cannot delete a
         * security group that is associated with any clusters. You cannot delete the
         * default security group.</p> </note> <p> For information about managing security
         * groups, go to <a
         * href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-security-groups.html">Amazon
         * Redshift Cluster Security Groups</a> in the <i>Amazon Redshift Cluster
         * Management Guide</i>.</p>
         */
        virtual Model::DeleteClusterSecurityGroupOutcome DeleteClusterSecurityGroup(const Model::DeleteClusterSecurityGroupRequest& request) const;

        /**
         * <p>Deletes an Amazon Redshift security group.</p> <note> <p>You cannot delete a
         * security group that is associated with any clusters. You cannot delete the
         * default security group.</p> </note> <p> For information about managing security
         * groups, go to <a
         * href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-security-groups.html">Amazon
         * Redshift Cluster Security Groups</a> in the <i>Amazon Redshift Cluster
         * Management Guide</i>.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteClusterSecurityGroupOutcomeCallable DeleteClusterSecurityGroupCallable(const Model::DeleteClusterSecurityGroupRequest& request) const;

        /**
         * <p>Deletes an Amazon Redshift security group.</p> <note> <p>You cannot delete a
         * security group that is associated with any clusters. You cannot delete the
         * default security group.</p> </note> <p> For information about managing security
         * groups, go to <a
         * href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-security-groups.html">Amazon
         * Redshift Cluster Security Groups</a> in the <i>Amazon Redshift Cluster
         * Management Guide</i>.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteClusterSecurityGroupAsync(const Model::DeleteClusterSecurityGroupRequest& request, const DeleteClusterSecurityGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified manual snapshot. The snapshot must be in the
         * <code>available</code> state, with no other users authorized to access the
         * snapshot. </p> <p>Unlike automated snapshots, manual snapshots are retained even
         * after you delete your cluster. Amazon Redshift does not delete your manual
         * snapshots. You must delete manual snapshot explicitly to avoid getting charged.
         * If other accounts are authorized to access the snapshot, you must revoke all of
         * the authorizations before you can delete the snapshot.</p>
         */
        virtual Model::DeleteClusterSnapshotOutcome DeleteClusterSnapshot(const Model::DeleteClusterSnapshotRequest& request) const;

        /**
         * <p>Deletes the specified manual snapshot. The snapshot must be in the
         * <code>available</code> state, with no other users authorized to access the
         * snapshot. </p> <p>Unlike automated snapshots, manual snapshots are retained even
         * after you delete your cluster. Amazon Redshift does not delete your manual
         * snapshots. You must delete manual snapshot explicitly to avoid getting charged.
         * If other accounts are authorized to access the snapshot, you must revoke all of
         * the authorizations before you can delete the snapshot.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteClusterSnapshotOutcomeCallable DeleteClusterSnapshotCallable(const Model::DeleteClusterSnapshotRequest& request) const;

        /**
         * <p>Deletes the specified manual snapshot. The snapshot must be in the
         * <code>available</code> state, with no other users authorized to access the
         * snapshot. </p> <p>Unlike automated snapshots, manual snapshots are retained even
         * after you delete your cluster. Amazon Redshift does not delete your manual
         * snapshots. You must delete manual snapshot explicitly to avoid getting charged.
         * If other accounts are authorized to access the snapshot, you must revoke all of
         * the authorizations before you can delete the snapshot.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteClusterSnapshotAsync(const Model::DeleteClusterSnapshotRequest& request, const DeleteClusterSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified cluster subnet group.</p>
         */
        virtual Model::DeleteClusterSubnetGroupOutcome DeleteClusterSubnetGroup(const Model::DeleteClusterSubnetGroupRequest& request) const;

        /**
         * <p>Deletes the specified cluster subnet group.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteClusterSubnetGroupOutcomeCallable DeleteClusterSubnetGroupCallable(const Model::DeleteClusterSubnetGroupRequest& request) const;

        /**
         * <p>Deletes the specified cluster subnet group.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteClusterSubnetGroupAsync(const Model::DeleteClusterSubnetGroupRequest& request, const DeleteClusterSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an Amazon Redshift event notification subscription.</p>
         */
        virtual Model::DeleteEventSubscriptionOutcome DeleteEventSubscription(const Model::DeleteEventSubscriptionRequest& request) const;

        /**
         * <p>Deletes an Amazon Redshift event notification subscription.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteEventSubscriptionOutcomeCallable DeleteEventSubscriptionCallable(const Model::DeleteEventSubscriptionRequest& request) const;

        /**
         * <p>Deletes an Amazon Redshift event notification subscription.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteEventSubscriptionAsync(const Model::DeleteEventSubscriptionRequest& request, const DeleteEventSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified HSM client certificate.</p>
         */
        virtual Model::DeleteHsmClientCertificateOutcome DeleteHsmClientCertificate(const Model::DeleteHsmClientCertificateRequest& request) const;

        /**
         * <p>Deletes the specified HSM client certificate.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteHsmClientCertificateOutcomeCallable DeleteHsmClientCertificateCallable(const Model::DeleteHsmClientCertificateRequest& request) const;

        /**
         * <p>Deletes the specified HSM client certificate.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteHsmClientCertificateAsync(const Model::DeleteHsmClientCertificateRequest& request, const DeleteHsmClientCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified Amazon Redshift HSM configuration.</p>
         */
        virtual Model::DeleteHsmConfigurationOutcome DeleteHsmConfiguration(const Model::DeleteHsmConfigurationRequest& request) const;

        /**
         * <p>Deletes the specified Amazon Redshift HSM configuration.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteHsmConfigurationOutcomeCallable DeleteHsmConfigurationCallable(const Model::DeleteHsmConfigurationRequest& request) const;

        /**
         * <p>Deletes the specified Amazon Redshift HSM configuration.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteHsmConfigurationAsync(const Model::DeleteHsmConfigurationRequest& request, const DeleteHsmConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified snapshot copy grant.</p>
         */
        virtual Model::DeleteSnapshotCopyGrantOutcome DeleteSnapshotCopyGrant(const Model::DeleteSnapshotCopyGrantRequest& request) const;

        /**
         * <p>Deletes the specified snapshot copy grant.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteSnapshotCopyGrantOutcomeCallable DeleteSnapshotCopyGrantCallable(const Model::DeleteSnapshotCopyGrantRequest& request) const;

        /**
         * <p>Deletes the specified snapshot copy grant.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteSnapshotCopyGrantAsync(const Model::DeleteSnapshotCopyGrantRequest& request, const DeleteSnapshotCopyGrantResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a tag or tags from a resource. You must provide the ARN of the
         * resource from which you want to delete the tag or tags.</p>
         */
        virtual Model::DeleteTagsOutcome DeleteTags(const Model::DeleteTagsRequest& request) const;

        /**
         * <p>Deletes a tag or tags from a resource. You must provide the ARN of the
         * resource from which you want to delete the tag or tags.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteTagsOutcomeCallable DeleteTagsCallable(const Model::DeleteTagsRequest& request) const;

        /**
         * <p>Deletes a tag or tags from a resource. You must provide the ARN of the
         * resource from which you want to delete the tag or tags.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteTagsAsync(const Model::DeleteTagsRequest& request, const DeleteTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of Amazon Redshift parameter groups, including parameter
         * groups you created and the default parameter group. For each parameter group,
         * the response includes the parameter group name, description, and parameter group
         * family name. You can optionally specify a name to retrieve the description of a
         * specific parameter group.</p> <p> For more information about parameters and
         * parameter groups, go to <a
         * href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-parameter-groups.html">Amazon
         * Redshift Parameter Groups</a> in the <i>Amazon Redshift Cluster Management
         * Guide</i>.</p> <p>If you specify both tag keys and tag values in the same
         * request, Amazon Redshift returns all parameter groups that match any combination
         * of the specified keys and values. For example, if you have <code>owner</code>
         * and <code>environment</code> for tag keys, and <code>admin</code> and
         * <code>test</code> for tag values, all parameter groups that have any combination
         * of those values are returned.</p> <p>If both tag keys and values are omitted
         * from the request, parameter groups are returned regardless of whether they have
         * tag keys or values associated with them.</p>
         */
        virtual Model::DescribeClusterParameterGroupsOutcome DescribeClusterParameterGroups(const Model::DescribeClusterParameterGroupsRequest& request) const;

        /**
         * <p>Returns a list of Amazon Redshift parameter groups, including parameter
         * groups you created and the default parameter group. For each parameter group,
         * the response includes the parameter group name, description, and parameter group
         * family name. You can optionally specify a name to retrieve the description of a
         * specific parameter group.</p> <p> For more information about parameters and
         * parameter groups, go to <a
         * href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-parameter-groups.html">Amazon
         * Redshift Parameter Groups</a> in the <i>Amazon Redshift Cluster Management
         * Guide</i>.</p> <p>If you specify both tag keys and tag values in the same
         * request, Amazon Redshift returns all parameter groups that match any combination
         * of the specified keys and values. For example, if you have <code>owner</code>
         * and <code>environment</code> for tag keys, and <code>admin</code> and
         * <code>test</code> for tag values, all parameter groups that have any combination
         * of those values are returned.</p> <p>If both tag keys and values are omitted
         * from the request, parameter groups are returned regardless of whether they have
         * tag keys or values associated with them.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeClusterParameterGroupsOutcomeCallable DescribeClusterParameterGroupsCallable(const Model::DescribeClusterParameterGroupsRequest& request) const;

        /**
         * <p>Returns a list of Amazon Redshift parameter groups, including parameter
         * groups you created and the default parameter group. For each parameter group,
         * the response includes the parameter group name, description, and parameter group
         * family name. You can optionally specify a name to retrieve the description of a
         * specific parameter group.</p> <p> For more information about parameters and
         * parameter groups, go to <a
         * href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-parameter-groups.html">Amazon
         * Redshift Parameter Groups</a> in the <i>Amazon Redshift Cluster Management
         * Guide</i>.</p> <p>If you specify both tag keys and tag values in the same
         * request, Amazon Redshift returns all parameter groups that match any combination
         * of the specified keys and values. For example, if you have <code>owner</code>
         * and <code>environment</code> for tag keys, and <code>admin</code> and
         * <code>test</code> for tag values, all parameter groups that have any combination
         * of those values are returned.</p> <p>If both tag keys and values are omitted
         * from the request, parameter groups are returned regardless of whether they have
         * tag keys or values associated with them.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeClusterParameterGroupsAsync(const Model::DescribeClusterParameterGroupsRequest& request, const DescribeClusterParameterGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a detailed list of parameters contained within the specified Amazon
         * Redshift parameter group. For each parameter the response includes information
         * such as parameter name, description, data type, value, whether the parameter
         * value is modifiable, and so on.</p> <p>You can specify <i>source</i> filter to
         * retrieve parameters of only specific type. For example, to retrieve parameters
         * that were modified by a user action such as from
         * <a>ModifyClusterParameterGroup</a>, you can specify <i>source</i> equal to
         * <i>user</i>.</p> <p> For more information about parameters and parameter groups,
         * go to <a
         * href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-parameter-groups.html">Amazon
         * Redshift Parameter Groups</a> in the <i>Amazon Redshift Cluster Management
         * Guide</i>.</p>
         */
        virtual Model::DescribeClusterParametersOutcome DescribeClusterParameters(const Model::DescribeClusterParametersRequest& request) const;

        /**
         * <p>Returns a detailed list of parameters contained within the specified Amazon
         * Redshift parameter group. For each parameter the response includes information
         * such as parameter name, description, data type, value, whether the parameter
         * value is modifiable, and so on.</p> <p>You can specify <i>source</i> filter to
         * retrieve parameters of only specific type. For example, to retrieve parameters
         * that were modified by a user action such as from
         * <a>ModifyClusterParameterGroup</a>, you can specify <i>source</i> equal to
         * <i>user</i>.</p> <p> For more information about parameters and parameter groups,
         * go to <a
         * href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-parameter-groups.html">Amazon
         * Redshift Parameter Groups</a> in the <i>Amazon Redshift Cluster Management
         * Guide</i>.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeClusterParametersOutcomeCallable DescribeClusterParametersCallable(const Model::DescribeClusterParametersRequest& request) const;

        /**
         * <p>Returns a detailed list of parameters contained within the specified Amazon
         * Redshift parameter group. For each parameter the response includes information
         * such as parameter name, description, data type, value, whether the parameter
         * value is modifiable, and so on.</p> <p>You can specify <i>source</i> filter to
         * retrieve parameters of only specific type. For example, to retrieve parameters
         * that were modified by a user action such as from
         * <a>ModifyClusterParameterGroup</a>, you can specify <i>source</i> equal to
         * <i>user</i>.</p> <p> For more information about parameters and parameter groups,
         * go to <a
         * href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-parameter-groups.html">Amazon
         * Redshift Parameter Groups</a> in the <i>Amazon Redshift Cluster Management
         * Guide</i>.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeClusterParametersAsync(const Model::DescribeClusterParametersRequest& request, const DescribeClusterParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about Amazon Redshift security groups. If the name of a
         * security group is specified, the response will contain only information about
         * only that security group.</p> <p> For information about managing security
         * groups, go to <a
         * href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-security-groups.html">Amazon
         * Redshift Cluster Security Groups</a> in the <i>Amazon Redshift Cluster
         * Management Guide</i>.</p> <p>If you specify both tag keys and tag values in the
         * same request, Amazon Redshift returns all security groups that match any
         * combination of the specified keys and values. For example, if you have
         * <code>owner</code> and <code>environment</code> for tag keys, and
         * <code>admin</code> and <code>test</code> for tag values, all security groups
         * that have any combination of those values are returned.</p> <p>If both tag keys
         * and values are omitted from the request, security groups are returned regardless
         * of whether they have tag keys or values associated with them.</p>
         */
        virtual Model::DescribeClusterSecurityGroupsOutcome DescribeClusterSecurityGroups(const Model::DescribeClusterSecurityGroupsRequest& request) const;

        /**
         * <p>Returns information about Amazon Redshift security groups. If the name of a
         * security group is specified, the response will contain only information about
         * only that security group.</p> <p> For information about managing security
         * groups, go to <a
         * href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-security-groups.html">Amazon
         * Redshift Cluster Security Groups</a> in the <i>Amazon Redshift Cluster
         * Management Guide</i>.</p> <p>If you specify both tag keys and tag values in the
         * same request, Amazon Redshift returns all security groups that match any
         * combination of the specified keys and values. For example, if you have
         * <code>owner</code> and <code>environment</code> for tag keys, and
         * <code>admin</code> and <code>test</code> for tag values, all security groups
         * that have any combination of those values are returned.</p> <p>If both tag keys
         * and values are omitted from the request, security groups are returned regardless
         * of whether they have tag keys or values associated with them.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeClusterSecurityGroupsOutcomeCallable DescribeClusterSecurityGroupsCallable(const Model::DescribeClusterSecurityGroupsRequest& request) const;

        /**
         * <p>Returns information about Amazon Redshift security groups. If the name of a
         * security group is specified, the response will contain only information about
         * only that security group.</p> <p> For information about managing security
         * groups, go to <a
         * href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-security-groups.html">Amazon
         * Redshift Cluster Security Groups</a> in the <i>Amazon Redshift Cluster
         * Management Guide</i>.</p> <p>If you specify both tag keys and tag values in the
         * same request, Amazon Redshift returns all security groups that match any
         * combination of the specified keys and values. For example, if you have
         * <code>owner</code> and <code>environment</code> for tag keys, and
         * <code>admin</code> and <code>test</code> for tag values, all security groups
         * that have any combination of those values are returned.</p> <p>If both tag keys
         * and values are omitted from the request, security groups are returned regardless
         * of whether they have tag keys or values associated with them.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeClusterSecurityGroupsAsync(const Model::DescribeClusterSecurityGroupsRequest& request, const DescribeClusterSecurityGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns one or more snapshot objects, which contain metadata about your
         * cluster snapshots. By default, this operation returns information about all
         * snapshots of all clusters that are owned by you AWS customer account. No
         * information is returned for snapshots owned by inactive AWS customer
         * accounts.</p> <p>If you specify both tag keys and tag values in the same
         * request, Amazon Redshift returns all snapshots that match any combination of the
         * specified keys and values. For example, if you have <code>owner</code> and
         * <code>environment</code> for tag keys, and <code>admin</code> and
         * <code>test</code> for tag values, all snapshots that have any combination of
         * those values are returned. Only snapshots that you own are returned in the
         * response; shared snapshots are not returned with the tag key and tag value
         * request parameters.</p> <p>If both tag keys and values are omitted from the
         * request, snapshots are returned regardless of whether they have tag keys or
         * values associated with them.</p>
         */
        virtual Model::DescribeClusterSnapshotsOutcome DescribeClusterSnapshots(const Model::DescribeClusterSnapshotsRequest& request) const;

        /**
         * <p>Returns one or more snapshot objects, which contain metadata about your
         * cluster snapshots. By default, this operation returns information about all
         * snapshots of all clusters that are owned by you AWS customer account. No
         * information is returned for snapshots owned by inactive AWS customer
         * accounts.</p> <p>If you specify both tag keys and tag values in the same
         * request, Amazon Redshift returns all snapshots that match any combination of the
         * specified keys and values. For example, if you have <code>owner</code> and
         * <code>environment</code> for tag keys, and <code>admin</code> and
         * <code>test</code> for tag values, all snapshots that have any combination of
         * those values are returned. Only snapshots that you own are returned in the
         * response; shared snapshots are not returned with the tag key and tag value
         * request parameters.</p> <p>If both tag keys and values are omitted from the
         * request, snapshots are returned regardless of whether they have tag keys or
         * values associated with them.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeClusterSnapshotsOutcomeCallable DescribeClusterSnapshotsCallable(const Model::DescribeClusterSnapshotsRequest& request) const;

        /**
         * <p>Returns one or more snapshot objects, which contain metadata about your
         * cluster snapshots. By default, this operation returns information about all
         * snapshots of all clusters that are owned by you AWS customer account. No
         * information is returned for snapshots owned by inactive AWS customer
         * accounts.</p> <p>If you specify both tag keys and tag values in the same
         * request, Amazon Redshift returns all snapshots that match any combination of the
         * specified keys and values. For example, if you have <code>owner</code> and
         * <code>environment</code> for tag keys, and <code>admin</code> and
         * <code>test</code> for tag values, all snapshots that have any combination of
         * those values are returned. Only snapshots that you own are returned in the
         * response; shared snapshots are not returned with the tag key and tag value
         * request parameters.</p> <p>If both tag keys and values are omitted from the
         * request, snapshots are returned regardless of whether they have tag keys or
         * values associated with them.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeClusterSnapshotsAsync(const Model::DescribeClusterSnapshotsRequest& request, const DescribeClusterSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns one or more cluster subnet group objects, which contain metadata
         * about your cluster subnet groups. By default, this operation returns information
         * about all cluster subnet groups that are defined in you AWS account.</p> <p>If
         * you specify both tag keys and tag values in the same request, Amazon Redshift
         * returns all subnet groups that match any combination of the specified keys and
         * values. For example, if you have <code>owner</code> and <code>environment</code>
         * for tag keys, and <code>admin</code> and <code>test</code> for tag values, all
         * subnet groups that have any combination of those values are returned.</p> <p>If
         * both tag keys and values are omitted from the request, subnet groups are
         * returned regardless of whether they have tag keys or values associated with
         * them.</p>
         */
        virtual Model::DescribeClusterSubnetGroupsOutcome DescribeClusterSubnetGroups(const Model::DescribeClusterSubnetGroupsRequest& request) const;

        /**
         * <p>Returns one or more cluster subnet group objects, which contain metadata
         * about your cluster subnet groups. By default, this operation returns information
         * about all cluster subnet groups that are defined in you AWS account.</p> <p>If
         * you specify both tag keys and tag values in the same request, Amazon Redshift
         * returns all subnet groups that match any combination of the specified keys and
         * values. For example, if you have <code>owner</code> and <code>environment</code>
         * for tag keys, and <code>admin</code> and <code>test</code> for tag values, all
         * subnet groups that have any combination of those values are returned.</p> <p>If
         * both tag keys and values are omitted from the request, subnet groups are
         * returned regardless of whether they have tag keys or values associated with
         * them.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeClusterSubnetGroupsOutcomeCallable DescribeClusterSubnetGroupsCallable(const Model::DescribeClusterSubnetGroupsRequest& request) const;

        /**
         * <p>Returns one or more cluster subnet group objects, which contain metadata
         * about your cluster subnet groups. By default, this operation returns information
         * about all cluster subnet groups that are defined in you AWS account.</p> <p>If
         * you specify both tag keys and tag values in the same request, Amazon Redshift
         * returns all subnet groups that match any combination of the specified keys and
         * values. For example, if you have <code>owner</code> and <code>environment</code>
         * for tag keys, and <code>admin</code> and <code>test</code> for tag values, all
         * subnet groups that have any combination of those values are returned.</p> <p>If
         * both tag keys and values are omitted from the request, subnet groups are
         * returned regardless of whether they have tag keys or values associated with
         * them.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeClusterSubnetGroupsAsync(const Model::DescribeClusterSubnetGroupsRequest& request, const DescribeClusterSubnetGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns descriptions of the available Amazon Redshift cluster versions. You
         * can call this operation even before creating any clusters to learn more about
         * the Amazon Redshift versions. For more information about managing clusters, go
         * to <a
         * href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-clusters.html">Amazon
         * Redshift Clusters</a> in the <i>Amazon Redshift Cluster Management
         * Guide</i>.</p>
         */
        virtual Model::DescribeClusterVersionsOutcome DescribeClusterVersions(const Model::DescribeClusterVersionsRequest& request) const;

        /**
         * <p>Returns descriptions of the available Amazon Redshift cluster versions. You
         * can call this operation even before creating any clusters to learn more about
         * the Amazon Redshift versions. For more information about managing clusters, go
         * to <a
         * href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-clusters.html">Amazon
         * Redshift Clusters</a> in the <i>Amazon Redshift Cluster Management
         * Guide</i>.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeClusterVersionsOutcomeCallable DescribeClusterVersionsCallable(const Model::DescribeClusterVersionsRequest& request) const;

        /**
         * <p>Returns descriptions of the available Amazon Redshift cluster versions. You
         * can call this operation even before creating any clusters to learn more about
         * the Amazon Redshift versions. For more information about managing clusters, go
         * to <a
         * href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-clusters.html">Amazon
         * Redshift Clusters</a> in the <i>Amazon Redshift Cluster Management
         * Guide</i>.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeClusterVersionsAsync(const Model::DescribeClusterVersionsRequest& request, const DescribeClusterVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns properties of provisioned clusters including general cluster
         * properties, cluster database properties, maintenance and backup properties, and
         * security and access properties. This operation supports pagination. For more
         * information about managing clusters, go to <a
         * href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-clusters.html">Amazon
         * Redshift Clusters</a> in the <i>Amazon Redshift Cluster Management
         * Guide</i>.</p> <p>If you specify both tag keys and tag values in the same
         * request, Amazon Redshift returns all clusters that match any combination of the
         * specified keys and values. For example, if you have <code>owner</code> and
         * <code>environment</code> for tag keys, and <code>admin</code> and
         * <code>test</code> for tag values, all clusters that have any combination of
         * those values are returned.</p> <p>If both tag keys and values are omitted from
         * the request, clusters are returned regardless of whether they have tag keys or
         * values associated with them.</p>
         */
        virtual Model::DescribeClustersOutcome DescribeClusters(const Model::DescribeClustersRequest& request) const;

        /**
         * <p>Returns properties of provisioned clusters including general cluster
         * properties, cluster database properties, maintenance and backup properties, and
         * security and access properties. This operation supports pagination. For more
         * information about managing clusters, go to <a
         * href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-clusters.html">Amazon
         * Redshift Clusters</a> in the <i>Amazon Redshift Cluster Management
         * Guide</i>.</p> <p>If you specify both tag keys and tag values in the same
         * request, Amazon Redshift returns all clusters that match any combination of the
         * specified keys and values. For example, if you have <code>owner</code> and
         * <code>environment</code> for tag keys, and <code>admin</code> and
         * <code>test</code> for tag values, all clusters that have any combination of
         * those values are returned.</p> <p>If both tag keys and values are omitted from
         * the request, clusters are returned regardless of whether they have tag keys or
         * values associated with them.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeClustersOutcomeCallable DescribeClustersCallable(const Model::DescribeClustersRequest& request) const;

        /**
         * <p>Returns properties of provisioned clusters including general cluster
         * properties, cluster database properties, maintenance and backup properties, and
         * security and access properties. This operation supports pagination. For more
         * information about managing clusters, go to <a
         * href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-clusters.html">Amazon
         * Redshift Clusters</a> in the <i>Amazon Redshift Cluster Management
         * Guide</i>.</p> <p>If you specify both tag keys and tag values in the same
         * request, Amazon Redshift returns all clusters that match any combination of the
         * specified keys and values. For example, if you have <code>owner</code> and
         * <code>environment</code> for tag keys, and <code>admin</code> and
         * <code>test</code> for tag values, all clusters that have any combination of
         * those values are returned.</p> <p>If both tag keys and values are omitted from
         * the request, clusters are returned regardless of whether they have tag keys or
         * values associated with them.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeClustersAsync(const Model::DescribeClustersRequest& request, const DescribeClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of parameter settings for the specified parameter group
         * family.</p> <p> For more information about parameters and parameter groups, go
         * to <a
         * href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-parameter-groups.html">Amazon
         * Redshift Parameter Groups</a> in the <i>Amazon Redshift Cluster Management
         * Guide</i>.</p>
         */
        virtual Model::DescribeDefaultClusterParametersOutcome DescribeDefaultClusterParameters(const Model::DescribeDefaultClusterParametersRequest& request) const;

        /**
         * <p>Returns a list of parameter settings for the specified parameter group
         * family.</p> <p> For more information about parameters and parameter groups, go
         * to <a
         * href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-parameter-groups.html">Amazon
         * Redshift Parameter Groups</a> in the <i>Amazon Redshift Cluster Management
         * Guide</i>.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDefaultClusterParametersOutcomeCallable DescribeDefaultClusterParametersCallable(const Model::DescribeDefaultClusterParametersRequest& request) const;

        /**
         * <p>Returns a list of parameter settings for the specified parameter group
         * family.</p> <p> For more information about parameters and parameter groups, go
         * to <a
         * href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-parameter-groups.html">Amazon
         * Redshift Parameter Groups</a> in the <i>Amazon Redshift Cluster Management
         * Guide</i>.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDefaultClusterParametersAsync(const Model::DescribeDefaultClusterParametersRequest& request, const DescribeDefaultClusterParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Displays a list of event categories for all event source types, or for a
         * specified source type. For a list of the event categories and source types, go
         * to <a
         * href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-event-notifications.html">Amazon
         * Redshift Event Notifications</a>.</p>
         */
        virtual Model::DescribeEventCategoriesOutcome DescribeEventCategories(const Model::DescribeEventCategoriesRequest& request) const;

        /**
         * <p>Displays a list of event categories for all event source types, or for a
         * specified source type. For a list of the event categories and source types, go
         * to <a
         * href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-event-notifications.html">Amazon
         * Redshift Event Notifications</a>.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeEventCategoriesOutcomeCallable DescribeEventCategoriesCallable(const Model::DescribeEventCategoriesRequest& request) const;

        /**
         * <p>Displays a list of event categories for all event source types, or for a
         * specified source type. For a list of the event categories and source types, go
         * to <a
         * href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-event-notifications.html">Amazon
         * Redshift Event Notifications</a>.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeEventCategoriesAsync(const Model::DescribeEventCategoriesRequest& request, const DescribeEventCategoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists descriptions of all the Amazon Redshift event notifications
         * subscription for a customer account. If you specify a subscription name, lists
         * the description for that subscription.</p>
         */
        virtual Model::DescribeEventSubscriptionsOutcome DescribeEventSubscriptions(const Model::DescribeEventSubscriptionsRequest& request) const;

        /**
         * <p>Lists descriptions of all the Amazon Redshift event notifications
         * subscription for a customer account. If you specify a subscription name, lists
         * the description for that subscription.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeEventSubscriptionsOutcomeCallable DescribeEventSubscriptionsCallable(const Model::DescribeEventSubscriptionsRequest& request) const;

        /**
         * <p>Lists descriptions of all the Amazon Redshift event notifications
         * subscription for a customer account. If you specify a subscription name, lists
         * the description for that subscription.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeEventSubscriptionsAsync(const Model::DescribeEventSubscriptionsRequest& request, const DescribeEventSubscriptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns events related to clusters, security groups, snapshots, and parameter
         * groups for the past 14 days. Events specific to a particular cluster, security
         * group, snapshot or parameter group can be obtained by providing the name as a
         * parameter. By default, the past hour of events are returned.</p>
         */
        virtual Model::DescribeEventsOutcome DescribeEvents(const Model::DescribeEventsRequest& request) const;

        /**
         * <p>Returns events related to clusters, security groups, snapshots, and parameter
         * groups for the past 14 days. Events specific to a particular cluster, security
         * group, snapshot or parameter group can be obtained by providing the name as a
         * parameter. By default, the past hour of events are returned.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeEventsOutcomeCallable DescribeEventsCallable(const Model::DescribeEventsRequest& request) const;

        /**
         * <p>Returns events related to clusters, security groups, snapshots, and parameter
         * groups for the past 14 days. Events specific to a particular cluster, security
         * group, snapshot or parameter group can be obtained by providing the name as a
         * parameter. By default, the past hour of events are returned.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeEventsAsync(const Model::DescribeEventsRequest& request, const DescribeEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about the specified HSM client certificate. If no
         * certificate ID is specified, returns information about all the HSM certificates
         * owned by your AWS customer account.</p> <p>If you specify both tag keys and tag
         * values in the same request, Amazon Redshift returns all HSM client certificates
         * that match any combination of the specified keys and values. For example, if you
         * have <code>owner</code> and <code>environment</code> for tag keys, and
         * <code>admin</code> and <code>test</code> for tag values, all HSM client
         * certificates that have any combination of those values are returned.</p> <p>If
         * both tag keys and values are omitted from the request, HSM client certificates
         * are returned regardless of whether they have tag keys or values associated with
         * them.</p>
         */
        virtual Model::DescribeHsmClientCertificatesOutcome DescribeHsmClientCertificates(const Model::DescribeHsmClientCertificatesRequest& request) const;

        /**
         * <p>Returns information about the specified HSM client certificate. If no
         * certificate ID is specified, returns information about all the HSM certificates
         * owned by your AWS customer account.</p> <p>If you specify both tag keys and tag
         * values in the same request, Amazon Redshift returns all HSM client certificates
         * that match any combination of the specified keys and values. For example, if you
         * have <code>owner</code> and <code>environment</code> for tag keys, and
         * <code>admin</code> and <code>test</code> for tag values, all HSM client
         * certificates that have any combination of those values are returned.</p> <p>If
         * both tag keys and values are omitted from the request, HSM client certificates
         * are returned regardless of whether they have tag keys or values associated with
         * them.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeHsmClientCertificatesOutcomeCallable DescribeHsmClientCertificatesCallable(const Model::DescribeHsmClientCertificatesRequest& request) const;

        /**
         * <p>Returns information about the specified HSM client certificate. If no
         * certificate ID is specified, returns information about all the HSM certificates
         * owned by your AWS customer account.</p> <p>If you specify both tag keys and tag
         * values in the same request, Amazon Redshift returns all HSM client certificates
         * that match any combination of the specified keys and values. For example, if you
         * have <code>owner</code> and <code>environment</code> for tag keys, and
         * <code>admin</code> and <code>test</code> for tag values, all HSM client
         * certificates that have any combination of those values are returned.</p> <p>If
         * both tag keys and values are omitted from the request, HSM client certificates
         * are returned regardless of whether they have tag keys or values associated with
         * them.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeHsmClientCertificatesAsync(const Model::DescribeHsmClientCertificatesRequest& request, const DescribeHsmClientCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about the specified Amazon Redshift HSM configuration. If
         * no configuration ID is specified, returns information about all the HSM
         * configurations owned by your AWS customer account.</p> <p>If you specify both
         * tag keys and tag values in the same request, Amazon Redshift returns all HSM
         * connections that match any combination of the specified keys and values. For
         * example, if you have <code>owner</code> and <code>environment</code> for tag
         * keys, and <code>admin</code> and <code>test</code> for tag values, all HSM
         * connections that have any combination of those values are returned.</p> <p>If
         * both tag keys and values are omitted from the request, HSM connections are
         * returned regardless of whether they have tag keys or values associated with
         * them.</p>
         */
        virtual Model::DescribeHsmConfigurationsOutcome DescribeHsmConfigurations(const Model::DescribeHsmConfigurationsRequest& request) const;

        /**
         * <p>Returns information about the specified Amazon Redshift HSM configuration. If
         * no configuration ID is specified, returns information about all the HSM
         * configurations owned by your AWS customer account.</p> <p>If you specify both
         * tag keys and tag values in the same request, Amazon Redshift returns all HSM
         * connections that match any combination of the specified keys and values. For
         * example, if you have <code>owner</code> and <code>environment</code> for tag
         * keys, and <code>admin</code> and <code>test</code> for tag values, all HSM
         * connections that have any combination of those values are returned.</p> <p>If
         * both tag keys and values are omitted from the request, HSM connections are
         * returned regardless of whether they have tag keys or values associated with
         * them.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeHsmConfigurationsOutcomeCallable DescribeHsmConfigurationsCallable(const Model::DescribeHsmConfigurationsRequest& request) const;

        /**
         * <p>Returns information about the specified Amazon Redshift HSM configuration. If
         * no configuration ID is specified, returns information about all the HSM
         * configurations owned by your AWS customer account.</p> <p>If you specify both
         * tag keys and tag values in the same request, Amazon Redshift returns all HSM
         * connections that match any combination of the specified keys and values. For
         * example, if you have <code>owner</code> and <code>environment</code> for tag
         * keys, and <code>admin</code> and <code>test</code> for tag values, all HSM
         * connections that have any combination of those values are returned.</p> <p>If
         * both tag keys and values are omitted from the request, HSM connections are
         * returned regardless of whether they have tag keys or values associated with
         * them.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeHsmConfigurationsAsync(const Model::DescribeHsmConfigurationsRequest& request, const DescribeHsmConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes whether information, such as queries and connection attempts, is
         * being logged for the specified Amazon Redshift cluster.</p>
         */
        virtual Model::DescribeLoggingStatusOutcome DescribeLoggingStatus(const Model::DescribeLoggingStatusRequest& request) const;

        /**
         * <p>Describes whether information, such as queries and connection attempts, is
         * being logged for the specified Amazon Redshift cluster.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeLoggingStatusOutcomeCallable DescribeLoggingStatusCallable(const Model::DescribeLoggingStatusRequest& request) const;

        /**
         * <p>Describes whether information, such as queries and connection attempts, is
         * being logged for the specified Amazon Redshift cluster.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeLoggingStatusAsync(const Model::DescribeLoggingStatusRequest& request, const DescribeLoggingStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of orderable cluster options. Before you create a new cluster
         * you can use this operation to find what options are available, such as the EC2
         * Availability Zones (AZ) in the specific AWS region that you can specify, and the
         * node types you can request. The node types differ by available storage, memory,
         * CPU and price. With the cost involved you might want to obtain a list of cluster
         * options in the specific region and specify values when creating a cluster. For
         * more information about managing clusters, go to <a
         * href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-clusters.html">Amazon
         * Redshift Clusters</a> in the <i>Amazon Redshift Cluster Management
         * Guide</i>.</p>
         */
        virtual Model::DescribeOrderableClusterOptionsOutcome DescribeOrderableClusterOptions(const Model::DescribeOrderableClusterOptionsRequest& request) const;

        /**
         * <p>Returns a list of orderable cluster options. Before you create a new cluster
         * you can use this operation to find what options are available, such as the EC2
         * Availability Zones (AZ) in the specific AWS region that you can specify, and the
         * node types you can request. The node types differ by available storage, memory,
         * CPU and price. With the cost involved you might want to obtain a list of cluster
         * options in the specific region and specify values when creating a cluster. For
         * more information about managing clusters, go to <a
         * href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-clusters.html">Amazon
         * Redshift Clusters</a> in the <i>Amazon Redshift Cluster Management
         * Guide</i>.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeOrderableClusterOptionsOutcomeCallable DescribeOrderableClusterOptionsCallable(const Model::DescribeOrderableClusterOptionsRequest& request) const;

        /**
         * <p>Returns a list of orderable cluster options. Before you create a new cluster
         * you can use this operation to find what options are available, such as the EC2
         * Availability Zones (AZ) in the specific AWS region that you can specify, and the
         * node types you can request. The node types differ by available storage, memory,
         * CPU and price. With the cost involved you might want to obtain a list of cluster
         * options in the specific region and specify values when creating a cluster. For
         * more information about managing clusters, go to <a
         * href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-clusters.html">Amazon
         * Redshift Clusters</a> in the <i>Amazon Redshift Cluster Management
         * Guide</i>.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeOrderableClusterOptionsAsync(const Model::DescribeOrderableClusterOptionsRequest& request, const DescribeOrderableClusterOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of the available reserved node offerings by Amazon Redshift
         * with their descriptions including the node type, the fixed and recurring costs
         * of reserving the node and duration the node will be reserved for you. These
         * descriptions help you determine which reserve node offering you want to
         * purchase. You then use the unique offering ID in you call to
         * <a>PurchaseReservedNodeOffering</a> to reserve one or more nodes for your Amazon
         * Redshift cluster. </p> <p> For more information about reserved node offerings,
         * go to <a
         * href="http://docs.aws.amazon.com/redshift/latest/mgmt/purchase-reserved-node-instance.html">Purchasing
         * Reserved Nodes</a> in the <i>Amazon Redshift Cluster Management Guide</i>.</p>
         */
        virtual Model::DescribeReservedNodeOfferingsOutcome DescribeReservedNodeOfferings(const Model::DescribeReservedNodeOfferingsRequest& request) const;

        /**
         * <p>Returns a list of the available reserved node offerings by Amazon Redshift
         * with their descriptions including the node type, the fixed and recurring costs
         * of reserving the node and duration the node will be reserved for you. These
         * descriptions help you determine which reserve node offering you want to
         * purchase. You then use the unique offering ID in you call to
         * <a>PurchaseReservedNodeOffering</a> to reserve one or more nodes for your Amazon
         * Redshift cluster. </p> <p> For more information about reserved node offerings,
         * go to <a
         * href="http://docs.aws.amazon.com/redshift/latest/mgmt/purchase-reserved-node-instance.html">Purchasing
         * Reserved Nodes</a> in the <i>Amazon Redshift Cluster Management Guide</i>.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeReservedNodeOfferingsOutcomeCallable DescribeReservedNodeOfferingsCallable(const Model::DescribeReservedNodeOfferingsRequest& request) const;

        /**
         * <p>Returns a list of the available reserved node offerings by Amazon Redshift
         * with their descriptions including the node type, the fixed and recurring costs
         * of reserving the node and duration the node will be reserved for you. These
         * descriptions help you determine which reserve node offering you want to
         * purchase. You then use the unique offering ID in you call to
         * <a>PurchaseReservedNodeOffering</a> to reserve one or more nodes for your Amazon
         * Redshift cluster. </p> <p> For more information about reserved node offerings,
         * go to <a
         * href="http://docs.aws.amazon.com/redshift/latest/mgmt/purchase-reserved-node-instance.html">Purchasing
         * Reserved Nodes</a> in the <i>Amazon Redshift Cluster Management Guide</i>.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeReservedNodeOfferingsAsync(const Model::DescribeReservedNodeOfferingsRequest& request, const DescribeReservedNodeOfferingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the descriptions of the reserved nodes.</p>
         */
        virtual Model::DescribeReservedNodesOutcome DescribeReservedNodes(const Model::DescribeReservedNodesRequest& request) const;

        /**
         * <p>Returns the descriptions of the reserved nodes.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeReservedNodesOutcomeCallable DescribeReservedNodesCallable(const Model::DescribeReservedNodesRequest& request) const;

        /**
         * <p>Returns the descriptions of the reserved nodes.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeReservedNodesAsync(const Model::DescribeReservedNodesRequest& request, const DescribeReservedNodesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about the last resize operation for the specified
         * cluster. If no resize operation has ever been initiated for the specified
         * cluster, a <code>HTTP 404</code> error is returned. If a resize operation was
         * initiated and completed, the status of the resize remains as
         * <code>SUCCEEDED</code> until the next resize. </p> <p>A resize operation can be
         * requested using <a>ModifyCluster</a> and specifying a different number or type
         * of nodes for the cluster. </p>
         */
        virtual Model::DescribeResizeOutcome DescribeResize(const Model::DescribeResizeRequest& request) const;

        /**
         * <p>Returns information about the last resize operation for the specified
         * cluster. If no resize operation has ever been initiated for the specified
         * cluster, a <code>HTTP 404</code> error is returned. If a resize operation was
         * initiated and completed, the status of the resize remains as
         * <code>SUCCEEDED</code> until the next resize. </p> <p>A resize operation can be
         * requested using <a>ModifyCluster</a> and specifying a different number or type
         * of nodes for the cluster. </p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeResizeOutcomeCallable DescribeResizeCallable(const Model::DescribeResizeRequest& request) const;

        /**
         * <p>Returns information about the last resize operation for the specified
         * cluster. If no resize operation has ever been initiated for the specified
         * cluster, a <code>HTTP 404</code> error is returned. If a resize operation was
         * initiated and completed, the status of the resize remains as
         * <code>SUCCEEDED</code> until the next resize. </p> <p>A resize operation can be
         * requested using <a>ModifyCluster</a> and specifying a different number or type
         * of nodes for the cluster. </p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeResizeAsync(const Model::DescribeResizeRequest& request, const DescribeResizeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of snapshot copy grants owned by the AWS account in the
         * destination region.</p> <p> For more information about managing snapshot copy
         * grants, go to <a
         * href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-db-encryption.html">Amazon
         * Redshift Database Encryption</a> in the <i>Amazon Redshift Cluster Management
         * Guide</i>. </p>
         */
        virtual Model::DescribeSnapshotCopyGrantsOutcome DescribeSnapshotCopyGrants(const Model::DescribeSnapshotCopyGrantsRequest& request) const;

        /**
         * <p>Returns a list of snapshot copy grants owned by the AWS account in the
         * destination region.</p> <p> For more information about managing snapshot copy
         * grants, go to <a
         * href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-db-encryption.html">Amazon
         * Redshift Database Encryption</a> in the <i>Amazon Redshift Cluster Management
         * Guide</i>. </p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeSnapshotCopyGrantsOutcomeCallable DescribeSnapshotCopyGrantsCallable(const Model::DescribeSnapshotCopyGrantsRequest& request) const;

        /**
         * <p>Returns a list of snapshot copy grants owned by the AWS account in the
         * destination region.</p> <p> For more information about managing snapshot copy
         * grants, go to <a
         * href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-db-encryption.html">Amazon
         * Redshift Database Encryption</a> in the <i>Amazon Redshift Cluster Management
         * Guide</i>. </p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeSnapshotCopyGrantsAsync(const Model::DescribeSnapshotCopyGrantsRequest& request, const DescribeSnapshotCopyGrantsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the status of one or more table restore requests made using the
         * <a>RestoreTableFromClusterSnapshot</a> API action. If you don't specify a value
         * for the <code>TableRestoreRequestId</code> parameter, then
         * <code>DescribeTableRestoreStatus</code> returns the status of all table restore
         * requests ordered by the date and time of the request in ascending order.
         * Otherwise <code>DescribeTableRestoreStatus</code> returns the status of the
         * table specified by <code>TableRestoreRequestId</code>.</p>
         */
        virtual Model::DescribeTableRestoreStatusOutcome DescribeTableRestoreStatus(const Model::DescribeTableRestoreStatusRequest& request) const;

        /**
         * <p>Lists the status of one or more table restore requests made using the
         * <a>RestoreTableFromClusterSnapshot</a> API action. If you don't specify a value
         * for the <code>TableRestoreRequestId</code> parameter, then
         * <code>DescribeTableRestoreStatus</code> returns the status of all table restore
         * requests ordered by the date and time of the request in ascending order.
         * Otherwise <code>DescribeTableRestoreStatus</code> returns the status of the
         * table specified by <code>TableRestoreRequestId</code>.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeTableRestoreStatusOutcomeCallable DescribeTableRestoreStatusCallable(const Model::DescribeTableRestoreStatusRequest& request) const;

        /**
         * <p>Lists the status of one or more table restore requests made using the
         * <a>RestoreTableFromClusterSnapshot</a> API action. If you don't specify a value
         * for the <code>TableRestoreRequestId</code> parameter, then
         * <code>DescribeTableRestoreStatus</code> returns the status of all table restore
         * requests ordered by the date and time of the request in ascending order.
         * Otherwise <code>DescribeTableRestoreStatus</code> returns the status of the
         * table specified by <code>TableRestoreRequestId</code>.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeTableRestoreStatusAsync(const Model::DescribeTableRestoreStatusRequest& request, const DescribeTableRestoreStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of tags. You can return tags from a specific resource by
         * specifying an ARN, or you can return all tags for a given type of resource, such
         * as clusters, snapshots, and so on.</p> <p>The following are limitations for
         * <code>DescribeTags</code>: </p> <ul> <li> <p>You cannot specify an ARN and a
         * resource-type value together in the same request.</p> </li> <li> <p>You cannot
         * use the <code>MaxRecords</code> and <code>Marker</code> parameters together with
         * the ARN parameter.</p> </li> <li> <p>The <code>MaxRecords</code> parameter can
         * be a range from 10 to 50 results to return in a request.</p> </li> </ul> <p>If
         * you specify both tag keys and tag values in the same request, Amazon Redshift
         * returns all resources that match any combination of the specified keys and
         * values. For example, if you have <code>owner</code> and <code>environment</code>
         * for tag keys, and <code>admin</code> and <code>test</code> for tag values, all
         * resources that have any combination of those values are returned.</p> <p>If both
         * tag keys and values are omitted from the request, resources are returned
         * regardless of whether they have tag keys or values associated with them.</p>
         */
        virtual Model::DescribeTagsOutcome DescribeTags(const Model::DescribeTagsRequest& request) const;

        /**
         * <p>Returns a list of tags. You can return tags from a specific resource by
         * specifying an ARN, or you can return all tags for a given type of resource, such
         * as clusters, snapshots, and so on.</p> <p>The following are limitations for
         * <code>DescribeTags</code>: </p> <ul> <li> <p>You cannot specify an ARN and a
         * resource-type value together in the same request.</p> </li> <li> <p>You cannot
         * use the <code>MaxRecords</code> and <code>Marker</code> parameters together with
         * the ARN parameter.</p> </li> <li> <p>The <code>MaxRecords</code> parameter can
         * be a range from 10 to 50 results to return in a request.</p> </li> </ul> <p>If
         * you specify both tag keys and tag values in the same request, Amazon Redshift
         * returns all resources that match any combination of the specified keys and
         * values. For example, if you have <code>owner</code> and <code>environment</code>
         * for tag keys, and <code>admin</code> and <code>test</code> for tag values, all
         * resources that have any combination of those values are returned.</p> <p>If both
         * tag keys and values are omitted from the request, resources are returned
         * regardless of whether they have tag keys or values associated with them.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeTagsOutcomeCallable DescribeTagsCallable(const Model::DescribeTagsRequest& request) const;

        /**
         * <p>Returns a list of tags. You can return tags from a specific resource by
         * specifying an ARN, or you can return all tags for a given type of resource, such
         * as clusters, snapshots, and so on.</p> <p>The following are limitations for
         * <code>DescribeTags</code>: </p> <ul> <li> <p>You cannot specify an ARN and a
         * resource-type value together in the same request.</p> </li> <li> <p>You cannot
         * use the <code>MaxRecords</code> and <code>Marker</code> parameters together with
         * the ARN parameter.</p> </li> <li> <p>The <code>MaxRecords</code> parameter can
         * be a range from 10 to 50 results to return in a request.</p> </li> </ul> <p>If
         * you specify both tag keys and tag values in the same request, Amazon Redshift
         * returns all resources that match any combination of the specified keys and
         * values. For example, if you have <code>owner</code> and <code>environment</code>
         * for tag keys, and <code>admin</code> and <code>test</code> for tag values, all
         * resources that have any combination of those values are returned.</p> <p>If both
         * tag keys and values are omitted from the request, resources are returned
         * regardless of whether they have tag keys or values associated with them.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeTagsAsync(const Model::DescribeTagsRequest& request, const DescribeTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stops logging information, such as queries and connection attempts, for the
         * specified Amazon Redshift cluster.</p>
         */
        virtual Model::DisableLoggingOutcome DisableLogging(const Model::DisableLoggingRequest& request) const;

        /**
         * <p>Stops logging information, such as queries and connection attempts, for the
         * specified Amazon Redshift cluster.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisableLoggingOutcomeCallable DisableLoggingCallable(const Model::DisableLoggingRequest& request) const;

        /**
         * <p>Stops logging information, such as queries and connection attempts, for the
         * specified Amazon Redshift cluster.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisableLoggingAsync(const Model::DisableLoggingRequest& request, const DisableLoggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disables the automatic copying of snapshots from one region to another region
         * for a specified cluster.</p> <p>If your cluster and its snapshots are encrypted
         * using a customer master key (CMK) from AWS KMS, use
         * <a>DeleteSnapshotCopyGrant</a> to delete the grant that grants Amazon Redshift
         * permission to the CMK in the destination region. </p>
         */
        virtual Model::DisableSnapshotCopyOutcome DisableSnapshotCopy(const Model::DisableSnapshotCopyRequest& request) const;

        /**
         * <p>Disables the automatic copying of snapshots from one region to another region
         * for a specified cluster.</p> <p>If your cluster and its snapshots are encrypted
         * using a customer master key (CMK) from AWS KMS, use
         * <a>DeleteSnapshotCopyGrant</a> to delete the grant that grants Amazon Redshift
         * permission to the CMK in the destination region. </p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisableSnapshotCopyOutcomeCallable DisableSnapshotCopyCallable(const Model::DisableSnapshotCopyRequest& request) const;

        /**
         * <p>Disables the automatic copying of snapshots from one region to another region
         * for a specified cluster.</p> <p>If your cluster and its snapshots are encrypted
         * using a customer master key (CMK) from AWS KMS, use
         * <a>DeleteSnapshotCopyGrant</a> to delete the grant that grants Amazon Redshift
         * permission to the CMK in the destination region. </p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisableSnapshotCopyAsync(const Model::DisableSnapshotCopyRequest& request, const DisableSnapshotCopyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts logging information, such as queries and connection attempts, for the
         * specified Amazon Redshift cluster.</p>
         */
        virtual Model::EnableLoggingOutcome EnableLogging(const Model::EnableLoggingRequest& request) const;

        /**
         * <p>Starts logging information, such as queries and connection attempts, for the
         * specified Amazon Redshift cluster.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::EnableLoggingOutcomeCallable EnableLoggingCallable(const Model::EnableLoggingRequest& request) const;

        /**
         * <p>Starts logging information, such as queries and connection attempts, for the
         * specified Amazon Redshift cluster.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void EnableLoggingAsync(const Model::EnableLoggingRequest& request, const EnableLoggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Enables the automatic copy of snapshots from one region to another region for
         * a specified cluster.</p>
         */
        virtual Model::EnableSnapshotCopyOutcome EnableSnapshotCopy(const Model::EnableSnapshotCopyRequest& request) const;

        /**
         * <p>Enables the automatic copy of snapshots from one region to another region for
         * a specified cluster.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::EnableSnapshotCopyOutcomeCallable EnableSnapshotCopyCallable(const Model::EnableSnapshotCopyRequest& request) const;

        /**
         * <p>Enables the automatic copy of snapshots from one region to another region for
         * a specified cluster.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void EnableSnapshotCopyAsync(const Model::EnableSnapshotCopyRequest& request, const EnableSnapshotCopyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the settings for a cluster. For example, you can add another
         * security or parameter group, update the preferred maintenance window, or change
         * the master user password. Resetting a cluster password or modifying the security
         * groups associated with a cluster do not need a reboot. However, modifying a
         * parameter group requires a reboot for parameters to take effect. For more
         * information about managing clusters, go to <a
         * href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-clusters.html">Amazon
         * Redshift Clusters</a> in the <i>Amazon Redshift Cluster Management
         * Guide</i>.</p> <p>You can also change node type and the number of nodes to scale
         * up or down the cluster. When resizing a cluster, you must specify both the
         * number of nodes and the node type even if one of the parameters does not
         * change.</p>
         */
        virtual Model::ModifyClusterOutcome ModifyCluster(const Model::ModifyClusterRequest& request) const;

        /**
         * <p>Modifies the settings for a cluster. For example, you can add another
         * security or parameter group, update the preferred maintenance window, or change
         * the master user password. Resetting a cluster password or modifying the security
         * groups associated with a cluster do not need a reboot. However, modifying a
         * parameter group requires a reboot for parameters to take effect. For more
         * information about managing clusters, go to <a
         * href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-clusters.html">Amazon
         * Redshift Clusters</a> in the <i>Amazon Redshift Cluster Management
         * Guide</i>.</p> <p>You can also change node type and the number of nodes to scale
         * up or down the cluster. When resizing a cluster, you must specify both the
         * number of nodes and the node type even if one of the parameters does not
         * change.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyClusterOutcomeCallable ModifyClusterCallable(const Model::ModifyClusterRequest& request) const;

        /**
         * <p>Modifies the settings for a cluster. For example, you can add another
         * security or parameter group, update the preferred maintenance window, or change
         * the master user password. Resetting a cluster password or modifying the security
         * groups associated with a cluster do not need a reboot. However, modifying a
         * parameter group requires a reboot for parameters to take effect. For more
         * information about managing clusters, go to <a
         * href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-clusters.html">Amazon
         * Redshift Clusters</a> in the <i>Amazon Redshift Cluster Management
         * Guide</i>.</p> <p>You can also change node type and the number of nodes to scale
         * up or down the cluster. When resizing a cluster, you must specify both the
         * number of nodes and the node type even if one of the parameters does not
         * change.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyClusterAsync(const Model::ModifyClusterRequest& request, const ModifyClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the list of AWS Identity and Access Management (IAM) roles that can
         * be used by the cluster to access other AWS services.</p> <p>A cluster can have
         * up to 10 IAM roles associated at any time.</p>
         */
        virtual Model::ModifyClusterIamRolesOutcome ModifyClusterIamRoles(const Model::ModifyClusterIamRolesRequest& request) const;

        /**
         * <p>Modifies the list of AWS Identity and Access Management (IAM) roles that can
         * be used by the cluster to access other AWS services.</p> <p>A cluster can have
         * up to 10 IAM roles associated at any time.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyClusterIamRolesOutcomeCallable ModifyClusterIamRolesCallable(const Model::ModifyClusterIamRolesRequest& request) const;

        /**
         * <p>Modifies the list of AWS Identity and Access Management (IAM) roles that can
         * be used by the cluster to access other AWS services.</p> <p>A cluster can have
         * up to 10 IAM roles associated at any time.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyClusterIamRolesAsync(const Model::ModifyClusterIamRolesRequest& request, const ModifyClusterIamRolesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the parameters of a parameter group.</p> <p> For more information
         * about parameters and parameter groups, go to <a
         * href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-parameter-groups.html">Amazon
         * Redshift Parameter Groups</a> in the <i>Amazon Redshift Cluster Management
         * Guide</i>.</p>
         */
        virtual Model::ModifyClusterParameterGroupOutcome ModifyClusterParameterGroup(const Model::ModifyClusterParameterGroupRequest& request) const;

        /**
         * <p>Modifies the parameters of a parameter group.</p> <p> For more information
         * about parameters and parameter groups, go to <a
         * href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-parameter-groups.html">Amazon
         * Redshift Parameter Groups</a> in the <i>Amazon Redshift Cluster Management
         * Guide</i>.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyClusterParameterGroupOutcomeCallable ModifyClusterParameterGroupCallable(const Model::ModifyClusterParameterGroupRequest& request) const;

        /**
         * <p>Modifies the parameters of a parameter group.</p> <p> For more information
         * about parameters and parameter groups, go to <a
         * href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-parameter-groups.html">Amazon
         * Redshift Parameter Groups</a> in the <i>Amazon Redshift Cluster Management
         * Guide</i>.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyClusterParameterGroupAsync(const Model::ModifyClusterParameterGroupRequest& request, const ModifyClusterParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies a cluster subnet group to include the specified list of VPC subnets.
         * The operation replaces the existing list of subnets with the new list of
         * subnets.</p>
         */
        virtual Model::ModifyClusterSubnetGroupOutcome ModifyClusterSubnetGroup(const Model::ModifyClusterSubnetGroupRequest& request) const;

        /**
         * <p>Modifies a cluster subnet group to include the specified list of VPC subnets.
         * The operation replaces the existing list of subnets with the new list of
         * subnets.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyClusterSubnetGroupOutcomeCallable ModifyClusterSubnetGroupCallable(const Model::ModifyClusterSubnetGroupRequest& request) const;

        /**
         * <p>Modifies a cluster subnet group to include the specified list of VPC subnets.
         * The operation replaces the existing list of subnets with the new list of
         * subnets.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyClusterSubnetGroupAsync(const Model::ModifyClusterSubnetGroupRequest& request, const ModifyClusterSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies an existing Amazon Redshift event notification subscription.</p>
         */
        virtual Model::ModifyEventSubscriptionOutcome ModifyEventSubscription(const Model::ModifyEventSubscriptionRequest& request) const;

        /**
         * <p>Modifies an existing Amazon Redshift event notification subscription.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyEventSubscriptionOutcomeCallable ModifyEventSubscriptionCallable(const Model::ModifyEventSubscriptionRequest& request) const;

        /**
         * <p>Modifies an existing Amazon Redshift event notification subscription.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyEventSubscriptionAsync(const Model::ModifyEventSubscriptionRequest& request, const ModifyEventSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the number of days to retain automated snapshots in the destination
         * region after they are copied from the source region.</p>
         */
        virtual Model::ModifySnapshotCopyRetentionPeriodOutcome ModifySnapshotCopyRetentionPeriod(const Model::ModifySnapshotCopyRetentionPeriodRequest& request) const;

        /**
         * <p>Modifies the number of days to retain automated snapshots in the destination
         * region after they are copied from the source region.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifySnapshotCopyRetentionPeriodOutcomeCallable ModifySnapshotCopyRetentionPeriodCallable(const Model::ModifySnapshotCopyRetentionPeriodRequest& request) const;

        /**
         * <p>Modifies the number of days to retain automated snapshots in the destination
         * region after they are copied from the source region.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifySnapshotCopyRetentionPeriodAsync(const Model::ModifySnapshotCopyRetentionPeriodRequest& request, const ModifySnapshotCopyRetentionPeriodResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Allows you to purchase reserved nodes. Amazon Redshift offers a predefined
         * set of reserved node offerings. You can purchase one or more of the offerings.
         * You can call the <a>DescribeReservedNodeOfferings</a> API to obtain the
         * available reserved node offerings. You can call this API by providing a specific
         * reserved node offering and the number of nodes you want to reserve. </p> <p> For
         * more information about reserved node offerings, go to <a
         * href="http://docs.aws.amazon.com/redshift/latest/mgmt/purchase-reserved-node-instance.html">Purchasing
         * Reserved Nodes</a> in the <i>Amazon Redshift Cluster Management Guide</i>.</p>
         */
        virtual Model::PurchaseReservedNodeOfferingOutcome PurchaseReservedNodeOffering(const Model::PurchaseReservedNodeOfferingRequest& request) const;

        /**
         * <p>Allows you to purchase reserved nodes. Amazon Redshift offers a predefined
         * set of reserved node offerings. You can purchase one or more of the offerings.
         * You can call the <a>DescribeReservedNodeOfferings</a> API to obtain the
         * available reserved node offerings. You can call this API by providing a specific
         * reserved node offering and the number of nodes you want to reserve. </p> <p> For
         * more information about reserved node offerings, go to <a
         * href="http://docs.aws.amazon.com/redshift/latest/mgmt/purchase-reserved-node-instance.html">Purchasing
         * Reserved Nodes</a> in the <i>Amazon Redshift Cluster Management Guide</i>.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PurchaseReservedNodeOfferingOutcomeCallable PurchaseReservedNodeOfferingCallable(const Model::PurchaseReservedNodeOfferingRequest& request) const;

        /**
         * <p>Allows you to purchase reserved nodes. Amazon Redshift offers a predefined
         * set of reserved node offerings. You can purchase one or more of the offerings.
         * You can call the <a>DescribeReservedNodeOfferings</a> API to obtain the
         * available reserved node offerings. You can call this API by providing a specific
         * reserved node offering and the number of nodes you want to reserve. </p> <p> For
         * more information about reserved node offerings, go to <a
         * href="http://docs.aws.amazon.com/redshift/latest/mgmt/purchase-reserved-node-instance.html">Purchasing
         * Reserved Nodes</a> in the <i>Amazon Redshift Cluster Management Guide</i>.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PurchaseReservedNodeOfferingAsync(const Model::PurchaseReservedNodeOfferingRequest& request, const PurchaseReservedNodeOfferingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Reboots a cluster. This action is taken as soon as possible. It results in a
         * momentary outage to the cluster, during which the cluster status is set to
         * <code>rebooting</code>. A cluster event is created when the reboot is completed.
         * Any pending cluster modifications (see <a>ModifyCluster</a>) are applied at this
         * reboot. For more information about managing clusters, go to <a
         * href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-clusters.html">Amazon
         * Redshift Clusters</a> in the <i>Amazon Redshift Cluster Management Guide</i>.
         * </p>
         */
        virtual Model::RebootClusterOutcome RebootCluster(const Model::RebootClusterRequest& request) const;

        /**
         * <p>Reboots a cluster. This action is taken as soon as possible. It results in a
         * momentary outage to the cluster, during which the cluster status is set to
         * <code>rebooting</code>. A cluster event is created when the reboot is completed.
         * Any pending cluster modifications (see <a>ModifyCluster</a>) are applied at this
         * reboot. For more information about managing clusters, go to <a
         * href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-clusters.html">Amazon
         * Redshift Clusters</a> in the <i>Amazon Redshift Cluster Management Guide</i>.
         * </p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RebootClusterOutcomeCallable RebootClusterCallable(const Model::RebootClusterRequest& request) const;

        /**
         * <p>Reboots a cluster. This action is taken as soon as possible. It results in a
         * momentary outage to the cluster, during which the cluster status is set to
         * <code>rebooting</code>. A cluster event is created when the reboot is completed.
         * Any pending cluster modifications (see <a>ModifyCluster</a>) are applied at this
         * reboot. For more information about managing clusters, go to <a
         * href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-clusters.html">Amazon
         * Redshift Clusters</a> in the <i>Amazon Redshift Cluster Management Guide</i>.
         * </p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RebootClusterAsync(const Model::RebootClusterRequest& request, const RebootClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sets one or more parameters of the specified parameter group to their default
         * values and sets the source values of the parameters to "engine-default". To
         * reset the entire parameter group specify the <i>ResetAllParameters</i>
         * parameter. For parameter changes to take effect you must reboot any associated
         * clusters. </p>
         */
        virtual Model::ResetClusterParameterGroupOutcome ResetClusterParameterGroup(const Model::ResetClusterParameterGroupRequest& request) const;

        /**
         * <p>Sets one or more parameters of the specified parameter group to their default
         * values and sets the source values of the parameters to "engine-default". To
         * reset the entire parameter group specify the <i>ResetAllParameters</i>
         * parameter. For parameter changes to take effect you must reboot any associated
         * clusters. </p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ResetClusterParameterGroupOutcomeCallable ResetClusterParameterGroupCallable(const Model::ResetClusterParameterGroupRequest& request) const;

        /**
         * <p>Sets one or more parameters of the specified parameter group to their default
         * values and sets the source values of the parameters to "engine-default". To
         * reset the entire parameter group specify the <i>ResetAllParameters</i>
         * parameter. For parameter changes to take effect you must reboot any associated
         * clusters. </p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ResetClusterParameterGroupAsync(const Model::ResetClusterParameterGroupRequest& request, const ResetClusterParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new cluster from a snapshot. By default, Amazon Redshift creates
         * the resulting cluster with the same configuration as the original cluster from
         * which the snapshot was created, except that the new cluster is created with the
         * default cluster security and parameter groups. After Amazon Redshift creates the
         * cluster, you can use the <a>ModifyCluster</a> API to associate a different
         * security group and different parameter group with the restored cluster. If you
         * are using a DS node type, you can also choose to change to another DS node type
         * of the same size during restore.</p> <p>If you restore a cluster into a VPC, you
         * must provide a cluster subnet group where you want the cluster restored.</p> <p>
         * For more information about working with snapshots, go to <a
         * href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-snapshots.html">Amazon
         * Redshift Snapshots</a> in the <i>Amazon Redshift Cluster Management
         * Guide</i>.</p>
         */
        virtual Model::RestoreFromClusterSnapshotOutcome RestoreFromClusterSnapshot(const Model::RestoreFromClusterSnapshotRequest& request) const;

        /**
         * <p>Creates a new cluster from a snapshot. By default, Amazon Redshift creates
         * the resulting cluster with the same configuration as the original cluster from
         * which the snapshot was created, except that the new cluster is created with the
         * default cluster security and parameter groups. After Amazon Redshift creates the
         * cluster, you can use the <a>ModifyCluster</a> API to associate a different
         * security group and different parameter group with the restored cluster. If you
         * are using a DS node type, you can also choose to change to another DS node type
         * of the same size during restore.</p> <p>If you restore a cluster into a VPC, you
         * must provide a cluster subnet group where you want the cluster restored.</p> <p>
         * For more information about working with snapshots, go to <a
         * href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-snapshots.html">Amazon
         * Redshift Snapshots</a> in the <i>Amazon Redshift Cluster Management
         * Guide</i>.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RestoreFromClusterSnapshotOutcomeCallable RestoreFromClusterSnapshotCallable(const Model::RestoreFromClusterSnapshotRequest& request) const;

        /**
         * <p>Creates a new cluster from a snapshot. By default, Amazon Redshift creates
         * the resulting cluster with the same configuration as the original cluster from
         * which the snapshot was created, except that the new cluster is created with the
         * default cluster security and parameter groups. After Amazon Redshift creates the
         * cluster, you can use the <a>ModifyCluster</a> API to associate a different
         * security group and different parameter group with the restored cluster. If you
         * are using a DS node type, you can also choose to change to another DS node type
         * of the same size during restore.</p> <p>If you restore a cluster into a VPC, you
         * must provide a cluster subnet group where you want the cluster restored.</p> <p>
         * For more information about working with snapshots, go to <a
         * href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-snapshots.html">Amazon
         * Redshift Snapshots</a> in the <i>Amazon Redshift Cluster Management
         * Guide</i>.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RestoreFromClusterSnapshotAsync(const Model::RestoreFromClusterSnapshotRequest& request, const RestoreFromClusterSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new table from a table in an Amazon Redshift cluster snapshot. You
         * must create the new table within the Amazon Redshift cluster that the snapshot
         * was taken from.</p> <p>You cannot use
         * <code>RestoreTableFromClusterSnapshot</code> to restore a table with the same
         * name as an existing table in an Amazon Redshift cluster. That is, you cannot
         * overwrite an existing table in a cluster with a restored table. If you want to
         * replace your original table with a new, restored table, then rename or drop your
         * original table before you call <code>RestoreTableFromClusterSnapshot</code>.
         * When you have renamed your original table, then you can pass the original name
         * of the table as the <code>NewTableName</code> parameter value in the call to
         * <code>RestoreTableFromClusterSnapshot</code>. This way, you can replace the
         * original table with the table created from the snapshot.</p>
         */
        virtual Model::RestoreTableFromClusterSnapshotOutcome RestoreTableFromClusterSnapshot(const Model::RestoreTableFromClusterSnapshotRequest& request) const;

        /**
         * <p>Creates a new table from a table in an Amazon Redshift cluster snapshot. You
         * must create the new table within the Amazon Redshift cluster that the snapshot
         * was taken from.</p> <p>You cannot use
         * <code>RestoreTableFromClusterSnapshot</code> to restore a table with the same
         * name as an existing table in an Amazon Redshift cluster. That is, you cannot
         * overwrite an existing table in a cluster with a restored table. If you want to
         * replace your original table with a new, restored table, then rename or drop your
         * original table before you call <code>RestoreTableFromClusterSnapshot</code>.
         * When you have renamed your original table, then you can pass the original name
         * of the table as the <code>NewTableName</code> parameter value in the call to
         * <code>RestoreTableFromClusterSnapshot</code>. This way, you can replace the
         * original table with the table created from the snapshot.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RestoreTableFromClusterSnapshotOutcomeCallable RestoreTableFromClusterSnapshotCallable(const Model::RestoreTableFromClusterSnapshotRequest& request) const;

        /**
         * <p>Creates a new table from a table in an Amazon Redshift cluster snapshot. You
         * must create the new table within the Amazon Redshift cluster that the snapshot
         * was taken from.</p> <p>You cannot use
         * <code>RestoreTableFromClusterSnapshot</code> to restore a table with the same
         * name as an existing table in an Amazon Redshift cluster. That is, you cannot
         * overwrite an existing table in a cluster with a restored table. If you want to
         * replace your original table with a new, restored table, then rename or drop your
         * original table before you call <code>RestoreTableFromClusterSnapshot</code>.
         * When you have renamed your original table, then you can pass the original name
         * of the table as the <code>NewTableName</code> parameter value in the call to
         * <code>RestoreTableFromClusterSnapshot</code>. This way, you can replace the
         * original table with the table created from the snapshot.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RestoreTableFromClusterSnapshotAsync(const Model::RestoreTableFromClusterSnapshotRequest& request, const RestoreTableFromClusterSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Revokes an ingress rule in an Amazon Redshift security group for a previously
         * authorized IP range or Amazon EC2 security group. To add an ingress rule, see
         * <a>AuthorizeClusterSecurityGroupIngress</a>. For information about managing
         * security groups, go to <a
         * href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-security-groups.html">Amazon
         * Redshift Cluster Security Groups</a> in the <i>Amazon Redshift Cluster
         * Management Guide</i>. </p>
         */
        virtual Model::RevokeClusterSecurityGroupIngressOutcome RevokeClusterSecurityGroupIngress(const Model::RevokeClusterSecurityGroupIngressRequest& request) const;

        /**
         * <p>Revokes an ingress rule in an Amazon Redshift security group for a previously
         * authorized IP range or Amazon EC2 security group. To add an ingress rule, see
         * <a>AuthorizeClusterSecurityGroupIngress</a>. For information about managing
         * security groups, go to <a
         * href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-security-groups.html">Amazon
         * Redshift Cluster Security Groups</a> in the <i>Amazon Redshift Cluster
         * Management Guide</i>. </p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RevokeClusterSecurityGroupIngressOutcomeCallable RevokeClusterSecurityGroupIngressCallable(const Model::RevokeClusterSecurityGroupIngressRequest& request) const;

        /**
         * <p>Revokes an ingress rule in an Amazon Redshift security group for a previously
         * authorized IP range or Amazon EC2 security group. To add an ingress rule, see
         * <a>AuthorizeClusterSecurityGroupIngress</a>. For information about managing
         * security groups, go to <a
         * href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-security-groups.html">Amazon
         * Redshift Cluster Security Groups</a> in the <i>Amazon Redshift Cluster
         * Management Guide</i>. </p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RevokeClusterSecurityGroupIngressAsync(const Model::RevokeClusterSecurityGroupIngressRequest& request, const RevokeClusterSecurityGroupIngressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the ability of the specified AWS customer account to restore the
         * specified snapshot. If the account is currently restoring the snapshot, the
         * restore will run to completion.</p> <p> For more information about working with
         * snapshots, go to <a
         * href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-snapshots.html">Amazon
         * Redshift Snapshots</a> in the <i>Amazon Redshift Cluster Management
         * Guide</i>.</p>
         */
        virtual Model::RevokeSnapshotAccessOutcome RevokeSnapshotAccess(const Model::RevokeSnapshotAccessRequest& request) const;

        /**
         * <p>Removes the ability of the specified AWS customer account to restore the
         * specified snapshot. If the account is currently restoring the snapshot, the
         * restore will run to completion.</p> <p> For more information about working with
         * snapshots, go to <a
         * href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-snapshots.html">Amazon
         * Redshift Snapshots</a> in the <i>Amazon Redshift Cluster Management
         * Guide</i>.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RevokeSnapshotAccessOutcomeCallable RevokeSnapshotAccessCallable(const Model::RevokeSnapshotAccessRequest& request) const;

        /**
         * <p>Removes the ability of the specified AWS customer account to restore the
         * specified snapshot. If the account is currently restoring the snapshot, the
         * restore will run to completion.</p> <p> For more information about working with
         * snapshots, go to <a
         * href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-snapshots.html">Amazon
         * Redshift Snapshots</a> in the <i>Amazon Redshift Cluster Management
         * Guide</i>.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RevokeSnapshotAccessAsync(const Model::RevokeSnapshotAccessRequest& request, const RevokeSnapshotAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Rotates the encryption keys for a cluster.</p>
         */
        virtual Model::RotateEncryptionKeyOutcome RotateEncryptionKey(const Model::RotateEncryptionKeyRequest& request) const;

        /**
         * <p>Rotates the encryption keys for a cluster.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RotateEncryptionKeyOutcomeCallable RotateEncryptionKeyCallable(const Model::RotateEncryptionKeyRequest& request) const;

        /**
         * <p>Rotates the encryption keys for a cluster.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RotateEncryptionKeyAsync(const Model::RotateEncryptionKeyRequest& request, const RotateEncryptionKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


  private:
    void init(const Client::ClientConfiguration& clientConfiguration);

        /**Async helpers**/
        void AuthorizeClusterSecurityGroupIngressAsyncHelper(const Model::AuthorizeClusterSecurityGroupIngressRequest& request, const AuthorizeClusterSecurityGroupIngressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AuthorizeSnapshotAccessAsyncHelper(const Model::AuthorizeSnapshotAccessRequest& request, const AuthorizeSnapshotAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CopyClusterSnapshotAsyncHelper(const Model::CopyClusterSnapshotRequest& request, const CopyClusterSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateClusterAsyncHelper(const Model::CreateClusterRequest& request, const CreateClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateClusterParameterGroupAsyncHelper(const Model::CreateClusterParameterGroupRequest& request, const CreateClusterParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateClusterSecurityGroupAsyncHelper(const Model::CreateClusterSecurityGroupRequest& request, const CreateClusterSecurityGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateClusterSnapshotAsyncHelper(const Model::CreateClusterSnapshotRequest& request, const CreateClusterSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateClusterSubnetGroupAsyncHelper(const Model::CreateClusterSubnetGroupRequest& request, const CreateClusterSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateEventSubscriptionAsyncHelper(const Model::CreateEventSubscriptionRequest& request, const CreateEventSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateHsmClientCertificateAsyncHelper(const Model::CreateHsmClientCertificateRequest& request, const CreateHsmClientCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateHsmConfigurationAsyncHelper(const Model::CreateHsmConfigurationRequest& request, const CreateHsmConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateSnapshotCopyGrantAsyncHelper(const Model::CreateSnapshotCopyGrantRequest& request, const CreateSnapshotCopyGrantResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateTagsAsyncHelper(const Model::CreateTagsRequest& request, const CreateTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteClusterAsyncHelper(const Model::DeleteClusterRequest& request, const DeleteClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteClusterParameterGroupAsyncHelper(const Model::DeleteClusterParameterGroupRequest& request, const DeleteClusterParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteClusterSecurityGroupAsyncHelper(const Model::DeleteClusterSecurityGroupRequest& request, const DeleteClusterSecurityGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteClusterSnapshotAsyncHelper(const Model::DeleteClusterSnapshotRequest& request, const DeleteClusterSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteClusterSubnetGroupAsyncHelper(const Model::DeleteClusterSubnetGroupRequest& request, const DeleteClusterSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteEventSubscriptionAsyncHelper(const Model::DeleteEventSubscriptionRequest& request, const DeleteEventSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteHsmClientCertificateAsyncHelper(const Model::DeleteHsmClientCertificateRequest& request, const DeleteHsmClientCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteHsmConfigurationAsyncHelper(const Model::DeleteHsmConfigurationRequest& request, const DeleteHsmConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteSnapshotCopyGrantAsyncHelper(const Model::DeleteSnapshotCopyGrantRequest& request, const DeleteSnapshotCopyGrantResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteTagsAsyncHelper(const Model::DeleteTagsRequest& request, const DeleteTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeClusterParameterGroupsAsyncHelper(const Model::DescribeClusterParameterGroupsRequest& request, const DescribeClusterParameterGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeClusterParametersAsyncHelper(const Model::DescribeClusterParametersRequest& request, const DescribeClusterParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeClusterSecurityGroupsAsyncHelper(const Model::DescribeClusterSecurityGroupsRequest& request, const DescribeClusterSecurityGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeClusterSnapshotsAsyncHelper(const Model::DescribeClusterSnapshotsRequest& request, const DescribeClusterSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeClusterSubnetGroupsAsyncHelper(const Model::DescribeClusterSubnetGroupsRequest& request, const DescribeClusterSubnetGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeClusterVersionsAsyncHelper(const Model::DescribeClusterVersionsRequest& request, const DescribeClusterVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeClustersAsyncHelper(const Model::DescribeClustersRequest& request, const DescribeClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDefaultClusterParametersAsyncHelper(const Model::DescribeDefaultClusterParametersRequest& request, const DescribeDefaultClusterParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeEventCategoriesAsyncHelper(const Model::DescribeEventCategoriesRequest& request, const DescribeEventCategoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeEventSubscriptionsAsyncHelper(const Model::DescribeEventSubscriptionsRequest& request, const DescribeEventSubscriptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeEventsAsyncHelper(const Model::DescribeEventsRequest& request, const DescribeEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeHsmClientCertificatesAsyncHelper(const Model::DescribeHsmClientCertificatesRequest& request, const DescribeHsmClientCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeHsmConfigurationsAsyncHelper(const Model::DescribeHsmConfigurationsRequest& request, const DescribeHsmConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeLoggingStatusAsyncHelper(const Model::DescribeLoggingStatusRequest& request, const DescribeLoggingStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeOrderableClusterOptionsAsyncHelper(const Model::DescribeOrderableClusterOptionsRequest& request, const DescribeOrderableClusterOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeReservedNodeOfferingsAsyncHelper(const Model::DescribeReservedNodeOfferingsRequest& request, const DescribeReservedNodeOfferingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeReservedNodesAsyncHelper(const Model::DescribeReservedNodesRequest& request, const DescribeReservedNodesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeResizeAsyncHelper(const Model::DescribeResizeRequest& request, const DescribeResizeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeSnapshotCopyGrantsAsyncHelper(const Model::DescribeSnapshotCopyGrantsRequest& request, const DescribeSnapshotCopyGrantsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeTableRestoreStatusAsyncHelper(const Model::DescribeTableRestoreStatusRequest& request, const DescribeTableRestoreStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeTagsAsyncHelper(const Model::DescribeTagsRequest& request, const DescribeTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisableLoggingAsyncHelper(const Model::DisableLoggingRequest& request, const DisableLoggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisableSnapshotCopyAsyncHelper(const Model::DisableSnapshotCopyRequest& request, const DisableSnapshotCopyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void EnableLoggingAsyncHelper(const Model::EnableLoggingRequest& request, const EnableLoggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void EnableSnapshotCopyAsyncHelper(const Model::EnableSnapshotCopyRequest& request, const EnableSnapshotCopyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ModifyClusterAsyncHelper(const Model::ModifyClusterRequest& request, const ModifyClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ModifyClusterIamRolesAsyncHelper(const Model::ModifyClusterIamRolesRequest& request, const ModifyClusterIamRolesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ModifyClusterParameterGroupAsyncHelper(const Model::ModifyClusterParameterGroupRequest& request, const ModifyClusterParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ModifyClusterSubnetGroupAsyncHelper(const Model::ModifyClusterSubnetGroupRequest& request, const ModifyClusterSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ModifyEventSubscriptionAsyncHelper(const Model::ModifyEventSubscriptionRequest& request, const ModifyEventSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ModifySnapshotCopyRetentionPeriodAsyncHelper(const Model::ModifySnapshotCopyRetentionPeriodRequest& request, const ModifySnapshotCopyRetentionPeriodResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PurchaseReservedNodeOfferingAsyncHelper(const Model::PurchaseReservedNodeOfferingRequest& request, const PurchaseReservedNodeOfferingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RebootClusterAsyncHelper(const Model::RebootClusterRequest& request, const RebootClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ResetClusterParameterGroupAsyncHelper(const Model::ResetClusterParameterGroupRequest& request, const ResetClusterParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RestoreFromClusterSnapshotAsyncHelper(const Model::RestoreFromClusterSnapshotRequest& request, const RestoreFromClusterSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RestoreTableFromClusterSnapshotAsyncHelper(const Model::RestoreTableFromClusterSnapshotRequest& request, const RestoreTableFromClusterSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RevokeClusterSecurityGroupIngressAsyncHelper(const Model::RevokeClusterSecurityGroupIngressRequest& request, const RevokeClusterSecurityGroupIngressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RevokeSnapshotAccessAsyncHelper(const Model::RevokeSnapshotAccessRequest& request, const RevokeSnapshotAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RotateEncryptionKeyAsyncHelper(const Model::RotateEncryptionKeyRequest& request, const RotateEncryptionKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

    Aws::String m_uri;
    std::shared_ptr<Utils::Threading::Executor> m_executor;
  };

} // namespace Redshift
} // namespace Aws
