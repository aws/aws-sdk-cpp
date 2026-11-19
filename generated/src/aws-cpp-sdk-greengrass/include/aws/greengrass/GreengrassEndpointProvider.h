/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/greengrass/GreengrassClientConfiguration.h>
#include <aws/greengrass/Greengrass_EXPORTS.h>

namespace Aws {
namespace Greengrass {
namespace Endpoint {
using GreengrassClientConfiguration = Aws::Greengrass::GreengrassClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using GreengrassClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_GREENGRASS_API GreengrassBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~GreengrassBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const GreengrassClientConfiguration& config);
  virtual void SetFromClientConfiguration(const GreengrassClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const GreengrassClientConfiguration& config);
};

/**
 * The type for the Greengrass Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using GreengrassEndpointProviderBase =
    EndpointProviderBase<GreengrassClientConfiguration, GreengrassBuiltInParameters, GreengrassClientContextParameters>;

using GreengrassDefaultEpProviderBase =
    BDDEndpointProvider<GreengrassClientConfiguration, GreengrassBuiltInParameters, GreengrassClientContextParameters>;

}  // namespace Endpoint
}  // namespace Greengrass

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_GREENGRASS_EXTERN template class AWS_GREENGRASS_API Aws::Endpoint::EndpointProviderBase<
    Greengrass::Endpoint::GreengrassClientConfiguration, Greengrass::Endpoint::GreengrassBuiltInParameters,
    Greengrass::Endpoint::GreengrassClientContextParameters>;

AWS_GREENGRASS_EXTERN template class AWS_GREENGRASS_API Aws::Endpoint::BDDEndpointProvider<
    Greengrass::Endpoint::GreengrassClientConfiguration, Greengrass::Endpoint::GreengrassBuiltInParameters,
    Greengrass::Endpoint::GreengrassClientContextParameters>;
}  // namespace Endpoint

namespace Greengrass {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_GREENGRASS_API GreengrassEndpointProvider : public GreengrassDefaultEpProviderBase {
 public:
  using GreengrassResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  GreengrassEndpointProvider();

  ~GreengrassEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace Greengrass
}  // namespace Aws
