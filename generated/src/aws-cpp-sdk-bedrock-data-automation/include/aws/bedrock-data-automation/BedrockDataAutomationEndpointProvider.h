/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-data-automation/BedrockDataAutomationClientConfiguration.h>
#include <aws/bedrock-data-automation/BedrockDataAutomationEndpointRules.h>
#include <aws/bedrock-data-automation/BedrockDataAutomation_EXPORTS.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws {
namespace BedrockDataAutomation {
namespace Endpoint {
using BedrockDataAutomationClientConfiguration = Aws::BedrockDataAutomation::BedrockDataAutomationClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::DefaultEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using BedrockDataAutomationClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_BEDROCKDATAAUTOMATION_API BedrockDataAutomationBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~BedrockDataAutomationBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const BedrockDataAutomationClientConfiguration& config);
};

/**
 * The type for the BedrockDataAutomation Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using BedrockDataAutomationEndpointProviderBase =
    EndpointProviderBase<BedrockDataAutomationClientConfiguration, BedrockDataAutomationBuiltInParameters,
                         BedrockDataAutomationClientContextParameters>;

using BedrockDataAutomationDefaultEpProviderBase =
    DefaultEndpointProvider<BedrockDataAutomationClientConfiguration, BedrockDataAutomationBuiltInParameters,
                            BedrockDataAutomationClientContextParameters>;

}  // namespace Endpoint
}  // namespace BedrockDataAutomation

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_BEDROCKDATAAUTOMATION_EXTERN template class AWS_BEDROCKDATAAUTOMATION_API
    Aws::Endpoint::EndpointProviderBase<BedrockDataAutomation::Endpoint::BedrockDataAutomationClientConfiguration,
                                        BedrockDataAutomation::Endpoint::BedrockDataAutomationBuiltInParameters,
                                        BedrockDataAutomation::Endpoint::BedrockDataAutomationClientContextParameters>;

AWS_BEDROCKDATAAUTOMATION_EXTERN template class AWS_BEDROCKDATAAUTOMATION_API
    Aws::Endpoint::DefaultEndpointProvider<BedrockDataAutomation::Endpoint::BedrockDataAutomationClientConfiguration,
                                           BedrockDataAutomation::Endpoint::BedrockDataAutomationBuiltInParameters,
                                           BedrockDataAutomation::Endpoint::BedrockDataAutomationClientContextParameters>;
}  // namespace Endpoint

namespace BedrockDataAutomation {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_BEDROCKDATAAUTOMATION_API BedrockDataAutomationEndpointProvider : public BedrockDataAutomationDefaultEpProviderBase {
 public:
  using BedrockDataAutomationResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  BedrockDataAutomationEndpointProvider()
      : BedrockDataAutomationDefaultEpProviderBase(Aws::BedrockDataAutomation::BedrockDataAutomationEndpointRules::GetRulesBlob(),
                                                   Aws::BedrockDataAutomation::BedrockDataAutomationEndpointRules::RulesBlobSize) {}

  ~BedrockDataAutomationEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace BedrockDataAutomation
}  // namespace Aws
