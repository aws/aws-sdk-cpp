/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apprunner/AppRunnerEndpointProvider.h>
#include <aws/apprunner/internal/AppRunnerEndpointRules.h>

namespace Aws {
namespace AppRunner {
namespace Endpoint {
AppRunnerEndpointProvider::AppRunnerEndpointProvider()
    : AppRunnerDefaultEpProviderBase(Aws::AppRunner::AppRunnerEndpointRules::GetRulesBlob(),
                                     Aws::AppRunner::AppRunnerEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace AppRunner
}  // namespace Aws
