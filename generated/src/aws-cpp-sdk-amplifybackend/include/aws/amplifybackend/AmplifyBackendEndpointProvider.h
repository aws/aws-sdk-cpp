/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifybackend/AmplifyBackendClientConfiguration.h>
#include <aws/amplifybackend/AmplifyBackend_EXPORTS.h>
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws {
namespace AmplifyBackend {
namespace Endpoint {
using AmplifyBackendClientConfiguration = Aws::AmplifyBackend::AmplifyBackendClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using AmplifyBackendClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_AMPLIFYBACKEND_API AmplifyBackendBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~AmplifyBackendBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const AmplifyBackendClientConfiguration& config);
  virtual void SetFromClientConfiguration(const AmplifyBackendClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const AmplifyBackendClientConfiguration& config);
};

/**
 * The type for the AmplifyBackend Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using AmplifyBackendEndpointProviderBase =
    EndpointProviderBase<AmplifyBackendClientConfiguration, AmplifyBackendBuiltInParameters, AmplifyBackendClientContextParameters>;

using AmplifyBackendDefaultEpProviderBase =
    BDDEndpointProvider<AmplifyBackendClientConfiguration, AmplifyBackendBuiltInParameters, AmplifyBackendClientContextParameters>;

}  // namespace Endpoint
}  // namespace AmplifyBackend

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_AMPLIFYBACKEND_EXTERN template class AWS_AMPLIFYBACKEND_API Aws::Endpoint::EndpointProviderBase<
    AmplifyBackend::Endpoint::AmplifyBackendClientConfiguration, AmplifyBackend::Endpoint::AmplifyBackendBuiltInParameters,
    AmplifyBackend::Endpoint::AmplifyBackendClientContextParameters>;

AWS_AMPLIFYBACKEND_EXTERN template class AWS_AMPLIFYBACKEND_API Aws::Endpoint::BDDEndpointProvider<
    AmplifyBackend::Endpoint::AmplifyBackendClientConfiguration, AmplifyBackend::Endpoint::AmplifyBackendBuiltInParameters,
    AmplifyBackend::Endpoint::AmplifyBackendClientContextParameters>;
}  // namespace Endpoint

namespace AmplifyBackend {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_AMPLIFYBACKEND_API AmplifyBackendEndpointProvider : public AmplifyBackendDefaultEpProviderBase {
 public:
  using AmplifyBackendResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  AmplifyBackendEndpointProvider();

  ~AmplifyBackendEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace AmplifyBackend
}  // namespace Aws
