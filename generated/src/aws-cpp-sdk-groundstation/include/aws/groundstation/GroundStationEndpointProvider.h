/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/groundstation/GroundStationClientConfiguration.h>
#include <aws/groundstation/GroundStation_EXPORTS.h>

namespace Aws {
namespace GroundStation {
namespace Endpoint {
using GroundStationClientConfiguration = Aws::GroundStation::GroundStationClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using GroundStationClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_GROUNDSTATION_API GroundStationBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~GroundStationBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const GroundStationClientConfiguration& config);
  virtual void SetFromClientConfiguration(const GroundStationClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const GroundStationClientConfiguration& config);
};

/**
 * The type for the GroundStation Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using GroundStationEndpointProviderBase =
    EndpointProviderBase<GroundStationClientConfiguration, GroundStationBuiltInParameters, GroundStationClientContextParameters>;

using GroundStationDefaultEpProviderBase =
    BDDEndpointProvider<GroundStationClientConfiguration, GroundStationBuiltInParameters, GroundStationClientContextParameters>;

}  // namespace Endpoint
}  // namespace GroundStation

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_GROUNDSTATION_EXTERN template class AWS_GROUNDSTATION_API Aws::Endpoint::EndpointProviderBase<
    GroundStation::Endpoint::GroundStationClientConfiguration, GroundStation::Endpoint::GroundStationBuiltInParameters,
    GroundStation::Endpoint::GroundStationClientContextParameters>;

AWS_GROUNDSTATION_EXTERN template class AWS_GROUNDSTATION_API Aws::Endpoint::BDDEndpointProvider<
    GroundStation::Endpoint::GroundStationClientConfiguration, GroundStation::Endpoint::GroundStationBuiltInParameters,
    GroundStation::Endpoint::GroundStationClientContextParameters>;
}  // namespace Endpoint

namespace GroundStation {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_GROUNDSTATION_API GroundStationEndpointProvider : public GroundStationDefaultEpProviderBase {
 public:
  using GroundStationResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  GroundStationEndpointProvider();

  ~GroundStationEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace GroundStation
}  // namespace Aws
