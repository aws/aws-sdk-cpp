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
#include <aws/lambda-web/LambdaWebEndpointProvider.h>
#include <aws/lambda-web/LambdaWebErrors.h>

#include <functional>
#include <future>
/* End of generic header includes */

/* Service model headers required in LambdaWebClient header */
#include <aws/lambda-web/model/GetWebAccountSettingsRequest.h>
#include <aws/lambda-web/model/GetWebAccountSettingsResult.h>
/* End of service model headers required in LambdaWebClient header */

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

namespace LambdaWeb {
using LambdaWebClientConfiguration = Aws::Client::GenericClientConfiguration;
using LambdaWebEndpointProviderBase = Aws::LambdaWeb::Endpoint::LambdaWebEndpointProviderBase;
using LambdaWebEndpointProvider = Aws::LambdaWeb::Endpoint::LambdaWebEndpointProvider;

namespace Model {
/* Service model forward declarations required in LambdaWebClient header */
class GetWebAccountSettingsRequest;
/* End of service model forward declarations required in LambdaWebClient header */

/* Service model Outcome class definitions */
typedef Aws::Utils::Outcome<GetWebAccountSettingsResult, LambdaWebError> GetWebAccountSettingsOutcome;
/* End of service model Outcome class definitions */

/* Service model Outcome callable definitions */
typedef std::future<GetWebAccountSettingsOutcome> GetWebAccountSettingsOutcomeCallable;
/* End of service model Outcome callable definitions */
}  // namespace Model

class LambdaWebClient;

/* Service model async handlers definitions */
typedef std::function<void(const LambdaWebClient*, const Model::GetWebAccountSettingsRequest&, const Model::GetWebAccountSettingsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetWebAccountSettingsResponseReceivedHandler;
/* End of service model async handlers definitions */
}  // namespace LambdaWeb
}  // namespace Aws
