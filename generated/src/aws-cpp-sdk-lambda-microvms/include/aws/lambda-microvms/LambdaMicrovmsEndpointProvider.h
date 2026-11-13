/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lambda-microvms/LambdaMicrovmsClientConfiguration.h>
#include <aws/lambda-microvms/LambdaMicrovms_EXPORTS.h>

namespace Aws {
namespace LambdaMicrovms {
namespace Endpoint {
using LambdaMicrovmsClientConfiguration = Aws::LambdaMicrovms::LambdaMicrovmsClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using LambdaMicrovmsClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_LAMBDAMICROVMS_API LambdaMicrovmsBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~LambdaMicrovmsBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const LambdaMicrovmsClientConfiguration& config);
  virtual void SetFromClientConfiguration(const LambdaMicrovmsClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const LambdaMicrovmsClientConfiguration& config);
};

/**
 * The type for the LambdaMicrovms Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using LambdaMicrovmsEndpointProviderBase =
    EndpointProviderBase<LambdaMicrovmsClientConfiguration, LambdaMicrovmsBuiltInParameters, LambdaMicrovmsClientContextParameters>;

using LambdaMicrovmsDefaultEpProviderBase =
    BDDEndpointProvider<LambdaMicrovmsClientConfiguration, LambdaMicrovmsBuiltInParameters, LambdaMicrovmsClientContextParameters>;

}  // namespace Endpoint
}  // namespace LambdaMicrovms

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_LAMBDAMICROVMS_EXTERN template class AWS_LAMBDAMICROVMS_API Aws::Endpoint::EndpointProviderBase<
    LambdaMicrovms::Endpoint::LambdaMicrovmsClientConfiguration, LambdaMicrovms::Endpoint::LambdaMicrovmsBuiltInParameters,
    LambdaMicrovms::Endpoint::LambdaMicrovmsClientContextParameters>;

AWS_LAMBDAMICROVMS_EXTERN template class AWS_LAMBDAMICROVMS_API Aws::Endpoint::BDDEndpointProvider<
    LambdaMicrovms::Endpoint::LambdaMicrovmsClientConfiguration, LambdaMicrovms::Endpoint::LambdaMicrovmsBuiltInParameters,
    LambdaMicrovms::Endpoint::LambdaMicrovmsClientContextParameters>;
}  // namespace Endpoint

namespace LambdaMicrovms {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_LAMBDAMICROVMS_API LambdaMicrovmsEndpointProvider : public LambdaMicrovmsDefaultEpProviderBase {
 public:
  using LambdaMicrovmsResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  LambdaMicrovmsEndpointProvider();

  ~LambdaMicrovmsEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace LambdaMicrovms
}  // namespace Aws
