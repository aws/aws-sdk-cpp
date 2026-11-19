/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecr-public/ECRPublicClientConfiguration.h>
#include <aws/ecr-public/ECRPublic_EXPORTS.h>

namespace Aws {
namespace ECRPublic {
namespace Endpoint {
using ECRPublicClientConfiguration = Aws::ECRPublic::ECRPublicClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using ECRPublicClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_ECRPUBLIC_API ECRPublicBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~ECRPublicBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const ECRPublicClientConfiguration& config);
  virtual void SetFromClientConfiguration(const ECRPublicClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const ECRPublicClientConfiguration& config);
};

/**
 * The type for the ECRPublic Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using ECRPublicEndpointProviderBase =
    EndpointProviderBase<ECRPublicClientConfiguration, ECRPublicBuiltInParameters, ECRPublicClientContextParameters>;

using ECRPublicDefaultEpProviderBase =
    BDDEndpointProvider<ECRPublicClientConfiguration, ECRPublicBuiltInParameters, ECRPublicClientContextParameters>;

}  // namespace Endpoint
}  // namespace ECRPublic

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_ECRPUBLIC_EXTERN template class AWS_ECRPUBLIC_API
    Aws::Endpoint::EndpointProviderBase<ECRPublic::Endpoint::ECRPublicClientConfiguration, ECRPublic::Endpoint::ECRPublicBuiltInParameters,
                                        ECRPublic::Endpoint::ECRPublicClientContextParameters>;

AWS_ECRPUBLIC_EXTERN template class AWS_ECRPUBLIC_API
    Aws::Endpoint::BDDEndpointProvider<ECRPublic::Endpoint::ECRPublicClientConfiguration, ECRPublic::Endpoint::ECRPublicBuiltInParameters,
                                       ECRPublic::Endpoint::ECRPublicClientContextParameters>;
}  // namespace Endpoint

namespace ECRPublic {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_ECRPUBLIC_API ECRPublicEndpointProvider : public ECRPublicDefaultEpProviderBase {
 public:
  using ECRPublicResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  ECRPublicEndpointProvider();

  ~ECRPublicEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace ECRPublic
}  // namespace Aws
