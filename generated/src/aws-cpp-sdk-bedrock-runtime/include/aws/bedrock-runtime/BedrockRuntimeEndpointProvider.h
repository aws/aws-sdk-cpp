/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntimeClientConfiguration.h>
#include <aws/bedrock-runtime/BedrockRuntimeEndpointRules.h>
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws {
namespace BedrockRuntime {
namespace Endpoint {
using BedrockRuntimeClientConfiguration = Aws::BedrockRuntime::BedrockRuntimeClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::DefaultEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using BedrockRuntimeClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_BEDROCKRUNTIME_API BedrockRuntimeBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~BedrockRuntimeBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const BedrockRuntimeClientConfiguration& config);
};

/**
 * The type for the BedrockRuntime Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using BedrockRuntimeEndpointProviderBase =
    EndpointProviderBase<BedrockRuntimeClientConfiguration, BedrockRuntimeBuiltInParameters, BedrockRuntimeClientContextParameters>;

using BedrockRuntimeDefaultEpProviderBase =
    DefaultEndpointProvider<BedrockRuntimeClientConfiguration, BedrockRuntimeBuiltInParameters, BedrockRuntimeClientContextParameters>;

}  // namespace Endpoint
}  // namespace BedrockRuntime

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_BEDROCKRUNTIME_EXTERN template class AWS_BEDROCKRUNTIME_API Aws::Endpoint::EndpointProviderBase<
    BedrockRuntime::Endpoint::BedrockRuntimeClientConfiguration, BedrockRuntime::Endpoint::BedrockRuntimeBuiltInParameters,
    BedrockRuntime::Endpoint::BedrockRuntimeClientContextParameters>;

AWS_BEDROCKRUNTIME_EXTERN template class AWS_BEDROCKRUNTIME_API Aws::Endpoint::DefaultEndpointProvider<
    BedrockRuntime::Endpoint::BedrockRuntimeClientConfiguration, BedrockRuntime::Endpoint::BedrockRuntimeBuiltInParameters,
    BedrockRuntime::Endpoint::BedrockRuntimeClientContextParameters>;
}  // namespace Endpoint

namespace BedrockRuntime {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_BEDROCKRUNTIME_API BedrockRuntimeEndpointProvider : public BedrockRuntimeDefaultEpProviderBase {
 public:
  using BedrockRuntimeResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  BedrockRuntimeEndpointProvider()
      : BedrockRuntimeDefaultEpProviderBase(Aws::BedrockRuntime::BedrockRuntimeEndpointRules::GetRulesBlob(),
                                            Aws::BedrockRuntime::BedrockRuntimeEndpointRules::RulesBlobSize) {}

  ~BedrockRuntimeEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace BedrockRuntime
}  // namespace Aws
