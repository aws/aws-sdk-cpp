/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigServiceClientConfiguration.h>
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws {
namespace ConfigService {
namespace Endpoint {
using ConfigServiceClientConfiguration = Aws::ConfigService::ConfigServiceClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using ConfigServiceClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_CONFIGSERVICE_API ConfigServiceBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~ConfigServiceBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const ConfigServiceClientConfiguration& config);
  virtual void SetFromClientConfiguration(const ConfigServiceClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const ConfigServiceClientConfiguration& config);
};

/**
 * The type for the ConfigService Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using ConfigServiceEndpointProviderBase =
    EndpointProviderBase<ConfigServiceClientConfiguration, ConfigServiceBuiltInParameters, ConfigServiceClientContextParameters>;

using ConfigServiceDefaultEpProviderBase =
    BDDEndpointProvider<ConfigServiceClientConfiguration, ConfigServiceBuiltInParameters, ConfigServiceClientContextParameters>;

}  // namespace Endpoint
}  // namespace ConfigService

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_CONFIGSERVICE_EXTERN template class AWS_CONFIGSERVICE_API Aws::Endpoint::EndpointProviderBase<
    ConfigService::Endpoint::ConfigServiceClientConfiguration, ConfigService::Endpoint::ConfigServiceBuiltInParameters,
    ConfigService::Endpoint::ConfigServiceClientContextParameters>;

AWS_CONFIGSERVICE_EXTERN template class AWS_CONFIGSERVICE_API Aws::Endpoint::BDDEndpointProvider<
    ConfigService::Endpoint::ConfigServiceClientConfiguration, ConfigService::Endpoint::ConfigServiceBuiltInParameters,
    ConfigService::Endpoint::ConfigServiceClientContextParameters>;
}  // namespace Endpoint

namespace ConfigService {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_CONFIGSERVICE_API ConfigServiceEndpointProvider : public ConfigServiceDefaultEpProviderBase {
 public:
  using ConfigServiceResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  ConfigServiceEndpointProvider();

  ~ConfigServiceEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace ConfigService
}  // namespace Aws
