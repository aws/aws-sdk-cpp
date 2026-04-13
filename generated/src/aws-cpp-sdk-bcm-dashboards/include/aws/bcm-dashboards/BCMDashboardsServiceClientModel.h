/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/bcm-dashboards/BCMDashboardsEndpointProvider.h>
#include <aws/bcm-dashboards/BCMDashboardsErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <functional>
#include <future>
/* End of generic header includes */

/* Service model headers required in BCMDashboardsClient header */
#include <aws/bcm-dashboards/model/CreateDashboardResult.h>
#include <aws/bcm-dashboards/model/CreateScheduledReportResult.h>
#include <aws/bcm-dashboards/model/DeleteDashboardResult.h>
#include <aws/bcm-dashboards/model/DeleteScheduledReportResult.h>
#include <aws/bcm-dashboards/model/ExecuteScheduledReportResult.h>
#include <aws/bcm-dashboards/model/GetDashboardResult.h>
#include <aws/bcm-dashboards/model/GetResourcePolicyResult.h>
#include <aws/bcm-dashboards/model/GetScheduledReportResult.h>
#include <aws/bcm-dashboards/model/ListDashboardsRequest.h>
#include <aws/bcm-dashboards/model/ListDashboardsResult.h>
#include <aws/bcm-dashboards/model/ListScheduledReportsRequest.h>
#include <aws/bcm-dashboards/model/ListScheduledReportsResult.h>
#include <aws/bcm-dashboards/model/ListTagsForResourceResult.h>
#include <aws/bcm-dashboards/model/TagResourceResult.h>
#include <aws/bcm-dashboards/model/UntagResourceResult.h>
#include <aws/bcm-dashboards/model/UpdateDashboardResult.h>
#include <aws/bcm-dashboards/model/UpdateScheduledReportResult.h>
/* End of service model headers required in BCMDashboardsClient header */

namespace Aws {
namespace Http {
class HttpClient;
class HttpClientFactory;
}  // namespace Http

namespace Utils {
template <typename R, typename E>
class Outcome;

namespace Threading {
class Executor;
}  // namespace Threading
}  // namespace Utils

namespace Auth {
class AWSCredentials;
class AWSCredentialsProvider;
}  // namespace Auth

namespace Client {
class RetryStrategy;
}  // namespace Client

namespace BCMDashboards {
using BCMDashboardsClientConfiguration = Aws::Client::GenericClientConfiguration;
using BCMDashboardsEndpointProviderBase = Aws::BCMDashboards::Endpoint::BCMDashboardsEndpointProviderBase;
using BCMDashboardsEndpointProvider = Aws::BCMDashboards::Endpoint::BCMDashboardsEndpointProvider;

namespace Model {
/* Service model forward declarations required in BCMDashboardsClient header */
class CreateDashboardRequest;
class CreateScheduledReportRequest;
class DeleteDashboardRequest;
class DeleteScheduledReportRequest;
class ExecuteScheduledReportRequest;
class GetDashboardRequest;
class GetResourcePolicyRequest;
class GetScheduledReportRequest;
class ListDashboardsRequest;
class ListScheduledReportsRequest;
class ListTagsForResourceRequest;
class TagResourceRequest;
class UntagResourceRequest;
class UpdateDashboardRequest;
class UpdateScheduledReportRequest;
/* End of service model forward declarations required in BCMDashboardsClient header */

/* Service model Outcome class definitions */
typedef Aws::Utils::Outcome<CreateDashboardResult, BCMDashboardsError> CreateDashboardOutcome;
typedef Aws::Utils::Outcome<CreateScheduledReportResult, BCMDashboardsError> CreateScheduledReportOutcome;
typedef Aws::Utils::Outcome<DeleteDashboardResult, BCMDashboardsError> DeleteDashboardOutcome;
typedef Aws::Utils::Outcome<DeleteScheduledReportResult, BCMDashboardsError> DeleteScheduledReportOutcome;
typedef Aws::Utils::Outcome<ExecuteScheduledReportResult, BCMDashboardsError> ExecuteScheduledReportOutcome;
typedef Aws::Utils::Outcome<GetDashboardResult, BCMDashboardsError> GetDashboardOutcome;
typedef Aws::Utils::Outcome<GetResourcePolicyResult, BCMDashboardsError> GetResourcePolicyOutcome;
typedef Aws::Utils::Outcome<GetScheduledReportResult, BCMDashboardsError> GetScheduledReportOutcome;
typedef Aws::Utils::Outcome<ListDashboardsResult, BCMDashboardsError> ListDashboardsOutcome;
typedef Aws::Utils::Outcome<ListScheduledReportsResult, BCMDashboardsError> ListScheduledReportsOutcome;
typedef Aws::Utils::Outcome<ListTagsForResourceResult, BCMDashboardsError> ListTagsForResourceOutcome;
typedef Aws::Utils::Outcome<TagResourceResult, BCMDashboardsError> TagResourceOutcome;
typedef Aws::Utils::Outcome<UntagResourceResult, BCMDashboardsError> UntagResourceOutcome;
typedef Aws::Utils::Outcome<UpdateDashboardResult, BCMDashboardsError> UpdateDashboardOutcome;
typedef Aws::Utils::Outcome<UpdateScheduledReportResult, BCMDashboardsError> UpdateScheduledReportOutcome;
/* End of service model Outcome class definitions */

/* Service model Outcome callable definitions */
typedef std::future<CreateDashboardOutcome> CreateDashboardOutcomeCallable;
typedef std::future<CreateScheduledReportOutcome> CreateScheduledReportOutcomeCallable;
typedef std::future<DeleteDashboardOutcome> DeleteDashboardOutcomeCallable;
typedef std::future<DeleteScheduledReportOutcome> DeleteScheduledReportOutcomeCallable;
typedef std::future<ExecuteScheduledReportOutcome> ExecuteScheduledReportOutcomeCallable;
typedef std::future<GetDashboardOutcome> GetDashboardOutcomeCallable;
typedef std::future<GetResourcePolicyOutcome> GetResourcePolicyOutcomeCallable;
typedef std::future<GetScheduledReportOutcome> GetScheduledReportOutcomeCallable;
typedef std::future<ListDashboardsOutcome> ListDashboardsOutcomeCallable;
typedef std::future<ListScheduledReportsOutcome> ListScheduledReportsOutcomeCallable;
typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
typedef std::future<UpdateDashboardOutcome> UpdateDashboardOutcomeCallable;
typedef std::future<UpdateScheduledReportOutcome> UpdateScheduledReportOutcomeCallable;
/* End of service model Outcome callable definitions */
}  // namespace Model

class BCMDashboardsClient;

/* Service model async handlers definitions */
typedef std::function<void(const BCMDashboardsClient*, const Model::CreateDashboardRequest&, const Model::CreateDashboardOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateDashboardResponseReceivedHandler;
typedef std::function<void(const BCMDashboardsClient*, const Model::CreateScheduledReportRequest&,
                           const Model::CreateScheduledReportOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateScheduledReportResponseReceivedHandler;
typedef std::function<void(const BCMDashboardsClient*, const Model::DeleteDashboardRequest&, const Model::DeleteDashboardOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteDashboardResponseReceivedHandler;
typedef std::function<void(const BCMDashboardsClient*, const Model::DeleteScheduledReportRequest&,
                           const Model::DeleteScheduledReportOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteScheduledReportResponseReceivedHandler;
typedef std::function<void(const BCMDashboardsClient*, const Model::ExecuteScheduledReportRequest&,
                           const Model::ExecuteScheduledReportOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ExecuteScheduledReportResponseReceivedHandler;
typedef std::function<void(const BCMDashboardsClient*, const Model::GetDashboardRequest&, const Model::GetDashboardOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetDashboardResponseReceivedHandler;
typedef std::function<void(const BCMDashboardsClient*, const Model::GetResourcePolicyRequest&, const Model::GetResourcePolicyOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetResourcePolicyResponseReceivedHandler;
typedef std::function<void(const BCMDashboardsClient*, const Model::GetScheduledReportRequest&, const Model::GetScheduledReportOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetScheduledReportResponseReceivedHandler;
typedef std::function<void(const BCMDashboardsClient*, const Model::ListDashboardsRequest&, const Model::ListDashboardsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListDashboardsResponseReceivedHandler;
typedef std::function<void(const BCMDashboardsClient*, const Model::ListScheduledReportsRequest&, const Model::ListScheduledReportsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListScheduledReportsResponseReceivedHandler;
typedef std::function<void(const BCMDashboardsClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListTagsForResourceResponseReceivedHandler;
typedef std::function<void(const BCMDashboardsClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    TagResourceResponseReceivedHandler;
typedef std::function<void(const BCMDashboardsClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UntagResourceResponseReceivedHandler;
typedef std::function<void(const BCMDashboardsClient*, const Model::UpdateDashboardRequest&, const Model::UpdateDashboardOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateDashboardResponseReceivedHandler;
typedef std::function<void(const BCMDashboardsClient*, const Model::UpdateScheduledReportRequest&,
                           const Model::UpdateScheduledReportOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateScheduledReportResponseReceivedHandler;
/* End of service model async handlers definitions */
}  // namespace BCMDashboards
}  // namespace Aws
