/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplify/AmplifyClientConfiguration.h>
#include <aws/amplify/Amplify_EXPORTS.h>
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws {
namespace Amplify {
namespace Endpoint {
using AmplifyClientConfiguration = Aws::Amplify::AmplifyClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using AmplifyClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_AMPLIFY_API AmplifyBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~AmplifyBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const AmplifyClientConfiguration& config);
  virtual void SetFromClientConfiguration(const AmplifyClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const AmplifyClientConfiguration& config);
};

/**
 * The type for the Amplify Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using AmplifyEndpointProviderBase =
    EndpointProviderBase<AmplifyClientConfiguration, AmplifyBuiltInParameters, AmplifyClientContextParameters>;

using AmplifyDefaultEpProviderBase =
    BDDEndpointProvider<AmplifyClientConfiguration, AmplifyBuiltInParameters, AmplifyClientContextParameters>;

}  // namespace Endpoint
}  // namespace Amplify

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_AMPLIFY_EXTERN template class AWS_AMPLIFY_API
    Aws::Endpoint::EndpointProviderBase<Amplify::Endpoint::AmplifyClientConfiguration, Amplify::Endpoint::AmplifyBuiltInParameters,
                                        Amplify::Endpoint::AmplifyClientContextParameters>;

AWS_AMPLIFY_EXTERN template class AWS_AMPLIFY_API
    Aws::Endpoint::BDDEndpointProvider<Amplify::Endpoint::AmplifyClientConfiguration, Amplify::Endpoint::AmplifyBuiltInParameters,
                                       Amplify::Endpoint::AmplifyClientContextParameters>;
}  // namespace Endpoint

namespace Amplify {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_AMPLIFY_API AmplifyEndpointProvider : public AmplifyDefaultEpProviderBase {
 public:
  using AmplifyResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  AmplifyEndpointProvider();

  ~AmplifyEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace Amplify
}  // namespace Aws
