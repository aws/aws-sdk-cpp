/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigatewayv2/ApiGatewayV2ClientConfiguration.h>

namespace Aws {
namespace ApiGatewayV2 {

void ApiGatewayV2ClientConfiguration::LoadApiGatewayV2SpecificConfig(const Aws::String& inputProfileName) {
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

ApiGatewayV2ClientConfiguration::ApiGatewayV2ClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadApiGatewayV2SpecificConfig(this->profileName);
}

ApiGatewayV2ClientConfiguration::ApiGatewayV2ClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadApiGatewayV2SpecificConfig(Aws::String(inputProfileName));
}

ApiGatewayV2ClientConfiguration::ApiGatewayV2ClientConfiguration(bool useSmartDefaults, const char* defaultMode, bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadApiGatewayV2SpecificConfig(this->profileName);
}

ApiGatewayV2ClientConfiguration::ApiGatewayV2ClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadApiGatewayV2SpecificConfig(this->profileName);
}

}  // namespace ApiGatewayV2
}  // namespace Aws
