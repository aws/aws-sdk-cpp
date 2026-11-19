/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/globalaccelerator/GlobalAcceleratorClientConfiguration.h>
#include <aws/globalaccelerator/GlobalAccelerator_EXPORTS.h>

namespace Aws {
namespace GlobalAccelerator {
namespace Endpoint {
using GlobalAcceleratorClientConfiguration = Aws::GlobalAccelerator::GlobalAcceleratorClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using GlobalAcceleratorClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_GLOBALACCELERATOR_API GlobalAcceleratorBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~GlobalAcceleratorBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const GlobalAcceleratorClientConfiguration& config);
  virtual void SetFromClientConfiguration(const GlobalAcceleratorClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const GlobalAcceleratorClientConfiguration& config);
};

/**
 * The type for the GlobalAccelerator Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using GlobalAcceleratorEndpointProviderBase = EndpointProviderBase<GlobalAcceleratorClientConfiguration, GlobalAcceleratorBuiltInParameters,
                                                                   GlobalAcceleratorClientContextParameters>;

using GlobalAcceleratorDefaultEpProviderBase =
    BDDEndpointProvider<GlobalAcceleratorClientConfiguration, GlobalAcceleratorBuiltInParameters, GlobalAcceleratorClientContextParameters>;

}  // namespace Endpoint
}  // namespace GlobalAccelerator

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_GLOBALACCELERATOR_EXTERN template class AWS_GLOBALACCELERATOR_API Aws::Endpoint::EndpointProviderBase<
    GlobalAccelerator::Endpoint::GlobalAcceleratorClientConfiguration, GlobalAccelerator::Endpoint::GlobalAcceleratorBuiltInParameters,
    GlobalAccelerator::Endpoint::GlobalAcceleratorClientContextParameters>;

AWS_GLOBALACCELERATOR_EXTERN template class AWS_GLOBALACCELERATOR_API Aws::Endpoint::BDDEndpointProvider<
    GlobalAccelerator::Endpoint::GlobalAcceleratorClientConfiguration, GlobalAccelerator::Endpoint::GlobalAcceleratorBuiltInParameters,
    GlobalAccelerator::Endpoint::GlobalAcceleratorClientContextParameters>;
}  // namespace Endpoint

namespace GlobalAccelerator {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_GLOBALACCELERATOR_API GlobalAcceleratorEndpointProvider : public GlobalAcceleratorDefaultEpProviderBase {
 public:
  using GlobalAcceleratorResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  GlobalAcceleratorEndpointProvider();

  ~GlobalAcceleratorEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace GlobalAccelerator
}  // namespace Aws
