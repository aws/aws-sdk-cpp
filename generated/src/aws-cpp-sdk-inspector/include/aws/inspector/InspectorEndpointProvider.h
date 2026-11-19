/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/inspector/InspectorClientConfiguration.h>
#include <aws/inspector/Inspector_EXPORTS.h>

namespace Aws {
namespace Inspector {
namespace Endpoint {
using InspectorClientConfiguration = Aws::Inspector::InspectorClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using InspectorClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_INSPECTOR_API InspectorBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~InspectorBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const InspectorClientConfiguration& config);
  virtual void SetFromClientConfiguration(const InspectorClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const InspectorClientConfiguration& config);
};

/**
 * The type for the Inspector Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using InspectorEndpointProviderBase =
    EndpointProviderBase<InspectorClientConfiguration, InspectorBuiltInParameters, InspectorClientContextParameters>;

using InspectorDefaultEpProviderBase =
    BDDEndpointProvider<InspectorClientConfiguration, InspectorBuiltInParameters, InspectorClientContextParameters>;

}  // namespace Endpoint
}  // namespace Inspector

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_INSPECTOR_EXTERN template class AWS_INSPECTOR_API
    Aws::Endpoint::EndpointProviderBase<Inspector::Endpoint::InspectorClientConfiguration, Inspector::Endpoint::InspectorBuiltInParameters,
                                        Inspector::Endpoint::InspectorClientContextParameters>;

AWS_INSPECTOR_EXTERN template class AWS_INSPECTOR_API
    Aws::Endpoint::BDDEndpointProvider<Inspector::Endpoint::InspectorClientConfiguration, Inspector::Endpoint::InspectorBuiltInParameters,
                                       Inspector::Endpoint::InspectorClientContextParameters>;
}  // namespace Endpoint

namespace Inspector {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_INSPECTOR_API InspectorEndpointProvider : public InspectorDefaultEpProviderBase {
 public:
  using InspectorResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  InspectorEndpointProvider();

  ~InspectorEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace Inspector
}  // namespace Aws
