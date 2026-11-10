/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/controltower/ControlTowerClientConfiguration.h>
#include <aws/controltower/ControlTower_EXPORTS.h>
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws {
namespace ControlTower {
namespace Endpoint {
using ControlTowerClientConfiguration = Aws::ControlTower::ControlTowerClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using ControlTowerClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_CONTROLTOWER_API ControlTowerBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~ControlTowerBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const ControlTowerClientConfiguration& config);
  virtual void SetFromClientConfiguration(const ControlTowerClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const ControlTowerClientConfiguration& config);
};

/**
 * The type for the ControlTower Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using ControlTowerEndpointProviderBase =
    EndpointProviderBase<ControlTowerClientConfiguration, ControlTowerBuiltInParameters, ControlTowerClientContextParameters>;

using ControlTowerDefaultEpProviderBase =
    BDDEndpointProvider<ControlTowerClientConfiguration, ControlTowerBuiltInParameters, ControlTowerClientContextParameters>;

}  // namespace Endpoint
}  // namespace ControlTower

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_CONTROLTOWER_EXTERN template class AWS_CONTROLTOWER_API Aws::Endpoint::EndpointProviderBase<
    ControlTower::Endpoint::ControlTowerClientConfiguration, ControlTower::Endpoint::ControlTowerBuiltInParameters,
    ControlTower::Endpoint::ControlTowerClientContextParameters>;

AWS_CONTROLTOWER_EXTERN template class AWS_CONTROLTOWER_API Aws::Endpoint::BDDEndpointProvider<
    ControlTower::Endpoint::ControlTowerClientConfiguration, ControlTower::Endpoint::ControlTowerBuiltInParameters,
    ControlTower::Endpoint::ControlTowerClientContextParameters>;
}  // namespace Endpoint

namespace ControlTower {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_CONTROLTOWER_API ControlTowerEndpointProvider : public ControlTowerDefaultEpProviderBase {
 public:
  using ControlTowerResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  ControlTowerEndpointProvider();

  ~ControlTowerEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace ControlTower
}  // namespace Aws
