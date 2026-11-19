/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/m2/MainframeModernizationClientConfiguration.h>
#include <aws/m2/MainframeModernization_EXPORTS.h>

namespace Aws {
namespace MainframeModernization {
namespace Endpoint {
using MainframeModernizationClientConfiguration = Aws::MainframeModernization::MainframeModernizationClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using MainframeModernizationClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_MAINFRAMEMODERNIZATION_API MainframeModernizationBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~MainframeModernizationBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const MainframeModernizationClientConfiguration& config);
  virtual void SetFromClientConfiguration(const MainframeModernizationClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const MainframeModernizationClientConfiguration& config);
};

/**
 * The type for the MainframeModernization Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using MainframeModernizationEndpointProviderBase =
    EndpointProviderBase<MainframeModernizationClientConfiguration, MainframeModernizationBuiltInParameters,
                         MainframeModernizationClientContextParameters>;

using MainframeModernizationDefaultEpProviderBase =
    BDDEndpointProvider<MainframeModernizationClientConfiguration, MainframeModernizationBuiltInParameters,
                        MainframeModernizationClientContextParameters>;

}  // namespace Endpoint
}  // namespace MainframeModernization

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_MAINFRAMEMODERNIZATION_EXTERN template class AWS_MAINFRAMEMODERNIZATION_API
    Aws::Endpoint::EndpointProviderBase<MainframeModernization::Endpoint::MainframeModernizationClientConfiguration,
                                        MainframeModernization::Endpoint::MainframeModernizationBuiltInParameters,
                                        MainframeModernization::Endpoint::MainframeModernizationClientContextParameters>;

AWS_MAINFRAMEMODERNIZATION_EXTERN template class AWS_MAINFRAMEMODERNIZATION_API
    Aws::Endpoint::BDDEndpointProvider<MainframeModernization::Endpoint::MainframeModernizationClientConfiguration,
                                       MainframeModernization::Endpoint::MainframeModernizationBuiltInParameters,
                                       MainframeModernization::Endpoint::MainframeModernizationClientContextParameters>;
}  // namespace Endpoint

namespace MainframeModernization {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_MAINFRAMEMODERNIZATION_API MainframeModernizationEndpointProvider : public MainframeModernizationDefaultEpProviderBase {
 public:
  using MainframeModernizationResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  MainframeModernizationEndpointProvider();

  ~MainframeModernizationEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace MainframeModernization
}  // namespace Aws
