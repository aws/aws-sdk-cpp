/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/devicefarm/DeviceFarmClientConfiguration.h>
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>

namespace Aws {
namespace DeviceFarm {
namespace Endpoint {
using DeviceFarmClientConfiguration = Aws::DeviceFarm::DeviceFarmClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using DeviceFarmClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_DEVICEFARM_API DeviceFarmBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~DeviceFarmBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const DeviceFarmClientConfiguration& config);
  virtual void SetFromClientConfiguration(const DeviceFarmClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const DeviceFarmClientConfiguration& config);
};

/**
 * The type for the DeviceFarm Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using DeviceFarmEndpointProviderBase =
    EndpointProviderBase<DeviceFarmClientConfiguration, DeviceFarmBuiltInParameters, DeviceFarmClientContextParameters>;

using DeviceFarmDefaultEpProviderBase =
    BDDEndpointProvider<DeviceFarmClientConfiguration, DeviceFarmBuiltInParameters, DeviceFarmClientContextParameters>;

}  // namespace Endpoint
}  // namespace DeviceFarm

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_DEVICEFARM_EXTERN template class AWS_DEVICEFARM_API Aws::Endpoint::EndpointProviderBase<
    DeviceFarm::Endpoint::DeviceFarmClientConfiguration, DeviceFarm::Endpoint::DeviceFarmBuiltInParameters,
    DeviceFarm::Endpoint::DeviceFarmClientContextParameters>;

AWS_DEVICEFARM_EXTERN template class AWS_DEVICEFARM_API Aws::Endpoint::BDDEndpointProvider<
    DeviceFarm::Endpoint::DeviceFarmClientConfiguration, DeviceFarm::Endpoint::DeviceFarmBuiltInParameters,
    DeviceFarm::Endpoint::DeviceFarmClientContextParameters>;
}  // namespace Endpoint

namespace DeviceFarm {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_DEVICEFARM_API DeviceFarmEndpointProvider : public DeviceFarmDefaultEpProviderBase {
 public:
  using DeviceFarmResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  DeviceFarmEndpointProvider();

  ~DeviceFarmEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace DeviceFarm
}  // namespace Aws
