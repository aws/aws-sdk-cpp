/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipelineClientConfiguration.h>
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws {
namespace CodePipeline {
namespace Endpoint {
using CodePipelineClientConfiguration = Aws::CodePipeline::CodePipelineClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using CodePipelineClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_CODEPIPELINE_API CodePipelineBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~CodePipelineBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const CodePipelineClientConfiguration& config);
  virtual void SetFromClientConfiguration(const CodePipelineClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const CodePipelineClientConfiguration& config);
};

/**
 * The type for the CodePipeline Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using CodePipelineEndpointProviderBase =
    EndpointProviderBase<CodePipelineClientConfiguration, CodePipelineBuiltInParameters, CodePipelineClientContextParameters>;

using CodePipelineDefaultEpProviderBase =
    BDDEndpointProvider<CodePipelineClientConfiguration, CodePipelineBuiltInParameters, CodePipelineClientContextParameters>;

}  // namespace Endpoint
}  // namespace CodePipeline

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_CODEPIPELINE_EXTERN template class AWS_CODEPIPELINE_API Aws::Endpoint::EndpointProviderBase<
    CodePipeline::Endpoint::CodePipelineClientConfiguration, CodePipeline::Endpoint::CodePipelineBuiltInParameters,
    CodePipeline::Endpoint::CodePipelineClientContextParameters>;

AWS_CODEPIPELINE_EXTERN template class AWS_CODEPIPELINE_API Aws::Endpoint::BDDEndpointProvider<
    CodePipeline::Endpoint::CodePipelineClientConfiguration, CodePipeline::Endpoint::CodePipelineBuiltInParameters,
    CodePipeline::Endpoint::CodePipelineClientContextParameters>;
}  // namespace Endpoint

namespace CodePipeline {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_CODEPIPELINE_API CodePipelineEndpointProvider : public CodePipelineDefaultEpProviderBase {
 public:
  using CodePipelineResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  CodePipelineEndpointProvider();

  ~CodePipelineEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace CodePipeline
}  // namespace Aws
