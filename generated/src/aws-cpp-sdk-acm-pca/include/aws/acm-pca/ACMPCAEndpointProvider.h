/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm-pca/ACMPCAClientConfiguration.h>
#include <aws/acm-pca/ACMPCA_EXPORTS.h>
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws {
namespace ACMPCA {
namespace Endpoint {
using ACMPCAClientConfiguration = Aws::ACMPCA::ACMPCAClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using ACMPCAClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_ACMPCA_API ACMPCABuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~ACMPCABuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const ACMPCAClientConfiguration& config);
  virtual void SetFromClientConfiguration(const ACMPCAClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const ACMPCAClientConfiguration& config);
};

/**
 * The type for the ACMPCA Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using ACMPCAEndpointProviderBase = EndpointProviderBase<ACMPCAClientConfiguration, ACMPCABuiltInParameters, ACMPCAClientContextParameters>;

using ACMPCADefaultEpProviderBase = BDDEndpointProvider<ACMPCAClientConfiguration, ACMPCABuiltInParameters, ACMPCAClientContextParameters>;

}  // namespace Endpoint
}  // namespace ACMPCA

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_ACMPCA_EXTERN template class AWS_ACMPCA_API
    Aws::Endpoint::EndpointProviderBase<ACMPCA::Endpoint::ACMPCAClientConfiguration, ACMPCA::Endpoint::ACMPCABuiltInParameters,
                                        ACMPCA::Endpoint::ACMPCAClientContextParameters>;

AWS_ACMPCA_EXTERN template class AWS_ACMPCA_API
    Aws::Endpoint::BDDEndpointProvider<ACMPCA::Endpoint::ACMPCAClientConfiguration, ACMPCA::Endpoint::ACMPCABuiltInParameters,
                                       ACMPCA::Endpoint::ACMPCAClientContextParameters>;
}  // namespace Endpoint

namespace ACMPCA {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_ACMPCA_API ACMPCAEndpointProvider : public ACMPCADefaultEpProviderBase {
 public:
  using ACMPCAResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  ACMPCAEndpointProvider();

  ~ACMPCAEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace ACMPCA
}  // namespace Aws
