/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/eks-auth/EKSAuthClientConfiguration.h>
#include <aws/eks-auth/EKSAuth_EXPORTS.h>

namespace Aws {
namespace EKSAuth {
namespace Endpoint {
using EKSAuthClientConfiguration = Aws::EKSAuth::EKSAuthClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using EKSAuthClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_EKSAUTH_API EKSAuthBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~EKSAuthBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const EKSAuthClientConfiguration& config);
  virtual void SetFromClientConfiguration(const EKSAuthClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const EKSAuthClientConfiguration& config);
};

/**
 * The type for the EKSAuth Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using EKSAuthEndpointProviderBase =
    EndpointProviderBase<EKSAuthClientConfiguration, EKSAuthBuiltInParameters, EKSAuthClientContextParameters>;

using EKSAuthDefaultEpProviderBase =
    BDDEndpointProvider<EKSAuthClientConfiguration, EKSAuthBuiltInParameters, EKSAuthClientContextParameters>;

}  // namespace Endpoint
}  // namespace EKSAuth

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_EKSAUTH_EXTERN template class AWS_EKSAUTH_API
    Aws::Endpoint::EndpointProviderBase<EKSAuth::Endpoint::EKSAuthClientConfiguration, EKSAuth::Endpoint::EKSAuthBuiltInParameters,
                                        EKSAuth::Endpoint::EKSAuthClientContextParameters>;

AWS_EKSAUTH_EXTERN template class AWS_EKSAUTH_API
    Aws::Endpoint::BDDEndpointProvider<EKSAuth::Endpoint::EKSAuthClientConfiguration, EKSAuth::Endpoint::EKSAuthBuiltInParameters,
                                       EKSAuth::Endpoint::EKSAuthClientContextParameters>;
}  // namespace Endpoint

namespace EKSAuth {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_EKSAUTH_API EKSAuthEndpointProvider : public EKSAuthDefaultEpProviderBase {
 public:
  using EKSAuthResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  EKSAuthEndpointProvider();

  ~EKSAuthEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace EKSAuth
}  // namespace Aws
