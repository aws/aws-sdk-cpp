/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsMLClientConfiguration.h>
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws {
namespace CleanRoomsML {
namespace Endpoint {
using CleanRoomsMLClientConfiguration = Aws::CleanRoomsML::CleanRoomsMLClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using CleanRoomsMLClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_CLEANROOMSML_API CleanRoomsMLBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~CleanRoomsMLBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const CleanRoomsMLClientConfiguration& config);
  virtual void SetFromClientConfiguration(const CleanRoomsMLClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const CleanRoomsMLClientConfiguration& config);
};

/**
 * The type for the CleanRoomsML Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using CleanRoomsMLEndpointProviderBase =
    EndpointProviderBase<CleanRoomsMLClientConfiguration, CleanRoomsMLBuiltInParameters, CleanRoomsMLClientContextParameters>;

using CleanRoomsMLDefaultEpProviderBase =
    BDDEndpointProvider<CleanRoomsMLClientConfiguration, CleanRoomsMLBuiltInParameters, CleanRoomsMLClientContextParameters>;

}  // namespace Endpoint
}  // namespace CleanRoomsML

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_CLEANROOMSML_EXTERN template class AWS_CLEANROOMSML_API Aws::Endpoint::EndpointProviderBase<
    CleanRoomsML::Endpoint::CleanRoomsMLClientConfiguration, CleanRoomsML::Endpoint::CleanRoomsMLBuiltInParameters,
    CleanRoomsML::Endpoint::CleanRoomsMLClientContextParameters>;

AWS_CLEANROOMSML_EXTERN template class AWS_CLEANROOMSML_API Aws::Endpoint::BDDEndpointProvider<
    CleanRoomsML::Endpoint::CleanRoomsMLClientConfiguration, CleanRoomsML::Endpoint::CleanRoomsMLBuiltInParameters,
    CleanRoomsML::Endpoint::CleanRoomsMLClientContextParameters>;
}  // namespace Endpoint

namespace CleanRoomsML {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_CLEANROOMSML_API CleanRoomsMLEndpointProvider : public CleanRoomsMLDefaultEpProviderBase {
 public:
  using CleanRoomsMLResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  CleanRoomsMLEndpointProvider();

  ~CleanRoomsMLEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace CleanRoomsML
}  // namespace Aws
