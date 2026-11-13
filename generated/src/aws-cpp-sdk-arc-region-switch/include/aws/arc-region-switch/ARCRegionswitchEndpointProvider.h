/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/arc-region-switch/ARCRegionswitchClientConfiguration.h>
#include <aws/arc-region-switch/ARCRegionswitch_EXPORTS.h>
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws {
namespace ARCRegionswitch {
namespace Endpoint {
using ARCRegionswitchClientConfiguration = Aws::ARCRegionswitch::ARCRegionswitchClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using ARCRegionswitchClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_ARCREGIONSWITCH_API ARCRegionswitchBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~ARCRegionswitchBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const ARCRegionswitchClientConfiguration& config);
  virtual void SetFromClientConfiguration(const ARCRegionswitchClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const ARCRegionswitchClientConfiguration& config);
};

/**
 * The type for the ARCRegionswitch Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using ARCRegionswitchEndpointProviderBase =
    EndpointProviderBase<ARCRegionswitchClientConfiguration, ARCRegionswitchBuiltInParameters, ARCRegionswitchClientContextParameters>;

using ARCRegionswitchDefaultEpProviderBase =
    BDDEndpointProvider<ARCRegionswitchClientConfiguration, ARCRegionswitchBuiltInParameters, ARCRegionswitchClientContextParameters>;

}  // namespace Endpoint
}  // namespace ARCRegionswitch

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_ARCREGIONSWITCH_EXTERN template class AWS_ARCREGIONSWITCH_API Aws::Endpoint::EndpointProviderBase<
    ARCRegionswitch::Endpoint::ARCRegionswitchClientConfiguration, ARCRegionswitch::Endpoint::ARCRegionswitchBuiltInParameters,
    ARCRegionswitch::Endpoint::ARCRegionswitchClientContextParameters>;

AWS_ARCREGIONSWITCH_EXTERN template class AWS_ARCREGIONSWITCH_API Aws::Endpoint::BDDEndpointProvider<
    ARCRegionswitch::Endpoint::ARCRegionswitchClientConfiguration, ARCRegionswitch::Endpoint::ARCRegionswitchBuiltInParameters,
    ARCRegionswitch::Endpoint::ARCRegionswitchClientContextParameters>;
}  // namespace Endpoint

namespace ARCRegionswitch {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_ARCREGIONSWITCH_API ARCRegionswitchEndpointProvider : public ARCRegionswitchDefaultEpProviderBase {
 public:
  using ARCRegionswitchResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  ARCRegionswitchEndpointProvider();

  ~ARCRegionswitchEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace ARCRegionswitch
}  // namespace Aws
