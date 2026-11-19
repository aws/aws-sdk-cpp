/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/ImagebuilderEndpointProvider.h>
#include <aws/imagebuilder/internal/ImagebuilderEndpointRules.h>

namespace Aws {
#ifndef AWS_IMAGEBUILDER_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<imagebuilder::Endpoint::ImagebuilderClientConfiguration,
                                                   imagebuilder::Endpoint::ImagebuilderBuiltInParameters,
                                                   imagebuilder::Endpoint::ImagebuilderClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<imagebuilder::Endpoint::ImagebuilderClientConfiguration,
                                                  imagebuilder::Endpoint::ImagebuilderBuiltInParameters,
                                                  imagebuilder::Endpoint::ImagebuilderClientContextParameters>;
}  // namespace Endpoint
#endif

namespace imagebuilder {
namespace Endpoint {
ImagebuilderEndpointProvider::ImagebuilderEndpointProvider()
    : ImagebuilderDefaultEpProviderBase(Aws::imagebuilder::ImagebuilderEndpointRules::GetRulesBlob(),
                                        Aws::imagebuilder::ImagebuilderEndpointRules::RulesBlobSize) {}

void ImagebuilderBuiltInParameters::SetFromClientConfiguration(const ImagebuilderClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const ImagebuilderClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void ImagebuilderBuiltInParameters::SetFromClientConfiguration(const ImagebuilderClientConfiguration& config,
                                                               const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const ImagebuilderClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void ImagebuilderBuiltInParameters::SetServiceSpecificParameters(const ImagebuilderClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace imagebuilder
}  // namespace Aws
