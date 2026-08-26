/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/core/client/AWSError.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iam-toolbox/IAMToolboxEndpointProvider.h>
#include <aws/iam-toolbox/IAMToolboxErrors.h>

#include <functional>
#include <future>
/* End of generic header includes */

/* Service model headers required in IAMToolboxClient header */
#include <aws/iam-toolbox/model/GetRequestAuthorizationDetailsResult.h>
/* End of service model headers required in IAMToolboxClient header */

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

namespace IAMToolbox {
using IAMToolboxClientConfiguration = Aws::Client::GenericClientConfiguration;
using IAMToolboxEndpointProviderBase = Aws::IAMToolbox::Endpoint::IAMToolboxEndpointProviderBase;
using IAMToolboxEndpointProvider = Aws::IAMToolbox::Endpoint::IAMToolboxEndpointProvider;

namespace Model {
/* Service model forward declarations required in IAMToolboxClient header */
class GetRequestAuthorizationDetailsRequest;
/* End of service model forward declarations required in IAMToolboxClient header */

/* Service model Outcome class definitions */
typedef Aws::Utils::Outcome<GetRequestAuthorizationDetailsResult, IAMToolboxError> GetRequestAuthorizationDetailsOutcome;
/* End of service model Outcome class definitions */

/* Service model Outcome callable definitions */
typedef std::future<GetRequestAuthorizationDetailsOutcome> GetRequestAuthorizationDetailsOutcomeCallable;
/* End of service model Outcome callable definitions */
}  // namespace Model

class IAMToolboxClient;

/* Service model async handlers definitions */
typedef std::function<void(const IAMToolboxClient*, const Model::GetRequestAuthorizationDetailsRequest&,
                           const Model::GetRequestAuthorizationDetailsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetRequestAuthorizationDetailsResponseReceivedHandler;
/* End of service model async handlers definitions */
}  // namespace IAMToolbox
}  // namespace Aws
