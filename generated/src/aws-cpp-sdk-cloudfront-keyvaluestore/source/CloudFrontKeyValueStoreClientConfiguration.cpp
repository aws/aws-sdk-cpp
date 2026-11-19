/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront-keyvaluestore/CloudFrontKeyValueStoreClientConfiguration.h>
#include <smithy/identity/signer/built-in/SigV4aSigningRegionSet.h>

namespace Aws {
namespace CloudFrontKeyValueStore {

void CloudFrontKeyValueStoreClientConfiguration::LoadCloudFrontKeyValueStoreSpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::ClientConfiguration::LoadConfigFromEnvOrProfile("AWS_USE_FIPS_ENDPOINT", this->profileName, "use_fips_endpoint",
                                                                         {"true", "false"}, "false") == "true";
  sigV4aSigningRegionSet = Aws::Client::LoadSigV4aSigningRegionSetFromEnvOrProfile(this->profileName);
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

CloudFrontKeyValueStoreClientConfiguration::CloudFrontKeyValueStoreClientConfiguration(
    const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadCloudFrontKeyValueStoreSpecificConfig(this->profileName);
}

CloudFrontKeyValueStoreClientConfiguration::CloudFrontKeyValueStoreClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadCloudFrontKeyValueStoreSpecificConfig(Aws::String(inputProfileName));
}

CloudFrontKeyValueStoreClientConfiguration::CloudFrontKeyValueStoreClientConfiguration(bool useSmartDefaults, const char* defaultMode,
                                                                                       bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadCloudFrontKeyValueStoreSpecificConfig(this->profileName);
}

CloudFrontKeyValueStoreClientConfiguration::CloudFrontKeyValueStoreClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadCloudFrontKeyValueStoreSpecificConfig(this->profileName);
}

}  // namespace CloudFrontKeyValueStore
}  // namespace Aws
