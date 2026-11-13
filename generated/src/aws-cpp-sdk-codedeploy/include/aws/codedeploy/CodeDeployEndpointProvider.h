/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codedeploy/CodeDeployClientConfiguration.h>
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws {
namespace CodeDeploy {
namespace Endpoint {
using CodeDeployClientConfiguration = Aws::CodeDeploy::CodeDeployClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using CodeDeployClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_CODEDEPLOY_API CodeDeployBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~CodeDeployBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const CodeDeployClientConfiguration& config);
  virtual void SetFromClientConfiguration(const CodeDeployClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const CodeDeployClientConfiguration& config);
};

/**
 * The type for the CodeDeploy Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using CodeDeployEndpointProviderBase =
    EndpointProviderBase<CodeDeployClientConfiguration, CodeDeployBuiltInParameters, CodeDeployClientContextParameters>;

using CodeDeployDefaultEpProviderBase =
    BDDEndpointProvider<CodeDeployClientConfiguration, CodeDeployBuiltInParameters, CodeDeployClientContextParameters>;

}  // namespace Endpoint
}  // namespace CodeDeploy

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_CODEDEPLOY_EXTERN template class AWS_CODEDEPLOY_API Aws::Endpoint::EndpointProviderBase<
    CodeDeploy::Endpoint::CodeDeployClientConfiguration, CodeDeploy::Endpoint::CodeDeployBuiltInParameters,
    CodeDeploy::Endpoint::CodeDeployClientContextParameters>;

AWS_CODEDEPLOY_EXTERN template class AWS_CODEDEPLOY_API Aws::Endpoint::BDDEndpointProvider<
    CodeDeploy::Endpoint::CodeDeployClientConfiguration, CodeDeploy::Endpoint::CodeDeployBuiltInParameters,
    CodeDeploy::Endpoint::CodeDeployClientContextParameters>;
}  // namespace Endpoint

namespace CodeDeploy {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_CODEDEPLOY_API CodeDeployEndpointProvider : public CodeDeployDefaultEpProviderBase {
 public:
  using CodeDeployResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  CodeDeployEndpointProvider();

  ~CodeDeployEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace CodeDeploy
}  // namespace Aws
