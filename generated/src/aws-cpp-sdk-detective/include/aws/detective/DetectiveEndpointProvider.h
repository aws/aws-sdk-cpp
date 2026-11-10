/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/detective/DetectiveClientConfiguration.h>
#include <aws/detective/Detective_EXPORTS.h>

namespace Aws {
namespace Detective {
namespace Endpoint {
using DetectiveClientConfiguration = Aws::Detective::DetectiveClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using DetectiveClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_DETECTIVE_API DetectiveBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~DetectiveBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const DetectiveClientConfiguration& config);
  virtual void SetFromClientConfiguration(const DetectiveClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const DetectiveClientConfiguration& config);
};

/**
 * The type for the Detective Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using DetectiveEndpointProviderBase =
    EndpointProviderBase<DetectiveClientConfiguration, DetectiveBuiltInParameters, DetectiveClientContextParameters>;

using DetectiveDefaultEpProviderBase =
    BDDEndpointProvider<DetectiveClientConfiguration, DetectiveBuiltInParameters, DetectiveClientContextParameters>;

}  // namespace Endpoint
}  // namespace Detective

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_DETECTIVE_EXTERN template class AWS_DETECTIVE_API
    Aws::Endpoint::EndpointProviderBase<Detective::Endpoint::DetectiveClientConfiguration, Detective::Endpoint::DetectiveBuiltInParameters,
                                        Detective::Endpoint::DetectiveClientContextParameters>;

AWS_DETECTIVE_EXTERN template class AWS_DETECTIVE_API
    Aws::Endpoint::BDDEndpointProvider<Detective::Endpoint::DetectiveClientConfiguration, Detective::Endpoint::DetectiveBuiltInParameters,
                                       Detective::Endpoint::DetectiveClientContextParameters>;
}  // namespace Endpoint

namespace Detective {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_DETECTIVE_API DetectiveEndpointProvider : public DetectiveDefaultEpProviderBase {
 public:
  using DetectiveResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  DetectiveEndpointProvider();

  ~DetectiveEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace Detective
}  // namespace Aws
