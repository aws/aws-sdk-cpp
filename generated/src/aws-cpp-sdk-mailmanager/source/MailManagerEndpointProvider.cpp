/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mailmanager/MailManagerEndpointProvider.h>
#include <aws/mailmanager/internal/MailManagerEndpointRules.h>

namespace Aws {
#ifndef AWS_MAILMANAGER_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<MailManager::Endpoint::MailManagerClientConfiguration,
                                                   MailManager::Endpoint::MailManagerBuiltInParameters,
                                                   MailManager::Endpoint::MailManagerClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<MailManager::Endpoint::MailManagerClientConfiguration,
                                                  MailManager::Endpoint::MailManagerBuiltInParameters,
                                                  MailManager::Endpoint::MailManagerClientContextParameters>;
}  // namespace Endpoint
#endif

namespace MailManager {
namespace Endpoint {
MailManagerEndpointProvider::MailManagerEndpointProvider()
    : MailManagerDefaultEpProviderBase(Aws::MailManager::MailManagerEndpointRules::GetRulesBlob(),
                                       Aws::MailManager::MailManagerEndpointRules::RulesBlobSize) {}

void MailManagerBuiltInParameters::SetFromClientConfiguration(const MailManagerClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const MailManagerClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void MailManagerBuiltInParameters::SetFromClientConfiguration(const MailManagerClientConfiguration& config,
                                                              const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const MailManagerClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void MailManagerBuiltInParameters::SetServiceSpecificParameters(const MailManagerClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace MailManager
}  // namespace Aws
