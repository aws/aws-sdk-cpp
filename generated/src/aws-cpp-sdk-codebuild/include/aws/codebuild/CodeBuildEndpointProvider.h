/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuildClientConfiguration.h>
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws {
namespace CodeBuild {
namespace Endpoint {
using CodeBuildClientConfiguration = Aws::CodeBuild::CodeBuildClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using CodeBuildClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_CODEBUILD_API CodeBuildBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~CodeBuildBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const CodeBuildClientConfiguration& config);
  virtual void SetFromClientConfiguration(const CodeBuildClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const CodeBuildClientConfiguration& config);
};

/**
 * The type for the CodeBuild Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using CodeBuildEndpointProviderBase =
    EndpointProviderBase<CodeBuildClientConfiguration, CodeBuildBuiltInParameters, CodeBuildClientContextParameters>;

using CodeBuildDefaultEpProviderBase =
    BDDEndpointProvider<CodeBuildClientConfiguration, CodeBuildBuiltInParameters, CodeBuildClientContextParameters>;

}  // namespace Endpoint
}  // namespace CodeBuild

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_CODEBUILD_EXTERN template class AWS_CODEBUILD_API
    Aws::Endpoint::EndpointProviderBase<CodeBuild::Endpoint::CodeBuildClientConfiguration, CodeBuild::Endpoint::CodeBuildBuiltInParameters,
                                        CodeBuild::Endpoint::CodeBuildClientContextParameters>;

AWS_CODEBUILD_EXTERN template class AWS_CODEBUILD_API
    Aws::Endpoint::BDDEndpointProvider<CodeBuild::Endpoint::CodeBuildClientConfiguration, CodeBuild::Endpoint::CodeBuildBuiltInParameters,
                                       CodeBuild::Endpoint::CodeBuildClientContextParameters>;
}  // namespace Endpoint

namespace CodeBuild {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_CODEBUILD_API CodeBuildEndpointProvider : public CodeBuildDefaultEpProviderBase {
 public:
  using CodeBuildResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  CodeBuildEndpointProvider();

  ~CodeBuildEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace CodeBuild
}  // namespace Aws
