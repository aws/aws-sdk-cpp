/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-identity/CognitoIdentityClientConfiguration.h>
#include <aws/cognito-identity/CognitoIdentity_EXPORTS.h>
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws {
namespace CognitoIdentity {
namespace Endpoint {
using CognitoIdentityClientConfiguration = Aws::CognitoIdentity::CognitoIdentityClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using CognitoIdentityClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_COGNITOIDENTITY_API CognitoIdentityBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~CognitoIdentityBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const CognitoIdentityClientConfiguration& config);
  virtual void SetFromClientConfiguration(const CognitoIdentityClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const CognitoIdentityClientConfiguration& config);
};

/**
 * The type for the CognitoIdentity Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using CognitoIdentityEndpointProviderBase =
    EndpointProviderBase<CognitoIdentityClientConfiguration, CognitoIdentityBuiltInParameters, CognitoIdentityClientContextParameters>;

using CognitoIdentityDefaultEpProviderBase =
    BDDEndpointProvider<CognitoIdentityClientConfiguration, CognitoIdentityBuiltInParameters, CognitoIdentityClientContextParameters>;

}  // namespace Endpoint
}  // namespace CognitoIdentity

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_COGNITOIDENTITY_EXTERN template class AWS_COGNITOIDENTITY_API Aws::Endpoint::EndpointProviderBase<
    CognitoIdentity::Endpoint::CognitoIdentityClientConfiguration, CognitoIdentity::Endpoint::CognitoIdentityBuiltInParameters,
    CognitoIdentity::Endpoint::CognitoIdentityClientContextParameters>;

AWS_COGNITOIDENTITY_EXTERN template class AWS_COGNITOIDENTITY_API Aws::Endpoint::BDDEndpointProvider<
    CognitoIdentity::Endpoint::CognitoIdentityClientConfiguration, CognitoIdentity::Endpoint::CognitoIdentityBuiltInParameters,
    CognitoIdentity::Endpoint::CognitoIdentityClientContextParameters>;
}  // namespace Endpoint

namespace CognitoIdentity {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_COGNITOIDENTITY_API CognitoIdentityEndpointProvider : public CognitoIdentityDefaultEpProviderBase {
 public:
  using CognitoIdentityResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  CognitoIdentityEndpointProvider();

  ~CognitoIdentityEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace CognitoIdentity
}  // namespace Aws
