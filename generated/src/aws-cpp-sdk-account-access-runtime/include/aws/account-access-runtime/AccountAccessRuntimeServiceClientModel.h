/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/account-access-runtime/AccountAccessRuntimeEndpointProvider.h>
#include <aws/account-access-runtime/AccountAccessRuntimeErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <functional>
#include <future>
/* End of generic header includes */

/* Service model headers required in AccountAccessRuntimeClient header */
#include <aws/account-access-runtime/model/GetRoleCredentialsResult.h>
#include <aws/account-access-runtime/model/ListRolesResult.h>
/* End of service model headers required in AccountAccessRuntimeClient header */

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
class BearerTokenAuthSignerProvider;
}  // namespace Auth

namespace Client {
class RetryStrategy;
}  // namespace Client

namespace AccountAccessRuntime {
using AccountAccessRuntimeClientConfiguration = Aws::Client::GenericClientConfiguration;
using AccountAccessRuntimeEndpointProviderBase = Aws::AccountAccessRuntime::Endpoint::AccountAccessRuntimeEndpointProviderBase;
using AccountAccessRuntimeEndpointProvider = Aws::AccountAccessRuntime::Endpoint::AccountAccessRuntimeEndpointProvider;

namespace Model {
/* Service model forward declarations required in AccountAccessRuntimeClient header */
class GetRoleCredentialsRequest;
class ListRolesRequest;
/* End of service model forward declarations required in AccountAccessRuntimeClient header */

/* Service model Outcome class definitions */
typedef Aws::Utils::Outcome<GetRoleCredentialsResult, AccountAccessRuntimeError> GetRoleCredentialsOutcome;
typedef Aws::Utils::Outcome<ListRolesResult, AccountAccessRuntimeError> ListRolesOutcome;
/* End of service model Outcome class definitions */

/* Service model Outcome callable definitions */
typedef std::future<GetRoleCredentialsOutcome> GetRoleCredentialsOutcomeCallable;
typedef std::future<ListRolesOutcome> ListRolesOutcomeCallable;
/* End of service model Outcome callable definitions */
}  // namespace Model

class AccountAccessRuntimeClient;

/* Service model async handlers definitions */
typedef std::function<void(const AccountAccessRuntimeClient*, const Model::GetRoleCredentialsRequest&,
                           const Model::GetRoleCredentialsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetRoleCredentialsResponseReceivedHandler;
typedef std::function<void(const AccountAccessRuntimeClient*, const Model::ListRolesRequest&, const Model::ListRolesOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListRolesResponseReceivedHandler;
/* End of service model async handlers definitions */
}  // namespace AccountAccessRuntime
}  // namespace Aws
