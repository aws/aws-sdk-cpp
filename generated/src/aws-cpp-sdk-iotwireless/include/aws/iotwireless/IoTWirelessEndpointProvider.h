/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotwireless/IoTWirelessClientConfiguration.h>
#include <aws/iotwireless/IoTWireless_EXPORTS.h>

namespace Aws {
namespace IoTWireless {
namespace Endpoint {
using IoTWirelessClientConfiguration = Aws::IoTWireless::IoTWirelessClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using IoTWirelessClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_IOTWIRELESS_API IoTWirelessBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~IoTWirelessBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const IoTWirelessClientConfiguration& config);
  virtual void SetFromClientConfiguration(const IoTWirelessClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const IoTWirelessClientConfiguration& config);
};

/**
 * The type for the IoTWireless Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using IoTWirelessEndpointProviderBase =
    EndpointProviderBase<IoTWirelessClientConfiguration, IoTWirelessBuiltInParameters, IoTWirelessClientContextParameters>;

using IoTWirelessDefaultEpProviderBase =
    BDDEndpointProvider<IoTWirelessClientConfiguration, IoTWirelessBuiltInParameters, IoTWirelessClientContextParameters>;

}  // namespace Endpoint
}  // namespace IoTWireless

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_IOTWIRELESS_EXTERN template class AWS_IOTWIRELESS_API Aws::Endpoint::EndpointProviderBase<
    IoTWireless::Endpoint::IoTWirelessClientConfiguration, IoTWireless::Endpoint::IoTWirelessBuiltInParameters,
    IoTWireless::Endpoint::IoTWirelessClientContextParameters>;

AWS_IOTWIRELESS_EXTERN template class AWS_IOTWIRELESS_API Aws::Endpoint::BDDEndpointProvider<
    IoTWireless::Endpoint::IoTWirelessClientConfiguration, IoTWireless::Endpoint::IoTWirelessBuiltInParameters,
    IoTWireless::Endpoint::IoTWirelessClientContextParameters>;
}  // namespace Endpoint

namespace IoTWireless {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_IOTWIRELESS_API IoTWirelessEndpointProvider : public IoTWirelessDefaultEpProviderBase {
 public:
  using IoTWirelessResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  IoTWirelessEndpointProvider();

  ~IoTWirelessEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace IoTWireless
}  // namespace Aws
