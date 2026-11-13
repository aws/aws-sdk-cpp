/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeartifact/CodeArtifactClientConfiguration.h>
#include <aws/codeartifact/CodeArtifact_EXPORTS.h>
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws {
namespace CodeArtifact {
namespace Endpoint {
using CodeArtifactClientConfiguration = Aws::CodeArtifact::CodeArtifactClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using CodeArtifactClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_CODEARTIFACT_API CodeArtifactBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~CodeArtifactBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const CodeArtifactClientConfiguration& config);
  virtual void SetFromClientConfiguration(const CodeArtifactClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const CodeArtifactClientConfiguration& config);
};

/**
 * The type for the CodeArtifact Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using CodeArtifactEndpointProviderBase =
    EndpointProviderBase<CodeArtifactClientConfiguration, CodeArtifactBuiltInParameters, CodeArtifactClientContextParameters>;

using CodeArtifactDefaultEpProviderBase =
    BDDEndpointProvider<CodeArtifactClientConfiguration, CodeArtifactBuiltInParameters, CodeArtifactClientContextParameters>;

}  // namespace Endpoint
}  // namespace CodeArtifact

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_CODEARTIFACT_EXTERN template class AWS_CODEARTIFACT_API Aws::Endpoint::EndpointProviderBase<
    CodeArtifact::Endpoint::CodeArtifactClientConfiguration, CodeArtifact::Endpoint::CodeArtifactBuiltInParameters,
    CodeArtifact::Endpoint::CodeArtifactClientContextParameters>;

AWS_CODEARTIFACT_EXTERN template class AWS_CODEARTIFACT_API Aws::Endpoint::BDDEndpointProvider<
    CodeArtifact::Endpoint::CodeArtifactClientConfiguration, CodeArtifact::Endpoint::CodeArtifactBuiltInParameters,
    CodeArtifact::Endpoint::CodeArtifactClientContextParameters>;
}  // namespace Endpoint

namespace CodeArtifact {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_CODEARTIFACT_API CodeArtifactEndpointProvider : public CodeArtifactDefaultEpProviderBase {
 public:
  using CodeArtifactResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  CodeArtifactEndpointProvider();

  ~CodeArtifactEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace CodeArtifact
}  // namespace Aws
