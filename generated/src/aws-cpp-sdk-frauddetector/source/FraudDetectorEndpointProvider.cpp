/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/frauddetector/FraudDetectorEndpointProvider.h>
#include <aws/frauddetector/internal/FraudDetectorEndpointRules.h>

namespace Aws {
namespace FraudDetector {
namespace Endpoint {
FraudDetectorEndpointProvider::FraudDetectorEndpointProvider()
    : FraudDetectorDefaultEpProviderBase(Aws::FraudDetector::FraudDetectorEndpointRules::GetRulesBlob(),
                                         Aws::FraudDetector::FraudDetectorEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace FraudDetector
}  // namespace Aws
