/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/ConfigServiceEndpointProvider.h>
#include <aws/config/internal/ConfigServiceEndpointRules.h>

namespace Aws {
namespace ConfigService {
namespace Endpoint {
ConfigServiceEndpointProvider::ConfigServiceEndpointProvider()
    : ConfigServiceDefaultEpProviderBase(Aws::ConfigService::ConfigServiceEndpointRules::GetRulesBlob(),
                                         Aws::ConfigService::ConfigServiceEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace ConfigService
}  // namespace Aws
