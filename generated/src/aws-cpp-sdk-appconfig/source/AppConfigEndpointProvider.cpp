/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appconfig/AppConfigEndpointProvider.h>
#include <aws/appconfig/internal/AppConfigEndpointRules.h>

namespace Aws {
namespace AppConfig {
namespace Endpoint {
AppConfigEndpointProvider::AppConfigEndpointProvider()
    : AppConfigDefaultEpProviderBase(Aws::AppConfig::AppConfigEndpointRules::GetRulesBlob(),
                                     Aws::AppConfig::AppConfigEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace AppConfig
}  // namespace Aws
