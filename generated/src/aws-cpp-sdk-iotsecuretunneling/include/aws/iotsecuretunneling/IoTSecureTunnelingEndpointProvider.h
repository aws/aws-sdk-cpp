/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotsecuretunneling/IoTSecureTunnelingClientConfiguration.h>
#include <aws/iotsecuretunneling/IoTSecureTunneling_EXPORTS.h>

namespace Aws {
namespace IoTSecureTunneling {
namespace Endpoint {
using IoTSecureTunnelingClientConfiguration = Aws::IoTSecureTunneling::IoTSecureTunnelingClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using IoTSecureTunnelingClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_IOTSECURETUNNELING_API IoTSecureTunnelingBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~IoTSecureTunnelingBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const IoTSecureTunnelingClientConfiguration& config);
  virtual void SetFromClientConfiguration(const IoTSecureTunnelingClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const IoTSecureTunnelingClientConfiguration& config);
};

/**
 * The type for the IoTSecureTunneling Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using IoTSecureTunnelingEndpointProviderBase =
    EndpointProviderBase<IoTSecureTunnelingClientConfiguration, IoTSecureTunnelingBuiltInParameters,
                         IoTSecureTunnelingClientContextParameters>;

using IoTSecureTunnelingDefaultEpProviderBase =
    BDDEndpointProvider<IoTSecureTunnelingClientConfiguration, IoTSecureTunnelingBuiltInParameters,
                        IoTSecureTunnelingClientContextParameters>;

}  // namespace Endpoint
}  // namespace IoTSecureTunneling

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_IOTSECURETUNNELING_EXTERN template class AWS_IOTSECURETUNNELING_API Aws::Endpoint::EndpointProviderBase<
    IoTSecureTunneling::Endpoint::IoTSecureTunnelingClientConfiguration, IoTSecureTunneling::Endpoint::IoTSecureTunnelingBuiltInParameters,
    IoTSecureTunneling::Endpoint::IoTSecureTunnelingClientContextParameters>;

AWS_IOTSECURETUNNELING_EXTERN template class AWS_IOTSECURETUNNELING_API Aws::Endpoint::BDDEndpointProvider<
    IoTSecureTunneling::Endpoint::IoTSecureTunnelingClientConfiguration, IoTSecureTunneling::Endpoint::IoTSecureTunnelingBuiltInParameters,
    IoTSecureTunneling::Endpoint::IoTSecureTunnelingClientContextParameters>;
}  // namespace Endpoint

namespace IoTSecureTunneling {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_IOTSECURETUNNELING_API IoTSecureTunnelingEndpointProvider : public IoTSecureTunnelingDefaultEpProviderBase {
 public:
  using IoTSecureTunnelingResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  IoTSecureTunnelingEndpointProvider();

  ~IoTSecureTunnelingEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace IoTSecureTunneling
}  // namespace Aws
