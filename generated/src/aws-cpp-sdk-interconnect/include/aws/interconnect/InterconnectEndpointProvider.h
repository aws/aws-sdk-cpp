/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/interconnect/InterconnectClientConfiguration.h>
#include <aws/interconnect/Interconnect_EXPORTS.h>

namespace Aws {
namespace Interconnect {
namespace Endpoint {
using InterconnectClientConfiguration = Aws::Interconnect::InterconnectClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using InterconnectClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_INTERCONNECT_API InterconnectBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~InterconnectBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const InterconnectClientConfiguration& config);
  virtual void SetFromClientConfiguration(const InterconnectClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const InterconnectClientConfiguration& config);
};

/**
 * The type for the Interconnect Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using InterconnectEndpointProviderBase =
    EndpointProviderBase<InterconnectClientConfiguration, InterconnectBuiltInParameters, InterconnectClientContextParameters>;

using InterconnectDefaultEpProviderBase =
    BDDEndpointProvider<InterconnectClientConfiguration, InterconnectBuiltInParameters, InterconnectClientContextParameters>;

}  // namespace Endpoint
}  // namespace Interconnect

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_INTERCONNECT_EXTERN template class AWS_INTERCONNECT_API Aws::Endpoint::EndpointProviderBase<
    Interconnect::Endpoint::InterconnectClientConfiguration, Interconnect::Endpoint::InterconnectBuiltInParameters,
    Interconnect::Endpoint::InterconnectClientContextParameters>;

AWS_INTERCONNECT_EXTERN template class AWS_INTERCONNECT_API Aws::Endpoint::BDDEndpointProvider<
    Interconnect::Endpoint::InterconnectClientConfiguration, Interconnect::Endpoint::InterconnectBuiltInParameters,
    Interconnect::Endpoint::InterconnectClientContextParameters>;
}  // namespace Endpoint

namespace Interconnect {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_INTERCONNECT_API InterconnectEndpointProvider : public InterconnectDefaultEpProviderBase {
 public:
  using InterconnectResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  InterconnectEndpointProvider();

  ~InterconnectEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace Interconnect
}  // namespace Aws
