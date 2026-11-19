/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommitClientConfiguration.h>
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws {
namespace CodeCommit {
namespace Endpoint {
using CodeCommitClientConfiguration = Aws::CodeCommit::CodeCommitClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using CodeCommitClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_CODECOMMIT_API CodeCommitBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~CodeCommitBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const CodeCommitClientConfiguration& config);
  virtual void SetFromClientConfiguration(const CodeCommitClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const CodeCommitClientConfiguration& config);
};

/**
 * The type for the CodeCommit Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using CodeCommitEndpointProviderBase =
    EndpointProviderBase<CodeCommitClientConfiguration, CodeCommitBuiltInParameters, CodeCommitClientContextParameters>;

using CodeCommitDefaultEpProviderBase =
    BDDEndpointProvider<CodeCommitClientConfiguration, CodeCommitBuiltInParameters, CodeCommitClientContextParameters>;

}  // namespace Endpoint
}  // namespace CodeCommit

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_CODECOMMIT_EXTERN template class AWS_CODECOMMIT_API Aws::Endpoint::EndpointProviderBase<
    CodeCommit::Endpoint::CodeCommitClientConfiguration, CodeCommit::Endpoint::CodeCommitBuiltInParameters,
    CodeCommit::Endpoint::CodeCommitClientContextParameters>;

AWS_CODECOMMIT_EXTERN template class AWS_CODECOMMIT_API Aws::Endpoint::BDDEndpointProvider<
    CodeCommit::Endpoint::CodeCommitClientConfiguration, CodeCommit::Endpoint::CodeCommitBuiltInParameters,
    CodeCommit::Endpoint::CodeCommitClientContextParameters>;
}  // namespace Endpoint

namespace CodeCommit {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_CODECOMMIT_API CodeCommitEndpointProvider : public CodeCommitDefaultEpProviderBase {
 public:
  using CodeCommitResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  CodeCommitEndpointProvider();

  ~CodeCommitEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace CodeCommit
}  // namespace Aws
