/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/imagebuilder/ImagebuilderClientConfiguration.h>
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>

namespace Aws {
namespace imagebuilder {
namespace Endpoint {
using ImagebuilderClientConfiguration = Aws::imagebuilder::ImagebuilderClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using ImagebuilderClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_IMAGEBUILDER_API ImagebuilderBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~ImagebuilderBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const ImagebuilderClientConfiguration& config);
  virtual void SetFromClientConfiguration(const ImagebuilderClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const ImagebuilderClientConfiguration& config);
};

/**
 * The type for the imagebuilder Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using ImagebuilderEndpointProviderBase =
    EndpointProviderBase<ImagebuilderClientConfiguration, ImagebuilderBuiltInParameters, ImagebuilderClientContextParameters>;

using ImagebuilderDefaultEpProviderBase =
    BDDEndpointProvider<ImagebuilderClientConfiguration, ImagebuilderBuiltInParameters, ImagebuilderClientContextParameters>;

}  // namespace Endpoint
}  // namespace imagebuilder

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_IMAGEBUILDER_EXTERN template class AWS_IMAGEBUILDER_API Aws::Endpoint::EndpointProviderBase<
    imagebuilder::Endpoint::ImagebuilderClientConfiguration, imagebuilder::Endpoint::ImagebuilderBuiltInParameters,
    imagebuilder::Endpoint::ImagebuilderClientContextParameters>;

AWS_IMAGEBUILDER_EXTERN template class AWS_IMAGEBUILDER_API Aws::Endpoint::BDDEndpointProvider<
    imagebuilder::Endpoint::ImagebuilderClientConfiguration, imagebuilder::Endpoint::ImagebuilderBuiltInParameters,
    imagebuilder::Endpoint::ImagebuilderClientContextParameters>;
}  // namespace Endpoint

namespace imagebuilder {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_IMAGEBUILDER_API ImagebuilderEndpointProvider : public ImagebuilderDefaultEpProviderBase {
 public:
  using ImagebuilderResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  ImagebuilderEndpointProvider();

  ~ImagebuilderEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace imagebuilder
}  // namespace Aws
