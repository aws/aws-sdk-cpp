/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/dms/DatabaseMigrationServiceErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/dms/model/AddTagsToResourceResult.h>
#include <aws/dms/model/ApplyPendingMaintenanceActionResult.h>
#include <aws/dms/model/CreateEndpointResult.h>
#include <aws/dms/model/CreateEventSubscriptionResult.h>
#include <aws/dms/model/CreateReplicationInstanceResult.h>
#include <aws/dms/model/CreateReplicationSubnetGroupResult.h>
#include <aws/dms/model/CreateReplicationTaskResult.h>
#include <aws/dms/model/DeleteCertificateResult.h>
#include <aws/dms/model/DeleteEndpointResult.h>
#include <aws/dms/model/DeleteEventSubscriptionResult.h>
#include <aws/dms/model/DeleteReplicationInstanceResult.h>
#include <aws/dms/model/DeleteReplicationSubnetGroupResult.h>
#include <aws/dms/model/DeleteReplicationTaskResult.h>
#include <aws/dms/model/DescribeAccountAttributesResult.h>
#include <aws/dms/model/DescribeCertificatesResult.h>
#include <aws/dms/model/DescribeConnectionsResult.h>
#include <aws/dms/model/DescribeEndpointTypesResult.h>
#include <aws/dms/model/DescribeEndpointsResult.h>
#include <aws/dms/model/DescribeEventCategoriesResult.h>
#include <aws/dms/model/DescribeEventSubscriptionsResult.h>
#include <aws/dms/model/DescribeEventsResult.h>
#include <aws/dms/model/DescribeOrderableReplicationInstancesResult.h>
#include <aws/dms/model/DescribePendingMaintenanceActionsResult.h>
#include <aws/dms/model/DescribeRefreshSchemasStatusResult.h>
#include <aws/dms/model/DescribeReplicationInstanceTaskLogsResult.h>
#include <aws/dms/model/DescribeReplicationInstancesResult.h>
#include <aws/dms/model/DescribeReplicationSubnetGroupsResult.h>
#include <aws/dms/model/DescribeReplicationTaskAssessmentResultsResult.h>
#include <aws/dms/model/DescribeReplicationTasksResult.h>
#include <aws/dms/model/DescribeSchemasResult.h>
#include <aws/dms/model/DescribeTableStatisticsResult.h>
#include <aws/dms/model/ImportCertificateResult.h>
#include <aws/dms/model/ListTagsForResourceResult.h>
#include <aws/dms/model/ModifyEndpointResult.h>
#include <aws/dms/model/ModifyEventSubscriptionResult.h>
#include <aws/dms/model/ModifyReplicationInstanceResult.h>
#include <aws/dms/model/ModifyReplicationSubnetGroupResult.h>
#include <aws/dms/model/ModifyReplicationTaskResult.h>
#include <aws/dms/model/RebootReplicationInstanceResult.h>
#include <aws/dms/model/RefreshSchemasResult.h>
#include <aws/dms/model/ReloadTablesResult.h>
#include <aws/dms/model/RemoveTagsFromResourceResult.h>
#include <aws/dms/model/StartReplicationTaskResult.h>
#include <aws/dms/model/StartReplicationTaskAssessmentResult.h>
#include <aws/dms/model/StopReplicationTaskResult.h>
#include <aws/dms/model/TestConnectionResult.h>
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

namespace DatabaseMigrationService
{

namespace Model
{
        class AddTagsToResourceRequest;
        class ApplyPendingMaintenanceActionRequest;
        class CreateEndpointRequest;
        class CreateEventSubscriptionRequest;
        class CreateReplicationInstanceRequest;
        class CreateReplicationSubnetGroupRequest;
        class CreateReplicationTaskRequest;
        class DeleteCertificateRequest;
        class DeleteEndpointRequest;
        class DeleteEventSubscriptionRequest;
        class DeleteReplicationInstanceRequest;
        class DeleteReplicationSubnetGroupRequest;
        class DeleteReplicationTaskRequest;
        class DescribeAccountAttributesRequest;
        class DescribeCertificatesRequest;
        class DescribeConnectionsRequest;
        class DescribeEndpointTypesRequest;
        class DescribeEndpointsRequest;
        class DescribeEventCategoriesRequest;
        class DescribeEventSubscriptionsRequest;
        class DescribeEventsRequest;
        class DescribeOrderableReplicationInstancesRequest;
        class DescribePendingMaintenanceActionsRequest;
        class DescribeRefreshSchemasStatusRequest;
        class DescribeReplicationInstanceTaskLogsRequest;
        class DescribeReplicationInstancesRequest;
        class DescribeReplicationSubnetGroupsRequest;
        class DescribeReplicationTaskAssessmentResultsRequest;
        class DescribeReplicationTasksRequest;
        class DescribeSchemasRequest;
        class DescribeTableStatisticsRequest;
        class ImportCertificateRequest;
        class ListTagsForResourceRequest;
        class ModifyEndpointRequest;
        class ModifyEventSubscriptionRequest;
        class ModifyReplicationInstanceRequest;
        class ModifyReplicationSubnetGroupRequest;
        class ModifyReplicationTaskRequest;
        class RebootReplicationInstanceRequest;
        class RefreshSchemasRequest;
        class ReloadTablesRequest;
        class RemoveTagsFromResourceRequest;
        class StartReplicationTaskRequest;
        class StartReplicationTaskAssessmentRequest;
        class StopReplicationTaskRequest;
        class TestConnectionRequest;

        typedef Aws::Utils::Outcome<AddTagsToResourceResult, Aws::Client::AWSError<DatabaseMigrationServiceErrors>> AddTagsToResourceOutcome;
        typedef Aws::Utils::Outcome<ApplyPendingMaintenanceActionResult, Aws::Client::AWSError<DatabaseMigrationServiceErrors>> ApplyPendingMaintenanceActionOutcome;
        typedef Aws::Utils::Outcome<CreateEndpointResult, Aws::Client::AWSError<DatabaseMigrationServiceErrors>> CreateEndpointOutcome;
        typedef Aws::Utils::Outcome<CreateEventSubscriptionResult, Aws::Client::AWSError<DatabaseMigrationServiceErrors>> CreateEventSubscriptionOutcome;
        typedef Aws::Utils::Outcome<CreateReplicationInstanceResult, Aws::Client::AWSError<DatabaseMigrationServiceErrors>> CreateReplicationInstanceOutcome;
        typedef Aws::Utils::Outcome<CreateReplicationSubnetGroupResult, Aws::Client::AWSError<DatabaseMigrationServiceErrors>> CreateReplicationSubnetGroupOutcome;
        typedef Aws::Utils::Outcome<CreateReplicationTaskResult, Aws::Client::AWSError<DatabaseMigrationServiceErrors>> CreateReplicationTaskOutcome;
        typedef Aws::Utils::Outcome<DeleteCertificateResult, Aws::Client::AWSError<DatabaseMigrationServiceErrors>> DeleteCertificateOutcome;
        typedef Aws::Utils::Outcome<DeleteEndpointResult, Aws::Client::AWSError<DatabaseMigrationServiceErrors>> DeleteEndpointOutcome;
        typedef Aws::Utils::Outcome<DeleteEventSubscriptionResult, Aws::Client::AWSError<DatabaseMigrationServiceErrors>> DeleteEventSubscriptionOutcome;
        typedef Aws::Utils::Outcome<DeleteReplicationInstanceResult, Aws::Client::AWSError<DatabaseMigrationServiceErrors>> DeleteReplicationInstanceOutcome;
        typedef Aws::Utils::Outcome<DeleteReplicationSubnetGroupResult, Aws::Client::AWSError<DatabaseMigrationServiceErrors>> DeleteReplicationSubnetGroupOutcome;
        typedef Aws::Utils::Outcome<DeleteReplicationTaskResult, Aws::Client::AWSError<DatabaseMigrationServiceErrors>> DeleteReplicationTaskOutcome;
        typedef Aws::Utils::Outcome<DescribeAccountAttributesResult, Aws::Client::AWSError<DatabaseMigrationServiceErrors>> DescribeAccountAttributesOutcome;
        typedef Aws::Utils::Outcome<DescribeCertificatesResult, Aws::Client::AWSError<DatabaseMigrationServiceErrors>> DescribeCertificatesOutcome;
        typedef Aws::Utils::Outcome<DescribeConnectionsResult, Aws::Client::AWSError<DatabaseMigrationServiceErrors>> DescribeConnectionsOutcome;
        typedef Aws::Utils::Outcome<DescribeEndpointTypesResult, Aws::Client::AWSError<DatabaseMigrationServiceErrors>> DescribeEndpointTypesOutcome;
        typedef Aws::Utils::Outcome<DescribeEndpointsResult, Aws::Client::AWSError<DatabaseMigrationServiceErrors>> DescribeEndpointsOutcome;
        typedef Aws::Utils::Outcome<DescribeEventCategoriesResult, Aws::Client::AWSError<DatabaseMigrationServiceErrors>> DescribeEventCategoriesOutcome;
        typedef Aws::Utils::Outcome<DescribeEventSubscriptionsResult, Aws::Client::AWSError<DatabaseMigrationServiceErrors>> DescribeEventSubscriptionsOutcome;
        typedef Aws::Utils::Outcome<DescribeEventsResult, Aws::Client::AWSError<DatabaseMigrationServiceErrors>> DescribeEventsOutcome;
        typedef Aws::Utils::Outcome<DescribeOrderableReplicationInstancesResult, Aws::Client::AWSError<DatabaseMigrationServiceErrors>> DescribeOrderableReplicationInstancesOutcome;
        typedef Aws::Utils::Outcome<DescribePendingMaintenanceActionsResult, Aws::Client::AWSError<DatabaseMigrationServiceErrors>> DescribePendingMaintenanceActionsOutcome;
        typedef Aws::Utils::Outcome<DescribeRefreshSchemasStatusResult, Aws::Client::AWSError<DatabaseMigrationServiceErrors>> DescribeRefreshSchemasStatusOutcome;
        typedef Aws::Utils::Outcome<DescribeReplicationInstanceTaskLogsResult, Aws::Client::AWSError<DatabaseMigrationServiceErrors>> DescribeReplicationInstanceTaskLogsOutcome;
        typedef Aws::Utils::Outcome<DescribeReplicationInstancesResult, Aws::Client::AWSError<DatabaseMigrationServiceErrors>> DescribeReplicationInstancesOutcome;
        typedef Aws::Utils::Outcome<DescribeReplicationSubnetGroupsResult, Aws::Client::AWSError<DatabaseMigrationServiceErrors>> DescribeReplicationSubnetGroupsOutcome;
        typedef Aws::Utils::Outcome<DescribeReplicationTaskAssessmentResultsResult, Aws::Client::AWSError<DatabaseMigrationServiceErrors>> DescribeReplicationTaskAssessmentResultsOutcome;
        typedef Aws::Utils::Outcome<DescribeReplicationTasksResult, Aws::Client::AWSError<DatabaseMigrationServiceErrors>> DescribeReplicationTasksOutcome;
        typedef Aws::Utils::Outcome<DescribeSchemasResult, Aws::Client::AWSError<DatabaseMigrationServiceErrors>> DescribeSchemasOutcome;
        typedef Aws::Utils::Outcome<DescribeTableStatisticsResult, Aws::Client::AWSError<DatabaseMigrationServiceErrors>> DescribeTableStatisticsOutcome;
        typedef Aws::Utils::Outcome<ImportCertificateResult, Aws::Client::AWSError<DatabaseMigrationServiceErrors>> ImportCertificateOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, Aws::Client::AWSError<DatabaseMigrationServiceErrors>> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<ModifyEndpointResult, Aws::Client::AWSError<DatabaseMigrationServiceErrors>> ModifyEndpointOutcome;
        typedef Aws::Utils::Outcome<ModifyEventSubscriptionResult, Aws::Client::AWSError<DatabaseMigrationServiceErrors>> ModifyEventSubscriptionOutcome;
        typedef Aws::Utils::Outcome<ModifyReplicationInstanceResult, Aws::Client::AWSError<DatabaseMigrationServiceErrors>> ModifyReplicationInstanceOutcome;
        typedef Aws::Utils::Outcome<ModifyReplicationSubnetGroupResult, Aws::Client::AWSError<DatabaseMigrationServiceErrors>> ModifyReplicationSubnetGroupOutcome;
        typedef Aws::Utils::Outcome<ModifyReplicationTaskResult, Aws::Client::AWSError<DatabaseMigrationServiceErrors>> ModifyReplicationTaskOutcome;
        typedef Aws::Utils::Outcome<RebootReplicationInstanceResult, Aws::Client::AWSError<DatabaseMigrationServiceErrors>> RebootReplicationInstanceOutcome;
        typedef Aws::Utils::Outcome<RefreshSchemasResult, Aws::Client::AWSError<DatabaseMigrationServiceErrors>> RefreshSchemasOutcome;
        typedef Aws::Utils::Outcome<ReloadTablesResult, Aws::Client::AWSError<DatabaseMigrationServiceErrors>> ReloadTablesOutcome;
        typedef Aws::Utils::Outcome<RemoveTagsFromResourceResult, Aws::Client::AWSError<DatabaseMigrationServiceErrors>> RemoveTagsFromResourceOutcome;
        typedef Aws::Utils::Outcome<StartReplicationTaskResult, Aws::Client::AWSError<DatabaseMigrationServiceErrors>> StartReplicationTaskOutcome;
        typedef Aws::Utils::Outcome<StartReplicationTaskAssessmentResult, Aws::Client::AWSError<DatabaseMigrationServiceErrors>> StartReplicationTaskAssessmentOutcome;
        typedef Aws::Utils::Outcome<StopReplicationTaskResult, Aws::Client::AWSError<DatabaseMigrationServiceErrors>> StopReplicationTaskOutcome;
        typedef Aws::Utils::Outcome<TestConnectionResult, Aws::Client::AWSError<DatabaseMigrationServiceErrors>> TestConnectionOutcome;

        typedef std::future<AddTagsToResourceOutcome> AddTagsToResourceOutcomeCallable;
        typedef std::future<ApplyPendingMaintenanceActionOutcome> ApplyPendingMaintenanceActionOutcomeCallable;
        typedef std::future<CreateEndpointOutcome> CreateEndpointOutcomeCallable;
        typedef std::future<CreateEventSubscriptionOutcome> CreateEventSubscriptionOutcomeCallable;
        typedef std::future<CreateReplicationInstanceOutcome> CreateReplicationInstanceOutcomeCallable;
        typedef std::future<CreateReplicationSubnetGroupOutcome> CreateReplicationSubnetGroupOutcomeCallable;
        typedef std::future<CreateReplicationTaskOutcome> CreateReplicationTaskOutcomeCallable;
        typedef std::future<DeleteCertificateOutcome> DeleteCertificateOutcomeCallable;
        typedef std::future<DeleteEndpointOutcome> DeleteEndpointOutcomeCallable;
        typedef std::future<DeleteEventSubscriptionOutcome> DeleteEventSubscriptionOutcomeCallable;
        typedef std::future<DeleteReplicationInstanceOutcome> DeleteReplicationInstanceOutcomeCallable;
        typedef std::future<DeleteReplicationSubnetGroupOutcome> DeleteReplicationSubnetGroupOutcomeCallable;
        typedef std::future<DeleteReplicationTaskOutcome> DeleteReplicationTaskOutcomeCallable;
        typedef std::future<DescribeAccountAttributesOutcome> DescribeAccountAttributesOutcomeCallable;
        typedef std::future<DescribeCertificatesOutcome> DescribeCertificatesOutcomeCallable;
        typedef std::future<DescribeConnectionsOutcome> DescribeConnectionsOutcomeCallable;
        typedef std::future<DescribeEndpointTypesOutcome> DescribeEndpointTypesOutcomeCallable;
        typedef std::future<DescribeEndpointsOutcome> DescribeEndpointsOutcomeCallable;
        typedef std::future<DescribeEventCategoriesOutcome> DescribeEventCategoriesOutcomeCallable;
        typedef std::future<DescribeEventSubscriptionsOutcome> DescribeEventSubscriptionsOutcomeCallable;
        typedef std::future<DescribeEventsOutcome> DescribeEventsOutcomeCallable;
        typedef std::future<DescribeOrderableReplicationInstancesOutcome> DescribeOrderableReplicationInstancesOutcomeCallable;
        typedef std::future<DescribePendingMaintenanceActionsOutcome> DescribePendingMaintenanceActionsOutcomeCallable;
        typedef std::future<DescribeRefreshSchemasStatusOutcome> DescribeRefreshSchemasStatusOutcomeCallable;
        typedef std::future<DescribeReplicationInstanceTaskLogsOutcome> DescribeReplicationInstanceTaskLogsOutcomeCallable;
        typedef std::future<DescribeReplicationInstancesOutcome> DescribeReplicationInstancesOutcomeCallable;
        typedef std::future<DescribeReplicationSubnetGroupsOutcome> DescribeReplicationSubnetGroupsOutcomeCallable;
        typedef std::future<DescribeReplicationTaskAssessmentResultsOutcome> DescribeReplicationTaskAssessmentResultsOutcomeCallable;
        typedef std::future<DescribeReplicationTasksOutcome> DescribeReplicationTasksOutcomeCallable;
        typedef std::future<DescribeSchemasOutcome> DescribeSchemasOutcomeCallable;
        typedef std::future<DescribeTableStatisticsOutcome> DescribeTableStatisticsOutcomeCallable;
        typedef std::future<ImportCertificateOutcome> ImportCertificateOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<ModifyEndpointOutcome> ModifyEndpointOutcomeCallable;
        typedef std::future<ModifyEventSubscriptionOutcome> ModifyEventSubscriptionOutcomeCallable;
        typedef std::future<ModifyReplicationInstanceOutcome> ModifyReplicationInstanceOutcomeCallable;
        typedef std::future<ModifyReplicationSubnetGroupOutcome> ModifyReplicationSubnetGroupOutcomeCallable;
        typedef std::future<ModifyReplicationTaskOutcome> ModifyReplicationTaskOutcomeCallable;
        typedef std::future<RebootReplicationInstanceOutcome> RebootReplicationInstanceOutcomeCallable;
        typedef std::future<RefreshSchemasOutcome> RefreshSchemasOutcomeCallable;
        typedef std::future<ReloadTablesOutcome> ReloadTablesOutcomeCallable;
        typedef std::future<RemoveTagsFromResourceOutcome> RemoveTagsFromResourceOutcomeCallable;
        typedef std::future<StartReplicationTaskOutcome> StartReplicationTaskOutcomeCallable;
        typedef std::future<StartReplicationTaskAssessmentOutcome> StartReplicationTaskAssessmentOutcomeCallable;
        typedef std::future<StopReplicationTaskOutcome> StopReplicationTaskOutcomeCallable;
        typedef std::future<TestConnectionOutcome> TestConnectionOutcomeCallable;
} // namespace Model

  class DatabaseMigrationServiceClient;

    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::AddTagsToResourceRequest&, const Model::AddTagsToResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddTagsToResourceResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::ApplyPendingMaintenanceActionRequest&, const Model::ApplyPendingMaintenanceActionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ApplyPendingMaintenanceActionResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::CreateEndpointRequest&, const Model::CreateEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateEndpointResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::CreateEventSubscriptionRequest&, const Model::CreateEventSubscriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateEventSubscriptionResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::CreateReplicationInstanceRequest&, const Model::CreateReplicationInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateReplicationInstanceResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::CreateReplicationSubnetGroupRequest&, const Model::CreateReplicationSubnetGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateReplicationSubnetGroupResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::CreateReplicationTaskRequest&, const Model::CreateReplicationTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateReplicationTaskResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::DeleteCertificateRequest&, const Model::DeleteCertificateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteCertificateResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::DeleteEndpointRequest&, const Model::DeleteEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteEndpointResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::DeleteEventSubscriptionRequest&, const Model::DeleteEventSubscriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteEventSubscriptionResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::DeleteReplicationInstanceRequest&, const Model::DeleteReplicationInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteReplicationInstanceResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::DeleteReplicationSubnetGroupRequest&, const Model::DeleteReplicationSubnetGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteReplicationSubnetGroupResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::DeleteReplicationTaskRequest&, const Model::DeleteReplicationTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteReplicationTaskResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::DescribeAccountAttributesRequest&, const Model::DescribeAccountAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAccountAttributesResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::DescribeCertificatesRequest&, const Model::DescribeCertificatesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeCertificatesResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::DescribeConnectionsRequest&, const Model::DescribeConnectionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeConnectionsResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::DescribeEndpointTypesRequest&, const Model::DescribeEndpointTypesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEndpointTypesResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::DescribeEndpointsRequest&, const Model::DescribeEndpointsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEndpointsResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::DescribeEventCategoriesRequest&, const Model::DescribeEventCategoriesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEventCategoriesResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::DescribeEventSubscriptionsRequest&, const Model::DescribeEventSubscriptionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEventSubscriptionsResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::DescribeEventsRequest&, const Model::DescribeEventsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEventsResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::DescribeOrderableReplicationInstancesRequest&, const Model::DescribeOrderableReplicationInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeOrderableReplicationInstancesResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::DescribePendingMaintenanceActionsRequest&, const Model::DescribePendingMaintenanceActionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribePendingMaintenanceActionsResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::DescribeRefreshSchemasStatusRequest&, const Model::DescribeRefreshSchemasStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeRefreshSchemasStatusResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::DescribeReplicationInstanceTaskLogsRequest&, const Model::DescribeReplicationInstanceTaskLogsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeReplicationInstanceTaskLogsResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::DescribeReplicationInstancesRequest&, const Model::DescribeReplicationInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeReplicationInstancesResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::DescribeReplicationSubnetGroupsRequest&, const Model::DescribeReplicationSubnetGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeReplicationSubnetGroupsResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::DescribeReplicationTaskAssessmentResultsRequest&, const Model::DescribeReplicationTaskAssessmentResultsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeReplicationTaskAssessmentResultsResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::DescribeReplicationTasksRequest&, const Model::DescribeReplicationTasksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeReplicationTasksResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::DescribeSchemasRequest&, const Model::DescribeSchemasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSchemasResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::DescribeTableStatisticsRequest&, const Model::DescribeTableStatisticsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTableStatisticsResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::ImportCertificateRequest&, const Model::ImportCertificateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ImportCertificateResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::ModifyEndpointRequest&, const Model::ModifyEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyEndpointResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::ModifyEventSubscriptionRequest&, const Model::ModifyEventSubscriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyEventSubscriptionResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::ModifyReplicationInstanceRequest&, const Model::ModifyReplicationInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyReplicationInstanceResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::ModifyReplicationSubnetGroupRequest&, const Model::ModifyReplicationSubnetGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyReplicationSubnetGroupResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::ModifyReplicationTaskRequest&, const Model::ModifyReplicationTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyReplicationTaskResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::RebootReplicationInstanceRequest&, const Model::RebootReplicationInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RebootReplicationInstanceResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::RefreshSchemasRequest&, const Model::RefreshSchemasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RefreshSchemasResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::ReloadTablesRequest&, const Model::ReloadTablesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ReloadTablesResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::RemoveTagsFromResourceRequest&, const Model::RemoveTagsFromResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemoveTagsFromResourceResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::StartReplicationTaskRequest&, const Model::StartReplicationTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartReplicationTaskResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::StartReplicationTaskAssessmentRequest&, const Model::StartReplicationTaskAssessmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartReplicationTaskAssessmentResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::StopReplicationTaskRequest&, const Model::StopReplicationTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopReplicationTaskResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::TestConnectionRequest&, const Model::TestConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TestConnectionResponseReceivedHandler;

  /**
   * <fullname>AWS Database Migration Service</fullname> <p>AWS Database Migration
   * Service (AWS DMS) can migrate your data to and from the most widely used
   * commercial and open-source databases such as Oracle, PostgreSQL, Microsoft SQL
   * Server, Amazon Redshift, MariaDB, Amazon Aurora, MySQL, and SAP Adaptive Server
   * Enterprise (ASE). The service supports homogeneous migrations such as Oracle to
   * Oracle, as well as heterogeneous migrations between different database
   * platforms, such as Oracle to MySQL or SQL Server to PostgreSQL.</p> <p>For more
   * information about AWS DMS, see <a
   * href="https://docs.aws.amazon.com/dms/latest/userguide/Welcome.html">What Is AWS
   * Database Migration Service?</a> in the <i>AWS Database Migration User Guide.</i>
   * </p>
   */
  class AWS_DATABASEMIGRATIONSERVICE_API DatabaseMigrationServiceClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DatabaseMigrationServiceClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DatabaseMigrationServiceClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        DatabaseMigrationServiceClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~DatabaseMigrationServiceClient();

        inline virtual const char* GetServiceClientName() const override { return "Database Migration Service"; }


        /**
         * <p>Adds metadata tags to an AWS DMS resource, including replication instance,
         * endpoint, security group, and migration task. These tags can also be used with
         * cost allocation reporting to track cost associated with DMS resources, or used
         * in a Condition statement in an IAM policy for DMS.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/AddTagsToResource">AWS
         * API Reference</a></p>
         */
        virtual Model::AddTagsToResourceOutcome AddTagsToResource(const Model::AddTagsToResourceRequest& request) const;

        /**
         * <p>Adds metadata tags to an AWS DMS resource, including replication instance,
         * endpoint, security group, and migration task. These tags can also be used with
         * cost allocation reporting to track cost associated with DMS resources, or used
         * in a Condition statement in an IAM policy for DMS.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/AddTagsToResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AddTagsToResourceOutcomeCallable AddTagsToResourceCallable(const Model::AddTagsToResourceRequest& request) const;

        /**
         * <p>Adds metadata tags to an AWS DMS resource, including replication instance,
         * endpoint, security group, and migration task. These tags can also be used with
         * cost allocation reporting to track cost associated with DMS resources, or used
         * in a Condition statement in an IAM policy for DMS.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/AddTagsToResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AddTagsToResourceAsync(const Model::AddTagsToResourceRequest& request, const AddTagsToResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Applies a pending maintenance action to a resource (for example, to a
         * replication instance).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/ApplyPendingMaintenanceAction">AWS
         * API Reference</a></p>
         */
        virtual Model::ApplyPendingMaintenanceActionOutcome ApplyPendingMaintenanceAction(const Model::ApplyPendingMaintenanceActionRequest& request) const;

        /**
         * <p>Applies a pending maintenance action to a resource (for example, to a
         * replication instance).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/ApplyPendingMaintenanceAction">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ApplyPendingMaintenanceActionOutcomeCallable ApplyPendingMaintenanceActionCallable(const Model::ApplyPendingMaintenanceActionRequest& request) const;

        /**
         * <p>Applies a pending maintenance action to a resource (for example, to a
         * replication instance).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/ApplyPendingMaintenanceAction">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ApplyPendingMaintenanceActionAsync(const Model::ApplyPendingMaintenanceActionRequest& request, const ApplyPendingMaintenanceActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an endpoint using the provided settings.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/CreateEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateEndpointOutcome CreateEndpoint(const Model::CreateEndpointRequest& request) const;

        /**
         * <p>Creates an endpoint using the provided settings.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/CreateEndpoint">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateEndpointOutcomeCallable CreateEndpointCallable(const Model::CreateEndpointRequest& request) const;

        /**
         * <p>Creates an endpoint using the provided settings.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/CreateEndpoint">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateEndpointAsync(const Model::CreateEndpointRequest& request, const CreateEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Creates an AWS DMS event notification subscription. </p> <p>You can specify
         * the type of source (<code>SourceType</code>) you want to be notified of, provide
         * a list of AWS DMS source IDs (<code>SourceIds</code>) that triggers the events,
         * and provide a list of event categories (<code>EventCategories</code>) for events
         * you want to be notified of. If you specify both the <code>SourceType</code> and
         * <code>SourceIds</code>, such as <code>SourceType = replication-instance</code>
         * and <code>SourceIdentifier = my-replinstance</code>, you will be notified of all
         * the replication instance events for the specified source. If you specify a
         * <code>SourceType</code> but don't specify a <code>SourceIdentifier</code>, you
         * receive notice of the events for that source type for all your AWS DMS sources.
         * If you don't specify either <code>SourceType</code> nor
         * <code>SourceIdentifier</code>, you will be notified of events generated from all
         * AWS DMS sources belonging to your customer account.</p> <p>For more information
         * about AWS DMS events, see <a
         * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Events.html">Working
         * with Events and Notifications</a> in the <i>AWS Database Migration Service User
         * Guide.</i> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/CreateEventSubscription">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateEventSubscriptionOutcome CreateEventSubscription(const Model::CreateEventSubscriptionRequest& request) const;

        /**
         * <p> Creates an AWS DMS event notification subscription. </p> <p>You can specify
         * the type of source (<code>SourceType</code>) you want to be notified of, provide
         * a list of AWS DMS source IDs (<code>SourceIds</code>) that triggers the events,
         * and provide a list of event categories (<code>EventCategories</code>) for events
         * you want to be notified of. If you specify both the <code>SourceType</code> and
         * <code>SourceIds</code>, such as <code>SourceType = replication-instance</code>
         * and <code>SourceIdentifier = my-replinstance</code>, you will be notified of all
         * the replication instance events for the specified source. If you specify a
         * <code>SourceType</code> but don't specify a <code>SourceIdentifier</code>, you
         * receive notice of the events for that source type for all your AWS DMS sources.
         * If you don't specify either <code>SourceType</code> nor
         * <code>SourceIdentifier</code>, you will be notified of events generated from all
         * AWS DMS sources belonging to your customer account.</p> <p>For more information
         * about AWS DMS events, see <a
         * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Events.html">Working
         * with Events and Notifications</a> in the <i>AWS Database Migration Service User
         * Guide.</i> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/CreateEventSubscription">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateEventSubscriptionOutcomeCallable CreateEventSubscriptionCallable(const Model::CreateEventSubscriptionRequest& request) const;

        /**
         * <p> Creates an AWS DMS event notification subscription. </p> <p>You can specify
         * the type of source (<code>SourceType</code>) you want to be notified of, provide
         * a list of AWS DMS source IDs (<code>SourceIds</code>) that triggers the events,
         * and provide a list of event categories (<code>EventCategories</code>) for events
         * you want to be notified of. If you specify both the <code>SourceType</code> and
         * <code>SourceIds</code>, such as <code>SourceType = replication-instance</code>
         * and <code>SourceIdentifier = my-replinstance</code>, you will be notified of all
         * the replication instance events for the specified source. If you specify a
         * <code>SourceType</code> but don't specify a <code>SourceIdentifier</code>, you
         * receive notice of the events for that source type for all your AWS DMS sources.
         * If you don't specify either <code>SourceType</code> nor
         * <code>SourceIdentifier</code>, you will be notified of events generated from all
         * AWS DMS sources belonging to your customer account.</p> <p>For more information
         * about AWS DMS events, see <a
         * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Events.html">Working
         * with Events and Notifications</a> in the <i>AWS Database Migration Service User
         * Guide.</i> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/CreateEventSubscription">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateEventSubscriptionAsync(const Model::CreateEventSubscriptionRequest& request, const CreateEventSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates the replication instance using the specified
         * parameters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/CreateReplicationInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateReplicationInstanceOutcome CreateReplicationInstance(const Model::CreateReplicationInstanceRequest& request) const;

        /**
         * <p>Creates the replication instance using the specified
         * parameters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/CreateReplicationInstance">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateReplicationInstanceOutcomeCallable CreateReplicationInstanceCallable(const Model::CreateReplicationInstanceRequest& request) const;

        /**
         * <p>Creates the replication instance using the specified
         * parameters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/CreateReplicationInstance">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateReplicationInstanceAsync(const Model::CreateReplicationInstanceRequest& request, const CreateReplicationInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a replication subnet group given a list of the subnet IDs in a
         * VPC.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/CreateReplicationSubnetGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateReplicationSubnetGroupOutcome CreateReplicationSubnetGroup(const Model::CreateReplicationSubnetGroupRequest& request) const;

        /**
         * <p>Creates a replication subnet group given a list of the subnet IDs in a
         * VPC.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/CreateReplicationSubnetGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateReplicationSubnetGroupOutcomeCallable CreateReplicationSubnetGroupCallable(const Model::CreateReplicationSubnetGroupRequest& request) const;

        /**
         * <p>Creates a replication subnet group given a list of the subnet IDs in a
         * VPC.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/CreateReplicationSubnetGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateReplicationSubnetGroupAsync(const Model::CreateReplicationSubnetGroupRequest& request, const CreateReplicationSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a replication task using the specified parameters.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/CreateReplicationTask">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateReplicationTaskOutcome CreateReplicationTask(const Model::CreateReplicationTaskRequest& request) const;

        /**
         * <p>Creates a replication task using the specified parameters.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/CreateReplicationTask">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateReplicationTaskOutcomeCallable CreateReplicationTaskCallable(const Model::CreateReplicationTaskRequest& request) const;

        /**
         * <p>Creates a replication task using the specified parameters.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/CreateReplicationTask">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateReplicationTaskAsync(const Model::CreateReplicationTaskRequest& request, const CreateReplicationTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified certificate. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DeleteCertificate">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCertificateOutcome DeleteCertificate(const Model::DeleteCertificateRequest& request) const;

        /**
         * <p>Deletes the specified certificate. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DeleteCertificate">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteCertificateOutcomeCallable DeleteCertificateCallable(const Model::DeleteCertificateRequest& request) const;

        /**
         * <p>Deletes the specified certificate. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DeleteCertificate">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteCertificateAsync(const Model::DeleteCertificateRequest& request, const DeleteCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified endpoint.</p> <note> <p>All tasks associated with the
         * endpoint must be deleted before you can delete the endpoint.</p> </note>
         * <p/><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DeleteEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEndpointOutcome DeleteEndpoint(const Model::DeleteEndpointRequest& request) const;

        /**
         * <p>Deletes the specified endpoint.</p> <note> <p>All tasks associated with the
         * endpoint must be deleted before you can delete the endpoint.</p> </note>
         * <p/><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DeleteEndpoint">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteEndpointOutcomeCallable DeleteEndpointCallable(const Model::DeleteEndpointRequest& request) const;

        /**
         * <p>Deletes the specified endpoint.</p> <note> <p>All tasks associated with the
         * endpoint must be deleted before you can delete the endpoint.</p> </note>
         * <p/><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DeleteEndpoint">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteEndpointAsync(const Model::DeleteEndpointRequest& request, const DeleteEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Deletes an AWS DMS event subscription. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DeleteEventSubscription">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEventSubscriptionOutcome DeleteEventSubscription(const Model::DeleteEventSubscriptionRequest& request) const;

        /**
         * <p> Deletes an AWS DMS event subscription. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DeleteEventSubscription">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteEventSubscriptionOutcomeCallable DeleteEventSubscriptionCallable(const Model::DeleteEventSubscriptionRequest& request) const;

        /**
         * <p> Deletes an AWS DMS event subscription. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DeleteEventSubscription">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteEventSubscriptionAsync(const Model::DeleteEventSubscriptionRequest& request, const DeleteEventSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified replication instance.</p> <note> <p>You must delete any
         * migration tasks that are associated with the replication instance before you can
         * delete it.</p> </note> <p/><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DeleteReplicationInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteReplicationInstanceOutcome DeleteReplicationInstance(const Model::DeleteReplicationInstanceRequest& request) const;

        /**
         * <p>Deletes the specified replication instance.</p> <note> <p>You must delete any
         * migration tasks that are associated with the replication instance before you can
         * delete it.</p> </note> <p/><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DeleteReplicationInstance">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteReplicationInstanceOutcomeCallable DeleteReplicationInstanceCallable(const Model::DeleteReplicationInstanceRequest& request) const;

        /**
         * <p>Deletes the specified replication instance.</p> <note> <p>You must delete any
         * migration tasks that are associated with the replication instance before you can
         * delete it.</p> </note> <p/><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DeleteReplicationInstance">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteReplicationInstanceAsync(const Model::DeleteReplicationInstanceRequest& request, const DeleteReplicationInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a subnet group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DeleteReplicationSubnetGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteReplicationSubnetGroupOutcome DeleteReplicationSubnetGroup(const Model::DeleteReplicationSubnetGroupRequest& request) const;

        /**
         * <p>Deletes a subnet group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DeleteReplicationSubnetGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteReplicationSubnetGroupOutcomeCallable DeleteReplicationSubnetGroupCallable(const Model::DeleteReplicationSubnetGroupRequest& request) const;

        /**
         * <p>Deletes a subnet group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DeleteReplicationSubnetGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteReplicationSubnetGroupAsync(const Model::DeleteReplicationSubnetGroupRequest& request, const DeleteReplicationSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified replication task.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DeleteReplicationTask">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteReplicationTaskOutcome DeleteReplicationTask(const Model::DeleteReplicationTaskRequest& request) const;

        /**
         * <p>Deletes the specified replication task.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DeleteReplicationTask">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteReplicationTaskOutcomeCallable DeleteReplicationTaskCallable(const Model::DeleteReplicationTaskRequest& request) const;

        /**
         * <p>Deletes the specified replication task.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DeleteReplicationTask">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteReplicationTaskAsync(const Model::DeleteReplicationTaskRequest& request, const DeleteReplicationTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all of the AWS DMS attributes for a customer account. The attributes
         * include AWS DMS quotas for the account, such as the number of replication
         * instances allowed. The description for a quota includes the quota name, current
         * usage toward that quota, and the quota's maximum value.</p> <p>This command does
         * not take any parameters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DescribeAccountAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAccountAttributesOutcome DescribeAccountAttributes(const Model::DescribeAccountAttributesRequest& request) const;

        /**
         * <p>Lists all of the AWS DMS attributes for a customer account. The attributes
         * include AWS DMS quotas for the account, such as the number of replication
         * instances allowed. The description for a quota includes the quota name, current
         * usage toward that quota, and the quota's maximum value.</p> <p>This command does
         * not take any parameters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DescribeAccountAttributes">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAccountAttributesOutcomeCallable DescribeAccountAttributesCallable(const Model::DescribeAccountAttributesRequest& request) const;

        /**
         * <p>Lists all of the AWS DMS attributes for a customer account. The attributes
         * include AWS DMS quotas for the account, such as the number of replication
         * instances allowed. The description for a quota includes the quota name, current
         * usage toward that quota, and the quota's maximum value.</p> <p>This command does
         * not take any parameters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DescribeAccountAttributes">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAccountAttributesAsync(const Model::DescribeAccountAttributesRequest& request, const DescribeAccountAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides a description of the certificate.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DescribeCertificates">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeCertificatesOutcome DescribeCertificates(const Model::DescribeCertificatesRequest& request) const;

        /**
         * <p>Provides a description of the certificate.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DescribeCertificates">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeCertificatesOutcomeCallable DescribeCertificatesCallable(const Model::DescribeCertificatesRequest& request) const;

        /**
         * <p>Provides a description of the certificate.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DescribeCertificates">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeCertificatesAsync(const Model::DescribeCertificatesRequest& request, const DescribeCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the status of the connections that have been made between the
         * replication instance and an endpoint. Connections are created when you test an
         * endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DescribeConnections">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeConnectionsOutcome DescribeConnections(const Model::DescribeConnectionsRequest& request) const;

        /**
         * <p>Describes the status of the connections that have been made between the
         * replication instance and an endpoint. Connections are created when you test an
         * endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DescribeConnections">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeConnectionsOutcomeCallable DescribeConnectionsCallable(const Model::DescribeConnectionsRequest& request) const;

        /**
         * <p>Describes the status of the connections that have been made between the
         * replication instance and an endpoint. Connections are created when you test an
         * endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DescribeConnections">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeConnectionsAsync(const Model::DescribeConnectionsRequest& request, const DescribeConnectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about the type of endpoints available.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DescribeEndpointTypes">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEndpointTypesOutcome DescribeEndpointTypes(const Model::DescribeEndpointTypesRequest& request) const;

        /**
         * <p>Returns information about the type of endpoints available.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DescribeEndpointTypes">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeEndpointTypesOutcomeCallable DescribeEndpointTypesCallable(const Model::DescribeEndpointTypesRequest& request) const;

        /**
         * <p>Returns information about the type of endpoints available.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DescribeEndpointTypes">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeEndpointTypesAsync(const Model::DescribeEndpointTypesRequest& request, const DescribeEndpointTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about the endpoints for your account in the current
         * region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DescribeEndpoints">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEndpointsOutcome DescribeEndpoints(const Model::DescribeEndpointsRequest& request) const;

        /**
         * <p>Returns information about the endpoints for your account in the current
         * region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DescribeEndpoints">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeEndpointsOutcomeCallable DescribeEndpointsCallable(const Model::DescribeEndpointsRequest& request) const;

        /**
         * <p>Returns information about the endpoints for your account in the current
         * region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DescribeEndpoints">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeEndpointsAsync(const Model::DescribeEndpointsRequest& request, const DescribeEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists categories for all event source types, or, if specified, for a
         * specified source type. You can see a list of the event categories and source
         * types in <a
         * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Events.html">Working
         * with Events and Notifications</a> in the <i>AWS Database Migration Service User
         * Guide.</i> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DescribeEventCategories">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEventCategoriesOutcome DescribeEventCategories(const Model::DescribeEventCategoriesRequest& request) const;

        /**
         * <p>Lists categories for all event source types, or, if specified, for a
         * specified source type. You can see a list of the event categories and source
         * types in <a
         * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Events.html">Working
         * with Events and Notifications</a> in the <i>AWS Database Migration Service User
         * Guide.</i> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DescribeEventCategories">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeEventCategoriesOutcomeCallable DescribeEventCategoriesCallable(const Model::DescribeEventCategoriesRequest& request) const;

        /**
         * <p>Lists categories for all event source types, or, if specified, for a
         * specified source type. You can see a list of the event categories and source
         * types in <a
         * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Events.html">Working
         * with Events and Notifications</a> in the <i>AWS Database Migration Service User
         * Guide.</i> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DescribeEventCategories">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeEventCategoriesAsync(const Model::DescribeEventCategoriesRequest& request, const DescribeEventCategoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all the event subscriptions for a customer account. The description of
         * a subscription includes <code>SubscriptionName</code>, <code>SNSTopicARN</code>,
         * <code>CustomerID</code>, <code>SourceType</code>, <code>SourceID</code>,
         * <code>CreationTime</code>, and <code>Status</code>. </p> <p>If you specify
         * <code>SubscriptionName</code>, this action lists the description for that
         * subscription.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DescribeEventSubscriptions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEventSubscriptionsOutcome DescribeEventSubscriptions(const Model::DescribeEventSubscriptionsRequest& request) const;

        /**
         * <p>Lists all the event subscriptions for a customer account. The description of
         * a subscription includes <code>SubscriptionName</code>, <code>SNSTopicARN</code>,
         * <code>CustomerID</code>, <code>SourceType</code>, <code>SourceID</code>,
         * <code>CreationTime</code>, and <code>Status</code>. </p> <p>If you specify
         * <code>SubscriptionName</code>, this action lists the description for that
         * subscription.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DescribeEventSubscriptions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeEventSubscriptionsOutcomeCallable DescribeEventSubscriptionsCallable(const Model::DescribeEventSubscriptionsRequest& request) const;

        /**
         * <p>Lists all the event subscriptions for a customer account. The description of
         * a subscription includes <code>SubscriptionName</code>, <code>SNSTopicARN</code>,
         * <code>CustomerID</code>, <code>SourceType</code>, <code>SourceID</code>,
         * <code>CreationTime</code>, and <code>Status</code>. </p> <p>If you specify
         * <code>SubscriptionName</code>, this action lists the description for that
         * subscription.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DescribeEventSubscriptions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeEventSubscriptionsAsync(const Model::DescribeEventSubscriptionsRequest& request, const DescribeEventSubscriptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Lists events for a given source identifier and source type. You can also
         * specify a start and end time. For more information on AWS DMS events, see <a
         * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Events.html">Working
         * with Events and Notifications</a> in the <i>AWS Database Migration User
         * Guide.</i> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DescribeEvents">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEventsOutcome DescribeEvents(const Model::DescribeEventsRequest& request) const;

        /**
         * <p> Lists events for a given source identifier and source type. You can also
         * specify a start and end time. For more information on AWS DMS events, see <a
         * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Events.html">Working
         * with Events and Notifications</a> in the <i>AWS Database Migration User
         * Guide.</i> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DescribeEvents">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeEventsOutcomeCallable DescribeEventsCallable(const Model::DescribeEventsRequest& request) const;

        /**
         * <p> Lists events for a given source identifier and source type. You can also
         * specify a start and end time. For more information on AWS DMS events, see <a
         * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Events.html">Working
         * with Events and Notifications</a> in the <i>AWS Database Migration User
         * Guide.</i> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DescribeEvents">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeEventsAsync(const Model::DescribeEventsRequest& request, const DescribeEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about the replication instance types that can be created
         * in the specified region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DescribeOrderableReplicationInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeOrderableReplicationInstancesOutcome DescribeOrderableReplicationInstances(const Model::DescribeOrderableReplicationInstancesRequest& request) const;

        /**
         * <p>Returns information about the replication instance types that can be created
         * in the specified region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DescribeOrderableReplicationInstances">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeOrderableReplicationInstancesOutcomeCallable DescribeOrderableReplicationInstancesCallable(const Model::DescribeOrderableReplicationInstancesRequest& request) const;

        /**
         * <p>Returns information about the replication instance types that can be created
         * in the specified region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DescribeOrderableReplicationInstances">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeOrderableReplicationInstancesAsync(const Model::DescribeOrderableReplicationInstancesRequest& request, const DescribeOrderableReplicationInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>For internal use only</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DescribePendingMaintenanceActions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePendingMaintenanceActionsOutcome DescribePendingMaintenanceActions(const Model::DescribePendingMaintenanceActionsRequest& request) const;

        /**
         * <p>For internal use only</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DescribePendingMaintenanceActions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribePendingMaintenanceActionsOutcomeCallable DescribePendingMaintenanceActionsCallable(const Model::DescribePendingMaintenanceActionsRequest& request) const;

        /**
         * <p>For internal use only</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DescribePendingMaintenanceActions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribePendingMaintenanceActionsAsync(const Model::DescribePendingMaintenanceActionsRequest& request, const DescribePendingMaintenanceActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the status of the RefreshSchemas operation.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DescribeRefreshSchemasStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeRefreshSchemasStatusOutcome DescribeRefreshSchemasStatus(const Model::DescribeRefreshSchemasStatusRequest& request) const;

        /**
         * <p>Returns the status of the RefreshSchemas operation.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DescribeRefreshSchemasStatus">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeRefreshSchemasStatusOutcomeCallable DescribeRefreshSchemasStatusCallable(const Model::DescribeRefreshSchemasStatusRequest& request) const;

        /**
         * <p>Returns the status of the RefreshSchemas operation.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DescribeRefreshSchemasStatus">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeRefreshSchemasStatusAsync(const Model::DescribeRefreshSchemasStatusRequest& request, const DescribeRefreshSchemasStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about the task logs for the specified task.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DescribeReplicationInstanceTaskLogs">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeReplicationInstanceTaskLogsOutcome DescribeReplicationInstanceTaskLogs(const Model::DescribeReplicationInstanceTaskLogsRequest& request) const;

        /**
         * <p>Returns information about the task logs for the specified task.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DescribeReplicationInstanceTaskLogs">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeReplicationInstanceTaskLogsOutcomeCallable DescribeReplicationInstanceTaskLogsCallable(const Model::DescribeReplicationInstanceTaskLogsRequest& request) const;

        /**
         * <p>Returns information about the task logs for the specified task.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DescribeReplicationInstanceTaskLogs">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeReplicationInstanceTaskLogsAsync(const Model::DescribeReplicationInstanceTaskLogsRequest& request, const DescribeReplicationInstanceTaskLogsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about replication instances for your account in the
         * current region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DescribeReplicationInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeReplicationInstancesOutcome DescribeReplicationInstances(const Model::DescribeReplicationInstancesRequest& request) const;

        /**
         * <p>Returns information about replication instances for your account in the
         * current region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DescribeReplicationInstances">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeReplicationInstancesOutcomeCallable DescribeReplicationInstancesCallable(const Model::DescribeReplicationInstancesRequest& request) const;

        /**
         * <p>Returns information about replication instances for your account in the
         * current region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DescribeReplicationInstances">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeReplicationInstancesAsync(const Model::DescribeReplicationInstancesRequest& request, const DescribeReplicationInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about the replication subnet groups.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DescribeReplicationSubnetGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeReplicationSubnetGroupsOutcome DescribeReplicationSubnetGroups(const Model::DescribeReplicationSubnetGroupsRequest& request) const;

        /**
         * <p>Returns information about the replication subnet groups.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DescribeReplicationSubnetGroups">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeReplicationSubnetGroupsOutcomeCallable DescribeReplicationSubnetGroupsCallable(const Model::DescribeReplicationSubnetGroupsRequest& request) const;

        /**
         * <p>Returns information about the replication subnet groups.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DescribeReplicationSubnetGroups">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeReplicationSubnetGroupsAsync(const Model::DescribeReplicationSubnetGroupsRequest& request, const DescribeReplicationSubnetGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the task assessment results from Amazon S3. This action always
         * returns the latest results.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DescribeReplicationTaskAssessmentResults">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeReplicationTaskAssessmentResultsOutcome DescribeReplicationTaskAssessmentResults(const Model::DescribeReplicationTaskAssessmentResultsRequest& request) const;

        /**
         * <p>Returns the task assessment results from Amazon S3. This action always
         * returns the latest results.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DescribeReplicationTaskAssessmentResults">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeReplicationTaskAssessmentResultsOutcomeCallable DescribeReplicationTaskAssessmentResultsCallable(const Model::DescribeReplicationTaskAssessmentResultsRequest& request) const;

        /**
         * <p>Returns the task assessment results from Amazon S3. This action always
         * returns the latest results.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DescribeReplicationTaskAssessmentResults">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeReplicationTaskAssessmentResultsAsync(const Model::DescribeReplicationTaskAssessmentResultsRequest& request, const DescribeReplicationTaskAssessmentResultsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about replication tasks for your account in the current
         * region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DescribeReplicationTasks">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeReplicationTasksOutcome DescribeReplicationTasks(const Model::DescribeReplicationTasksRequest& request) const;

        /**
         * <p>Returns information about replication tasks for your account in the current
         * region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DescribeReplicationTasks">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeReplicationTasksOutcomeCallable DescribeReplicationTasksCallable(const Model::DescribeReplicationTasksRequest& request) const;

        /**
         * <p>Returns information about replication tasks for your account in the current
         * region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DescribeReplicationTasks">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeReplicationTasksAsync(const Model::DescribeReplicationTasksRequest& request, const DescribeReplicationTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about the schema for the specified endpoint.</p>
         * <p/><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DescribeSchemas">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSchemasOutcome DescribeSchemas(const Model::DescribeSchemasRequest& request) const;

        /**
         * <p>Returns information about the schema for the specified endpoint.</p>
         * <p/><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DescribeSchemas">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeSchemasOutcomeCallable DescribeSchemasCallable(const Model::DescribeSchemasRequest& request) const;

        /**
         * <p>Returns information about the schema for the specified endpoint.</p>
         * <p/><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DescribeSchemas">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeSchemasAsync(const Model::DescribeSchemasRequest& request, const DescribeSchemasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns table statistics on the database migration task, including table
         * name, rows inserted, rows updated, and rows deleted.</p> <p>Note that the "last
         * updated" column the DMS console only indicates the time that AWS DMS last
         * updated the table statistics record for a table. It does not indicate the time
         * of the last update to the table.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DescribeTableStatistics">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTableStatisticsOutcome DescribeTableStatistics(const Model::DescribeTableStatisticsRequest& request) const;

        /**
         * <p>Returns table statistics on the database migration task, including table
         * name, rows inserted, rows updated, and rows deleted.</p> <p>Note that the "last
         * updated" column the DMS console only indicates the time that AWS DMS last
         * updated the table statistics record for a table. It does not indicate the time
         * of the last update to the table.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DescribeTableStatistics">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeTableStatisticsOutcomeCallable DescribeTableStatisticsCallable(const Model::DescribeTableStatisticsRequest& request) const;

        /**
         * <p>Returns table statistics on the database migration task, including table
         * name, rows inserted, rows updated, and rows deleted.</p> <p>Note that the "last
         * updated" column the DMS console only indicates the time that AWS DMS last
         * updated the table statistics record for a table. It does not indicate the time
         * of the last update to the table.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DescribeTableStatistics">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeTableStatisticsAsync(const Model::DescribeTableStatisticsRequest& request, const DescribeTableStatisticsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Uploads the specified certificate.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/ImportCertificate">AWS
         * API Reference</a></p>
         */
        virtual Model::ImportCertificateOutcome ImportCertificate(const Model::ImportCertificateRequest& request) const;

        /**
         * <p>Uploads the specified certificate.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/ImportCertificate">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ImportCertificateOutcomeCallable ImportCertificateCallable(const Model::ImportCertificateRequest& request) const;

        /**
         * <p>Uploads the specified certificate.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/ImportCertificate">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ImportCertificateAsync(const Model::ImportCertificateRequest& request, const ImportCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all tags for an AWS DMS resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Lists all tags for an AWS DMS resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Lists all tags for an AWS DMS resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the specified endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/ModifyEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyEndpointOutcome ModifyEndpoint(const Model::ModifyEndpointRequest& request) const;

        /**
         * <p>Modifies the specified endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/ModifyEndpoint">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyEndpointOutcomeCallable ModifyEndpointCallable(const Model::ModifyEndpointRequest& request) const;

        /**
         * <p>Modifies the specified endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/ModifyEndpoint">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyEndpointAsync(const Model::ModifyEndpointRequest& request, const ModifyEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies an existing AWS DMS event notification subscription. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/ModifyEventSubscription">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyEventSubscriptionOutcome ModifyEventSubscription(const Model::ModifyEventSubscriptionRequest& request) const;

        /**
         * <p>Modifies an existing AWS DMS event notification subscription. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/ModifyEventSubscription">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyEventSubscriptionOutcomeCallable ModifyEventSubscriptionCallable(const Model::ModifyEventSubscriptionRequest& request) const;

        /**
         * <p>Modifies an existing AWS DMS event notification subscription. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/ModifyEventSubscription">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyEventSubscriptionAsync(const Model::ModifyEventSubscriptionRequest& request, const ModifyEventSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the replication instance to apply new settings. You can change one
         * or more parameters by specifying these parameters and the new values in the
         * request.</p> <p>Some settings are applied during the maintenance window.</p>
         * <p/><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/ModifyReplicationInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyReplicationInstanceOutcome ModifyReplicationInstance(const Model::ModifyReplicationInstanceRequest& request) const;

        /**
         * <p>Modifies the replication instance to apply new settings. You can change one
         * or more parameters by specifying these parameters and the new values in the
         * request.</p> <p>Some settings are applied during the maintenance window.</p>
         * <p/><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/ModifyReplicationInstance">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyReplicationInstanceOutcomeCallable ModifyReplicationInstanceCallable(const Model::ModifyReplicationInstanceRequest& request) const;

        /**
         * <p>Modifies the replication instance to apply new settings. You can change one
         * or more parameters by specifying these parameters and the new values in the
         * request.</p> <p>Some settings are applied during the maintenance window.</p>
         * <p/><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/ModifyReplicationInstance">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyReplicationInstanceAsync(const Model::ModifyReplicationInstanceRequest& request, const ModifyReplicationInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the settings for the specified replication subnet
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/ModifyReplicationSubnetGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyReplicationSubnetGroupOutcome ModifyReplicationSubnetGroup(const Model::ModifyReplicationSubnetGroupRequest& request) const;

        /**
         * <p>Modifies the settings for the specified replication subnet
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/ModifyReplicationSubnetGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyReplicationSubnetGroupOutcomeCallable ModifyReplicationSubnetGroupCallable(const Model::ModifyReplicationSubnetGroupRequest& request) const;

        /**
         * <p>Modifies the settings for the specified replication subnet
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/ModifyReplicationSubnetGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyReplicationSubnetGroupAsync(const Model::ModifyReplicationSubnetGroupRequest& request, const ModifyReplicationSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the specified replication task.</p> <p>You can't modify the task
         * endpoints. The task must be stopped before you can modify it. </p> <p>For more
         * information about AWS DMS tasks, see <a
         * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Tasks.html">Working
         * with Migration Tasks</a> in the <i>AWS Database Migration Service User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/ModifyReplicationTask">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyReplicationTaskOutcome ModifyReplicationTask(const Model::ModifyReplicationTaskRequest& request) const;

        /**
         * <p>Modifies the specified replication task.</p> <p>You can't modify the task
         * endpoints. The task must be stopped before you can modify it. </p> <p>For more
         * information about AWS DMS tasks, see <a
         * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Tasks.html">Working
         * with Migration Tasks</a> in the <i>AWS Database Migration Service User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/ModifyReplicationTask">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyReplicationTaskOutcomeCallable ModifyReplicationTaskCallable(const Model::ModifyReplicationTaskRequest& request) const;

        /**
         * <p>Modifies the specified replication task.</p> <p>You can't modify the task
         * endpoints. The task must be stopped before you can modify it. </p> <p>For more
         * information about AWS DMS tasks, see <a
         * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Tasks.html">Working
         * with Migration Tasks</a> in the <i>AWS Database Migration Service User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/ModifyReplicationTask">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyReplicationTaskAsync(const Model::ModifyReplicationTaskRequest& request, const ModifyReplicationTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Reboots a replication instance. Rebooting results in a momentary outage,
         * until the replication instance becomes available again.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/RebootReplicationInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::RebootReplicationInstanceOutcome RebootReplicationInstance(const Model::RebootReplicationInstanceRequest& request) const;

        /**
         * <p>Reboots a replication instance. Rebooting results in a momentary outage,
         * until the replication instance becomes available again.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/RebootReplicationInstance">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RebootReplicationInstanceOutcomeCallable RebootReplicationInstanceCallable(const Model::RebootReplicationInstanceRequest& request) const;

        /**
         * <p>Reboots a replication instance. Rebooting results in a momentary outage,
         * until the replication instance becomes available again.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/RebootReplicationInstance">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RebootReplicationInstanceAsync(const Model::RebootReplicationInstanceRequest& request, const RebootReplicationInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Populates the schema for the specified endpoint. This is an asynchronous
         * operation and can take several minutes. You can check the status of this
         * operation by calling the DescribeRefreshSchemasStatus operation.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/RefreshSchemas">AWS
         * API Reference</a></p>
         */
        virtual Model::RefreshSchemasOutcome RefreshSchemas(const Model::RefreshSchemasRequest& request) const;

        /**
         * <p>Populates the schema for the specified endpoint. This is an asynchronous
         * operation and can take several minutes. You can check the status of this
         * operation by calling the DescribeRefreshSchemasStatus operation.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/RefreshSchemas">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RefreshSchemasOutcomeCallable RefreshSchemasCallable(const Model::RefreshSchemasRequest& request) const;

        /**
         * <p>Populates the schema for the specified endpoint. This is an asynchronous
         * operation and can take several minutes. You can check the status of this
         * operation by calling the DescribeRefreshSchemasStatus operation.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/RefreshSchemas">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RefreshSchemasAsync(const Model::RefreshSchemasRequest& request, const RefreshSchemasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Reloads the target database table with the source data. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/ReloadTables">AWS
         * API Reference</a></p>
         */
        virtual Model::ReloadTablesOutcome ReloadTables(const Model::ReloadTablesRequest& request) const;

        /**
         * <p>Reloads the target database table with the source data. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/ReloadTables">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ReloadTablesOutcomeCallable ReloadTablesCallable(const Model::ReloadTablesRequest& request) const;

        /**
         * <p>Reloads the target database table with the source data. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/ReloadTables">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ReloadTablesAsync(const Model::ReloadTablesRequest& request, const ReloadTablesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes metadata tags from a DMS resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/RemoveTagsFromResource">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveTagsFromResourceOutcome RemoveTagsFromResource(const Model::RemoveTagsFromResourceRequest& request) const;

        /**
         * <p>Removes metadata tags from a DMS resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/RemoveTagsFromResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RemoveTagsFromResourceOutcomeCallable RemoveTagsFromResourceCallable(const Model::RemoveTagsFromResourceRequest& request) const;

        /**
         * <p>Removes metadata tags from a DMS resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/RemoveTagsFromResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RemoveTagsFromResourceAsync(const Model::RemoveTagsFromResourceRequest& request, const RemoveTagsFromResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts the replication task.</p> <p>For more information about AWS DMS tasks,
         * see <a
         * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Tasks.html">Working
         * with Migration Tasks </a> in the <i>AWS Database Migration Service User
         * Guide.</i> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/StartReplicationTask">AWS
         * API Reference</a></p>
         */
        virtual Model::StartReplicationTaskOutcome StartReplicationTask(const Model::StartReplicationTaskRequest& request) const;

        /**
         * <p>Starts the replication task.</p> <p>For more information about AWS DMS tasks,
         * see <a
         * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Tasks.html">Working
         * with Migration Tasks </a> in the <i>AWS Database Migration Service User
         * Guide.</i> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/StartReplicationTask">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartReplicationTaskOutcomeCallable StartReplicationTaskCallable(const Model::StartReplicationTaskRequest& request) const;

        /**
         * <p>Starts the replication task.</p> <p>For more information about AWS DMS tasks,
         * see <a
         * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Tasks.html">Working
         * with Migration Tasks </a> in the <i>AWS Database Migration Service User
         * Guide.</i> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/StartReplicationTask">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartReplicationTaskAsync(const Model::StartReplicationTaskRequest& request, const StartReplicationTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Starts the replication task assessment for unsupported data types in the
         * source database. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/StartReplicationTaskAssessment">AWS
         * API Reference</a></p>
         */
        virtual Model::StartReplicationTaskAssessmentOutcome StartReplicationTaskAssessment(const Model::StartReplicationTaskAssessmentRequest& request) const;

        /**
         * <p> Starts the replication task assessment for unsupported data types in the
         * source database. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/StartReplicationTaskAssessment">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartReplicationTaskAssessmentOutcomeCallable StartReplicationTaskAssessmentCallable(const Model::StartReplicationTaskAssessmentRequest& request) const;

        /**
         * <p> Starts the replication task assessment for unsupported data types in the
         * source database. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/StartReplicationTaskAssessment">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartReplicationTaskAssessmentAsync(const Model::StartReplicationTaskAssessmentRequest& request, const StartReplicationTaskAssessmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stops the replication task.</p> <p/><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/StopReplicationTask">AWS
         * API Reference</a></p>
         */
        virtual Model::StopReplicationTaskOutcome StopReplicationTask(const Model::StopReplicationTaskRequest& request) const;

        /**
         * <p>Stops the replication task.</p> <p/><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/StopReplicationTask">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopReplicationTaskOutcomeCallable StopReplicationTaskCallable(const Model::StopReplicationTaskRequest& request) const;

        /**
         * <p>Stops the replication task.</p> <p/><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/StopReplicationTask">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopReplicationTaskAsync(const Model::StopReplicationTaskRequest& request, const StopReplicationTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Tests the connection between the replication instance and the
         * endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/TestConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::TestConnectionOutcome TestConnection(const Model::TestConnectionRequest& request) const;

        /**
         * <p>Tests the connection between the replication instance and the
         * endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/TestConnection">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TestConnectionOutcomeCallable TestConnectionCallable(const Model::TestConnectionRequest& request) const;

        /**
         * <p>Tests the connection between the replication instance and the
         * endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/TestConnection">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TestConnectionAsync(const Model::TestConnectionRequest& request, const TestConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void AddTagsToResourceAsyncHelper(const Model::AddTagsToResourceRequest& request, const AddTagsToResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ApplyPendingMaintenanceActionAsyncHelper(const Model::ApplyPendingMaintenanceActionRequest& request, const ApplyPendingMaintenanceActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateEndpointAsyncHelper(const Model::CreateEndpointRequest& request, const CreateEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateEventSubscriptionAsyncHelper(const Model::CreateEventSubscriptionRequest& request, const CreateEventSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateReplicationInstanceAsyncHelper(const Model::CreateReplicationInstanceRequest& request, const CreateReplicationInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateReplicationSubnetGroupAsyncHelper(const Model::CreateReplicationSubnetGroupRequest& request, const CreateReplicationSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateReplicationTaskAsyncHelper(const Model::CreateReplicationTaskRequest& request, const CreateReplicationTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteCertificateAsyncHelper(const Model::DeleteCertificateRequest& request, const DeleteCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteEndpointAsyncHelper(const Model::DeleteEndpointRequest& request, const DeleteEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteEventSubscriptionAsyncHelper(const Model::DeleteEventSubscriptionRequest& request, const DeleteEventSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteReplicationInstanceAsyncHelper(const Model::DeleteReplicationInstanceRequest& request, const DeleteReplicationInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteReplicationSubnetGroupAsyncHelper(const Model::DeleteReplicationSubnetGroupRequest& request, const DeleteReplicationSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteReplicationTaskAsyncHelper(const Model::DeleteReplicationTaskRequest& request, const DeleteReplicationTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAccountAttributesAsyncHelper(const Model::DescribeAccountAttributesRequest& request, const DescribeAccountAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeCertificatesAsyncHelper(const Model::DescribeCertificatesRequest& request, const DescribeCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeConnectionsAsyncHelper(const Model::DescribeConnectionsRequest& request, const DescribeConnectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeEndpointTypesAsyncHelper(const Model::DescribeEndpointTypesRequest& request, const DescribeEndpointTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeEndpointsAsyncHelper(const Model::DescribeEndpointsRequest& request, const DescribeEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeEventCategoriesAsyncHelper(const Model::DescribeEventCategoriesRequest& request, const DescribeEventCategoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeEventSubscriptionsAsyncHelper(const Model::DescribeEventSubscriptionsRequest& request, const DescribeEventSubscriptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeEventsAsyncHelper(const Model::DescribeEventsRequest& request, const DescribeEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeOrderableReplicationInstancesAsyncHelper(const Model::DescribeOrderableReplicationInstancesRequest& request, const DescribeOrderableReplicationInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribePendingMaintenanceActionsAsyncHelper(const Model::DescribePendingMaintenanceActionsRequest& request, const DescribePendingMaintenanceActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeRefreshSchemasStatusAsyncHelper(const Model::DescribeRefreshSchemasStatusRequest& request, const DescribeRefreshSchemasStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeReplicationInstanceTaskLogsAsyncHelper(const Model::DescribeReplicationInstanceTaskLogsRequest& request, const DescribeReplicationInstanceTaskLogsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeReplicationInstancesAsyncHelper(const Model::DescribeReplicationInstancesRequest& request, const DescribeReplicationInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeReplicationSubnetGroupsAsyncHelper(const Model::DescribeReplicationSubnetGroupsRequest& request, const DescribeReplicationSubnetGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeReplicationTaskAssessmentResultsAsyncHelper(const Model::DescribeReplicationTaskAssessmentResultsRequest& request, const DescribeReplicationTaskAssessmentResultsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeReplicationTasksAsyncHelper(const Model::DescribeReplicationTasksRequest& request, const DescribeReplicationTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeSchemasAsyncHelper(const Model::DescribeSchemasRequest& request, const DescribeSchemasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeTableStatisticsAsyncHelper(const Model::DescribeTableStatisticsRequest& request, const DescribeTableStatisticsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ImportCertificateAsyncHelper(const Model::ImportCertificateRequest& request, const ImportCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ModifyEndpointAsyncHelper(const Model::ModifyEndpointRequest& request, const ModifyEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ModifyEventSubscriptionAsyncHelper(const Model::ModifyEventSubscriptionRequest& request, const ModifyEventSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ModifyReplicationInstanceAsyncHelper(const Model::ModifyReplicationInstanceRequest& request, const ModifyReplicationInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ModifyReplicationSubnetGroupAsyncHelper(const Model::ModifyReplicationSubnetGroupRequest& request, const ModifyReplicationSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ModifyReplicationTaskAsyncHelper(const Model::ModifyReplicationTaskRequest& request, const ModifyReplicationTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RebootReplicationInstanceAsyncHelper(const Model::RebootReplicationInstanceRequest& request, const RebootReplicationInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RefreshSchemasAsyncHelper(const Model::RefreshSchemasRequest& request, const RefreshSchemasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ReloadTablesAsyncHelper(const Model::ReloadTablesRequest& request, const ReloadTablesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RemoveTagsFromResourceAsyncHelper(const Model::RemoveTagsFromResourceRequest& request, const RemoveTagsFromResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartReplicationTaskAsyncHelper(const Model::StartReplicationTaskRequest& request, const StartReplicationTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartReplicationTaskAssessmentAsyncHelper(const Model::StartReplicationTaskAssessmentRequest& request, const StartReplicationTaskAssessmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopReplicationTaskAsyncHelper(const Model::StopReplicationTaskRequest& request, const StopReplicationTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TestConnectionAsyncHelper(const Model::TestConnectionRequest& request, const TestConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace DatabaseMigrationService
} // namespace Aws
