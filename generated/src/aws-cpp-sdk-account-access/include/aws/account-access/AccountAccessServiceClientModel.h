/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/account-access/AccountAccessEndpointProvider.h>
#include <aws/account-access/AccountAccessErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <functional>
#include <future>
/* End of generic header includes */

/* Service model headers required in AccountAccessClient header */
#include <aws/account-access/model/CreateApplicationResult.h>
#include <aws/account-access/model/CreateEntitlementResult.h>
#include <aws/account-access/model/DeleteApplicationResult.h>
#include <aws/account-access/model/DeleteEntitlementResult.h>
#include <aws/account-access/model/GetApplicationResult.h>
#include <aws/account-access/model/GetEntitlementResult.h>
#include <aws/account-access/model/ListApplicationsRequest.h>
#include <aws/account-access/model/ListApplicationsResult.h>
#include <aws/account-access/model/ListEntitlementsResult.h>
#include <aws/account-access/model/ListTagsForResourceResult.h>
#include <aws/account-access/model/TagResourceResult.h>
#include <aws/account-access/model/UntagResourceResult.h>
/* End of service model headers required in AccountAccessClient header */

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

namespace AccountAccess {
using AccountAccessClientConfiguration = Aws::Client::GenericClientConfiguration;
using AccountAccessEndpointProviderBase = Aws::AccountAccess::Endpoint::AccountAccessEndpointProviderBase;
using AccountAccessEndpointProvider = Aws::AccountAccess::Endpoint::AccountAccessEndpointProvider;

namespace Model {
/* Service model forward declarations required in AccountAccessClient header */
class CreateApplicationRequest;
class CreateEntitlementRequest;
class DeleteApplicationRequest;
class DeleteEntitlementRequest;
class GetApplicationRequest;
class GetEntitlementRequest;
class ListApplicationsRequest;
class ListEntitlementsRequest;
class ListTagsForResourceRequest;
class TagResourceRequest;
class UntagResourceRequest;
/* End of service model forward declarations required in AccountAccessClient header */

/* Service model Outcome class definitions */
typedef Aws::Utils::Outcome<CreateApplicationResult, AccountAccessError> CreateApplicationOutcome;
typedef Aws::Utils::Outcome<CreateEntitlementResult, AccountAccessError> CreateEntitlementOutcome;
typedef Aws::Utils::Outcome<DeleteApplicationResult, AccountAccessError> DeleteApplicationOutcome;
typedef Aws::Utils::Outcome<DeleteEntitlementResult, AccountAccessError> DeleteEntitlementOutcome;
typedef Aws::Utils::Outcome<GetApplicationResult, AccountAccessError> GetApplicationOutcome;
typedef Aws::Utils::Outcome<GetEntitlementResult, AccountAccessError> GetEntitlementOutcome;
typedef Aws::Utils::Outcome<ListApplicationsResult, AccountAccessError> ListApplicationsOutcome;
typedef Aws::Utils::Outcome<ListEntitlementsResult, AccountAccessError> ListEntitlementsOutcome;
typedef Aws::Utils::Outcome<ListTagsForResourceResult, AccountAccessError> ListTagsForResourceOutcome;
typedef Aws::Utils::Outcome<TagResourceResult, AccountAccessError> TagResourceOutcome;
typedef Aws::Utils::Outcome<UntagResourceResult, AccountAccessError> UntagResourceOutcome;
/* End of service model Outcome class definitions */

/* Service model Outcome callable definitions */
typedef std::future<CreateApplicationOutcome> CreateApplicationOutcomeCallable;
typedef std::future<CreateEntitlementOutcome> CreateEntitlementOutcomeCallable;
typedef std::future<DeleteApplicationOutcome> DeleteApplicationOutcomeCallable;
typedef std::future<DeleteEntitlementOutcome> DeleteEntitlementOutcomeCallable;
typedef std::future<GetApplicationOutcome> GetApplicationOutcomeCallable;
typedef std::future<GetEntitlementOutcome> GetEntitlementOutcomeCallable;
typedef std::future<ListApplicationsOutcome> ListApplicationsOutcomeCallable;
typedef std::future<ListEntitlementsOutcome> ListEntitlementsOutcomeCallable;
typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
/* End of service model Outcome callable definitions */
}  // namespace Model

class AccountAccessClient;

/* Service model async handlers definitions */
typedef std::function<void(const AccountAccessClient*, const Model::CreateApplicationRequest&, const Model::CreateApplicationOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateApplicationResponseReceivedHandler;
typedef std::function<void(const AccountAccessClient*, const Model::CreateEntitlementRequest&, const Model::CreateEntitlementOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateEntitlementResponseReceivedHandler;
typedef std::function<void(const AccountAccessClient*, const Model::DeleteApplicationRequest&, const Model::DeleteApplicationOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteApplicationResponseReceivedHandler;
typedef std::function<void(const AccountAccessClient*, const Model::DeleteEntitlementRequest&, const Model::DeleteEntitlementOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteEntitlementResponseReceivedHandler;
typedef std::function<void(const AccountAccessClient*, const Model::GetApplicationRequest&, const Model::GetApplicationOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetApplicationResponseReceivedHandler;
typedef std::function<void(const AccountAccessClient*, const Model::GetEntitlementRequest&, const Model::GetEntitlementOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetEntitlementResponseReceivedHandler;
typedef std::function<void(const AccountAccessClient*, const Model::ListApplicationsRequest&, const Model::ListApplicationsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListApplicationsResponseReceivedHandler;
typedef std::function<void(const AccountAccessClient*, const Model::ListEntitlementsRequest&, const Model::ListEntitlementsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListEntitlementsResponseReceivedHandler;
typedef std::function<void(const AccountAccessClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListTagsForResourceResponseReceivedHandler;
typedef std::function<void(const AccountAccessClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    TagResourceResponseReceivedHandler;
typedef std::function<void(const AccountAccessClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UntagResourceResponseReceivedHandler;
/* End of service model async handlers definitions */
}  // namespace AccountAccess
}  // namespace Aws
