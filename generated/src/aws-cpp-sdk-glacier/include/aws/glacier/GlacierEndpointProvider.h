/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glacier/GlacierClientConfiguration.h>
#include <aws/glacier/Glacier_EXPORTS.h>

namespace Aws {
namespace Glacier {
namespace Endpoint {
using GlacierClientConfiguration = Aws::Glacier::GlacierClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using GlacierClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_GLACIER_API GlacierBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~GlacierBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const GlacierClientConfiguration& config);
  virtual void SetFromClientConfiguration(const GlacierClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const GlacierClientConfiguration& config);
};

/**
 * The type for the Glacier Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using GlacierEndpointProviderBase =
    EndpointProviderBase<GlacierClientConfiguration, GlacierBuiltInParameters, GlacierClientContextParameters>;

using GlacierDefaultEpProviderBase =
    BDDEndpointProvider<GlacierClientConfiguration, GlacierBuiltInParameters, GlacierClientContextParameters>;

}  // namespace Endpoint
}  // namespace Glacier

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_GLACIER_EXTERN template class AWS_GLACIER_API
    Aws::Endpoint::EndpointProviderBase<Glacier::Endpoint::GlacierClientConfiguration, Glacier::Endpoint::GlacierBuiltInParameters,
                                        Glacier::Endpoint::GlacierClientContextParameters>;

AWS_GLACIER_EXTERN template class AWS_GLACIER_API
    Aws::Endpoint::BDDEndpointProvider<Glacier::Endpoint::GlacierClientConfiguration, Glacier::Endpoint::GlacierBuiltInParameters,
                                       Glacier::Endpoint::GlacierClientContextParameters>;
}  // namespace Endpoint

namespace Glacier {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_GLACIER_API GlacierEndpointProvider : public GlacierDefaultEpProviderBase {
 public:
  using GlacierResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  GlacierEndpointProvider();

  ~GlacierEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace Glacier
}  // namespace Aws
