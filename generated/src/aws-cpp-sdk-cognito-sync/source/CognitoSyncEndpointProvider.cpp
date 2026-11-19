/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-sync/CognitoSyncEndpointProvider.h>
#include <aws/cognito-sync/internal/CognitoSyncEndpointRules.h>

namespace Aws {
#ifndef AWS_COGNITOSYNC_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<CognitoSync::Endpoint::CognitoSyncClientConfiguration,
                                                   CognitoSync::Endpoint::CognitoSyncBuiltInParameters,
                                                   CognitoSync::Endpoint::CognitoSyncClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<CognitoSync::Endpoint::CognitoSyncClientConfiguration,
                                                  CognitoSync::Endpoint::CognitoSyncBuiltInParameters,
                                                  CognitoSync::Endpoint::CognitoSyncClientContextParameters>;
}  // namespace Endpoint
#endif

namespace CognitoSync {
namespace Endpoint {
CognitoSyncEndpointProvider::CognitoSyncEndpointProvider()
    : CognitoSyncDefaultEpProviderBase(Aws::CognitoSync::CognitoSyncEndpointRules::GetRulesBlob(),
                                       Aws::CognitoSync::CognitoSyncEndpointRules::RulesBlobSize) {}

void CognitoSyncBuiltInParameters::SetFromClientConfiguration(const CognitoSyncClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const CognitoSyncClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void CognitoSyncBuiltInParameters::SetFromClientConfiguration(const CognitoSyncClientConfiguration& config,
                                                              const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const CognitoSyncClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void CognitoSyncBuiltInParameters::SetServiceSpecificParameters(const CognitoSyncClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace CognitoSync
}  // namespace Aws
