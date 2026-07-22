/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elementalinference/ElementalInferenceEndpointProvider.h>
#include <aws/elementalinference/internal/ElementalInferenceEndpointRules.h>

namespace Aws {
namespace ElementalInference {
namespace Endpoint {
ElementalInferenceEndpointProvider::ElementalInferenceEndpointProvider()
    : ElementalInferenceDefaultEpProviderBase(Aws::ElementalInference::ElementalInferenceEndpointRules::GetRulesBlob(),
                                              Aws::ElementalInference::ElementalInferenceEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace ElementalInference
}  // namespace Aws
