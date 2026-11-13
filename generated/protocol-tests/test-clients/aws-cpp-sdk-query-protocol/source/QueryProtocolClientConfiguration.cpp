/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/query-protocol/QueryProtocolClientConfiguration.h>

namespace Aws {
namespace QueryProtocol {

void QueryProtocolClientConfiguration::LoadQueryProtocolSpecificConfig(const Aws::String& inputProfileName) {
  requestCompressionConfig = Aws::Client::LoadRequestCompressionConfigFromEnvOrProfile(this->profileName);
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

QueryProtocolClientConfiguration::QueryProtocolClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadQueryProtocolSpecificConfig(this->profileName);
}

QueryProtocolClientConfiguration::QueryProtocolClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadQueryProtocolSpecificConfig(Aws::String(inputProfileName));
}

QueryProtocolClientConfiguration::QueryProtocolClientConfiguration(bool useSmartDefaults, const char* defaultMode, bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadQueryProtocolSpecificConfig(this->profileName);
}

QueryProtocolClientConfiguration::QueryProtocolClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadQueryProtocolSpecificConfig(this->profileName);
}

Aws::Client::ServiceClientOptions GetServiceClientOptions(const QueryProtocolClientConfiguration& config) {
  Aws::Client::ServiceClientOptions options;
  options.requestCompressionConfig = config.requestCompressionConfig;
  return options;
}

}  // namespace QueryProtocol
}  // namespace Aws
