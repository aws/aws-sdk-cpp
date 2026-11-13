/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/query-compatible-json-rpc-10/QueryCompatibleJSONRPC10ClientConfiguration.h>

namespace Aws {
namespace QueryCompatibleJSONRPC10 {

void QueryCompatibleJSONRPC10ClientConfiguration::LoadQueryCompatibleJSONRPC10SpecificConfig(const Aws::String& inputProfileName) {
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

QueryCompatibleJSONRPC10ClientConfiguration::QueryCompatibleJSONRPC10ClientConfiguration(
    const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadQueryCompatibleJSONRPC10SpecificConfig(this->profileName);
}

QueryCompatibleJSONRPC10ClientConfiguration::QueryCompatibleJSONRPC10ClientConfiguration(const char* inputProfileName,
                                                                                         bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadQueryCompatibleJSONRPC10SpecificConfig(Aws::String(inputProfileName));
}

QueryCompatibleJSONRPC10ClientConfiguration::QueryCompatibleJSONRPC10ClientConfiguration(bool useSmartDefaults, const char* defaultMode,
                                                                                         bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadQueryCompatibleJSONRPC10SpecificConfig(this->profileName);
}

QueryCompatibleJSONRPC10ClientConfiguration::QueryCompatibleJSONRPC10ClientConfiguration(
    const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadQueryCompatibleJSONRPC10SpecificConfig(this->profileName);
}

Aws::Client::ServiceClientOptions GetServiceClientOptions(const QueryCompatibleJSONRPC10ClientConfiguration& config) {
  Aws::Client::ServiceClientOptions options;
  (void)(config);
  return options;
}

}  // namespace QueryCompatibleJSONRPC10
}  // namespace Aws
