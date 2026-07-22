/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/machinelearning/MachineLearningEndpointProvider.h>
#include <aws/machinelearning/internal/MachineLearningEndpointRules.h>

namespace Aws {
namespace MachineLearning {
namespace Endpoint {
MachineLearningEndpointProvider::MachineLearningEndpointProvider()
    : MachineLearningDefaultEpProviderBase(Aws::MachineLearning::MachineLearningEndpointRules::GetRulesBlob(),
                                           Aws::MachineLearning::MachineLearningEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace MachineLearning
}  // namespace Aws
