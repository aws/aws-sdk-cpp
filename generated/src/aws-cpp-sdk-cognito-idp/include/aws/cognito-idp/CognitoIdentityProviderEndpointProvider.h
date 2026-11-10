/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProviderClientConfiguration.h>
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws {
namespace CognitoIdentityProvider {
namespace Endpoint {
using CognitoIdentityProviderClientConfiguration = Aws::CognitoIdentityProvider::CognitoIdentityProviderClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using CognitoIdentityProviderClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_COGNITOIDENTITYPROVIDER_API CognitoIdentityProviderBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~CognitoIdentityProviderBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const CognitoIdentityProviderClientConfiguration& config);
  virtual void SetFromClientConfiguration(const CognitoIdentityProviderClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const CognitoIdentityProviderClientConfiguration& config);
};

/**
 * The type for the CognitoIdentityProvider Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using CognitoIdentityProviderEndpointProviderBase =
    EndpointProviderBase<CognitoIdentityProviderClientConfiguration, CognitoIdentityProviderBuiltInParameters,
                         CognitoIdentityProviderClientContextParameters>;

using CognitoIdentityProviderDefaultEpProviderBase =
    BDDEndpointProvider<CognitoIdentityProviderClientConfiguration, CognitoIdentityProviderBuiltInParameters,
                        CognitoIdentityProviderClientContextParameters>;

}  // namespace Endpoint
}  // namespace CognitoIdentityProvider

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_COGNITOIDENTITYPROVIDER_EXTERN template class AWS_COGNITOIDENTITYPROVIDER_API
    Aws::Endpoint::EndpointProviderBase<CognitoIdentityProvider::Endpoint::CognitoIdentityProviderClientConfiguration,
                                        CognitoIdentityProvider::Endpoint::CognitoIdentityProviderBuiltInParameters,
                                        CognitoIdentityProvider::Endpoint::CognitoIdentityProviderClientContextParameters>;

AWS_COGNITOIDENTITYPROVIDER_EXTERN template class AWS_COGNITOIDENTITYPROVIDER_API
    Aws::Endpoint::BDDEndpointProvider<CognitoIdentityProvider::Endpoint::CognitoIdentityProviderClientConfiguration,
                                       CognitoIdentityProvider::Endpoint::CognitoIdentityProviderBuiltInParameters,
                                       CognitoIdentityProvider::Endpoint::CognitoIdentityProviderClientContextParameters>;
}  // namespace Endpoint

namespace CognitoIdentityProvider {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_COGNITOIDENTITYPROVIDER_API CognitoIdentityProviderEndpointProvider : public CognitoIdentityProviderDefaultEpProviderBase {
 public:
  using CognitoIdentityProviderResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  CognitoIdentityProviderEndpointProvider();

  ~CognitoIdentityProviderEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace CognitoIdentityProvider
}  // namespace Aws
