/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2ClientConfiguration.h>

namespace Aws {
namespace ElasticLoadBalancingv2 {

void ElasticLoadBalancingv2ClientConfiguration::LoadElasticLoadBalancingv2SpecificConfig(const Aws::String& inputProfileName) {
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

ElasticLoadBalancingv2ClientConfiguration::ElasticLoadBalancingv2ClientConfiguration(
    const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadElasticLoadBalancingv2SpecificConfig(this->profileName);
}

ElasticLoadBalancingv2ClientConfiguration::ElasticLoadBalancingv2ClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadElasticLoadBalancingv2SpecificConfig(Aws::String(inputProfileName));
}

ElasticLoadBalancingv2ClientConfiguration::ElasticLoadBalancingv2ClientConfiguration(bool useSmartDefaults, const char* defaultMode,
                                                                                     bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadElasticLoadBalancingv2SpecificConfig(this->profileName);
}

ElasticLoadBalancingv2ClientConfiguration::ElasticLoadBalancingv2ClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadElasticLoadBalancingv2SpecificConfig(this->profileName);
}

}  // namespace ElasticLoadBalancingv2
}  // namespace Aws
