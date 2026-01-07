/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/BedrockClientConfiguration.h>
#include <aws/bedrock/BedrockEndpointRules.h>
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws {
namespace Bedrock {
namespace Endpoint {
using BedrockClientConfiguration = Aws::Bedrock::BedrockClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::DefaultEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using BedrockClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_BEDROCK_API BedrockBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~BedrockBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const BedrockClientConfiguration& config);
};

/**
 * The type for the Bedrock Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using BedrockEndpointProviderBase =
    EndpointProviderBase<BedrockClientConfiguration, BedrockBuiltInParameters, BedrockClientContextParameters>;

using BedrockDefaultEpProviderBase =
    DefaultEndpointProvider<BedrockClientConfiguration, BedrockBuiltInParameters, BedrockClientContextParameters>;

}  // namespace Endpoint
}  // namespace Bedrock

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_BEDROCK_EXTERN template class AWS_BEDROCK_API
    Aws::Endpoint::EndpointProviderBase<Bedrock::Endpoint::BedrockClientConfiguration, Bedrock::Endpoint::BedrockBuiltInParameters,
                                        Bedrock::Endpoint::BedrockClientContextParameters>;

AWS_BEDROCK_EXTERN template class AWS_BEDROCK_API
    Aws::Endpoint::DefaultEndpointProvider<Bedrock::Endpoint::BedrockClientConfiguration, Bedrock::Endpoint::BedrockBuiltInParameters,
                                           Bedrock::Endpoint::BedrockClientContextParameters>;
}  // namespace Endpoint

namespace Bedrock {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_BEDROCK_API BedrockEndpointProvider : public BedrockDefaultEpProviderBase {
 public:
  using BedrockResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  BedrockEndpointProvider()
      : BedrockDefaultEpProviderBase(Aws::Bedrock::BedrockEndpointRules::GetRulesBlob(),
                                     Aws::Bedrock::BedrockEndpointRules::RulesBlobSize) {}

  ~BedrockEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace Bedrock
}  // namespace Aws
