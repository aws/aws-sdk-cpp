/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appconfig/AppConfigClientConfiguration.h>
#include <aws/appconfig/AppConfig_EXPORTS.h>
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws {
namespace AppConfig {
namespace Endpoint {
using AppConfigClientConfiguration = Aws::AppConfig::AppConfigClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using AppConfigClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_APPCONFIG_API AppConfigBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~AppConfigBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const AppConfigClientConfiguration& config);
  virtual void SetFromClientConfiguration(const AppConfigClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const AppConfigClientConfiguration& config);
};

/**
 * The type for the AppConfig Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using AppConfigEndpointProviderBase =
    EndpointProviderBase<AppConfigClientConfiguration, AppConfigBuiltInParameters, AppConfigClientContextParameters>;

using AppConfigDefaultEpProviderBase =
    BDDEndpointProvider<AppConfigClientConfiguration, AppConfigBuiltInParameters, AppConfigClientContextParameters>;

}  // namespace Endpoint
}  // namespace AppConfig

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_APPCONFIG_EXTERN template class AWS_APPCONFIG_API
    Aws::Endpoint::EndpointProviderBase<AppConfig::Endpoint::AppConfigClientConfiguration, AppConfig::Endpoint::AppConfigBuiltInParameters,
                                        AppConfig::Endpoint::AppConfigClientContextParameters>;

AWS_APPCONFIG_EXTERN template class AWS_APPCONFIG_API
    Aws::Endpoint::BDDEndpointProvider<AppConfig::Endpoint::AppConfigClientConfiguration, AppConfig::Endpoint::AppConfigBuiltInParameters,
                                       AppConfig::Endpoint::AppConfigClientContextParameters>;
}  // namespace Endpoint

namespace AppConfig {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_APPCONFIG_API AppConfigEndpointProvider : public AppConfigDefaultEpProviderBase {
 public:
  using AppConfigResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  AppConfigEndpointProvider();

  ~AppConfigEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace AppConfig
}  // namespace Aws
