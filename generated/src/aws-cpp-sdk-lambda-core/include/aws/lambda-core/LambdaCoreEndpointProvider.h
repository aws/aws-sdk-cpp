/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lambda-core/LambdaCoreClientConfiguration.h>
#include <aws/lambda-core/LambdaCore_EXPORTS.h>

namespace Aws {
namespace LambdaCore {
namespace Endpoint {
using LambdaCoreClientConfiguration = Aws::LambdaCore::LambdaCoreClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using LambdaCoreClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_LAMBDACORE_API LambdaCoreBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~LambdaCoreBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const LambdaCoreClientConfiguration& config);
  virtual void SetFromClientConfiguration(const LambdaCoreClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const LambdaCoreClientConfiguration& config);
};

/**
 * The type for the LambdaCore Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using LambdaCoreEndpointProviderBase =
    EndpointProviderBase<LambdaCoreClientConfiguration, LambdaCoreBuiltInParameters, LambdaCoreClientContextParameters>;

using LambdaCoreDefaultEpProviderBase =
    BDDEndpointProvider<LambdaCoreClientConfiguration, LambdaCoreBuiltInParameters, LambdaCoreClientContextParameters>;

}  // namespace Endpoint
}  // namespace LambdaCore

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_LAMBDACORE_EXTERN template class AWS_LAMBDACORE_API Aws::Endpoint::EndpointProviderBase<
    LambdaCore::Endpoint::LambdaCoreClientConfiguration, LambdaCore::Endpoint::LambdaCoreBuiltInParameters,
    LambdaCore::Endpoint::LambdaCoreClientContextParameters>;

AWS_LAMBDACORE_EXTERN template class AWS_LAMBDACORE_API Aws::Endpoint::BDDEndpointProvider<
    LambdaCore::Endpoint::LambdaCoreClientConfiguration, LambdaCore::Endpoint::LambdaCoreBuiltInParameters,
    LambdaCore::Endpoint::LambdaCoreClientContextParameters>;
}  // namespace Endpoint

namespace LambdaCore {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_LAMBDACORE_API LambdaCoreEndpointProvider : public LambdaCoreDefaultEpProviderBase {
 public:
  using LambdaCoreResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  LambdaCoreEndpointProvider();

  ~LambdaCoreEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace LambdaCore
}  // namespace Aws
