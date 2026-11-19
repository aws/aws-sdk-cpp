/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifyuibuilder/AmplifyUIBuilderClientConfiguration.h>
#include <aws/amplifyuibuilder/AmplifyUIBuilder_EXPORTS.h>
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws {
namespace AmplifyUIBuilder {
namespace Endpoint {
using AmplifyUIBuilderClientConfiguration = Aws::AmplifyUIBuilder::AmplifyUIBuilderClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using AmplifyUIBuilderClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_AMPLIFYUIBUILDER_API AmplifyUIBuilderBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~AmplifyUIBuilderBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const AmplifyUIBuilderClientConfiguration& config);
  virtual void SetFromClientConfiguration(const AmplifyUIBuilderClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const AmplifyUIBuilderClientConfiguration& config);
};

/**
 * The type for the AmplifyUIBuilder Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using AmplifyUIBuilderEndpointProviderBase =
    EndpointProviderBase<AmplifyUIBuilderClientConfiguration, AmplifyUIBuilderBuiltInParameters, AmplifyUIBuilderClientContextParameters>;

using AmplifyUIBuilderDefaultEpProviderBase =
    BDDEndpointProvider<AmplifyUIBuilderClientConfiguration, AmplifyUIBuilderBuiltInParameters, AmplifyUIBuilderClientContextParameters>;

}  // namespace Endpoint
}  // namespace AmplifyUIBuilder

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_AMPLIFYUIBUILDER_EXTERN template class AWS_AMPLIFYUIBUILDER_API Aws::Endpoint::EndpointProviderBase<
    AmplifyUIBuilder::Endpoint::AmplifyUIBuilderClientConfiguration, AmplifyUIBuilder::Endpoint::AmplifyUIBuilderBuiltInParameters,
    AmplifyUIBuilder::Endpoint::AmplifyUIBuilderClientContextParameters>;

AWS_AMPLIFYUIBUILDER_EXTERN template class AWS_AMPLIFYUIBUILDER_API Aws::Endpoint::BDDEndpointProvider<
    AmplifyUIBuilder::Endpoint::AmplifyUIBuilderClientConfiguration, AmplifyUIBuilder::Endpoint::AmplifyUIBuilderBuiltInParameters,
    AmplifyUIBuilder::Endpoint::AmplifyUIBuilderClientContextParameters>;
}  // namespace Endpoint

namespace AmplifyUIBuilder {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_AMPLIFYUIBUILDER_API AmplifyUIBuilderEndpointProvider : public AmplifyUIBuilderDefaultEpProviderBase {
 public:
  using AmplifyUIBuilderResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  AmplifyUIBuilderEndpointProvider();

  ~AmplifyUIBuilderEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace AmplifyUIBuilder
}  // namespace Aws
