/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/gameliftstreams/GameLiftStreamsClientConfiguration.h>
#include <aws/gameliftstreams/GameLiftStreams_EXPORTS.h>

namespace Aws {
namespace GameLiftStreams {
namespace Endpoint {
using GameLiftStreamsClientConfiguration = Aws::GameLiftStreams::GameLiftStreamsClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using GameLiftStreamsClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_GAMELIFTSTREAMS_API GameLiftStreamsBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~GameLiftStreamsBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const GameLiftStreamsClientConfiguration& config);
  virtual void SetFromClientConfiguration(const GameLiftStreamsClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const GameLiftStreamsClientConfiguration& config);
};

/**
 * The type for the GameLiftStreams Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using GameLiftStreamsEndpointProviderBase =
    EndpointProviderBase<GameLiftStreamsClientConfiguration, GameLiftStreamsBuiltInParameters, GameLiftStreamsClientContextParameters>;

using GameLiftStreamsDefaultEpProviderBase =
    BDDEndpointProvider<GameLiftStreamsClientConfiguration, GameLiftStreamsBuiltInParameters, GameLiftStreamsClientContextParameters>;

}  // namespace Endpoint
}  // namespace GameLiftStreams

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_GAMELIFTSTREAMS_EXTERN template class AWS_GAMELIFTSTREAMS_API Aws::Endpoint::EndpointProviderBase<
    GameLiftStreams::Endpoint::GameLiftStreamsClientConfiguration, GameLiftStreams::Endpoint::GameLiftStreamsBuiltInParameters,
    GameLiftStreams::Endpoint::GameLiftStreamsClientContextParameters>;

AWS_GAMELIFTSTREAMS_EXTERN template class AWS_GAMELIFTSTREAMS_API Aws::Endpoint::BDDEndpointProvider<
    GameLiftStreams::Endpoint::GameLiftStreamsClientConfiguration, GameLiftStreams::Endpoint::GameLiftStreamsBuiltInParameters,
    GameLiftStreams::Endpoint::GameLiftStreamsClientContextParameters>;
}  // namespace Endpoint

namespace GameLiftStreams {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_GAMELIFTSTREAMS_API GameLiftStreamsEndpointProvider : public GameLiftStreamsDefaultEpProviderBase {
 public:
  using GameLiftStreamsResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  GameLiftStreamsEndpointProvider();

  ~GameLiftStreamsEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace GameLiftStreams
}  // namespace Aws
