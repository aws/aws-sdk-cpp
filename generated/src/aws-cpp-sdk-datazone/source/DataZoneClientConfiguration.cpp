/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/DataZoneClientConfiguration.h>

namespace Aws {
namespace DataZone {

void DataZoneClientConfiguration::LoadDataZoneSpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::LoadUseFIPSFromEnvOrProfile(this->profileName);
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

DataZoneClientConfiguration::DataZoneClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadDataZoneSpecificConfig(this->profileName);
}

DataZoneClientConfiguration::DataZoneClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadDataZoneSpecificConfig(Aws::String(inputProfileName));
}

DataZoneClientConfiguration::DataZoneClientConfiguration(bool useSmartDefaults, const char* defaultMode, bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadDataZoneSpecificConfig(this->profileName);
}

DataZoneClientConfiguration::DataZoneClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadDataZoneSpecificConfig(this->profileName);
}

Aws::Client::ServiceClientOptions GetServiceClientOptions(const DataZoneClientConfiguration& config) {
  Aws::Client::ServiceClientOptions options;
  options.disableExpectHeader = config.disableExpectHeader;
  options.httpClientChunkedMode = config.httpClientChunkedMode;
  options.awsChunkedBufferSize = config.awsChunkedBufferSize;
  return options;
}

}  // namespace DataZone
}  // namespace Aws
