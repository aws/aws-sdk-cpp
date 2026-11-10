/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/frauddetector/FraudDetectorEndpointProvider.h>
#include <aws/frauddetector/internal/FraudDetectorEndpointRules.h>

namespace Aws {
#ifndef AWS_FRAUDDETECTOR_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<FraudDetector::Endpoint::FraudDetectorClientConfiguration,
                                                   FraudDetector::Endpoint::FraudDetectorBuiltInParameters,
                                                   FraudDetector::Endpoint::FraudDetectorClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<FraudDetector::Endpoint::FraudDetectorClientConfiguration,
                                                  FraudDetector::Endpoint::FraudDetectorBuiltInParameters,
                                                  FraudDetector::Endpoint::FraudDetectorClientContextParameters>;
}  // namespace Endpoint
#endif

namespace FraudDetector {
namespace Endpoint {
FraudDetectorEndpointProvider::FraudDetectorEndpointProvider()
    : FraudDetectorDefaultEpProviderBase(Aws::FraudDetector::FraudDetectorEndpointRules::GetRulesBlob(),
                                         Aws::FraudDetector::FraudDetectorEndpointRules::RulesBlobSize) {}

void FraudDetectorBuiltInParameters::SetFromClientConfiguration(const FraudDetectorClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const FraudDetectorClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void FraudDetectorBuiltInParameters::SetFromClientConfiguration(const FraudDetectorClientConfiguration& config,
                                                                const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const FraudDetectorClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void FraudDetectorBuiltInParameters::SetServiceSpecificParameters(const FraudDetectorClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace FraudDetector
}  // namespace Aws
