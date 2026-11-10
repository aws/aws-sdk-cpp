/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lambda-web/LambdaWebClientConfiguration.h>
#include <aws/lambda-web/LambdaWeb_EXPORTS.h>

namespace Aws {
namespace LambdaWeb {
namespace Endpoint {
using LambdaWebClientConfiguration = Aws::LambdaWeb::LambdaWebClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using LambdaWebClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_LAMBDAWEB_API LambdaWebBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~LambdaWebBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const LambdaWebClientConfiguration& config);
  virtual void SetFromClientConfiguration(const LambdaWebClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const LambdaWebClientConfiguration& config);
};

/**
 * The type for the LambdaWeb Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using LambdaWebEndpointProviderBase =
    EndpointProviderBase<LambdaWebClientConfiguration, LambdaWebBuiltInParameters, LambdaWebClientContextParameters>;

using LambdaWebDefaultEpProviderBase =
    BDDEndpointProvider<LambdaWebClientConfiguration, LambdaWebBuiltInParameters, LambdaWebClientContextParameters>;

}  // namespace Endpoint
}  // namespace LambdaWeb

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_LAMBDAWEB_EXTERN template class AWS_LAMBDAWEB_API
    Aws::Endpoint::EndpointProviderBase<LambdaWeb::Endpoint::LambdaWebClientConfiguration, LambdaWeb::Endpoint::LambdaWebBuiltInParameters,
                                        LambdaWeb::Endpoint::LambdaWebClientContextParameters>;

AWS_LAMBDAWEB_EXTERN template class AWS_LAMBDAWEB_API
    Aws::Endpoint::BDDEndpointProvider<LambdaWeb::Endpoint::LambdaWebClientConfiguration, LambdaWeb::Endpoint::LambdaWebBuiltInParameters,
                                       LambdaWeb::Endpoint::LambdaWebClientContextParameters>;
}  // namespace Endpoint

namespace LambdaWeb {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_LAMBDAWEB_API LambdaWebEndpointProvider : public LambdaWebDefaultEpProviderBase {
 public:
  using LambdaWebResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  LambdaWebEndpointProvider();

  ~LambdaWebEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace LambdaWeb
}  // namespace Aws
