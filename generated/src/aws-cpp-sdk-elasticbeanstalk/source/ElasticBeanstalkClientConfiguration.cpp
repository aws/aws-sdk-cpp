/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticbeanstalk/ElasticBeanstalkClientConfiguration.h>

namespace Aws {
namespace ElasticBeanstalk {

void ElasticBeanstalkClientConfiguration::LoadElasticBeanstalkSpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::LoadUseFIPSFromEnvOrProfile(this->profileName);
  useDualStack = Aws::Client::LoadUseDualStackFromEnvOrProfile(this->profileName);
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

Aws::Client::ServiceClientOptions GetServiceClientOptions(const ElasticBeanstalkClientConfiguration& config) {
  Aws::Client::ServiceClientOptions options;
  (void)(config);
  return options;
}

}  // namespace ElasticBeanstalk
}  // namespace Aws
