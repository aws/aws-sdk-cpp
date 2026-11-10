/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iot-managed-integrations/IoTManagedIntegrationsClientConfiguration.h>
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>

namespace Aws {
namespace IoTManagedIntegrations {
namespace Endpoint {
using IoTManagedIntegrationsClientConfiguration = Aws::IoTManagedIntegrations::IoTManagedIntegrationsClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using IoTManagedIntegrationsClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_IOTMANAGEDINTEGRATIONS_API IoTManagedIntegrationsBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~IoTManagedIntegrationsBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const IoTManagedIntegrationsClientConfiguration& config);
  virtual void SetFromClientConfiguration(const IoTManagedIntegrationsClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const IoTManagedIntegrationsClientConfiguration& config);
};

/**
 * The type for the IoTManagedIntegrations Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using IoTManagedIntegrationsEndpointProviderBase =
    EndpointProviderBase<IoTManagedIntegrationsClientConfiguration, IoTManagedIntegrationsBuiltInParameters,
                         IoTManagedIntegrationsClientContextParameters>;

using IoTManagedIntegrationsDefaultEpProviderBase =
    BDDEndpointProvider<IoTManagedIntegrationsClientConfiguration, IoTManagedIntegrationsBuiltInParameters,
                        IoTManagedIntegrationsClientContextParameters>;

}  // namespace Endpoint
}  // namespace IoTManagedIntegrations

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_IOTMANAGEDINTEGRATIONS_EXTERN template class AWS_IOTMANAGEDINTEGRATIONS_API
    Aws::Endpoint::EndpointProviderBase<IoTManagedIntegrations::Endpoint::IoTManagedIntegrationsClientConfiguration,
                                        IoTManagedIntegrations::Endpoint::IoTManagedIntegrationsBuiltInParameters,
                                        IoTManagedIntegrations::Endpoint::IoTManagedIntegrationsClientContextParameters>;

AWS_IOTMANAGEDINTEGRATIONS_EXTERN template class AWS_IOTMANAGEDINTEGRATIONS_API
    Aws::Endpoint::BDDEndpointProvider<IoTManagedIntegrations::Endpoint::IoTManagedIntegrationsClientConfiguration,
                                       IoTManagedIntegrations::Endpoint::IoTManagedIntegrationsBuiltInParameters,
                                       IoTManagedIntegrations::Endpoint::IoTManagedIntegrationsClientContextParameters>;
}  // namespace Endpoint

namespace IoTManagedIntegrations {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_IOTMANAGEDINTEGRATIONS_API IoTManagedIntegrationsEndpointProvider : public IoTManagedIntegrationsDefaultEpProviderBase {
 public:
  using IoTManagedIntegrationsResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  IoTManagedIntegrationsEndpointProvider();

  ~IoTManagedIntegrationsEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace IoTManagedIntegrations
}  // namespace Aws
