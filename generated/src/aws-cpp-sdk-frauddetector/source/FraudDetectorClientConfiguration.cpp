/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/frauddetector/FraudDetectorClientConfiguration.h>

namespace Aws {
namespace FraudDetector {

void FraudDetectorClientConfiguration::LoadFraudDetectorSpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::ClientConfiguration::LoadConfigFromEnvOrProfile("AWS_USE_FIPS_ENDPOINT", this->profileName, "use_fips_endpoint",
                                                                         {"true", "false"}, "false") == "true";
  useDualStack = Aws::Client::ClientConfiguration::LoadConfigFromEnvOrProfile(
                     "AWS_USE_DUALSTACK_ENDPOINT", this->profileName, "use_dualstack_endpoint", {"true", "false"}, "false") == "true";
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

FraudDetectorClientConfiguration::FraudDetectorClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadFraudDetectorSpecificConfig(this->profileName);
}

FraudDetectorClientConfiguration::FraudDetectorClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadFraudDetectorSpecificConfig(Aws::String(inputProfileName));
}

FraudDetectorClientConfiguration::FraudDetectorClientConfiguration(bool useSmartDefaults, const char* defaultMode, bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadFraudDetectorSpecificConfig(this->profileName);
}

FraudDetectorClientConfiguration::FraudDetectorClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadFraudDetectorSpecificConfig(this->profileName);
}

}  // namespace FraudDetector
}  // namespace Aws
