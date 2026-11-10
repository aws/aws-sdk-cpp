/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elementalinference/ElementalInferenceClientConfiguration.h>
#include <aws/elementalinference/ElementalInference_EXPORTS.h>

namespace Aws {
namespace ElementalInference {
namespace Endpoint {
using ElementalInferenceClientConfiguration = Aws::ElementalInference::ElementalInferenceClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using ElementalInferenceClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_ELEMENTALINFERENCE_API ElementalInferenceBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~ElementalInferenceBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const ElementalInferenceClientConfiguration& config);
  virtual void SetFromClientConfiguration(const ElementalInferenceClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const ElementalInferenceClientConfiguration& config);
};

/**
 * The type for the ElementalInference Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using ElementalInferenceEndpointProviderBase =
    EndpointProviderBase<ElementalInferenceClientConfiguration, ElementalInferenceBuiltInParameters,
                         ElementalInferenceClientContextParameters>;

using ElementalInferenceDefaultEpProviderBase =
    BDDEndpointProvider<ElementalInferenceClientConfiguration, ElementalInferenceBuiltInParameters,
                        ElementalInferenceClientContextParameters>;

}  // namespace Endpoint
}  // namespace ElementalInference

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_ELEMENTALINFERENCE_EXTERN template class AWS_ELEMENTALINFERENCE_API Aws::Endpoint::EndpointProviderBase<
    ElementalInference::Endpoint::ElementalInferenceClientConfiguration, ElementalInference::Endpoint::ElementalInferenceBuiltInParameters,
    ElementalInference::Endpoint::ElementalInferenceClientContextParameters>;

AWS_ELEMENTALINFERENCE_EXTERN template class AWS_ELEMENTALINFERENCE_API Aws::Endpoint::BDDEndpointProvider<
    ElementalInference::Endpoint::ElementalInferenceClientConfiguration, ElementalInference::Endpoint::ElementalInferenceBuiltInParameters,
    ElementalInference::Endpoint::ElementalInferenceClientContextParameters>;
}  // namespace Endpoint

namespace ElementalInference {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_ELEMENTALINFERENCE_API ElementalInferenceEndpointProvider : public ElementalInferenceDefaultEpProviderBase {
 public:
  using ElementalInferenceResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  ElementalInferenceEndpointProvider();

  ~ElementalInferenceEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace ElementalInference
}  // namespace Aws
