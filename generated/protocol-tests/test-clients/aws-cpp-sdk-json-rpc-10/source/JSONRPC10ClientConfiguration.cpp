/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/RequestCompression.h>
#include <aws/json-rpc-10/JSONRPC10ClientConfiguration.h>
#include <smithy/client/features/RequestCompressionInterceptor.h>

namespace Aws {
namespace JSONRPC10 {

void JSONRPC10ClientConfiguration::LoadJSONRPC10SpecificConfig(const Aws::String& inputProfileName) {
  requestCompressionConfig = Aws::Client::LoadRequestCompressionConfigFromEnvOrProfile(this->profileName);
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

JSONRPC10ClientConfiguration::JSONRPC10ClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadJSONRPC10SpecificConfig(this->profileName);
}

JSONRPC10ClientConfiguration::JSONRPC10ClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadJSONRPC10SpecificConfig(Aws::String(inputProfileName));
}

JSONRPC10ClientConfiguration::JSONRPC10ClientConfiguration(bool useSmartDefaults, const char* defaultMode, bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadJSONRPC10SpecificConfig(this->profileName);
}

JSONRPC10ClientConfiguration::JSONRPC10ClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadJSONRPC10SpecificConfig(this->profileName);
}

Aws::Vector<std::shared_ptr<smithy::interceptor::Interceptor>> JSONRPC10ClientConfiguration::CreateInterceptors(
    const Aws::Client::CreateInterceptorsRequest& request) const {
  static const char TAG[] = "JSONRPC10ClientConfiguration";
  Aws::Vector<std::shared_ptr<smithy::interceptor::Interceptor>> interceptors;
  interceptors.push_back(
      Aws::MakeShared<smithy::client::features::RequestCompressionInterceptor>(TAG, requestCompressionConfig, request.httpClient));
  return interceptors;
}

}  // namespace JSONRPC10
}  // namespace Aws
