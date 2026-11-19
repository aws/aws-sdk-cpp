/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/docdb-elastic/DocDBElasticClientConfiguration.h>

namespace Aws {
namespace DocDBElastic {

void DocDBElasticClientConfiguration::LoadDocDBElasticSpecificConfig(const Aws::String& inputProfileName) {
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

DocDBElasticClientConfiguration::DocDBElasticClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadDocDBElasticSpecificConfig(this->profileName);
}

DocDBElasticClientConfiguration::DocDBElasticClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadDocDBElasticSpecificConfig(Aws::String(inputProfileName));
}

DocDBElasticClientConfiguration::DocDBElasticClientConfiguration(bool useSmartDefaults, const char* defaultMode, bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadDocDBElasticSpecificConfig(this->profileName);
}

DocDBElasticClientConfiguration::DocDBElasticClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadDocDBElasticSpecificConfig(this->profileName);
}

}  // namespace DocDBElastic
}  // namespace Aws
