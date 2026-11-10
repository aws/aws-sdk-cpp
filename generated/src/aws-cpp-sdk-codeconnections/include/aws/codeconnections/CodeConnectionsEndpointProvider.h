/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeconnections/CodeConnectionsClientConfiguration.h>
#include <aws/codeconnections/CodeConnections_EXPORTS.h>
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws {
namespace CodeConnections {
namespace Endpoint {
using CodeConnectionsClientConfiguration = Aws::CodeConnections::CodeConnectionsClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using CodeConnectionsClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_CODECONNECTIONS_API CodeConnectionsBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~CodeConnectionsBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const CodeConnectionsClientConfiguration& config);
  virtual void SetFromClientConfiguration(const CodeConnectionsClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const CodeConnectionsClientConfiguration& config);
};

/**
 * The type for the CodeConnections Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using CodeConnectionsEndpointProviderBase =
    EndpointProviderBase<CodeConnectionsClientConfiguration, CodeConnectionsBuiltInParameters, CodeConnectionsClientContextParameters>;

using CodeConnectionsDefaultEpProviderBase =
    BDDEndpointProvider<CodeConnectionsClientConfiguration, CodeConnectionsBuiltInParameters, CodeConnectionsClientContextParameters>;

}  // namespace Endpoint
}  // namespace CodeConnections

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_CODECONNECTIONS_EXTERN template class AWS_CODECONNECTIONS_API Aws::Endpoint::EndpointProviderBase<
    CodeConnections::Endpoint::CodeConnectionsClientConfiguration, CodeConnections::Endpoint::CodeConnectionsBuiltInParameters,
    CodeConnections::Endpoint::CodeConnectionsClientContextParameters>;

AWS_CODECONNECTIONS_EXTERN template class AWS_CODECONNECTIONS_API Aws::Endpoint::BDDEndpointProvider<
    CodeConnections::Endpoint::CodeConnectionsClientConfiguration, CodeConnections::Endpoint::CodeConnectionsBuiltInParameters,
    CodeConnections::Endpoint::CodeConnectionsClientContextParameters>;
}  // namespace Endpoint

namespace CodeConnections {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_CODECONNECTIONS_API CodeConnectionsEndpointProvider : public CodeConnectionsDefaultEpProviderBase {
 public:
  using CodeConnectionsResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  CodeConnectionsEndpointProvider();

  ~CodeConnectionsEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace CodeConnections
}  // namespace Aws
