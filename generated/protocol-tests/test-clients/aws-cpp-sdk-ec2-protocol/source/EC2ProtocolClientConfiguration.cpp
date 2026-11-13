/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2-protocol/EC2ProtocolClientConfiguration.h>

namespace Aws {
namespace EC2Protocol {

void EC2ProtocolClientConfiguration::LoadEC2ProtocolSpecificConfig(const Aws::String& inputProfileName) {
  requestCompressionConfig = Aws::Client::LoadRequestCompressionConfigFromEnvOrProfile(this->profileName);
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

EC2ProtocolClientConfiguration::EC2ProtocolClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadEC2ProtocolSpecificConfig(this->profileName);
}

EC2ProtocolClientConfiguration::EC2ProtocolClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadEC2ProtocolSpecificConfig(Aws::String(inputProfileName));
}

EC2ProtocolClientConfiguration::EC2ProtocolClientConfiguration(bool useSmartDefaults, const char* defaultMode, bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadEC2ProtocolSpecificConfig(this->profileName);
}

EC2ProtocolClientConfiguration::EC2ProtocolClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadEC2ProtocolSpecificConfig(this->profileName);
}

Aws::Client::ServiceClientOptions GetServiceClientOptions(const EC2ProtocolClientConfiguration& config) {
  Aws::Client::ServiceClientOptions options;
  options.requestCompressionConfig = config.requestCompressionConfig;
  return options;
}

}  // namespace EC2Protocol
}  // namespace Aws
