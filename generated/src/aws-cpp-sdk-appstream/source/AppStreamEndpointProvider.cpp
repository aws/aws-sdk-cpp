/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/AppStreamEndpointProvider.h>
#include <aws/appstream/internal/AppStreamEndpointRules.h>

namespace Aws {
#ifndef AWS_APPSTREAM_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<AppStream::Endpoint::AppStreamClientConfiguration,
                                                   AppStream::Endpoint::AppStreamBuiltInParameters,
                                                   AppStream::Endpoint::AppStreamClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<AppStream::Endpoint::AppStreamClientConfiguration,
                                                  AppStream::Endpoint::AppStreamBuiltInParameters,
                                                  AppStream::Endpoint::AppStreamClientContextParameters>;
}  // namespace Endpoint
#endif

namespace AppStream {
namespace Endpoint {
AppStreamEndpointProvider::AppStreamEndpointProvider()
    : AppStreamDefaultEpProviderBase(Aws::AppStream::AppStreamEndpointRules::GetRulesBlob(),
                                     Aws::AppStream::AppStreamEndpointRules::RulesBlobSize) {}

void AppStreamBuiltInParameters::SetFromClientConfiguration(const AppStreamClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const AppStreamClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void AppStreamBuiltInParameters::SetFromClientConfiguration(const AppStreamClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const AppStreamClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void AppStreamBuiltInParameters::SetServiceSpecificParameters(const AppStreamClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace AppStream
}  // namespace Aws
