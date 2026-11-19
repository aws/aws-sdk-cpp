/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/gamelift/GameLiftClientConfiguration.h>
#include <aws/gamelift/GameLift_EXPORTS.h>

namespace Aws {
namespace GameLift {
namespace Endpoint {
using GameLiftClientConfiguration = Aws::GameLift::GameLiftClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using GameLiftClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_GAMELIFT_API GameLiftBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~GameLiftBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const GameLiftClientConfiguration& config);
  virtual void SetFromClientConfiguration(const GameLiftClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const GameLiftClientConfiguration& config);
};

/**
 * The type for the GameLift Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using GameLiftEndpointProviderBase =
    EndpointProviderBase<GameLiftClientConfiguration, GameLiftBuiltInParameters, GameLiftClientContextParameters>;

using GameLiftDefaultEpProviderBase =
    BDDEndpointProvider<GameLiftClientConfiguration, GameLiftBuiltInParameters, GameLiftClientContextParameters>;

}  // namespace Endpoint
}  // namespace GameLift

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_GAMELIFT_EXTERN template class AWS_GAMELIFT_API
    Aws::Endpoint::EndpointProviderBase<GameLift::Endpoint::GameLiftClientConfiguration, GameLift::Endpoint::GameLiftBuiltInParameters,
                                        GameLift::Endpoint::GameLiftClientContextParameters>;

AWS_GAMELIFT_EXTERN template class AWS_GAMELIFT_API
    Aws::Endpoint::BDDEndpointProvider<GameLift::Endpoint::GameLiftClientConfiguration, GameLift::Endpoint::GameLiftBuiltInParameters,
                                       GameLift::Endpoint::GameLiftClientContextParameters>;
}  // namespace Endpoint

namespace GameLift {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_GAMELIFT_API GameLiftEndpointProvider : public GameLiftDefaultEpProviderBase {
 public:
  using GameLiftResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  GameLiftEndpointProvider();

  ~GameLiftEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace GameLift
}  // namespace Aws
