/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codestar-notifications/CodeStarNotificationsEndpointProvider.h>
#include <aws/codestar-notifications/internal/CodeStarNotificationsEndpointRules.h>

namespace Aws {
#ifndef AWS_CODESTARNOTIFICATIONS_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<CodeStarNotifications::Endpoint::CodeStarNotificationsClientConfiguration,
                                                   CodeStarNotifications::Endpoint::CodeStarNotificationsBuiltInParameters,
                                                   CodeStarNotifications::Endpoint::CodeStarNotificationsClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<CodeStarNotifications::Endpoint::CodeStarNotificationsClientConfiguration,
                                                  CodeStarNotifications::Endpoint::CodeStarNotificationsBuiltInParameters,
                                                  CodeStarNotifications::Endpoint::CodeStarNotificationsClientContextParameters>;
}  // namespace Endpoint
#endif

namespace CodeStarNotifications {
namespace Endpoint {
CodeStarNotificationsEndpointProvider::CodeStarNotificationsEndpointProvider()
    : CodeStarNotificationsDefaultEpProviderBase(Aws::CodeStarNotifications::CodeStarNotificationsEndpointRules::GetRulesBlob(),
                                                 Aws::CodeStarNotifications::CodeStarNotificationsEndpointRules::RulesBlobSize) {}

void CodeStarNotificationsBuiltInParameters::SetFromClientConfiguration(const CodeStarNotificationsClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const CodeStarNotificationsClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void CodeStarNotificationsBuiltInParameters::SetFromClientConfiguration(const CodeStarNotificationsClientConfiguration& config,
                                                                        const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const CodeStarNotificationsClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void CodeStarNotificationsBuiltInParameters::SetServiceSpecificParameters(const CodeStarNotificationsClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace CodeStarNotifications
}  // namespace Aws
