/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-identity/ChimeSDKIdentityClientConfiguration.h>
#include <aws/chime-sdk-identity/ChimeSDKIdentity_EXPORTS.h>
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws {
namespace ChimeSDKIdentity {
namespace Endpoint {
using ChimeSDKIdentityClientConfiguration = Aws::ChimeSDKIdentity::ChimeSDKIdentityClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using ChimeSDKIdentityClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_CHIMESDKIDENTITY_API ChimeSDKIdentityBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~ChimeSDKIdentityBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const ChimeSDKIdentityClientConfiguration& config);
  virtual void SetFromClientConfiguration(const ChimeSDKIdentityClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const ChimeSDKIdentityClientConfiguration& config);
};

/**
 * The type for the ChimeSDKIdentity Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using ChimeSDKIdentityEndpointProviderBase =
    EndpointProviderBase<ChimeSDKIdentityClientConfiguration, ChimeSDKIdentityBuiltInParameters, ChimeSDKIdentityClientContextParameters>;

using ChimeSDKIdentityDefaultEpProviderBase =
    BDDEndpointProvider<ChimeSDKIdentityClientConfiguration, ChimeSDKIdentityBuiltInParameters, ChimeSDKIdentityClientContextParameters>;

}  // namespace Endpoint
}  // namespace ChimeSDKIdentity

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_CHIMESDKIDENTITY_EXTERN template class AWS_CHIMESDKIDENTITY_API Aws::Endpoint::EndpointProviderBase<
    ChimeSDKIdentity::Endpoint::ChimeSDKIdentityClientConfiguration, ChimeSDKIdentity::Endpoint::ChimeSDKIdentityBuiltInParameters,
    ChimeSDKIdentity::Endpoint::ChimeSDKIdentityClientContextParameters>;

AWS_CHIMESDKIDENTITY_EXTERN template class AWS_CHIMESDKIDENTITY_API Aws::Endpoint::BDDEndpointProvider<
    ChimeSDKIdentity::Endpoint::ChimeSDKIdentityClientConfiguration, ChimeSDKIdentity::Endpoint::ChimeSDKIdentityBuiltInParameters,
    ChimeSDKIdentity::Endpoint::ChimeSDKIdentityClientContextParameters>;
}  // namespace Endpoint

namespace ChimeSDKIdentity {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_CHIMESDKIDENTITY_API ChimeSDKIdentityEndpointProvider : public ChimeSDKIdentityDefaultEpProviderBase {
 public:
  using ChimeSDKIdentityResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  ChimeSDKIdentityEndpointProvider();

  ~ChimeSDKIdentityEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace ChimeSDKIdentity
}  // namespace Aws
