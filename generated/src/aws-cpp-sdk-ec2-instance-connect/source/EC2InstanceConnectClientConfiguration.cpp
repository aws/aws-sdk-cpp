/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2-instance-connect/EC2InstanceConnectClientConfiguration.h>

namespace Aws {
namespace EC2InstanceConnect {

void EC2InstanceConnectClientConfiguration::LoadEC2InstanceConnectSpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::LoadUseFIPSFromEnvOrProfile(this->profileName);
  useDualStack = Aws::Client::LoadUseDualStackFromEnvOrProfile(this->profileName);
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

EC2InstanceConnectClientConfiguration::EC2InstanceConnectClientConfiguration(
    const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadEC2InstanceConnectSpecificConfig(this->profileName);
}

EC2InstanceConnectClientConfiguration::EC2InstanceConnectClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadEC2InstanceConnectSpecificConfig(Aws::String(inputProfileName));
}

EC2InstanceConnectClientConfiguration::EC2InstanceConnectClientConfiguration(bool useSmartDefaults, const char* defaultMode,
                                                                             bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadEC2InstanceConnectSpecificConfig(this->profileName);
}

EC2InstanceConnectClientConfiguration::EC2InstanceConnectClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadEC2InstanceConnectSpecificConfig(this->profileName);
}

Aws::Client::ServiceClientOptions GetServiceClientOptions(const EC2InstanceConnectClientConfiguration& config) {
  Aws::Client::ServiceClientOptions options;
  (void)(config);
  return options;
}

}  // namespace EC2InstanceConnect
}  // namespace Aws
