/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/email/SESClientConfiguration.h>
#include <aws/email/SES_EXPORTS.h>

namespace Aws {
namespace SES {
namespace Endpoint {
using SESClientConfiguration = Aws::SES::SESClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using SESClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_SES_API SESBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~SESBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const SESClientConfiguration& config);
  virtual void SetFromClientConfiguration(const SESClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const SESClientConfiguration& config);
};

/**
 * The type for the SES Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using SESEndpointProviderBase = EndpointProviderBase<SESClientConfiguration, SESBuiltInParameters, SESClientContextParameters>;

using SESDefaultEpProviderBase = BDDEndpointProvider<SESClientConfiguration, SESBuiltInParameters, SESClientContextParameters>;

}  // namespace Endpoint
}  // namespace SES

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_SES_EXTERN template class AWS_SES_API Aws::Endpoint::EndpointProviderBase<
    SES::Endpoint::SESClientConfiguration, SES::Endpoint::SESBuiltInParameters, SES::Endpoint::SESClientContextParameters>;

AWS_SES_EXTERN template class AWS_SES_API Aws::Endpoint::BDDEndpointProvider<
    SES::Endpoint::SESClientConfiguration, SES::Endpoint::SESBuiltInParameters, SES::Endpoint::SESClientContextParameters>;
}  // namespace Endpoint

namespace SES {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_SES_API SESEndpointProvider : public SESDefaultEpProviderBase {
 public:
  using SESResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  SESEndpointProvider();

  ~SESEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace SES
}  // namespace Aws
