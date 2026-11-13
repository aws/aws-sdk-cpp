/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lightsail/LightsailClientConfiguration.h>
#include <aws/lightsail/Lightsail_EXPORTS.h>

namespace Aws {
namespace Lightsail {
namespace Endpoint {
using LightsailClientConfiguration = Aws::Lightsail::LightsailClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using LightsailClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_LIGHTSAIL_API LightsailBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~LightsailBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const LightsailClientConfiguration& config);
  virtual void SetFromClientConfiguration(const LightsailClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const LightsailClientConfiguration& config);
};

/**
 * The type for the Lightsail Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using LightsailEndpointProviderBase =
    EndpointProviderBase<LightsailClientConfiguration, LightsailBuiltInParameters, LightsailClientContextParameters>;

using LightsailDefaultEpProviderBase =
    BDDEndpointProvider<LightsailClientConfiguration, LightsailBuiltInParameters, LightsailClientContextParameters>;

}  // namespace Endpoint
}  // namespace Lightsail

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_LIGHTSAIL_EXTERN template class AWS_LIGHTSAIL_API
    Aws::Endpoint::EndpointProviderBase<Lightsail::Endpoint::LightsailClientConfiguration, Lightsail::Endpoint::LightsailBuiltInParameters,
                                        Lightsail::Endpoint::LightsailClientContextParameters>;

AWS_LIGHTSAIL_EXTERN template class AWS_LIGHTSAIL_API
    Aws::Endpoint::BDDEndpointProvider<Lightsail::Endpoint::LightsailClientConfiguration, Lightsail::Endpoint::LightsailBuiltInParameters,
                                       Lightsail::Endpoint::LightsailClientContextParameters>;
}  // namespace Endpoint

namespace Lightsail {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_LIGHTSAIL_API LightsailEndpointProvider : public LightsailDefaultEpProviderBase {
 public:
  using LightsailResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  LightsailEndpointProvider();

  ~LightsailEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace Lightsail
}  // namespace Aws
