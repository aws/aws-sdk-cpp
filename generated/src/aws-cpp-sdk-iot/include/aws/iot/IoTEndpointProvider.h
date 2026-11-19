/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iot/IoTClientConfiguration.h>
#include <aws/iot/IoT_EXPORTS.h>

namespace Aws {
namespace IoT {
namespace Endpoint {
using IoTClientConfiguration = Aws::IoT::IoTClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using IoTClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_IOT_API IoTBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~IoTBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const IoTClientConfiguration& config);
  virtual void SetFromClientConfiguration(const IoTClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const IoTClientConfiguration& config);
};

/**
 * The type for the IoT Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using IoTEndpointProviderBase = EndpointProviderBase<IoTClientConfiguration, IoTBuiltInParameters, IoTClientContextParameters>;

using IoTDefaultEpProviderBase = BDDEndpointProvider<IoTClientConfiguration, IoTBuiltInParameters, IoTClientContextParameters>;

}  // namespace Endpoint
}  // namespace IoT

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_IOT_EXTERN template class AWS_IOT_API Aws::Endpoint::EndpointProviderBase<
    IoT::Endpoint::IoTClientConfiguration, IoT::Endpoint::IoTBuiltInParameters, IoT::Endpoint::IoTClientContextParameters>;

AWS_IOT_EXTERN template class AWS_IOT_API Aws::Endpoint::BDDEndpointProvider<
    IoT::Endpoint::IoTClientConfiguration, IoT::Endpoint::IoTBuiltInParameters, IoT::Endpoint::IoTClientContextParameters>;
}  // namespace Endpoint

namespace IoT {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_IOT_API IoTEndpointProvider : public IoTDefaultEpProviderBase {
 public:
  using IoTResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  IoTEndpointProvider();

  ~IoTEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace IoT
}  // namespace Aws
