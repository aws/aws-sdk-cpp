/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codestar-connections/CodeStarconnectionsClientConfiguration.h>
#include <aws/codestar-connections/CodeStarconnections_EXPORTS.h>
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws {
namespace CodeStarconnections {
namespace Endpoint {
using CodeStarconnectionsClientConfiguration = Aws::CodeStarconnections::CodeStarconnectionsClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using CodeStarconnectionsClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_CODESTARCONNECTIONS_API CodeStarconnectionsBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~CodeStarconnectionsBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const CodeStarconnectionsClientConfiguration& config);
  virtual void SetFromClientConfiguration(const CodeStarconnectionsClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const CodeStarconnectionsClientConfiguration& config);
};

/**
 * The type for the CodeStarconnections Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using CodeStarconnectionsEndpointProviderBase =
    EndpointProviderBase<CodeStarconnectionsClientConfiguration, CodeStarconnectionsBuiltInParameters,
                         CodeStarconnectionsClientContextParameters>;

using CodeStarconnectionsDefaultEpProviderBase =
    BDDEndpointProvider<CodeStarconnectionsClientConfiguration, CodeStarconnectionsBuiltInParameters,
                        CodeStarconnectionsClientContextParameters>;

}  // namespace Endpoint
}  // namespace CodeStarconnections

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_CODESTARCONNECTIONS_EXTERN template class AWS_CODESTARCONNECTIONS_API
    Aws::Endpoint::EndpointProviderBase<CodeStarconnections::Endpoint::CodeStarconnectionsClientConfiguration,
                                        CodeStarconnections::Endpoint::CodeStarconnectionsBuiltInParameters,
                                        CodeStarconnections::Endpoint::CodeStarconnectionsClientContextParameters>;

AWS_CODESTARCONNECTIONS_EXTERN template class AWS_CODESTARCONNECTIONS_API
    Aws::Endpoint::BDDEndpointProvider<CodeStarconnections::Endpoint::CodeStarconnectionsClientConfiguration,
                                       CodeStarconnections::Endpoint::CodeStarconnectionsBuiltInParameters,
                                       CodeStarconnections::Endpoint::CodeStarconnectionsClientContextParameters>;
}  // namespace Endpoint

namespace CodeStarconnections {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_CODESTARCONNECTIONS_API CodeStarconnectionsEndpointProvider : public CodeStarconnectionsDefaultEpProviderBase {
 public:
  using CodeStarconnectionsResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  CodeStarconnectionsEndpointProvider();

  ~CodeStarconnectionsEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace CodeStarconnections
}  // namespace Aws
