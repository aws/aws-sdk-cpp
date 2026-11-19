/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/freetier/FreeTierClientConfiguration.h>
#include <aws/freetier/FreeTier_EXPORTS.h>

namespace Aws {
namespace FreeTier {
namespace Endpoint {
using FreeTierClientConfiguration = Aws::FreeTier::FreeTierClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using FreeTierClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_FREETIER_API FreeTierBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~FreeTierBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const FreeTierClientConfiguration& config);
  virtual void SetFromClientConfiguration(const FreeTierClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const FreeTierClientConfiguration& config);
};

/**
 * The type for the FreeTier Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using FreeTierEndpointProviderBase =
    EndpointProviderBase<FreeTierClientConfiguration, FreeTierBuiltInParameters, FreeTierClientContextParameters>;

using FreeTierDefaultEpProviderBase =
    BDDEndpointProvider<FreeTierClientConfiguration, FreeTierBuiltInParameters, FreeTierClientContextParameters>;

}  // namespace Endpoint
}  // namespace FreeTier

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_FREETIER_EXTERN template class AWS_FREETIER_API
    Aws::Endpoint::EndpointProviderBase<FreeTier::Endpoint::FreeTierClientConfiguration, FreeTier::Endpoint::FreeTierBuiltInParameters,
                                        FreeTier::Endpoint::FreeTierClientContextParameters>;

AWS_FREETIER_EXTERN template class AWS_FREETIER_API
    Aws::Endpoint::BDDEndpointProvider<FreeTier::Endpoint::FreeTierClientConfiguration, FreeTier::Endpoint::FreeTierBuiltInParameters,
                                       FreeTier::Endpoint::FreeTierClientContextParameters>;
}  // namespace Endpoint

namespace FreeTier {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_FREETIER_API FreeTierEndpointProvider : public FreeTierDefaultEpProviderBase {
 public:
  using FreeTierResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  FreeTierEndpointProvider();

  ~FreeTierEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace FreeTier
}  // namespace Aws
