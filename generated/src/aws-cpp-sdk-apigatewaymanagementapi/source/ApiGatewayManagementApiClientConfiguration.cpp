/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigatewaymanagementapi/ApiGatewayManagementApiClientConfiguration.h>

namespace Aws {
namespace ApiGatewayManagementApi {

void ApiGatewayManagementApiClientConfiguration::LoadApiGatewayManagementApiSpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::LoadUseFIPSFromEnvOrProfile(this->profileName);
  useDualStack = Aws::Client::LoadUseDualStackFromEnvOrProfile(this->profileName);
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

ApiGatewayManagementApiClientConfiguration::ApiGatewayManagementApiClientConfiguration(
    const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadApiGatewayManagementApiSpecificConfig(this->profileName);
}

ApiGatewayManagementApiClientConfiguration::ApiGatewayManagementApiClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadApiGatewayManagementApiSpecificConfig(Aws::String(inputProfileName));
}

ApiGatewayManagementApiClientConfiguration::ApiGatewayManagementApiClientConfiguration(bool useSmartDefaults, const char* defaultMode,
                                                                                       bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadApiGatewayManagementApiSpecificConfig(this->profileName);
}

ApiGatewayManagementApiClientConfiguration::ApiGatewayManagementApiClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadApiGatewayManagementApiSpecificConfig(this->profileName);
}

Aws::Client::ServiceClientOptions GetServiceClientOptions(const ApiGatewayManagementApiClientConfiguration& config) {
  Aws::Client::ServiceClientOptions options;
  options.disableExpectHeader = config.disableExpectHeader;
  options.httpClientChunkedMode = config.httpClientChunkedMode;
  options.awsChunkedBufferSize = config.awsChunkedBufferSize;
  return options;
}

}  // namespace ApiGatewayManagementApi
}  // namespace Aws
