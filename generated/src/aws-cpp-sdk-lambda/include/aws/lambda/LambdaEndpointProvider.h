/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lambda/LambdaClientConfiguration.h>
#include <aws/lambda/Lambda_EXPORTS.h>

namespace Aws {
namespace Lambda {
namespace Endpoint {
using LambdaClientConfiguration = Aws::Lambda::LambdaClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using LambdaClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_LAMBDA_API LambdaBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~LambdaBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const LambdaClientConfiguration& config);
  virtual void SetFromClientConfiguration(const LambdaClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const LambdaClientConfiguration& config);
};

/**
 * The type for the Lambda Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using LambdaEndpointProviderBase = EndpointProviderBase<LambdaClientConfiguration, LambdaBuiltInParameters, LambdaClientContextParameters>;

using LambdaDefaultEpProviderBase = BDDEndpointProvider<LambdaClientConfiguration, LambdaBuiltInParameters, LambdaClientContextParameters>;

}  // namespace Endpoint
}  // namespace Lambda

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_LAMBDA_EXTERN template class AWS_LAMBDA_API
    Aws::Endpoint::EndpointProviderBase<Lambda::Endpoint::LambdaClientConfiguration, Lambda::Endpoint::LambdaBuiltInParameters,
                                        Lambda::Endpoint::LambdaClientContextParameters>;

AWS_LAMBDA_EXTERN template class AWS_LAMBDA_API
    Aws::Endpoint::BDDEndpointProvider<Lambda::Endpoint::LambdaClientConfiguration, Lambda::Endpoint::LambdaBuiltInParameters,
                                       Lambda::Endpoint::LambdaClientContextParameters>;
}  // namespace Endpoint

namespace Lambda {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_LAMBDA_API LambdaEndpointProvider : public LambdaDefaultEpProviderBase {
 public:
  using LambdaResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  LambdaEndpointProvider();

  ~LambdaEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace Lambda
}  // namespace Aws
