/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/CloudFrontEndpointProvider.h>
#include <aws/cloudfront/internal/CloudFrontEndpointRules.h>

namespace Aws {
#ifndef AWS_CLOUDFRONT_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<CloudFront::Endpoint::CloudFrontClientConfiguration,
                                                   CloudFront::Endpoint::CloudFrontBuiltInParameters,
                                                   CloudFront::Endpoint::CloudFrontClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<CloudFront::Endpoint::CloudFrontClientConfiguration,
                                                  CloudFront::Endpoint::CloudFrontBuiltInParameters,
                                                  CloudFront::Endpoint::CloudFrontClientContextParameters>;
}  // namespace Endpoint
#endif

namespace CloudFront {
namespace Endpoint {
CloudFrontEndpointProvider::CloudFrontEndpointProvider()
    : CloudFrontDefaultEpProviderBase(Aws::CloudFront::CloudFrontEndpointRules::GetRulesBlob(),
                                      Aws::CloudFront::CloudFrontEndpointRules::RulesBlobSize) {}

void CloudFrontBuiltInParameters::SetFromClientConfiguration(const CloudFrontClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const CloudFrontClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void CloudFrontBuiltInParameters::SetFromClientConfiguration(const CloudFrontClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const CloudFrontClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void CloudFrontBuiltInParameters::SetServiceSpecificParameters(const CloudFrontClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace CloudFront
}  // namespace Aws
