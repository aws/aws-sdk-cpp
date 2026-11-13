/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/EC2ClientConfiguration.h>

namespace Aws {
namespace EC2 {

void EC2ClientConfiguration::LoadEC2SpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::LoadUseFIPSFromEnvOrProfile(this->profileName);
  useDualStack = Aws::Client::LoadUseDualStackFromEnvOrProfile(this->profileName);
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

EC2ClientConfiguration::EC2ClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadEC2SpecificConfig(this->profileName);
}

EC2ClientConfiguration::EC2ClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadEC2SpecificConfig(Aws::String(inputProfileName));
}

EC2ClientConfiguration::EC2ClientConfiguration(bool useSmartDefaults, const char* defaultMode, bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadEC2SpecificConfig(this->profileName);
}

EC2ClientConfiguration::EC2ClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig) : BaseClientConfigClass(sharedConfig) {
  LoadEC2SpecificConfig(this->profileName);
}

Aws::Client::ServiceClientOptions GetServiceClientOptions(const EC2ClientConfiguration& config) {
  Aws::Client::ServiceClientOptions options;
  (void)(config);
  return options;
}

}  // namespace EC2
}  // namespace Aws
