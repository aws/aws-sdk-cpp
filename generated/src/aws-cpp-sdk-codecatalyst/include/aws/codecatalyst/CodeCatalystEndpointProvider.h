/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecatalyst/CodeCatalystClientConfiguration.h>
#include <aws/codecatalyst/CodeCatalyst_EXPORTS.h>
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws {
namespace CodeCatalyst {
namespace Endpoint {
using CodeCatalystClientConfiguration = Aws::CodeCatalyst::CodeCatalystClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using CodeCatalystClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_CODECATALYST_API CodeCatalystBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~CodeCatalystBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const CodeCatalystClientConfiguration& config);
  virtual void SetFromClientConfiguration(const CodeCatalystClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const CodeCatalystClientConfiguration& config);
};

/**
 * The type for the CodeCatalyst Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using CodeCatalystEndpointProviderBase =
    EndpointProviderBase<CodeCatalystClientConfiguration, CodeCatalystBuiltInParameters, CodeCatalystClientContextParameters>;

using CodeCatalystDefaultEpProviderBase =
    BDDEndpointProvider<CodeCatalystClientConfiguration, CodeCatalystBuiltInParameters, CodeCatalystClientContextParameters>;

}  // namespace Endpoint
}  // namespace CodeCatalyst

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_CODECATALYST_EXTERN template class AWS_CODECATALYST_API Aws::Endpoint::EndpointProviderBase<
    CodeCatalyst::Endpoint::CodeCatalystClientConfiguration, CodeCatalyst::Endpoint::CodeCatalystBuiltInParameters,
    CodeCatalyst::Endpoint::CodeCatalystClientContextParameters>;

AWS_CODECATALYST_EXTERN template class AWS_CODECATALYST_API Aws::Endpoint::BDDEndpointProvider<
    CodeCatalyst::Endpoint::CodeCatalystClientConfiguration, CodeCatalyst::Endpoint::CodeCatalystBuiltInParameters,
    CodeCatalyst::Endpoint::CodeCatalystClientContextParameters>;
}  // namespace Endpoint

namespace CodeCatalyst {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_CODECATALYST_API CodeCatalystEndpointProvider : public CodeCatalystDefaultEpProviderBase {
 public:
  using CodeCatalystResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  CodeCatalystEndpointProvider();

  ~CodeCatalystEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace CodeCatalyst
}  // namespace Aws
