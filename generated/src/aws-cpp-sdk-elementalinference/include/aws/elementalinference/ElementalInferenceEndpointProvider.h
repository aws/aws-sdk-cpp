/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elementalinference/ElementalInferenceEndpointRules.h>
#include <aws/elementalinference/ElementalInference_EXPORTS.h>

namespace Aws {
namespace ElementalInference {
namespace Endpoint {
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::DefaultEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using ElementalInferenceClientContextParameters = Aws::Endpoint::ClientContextParameters;

using ElementalInferenceClientConfiguration = Aws::Client::GenericClientConfiguration;
using ElementalInferenceBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the ElementalInference Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using ElementalInferenceEndpointProviderBase =
    EndpointProviderBase<ElementalInferenceClientConfiguration, ElementalInferenceBuiltInParameters,
                         ElementalInferenceClientContextParameters>;

using ElementalInferenceDefaultEpProviderBase =
    DefaultEndpointProvider<ElementalInferenceClientConfiguration, ElementalInferenceBuiltInParameters,
                            ElementalInferenceClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_ELEMENTALINFERENCE_API ElementalInferenceEndpointProvider : public ElementalInferenceDefaultEpProviderBase {
 public:
  using ElementalInferenceResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  ElementalInferenceEndpointProvider()
      : ElementalInferenceDefaultEpProviderBase(Aws::ElementalInference::ElementalInferenceEndpointRules::GetRulesBlob(),
                                                Aws::ElementalInference::ElementalInferenceEndpointRules::RulesBlobSize) {}

  ~ElementalInferenceEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace ElementalInference
}  // namespace Aws
