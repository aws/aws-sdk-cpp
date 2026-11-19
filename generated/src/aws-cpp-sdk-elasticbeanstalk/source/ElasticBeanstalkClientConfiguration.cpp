/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticbeanstalk/ElasticBeanstalkClientConfiguration.h>

namespace Aws {
namespace ElasticBeanstalk {

void ElasticBeanstalkClientConfiguration::LoadElasticBeanstalkSpecificConfig(const Aws::String& inputProfileName) {
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

ElasticBeanstalkClientConfiguration::ElasticBeanstalkClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadElasticBeanstalkSpecificConfig(this->profileName);
}

ElasticBeanstalkClientConfiguration::ElasticBeanstalkClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadElasticBeanstalkSpecificConfig(Aws::String(inputProfileName));
}

ElasticBeanstalkClientConfiguration::ElasticBeanstalkClientConfiguration(bool useSmartDefaults, const char* defaultMode,
                                                                         bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadElasticBeanstalkSpecificConfig(this->profileName);
}

ElasticBeanstalkClientConfiguration::ElasticBeanstalkClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadElasticBeanstalkSpecificConfig(this->profileName);
}

}  // namespace ElasticBeanstalk
}  // namespace Aws
