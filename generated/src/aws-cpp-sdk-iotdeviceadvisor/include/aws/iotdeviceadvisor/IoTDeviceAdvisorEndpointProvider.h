/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotdeviceadvisor/IoTDeviceAdvisorClientConfiguration.h>
#include <aws/iotdeviceadvisor/IoTDeviceAdvisor_EXPORTS.h>

namespace Aws {
namespace IoTDeviceAdvisor {
namespace Endpoint {
using IoTDeviceAdvisorClientConfiguration = Aws::IoTDeviceAdvisor::IoTDeviceAdvisorClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using IoTDeviceAdvisorClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_IOTDEVICEADVISOR_API IoTDeviceAdvisorBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~IoTDeviceAdvisorBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const IoTDeviceAdvisorClientConfiguration& config);
  virtual void SetFromClientConfiguration(const IoTDeviceAdvisorClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const IoTDeviceAdvisorClientConfiguration& config);
};

/**
 * The type for the IoTDeviceAdvisor Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using IoTDeviceAdvisorEndpointProviderBase =
    EndpointProviderBase<IoTDeviceAdvisorClientConfiguration, IoTDeviceAdvisorBuiltInParameters, IoTDeviceAdvisorClientContextParameters>;

using IoTDeviceAdvisorDefaultEpProviderBase =
    BDDEndpointProvider<IoTDeviceAdvisorClientConfiguration, IoTDeviceAdvisorBuiltInParameters, IoTDeviceAdvisorClientContextParameters>;

}  // namespace Endpoint
}  // namespace IoTDeviceAdvisor

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_IOTDEVICEADVISOR_EXTERN template class AWS_IOTDEVICEADVISOR_API Aws::Endpoint::EndpointProviderBase<
    IoTDeviceAdvisor::Endpoint::IoTDeviceAdvisorClientConfiguration, IoTDeviceAdvisor::Endpoint::IoTDeviceAdvisorBuiltInParameters,
    IoTDeviceAdvisor::Endpoint::IoTDeviceAdvisorClientContextParameters>;

AWS_IOTDEVICEADVISOR_EXTERN template class AWS_IOTDEVICEADVISOR_API Aws::Endpoint::BDDEndpointProvider<
    IoTDeviceAdvisor::Endpoint::IoTDeviceAdvisorClientConfiguration, IoTDeviceAdvisor::Endpoint::IoTDeviceAdvisorBuiltInParameters,
    IoTDeviceAdvisor::Endpoint::IoTDeviceAdvisorClientContextParameters>;
}  // namespace Endpoint

namespace IoTDeviceAdvisor {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_IOTDEVICEADVISOR_API IoTDeviceAdvisorEndpointProvider : public IoTDeviceAdvisorDefaultEpProviderBase {
 public:
  using IoTDeviceAdvisorResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  IoTDeviceAdvisorEndpointProvider();

  ~IoTDeviceAdvisorEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace IoTDeviceAdvisor
}  // namespace Aws
