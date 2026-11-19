/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/RequestCompression.h>
#include <aws/ec2-protocol/EC2ProtocolClientConfiguration.h>
#include <smithy/client/features/RequestCompressionInterceptor.h>

namespace Aws {
namespace EC2Protocol {

void EC2ProtocolClientConfiguration::LoadEC2ProtocolSpecificConfig(const Aws::String& inputProfileName) {
  requestCompressionConfig = Aws::Client::LoadRequestCompressionConfigFromEnvOrProfile(this->profileName);
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

EC2ProtocolClientConfiguration::EC2ProtocolClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadEC2ProtocolSpecificConfig(this->profileName);
}

EC2ProtocolClientConfiguration::EC2ProtocolClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadEC2ProtocolSpecificConfig(Aws::String(inputProfileName));
}

EC2ProtocolClientConfiguration::EC2ProtocolClientConfiguration(bool useSmartDefaults, const char* defaultMode, bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadEC2ProtocolSpecificConfig(this->profileName);
}

EC2ProtocolClientConfiguration::EC2ProtocolClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadEC2ProtocolSpecificConfig(this->profileName);
}

Aws::Vector<std::shared_ptr<smithy::interceptor::Interceptor>> EC2ProtocolClientConfiguration::CreateInterceptors(
    const Aws::Client::CreateInterceptorsRequest& request) const {
  static const char TAG[] = "EC2ProtocolClientConfiguration";
  Aws::Vector<std::shared_ptr<smithy::interceptor::Interceptor>> interceptors;
  interceptors.push_back(
      Aws::MakeShared<smithy::client::features::RequestCompressionInterceptor>(TAG, requestCompressionConfig, request.httpClient));
  return interceptors;
}

}  // namespace EC2Protocol
}  // namespace Aws
