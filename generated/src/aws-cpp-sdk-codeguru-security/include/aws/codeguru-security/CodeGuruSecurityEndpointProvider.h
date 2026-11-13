/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguru-security/CodeGuruSecurityClientConfiguration.h>
#include <aws/codeguru-security/CodeGuruSecurity_EXPORTS.h>
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws {
namespace CodeGuruSecurity {
namespace Endpoint {
using CodeGuruSecurityClientConfiguration = Aws::CodeGuruSecurity::CodeGuruSecurityClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using CodeGuruSecurityClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_CODEGURUSECURITY_API CodeGuruSecurityBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~CodeGuruSecurityBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const CodeGuruSecurityClientConfiguration& config);
  virtual void SetFromClientConfiguration(const CodeGuruSecurityClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const CodeGuruSecurityClientConfiguration& config);
};

/**
 * The type for the CodeGuruSecurity Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using CodeGuruSecurityEndpointProviderBase =
    EndpointProviderBase<CodeGuruSecurityClientConfiguration, CodeGuruSecurityBuiltInParameters, CodeGuruSecurityClientContextParameters>;

using CodeGuruSecurityDefaultEpProviderBase =
    BDDEndpointProvider<CodeGuruSecurityClientConfiguration, CodeGuruSecurityBuiltInParameters, CodeGuruSecurityClientContextParameters>;

}  // namespace Endpoint
}  // namespace CodeGuruSecurity

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_CODEGURUSECURITY_EXTERN template class AWS_CODEGURUSECURITY_API Aws::Endpoint::EndpointProviderBase<
    CodeGuruSecurity::Endpoint::CodeGuruSecurityClientConfiguration, CodeGuruSecurity::Endpoint::CodeGuruSecurityBuiltInParameters,
    CodeGuruSecurity::Endpoint::CodeGuruSecurityClientContextParameters>;

AWS_CODEGURUSECURITY_EXTERN template class AWS_CODEGURUSECURITY_API Aws::Endpoint::BDDEndpointProvider<
    CodeGuruSecurity::Endpoint::CodeGuruSecurityClientConfiguration, CodeGuruSecurity::Endpoint::CodeGuruSecurityBuiltInParameters,
    CodeGuruSecurity::Endpoint::CodeGuruSecurityClientContextParameters>;
}  // namespace Endpoint

namespace CodeGuruSecurity {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_CODEGURUSECURITY_API CodeGuruSecurityEndpointProvider : public CodeGuruSecurityDefaultEpProviderBase {
 public:
  using CodeGuruSecurityResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  CodeGuruSecurityEndpointProvider();

  ~CodeGuruSecurityEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace CodeGuruSecurity
}  // namespace Aws
