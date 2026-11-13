/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/devops-agent/DevOpsAgentClientConfiguration.h>
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>

namespace Aws {
namespace DevOpsAgent {
namespace Endpoint {
using DevOpsAgentClientConfiguration = Aws::DevOpsAgent::DevOpsAgentClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using DevOpsAgentClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_DEVOPSAGENT_API DevOpsAgentBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~DevOpsAgentBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const DevOpsAgentClientConfiguration& config);
  virtual void SetFromClientConfiguration(const DevOpsAgentClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const DevOpsAgentClientConfiguration& config);
};

/**
 * The type for the DevOpsAgent Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using DevOpsAgentEndpointProviderBase =
    EndpointProviderBase<DevOpsAgentClientConfiguration, DevOpsAgentBuiltInParameters, DevOpsAgentClientContextParameters>;

using DevOpsAgentDefaultEpProviderBase =
    BDDEndpointProvider<DevOpsAgentClientConfiguration, DevOpsAgentBuiltInParameters, DevOpsAgentClientContextParameters>;

}  // namespace Endpoint
}  // namespace DevOpsAgent

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_DEVOPSAGENT_EXTERN template class AWS_DEVOPSAGENT_API Aws::Endpoint::EndpointProviderBase<
    DevOpsAgent::Endpoint::DevOpsAgentClientConfiguration, DevOpsAgent::Endpoint::DevOpsAgentBuiltInParameters,
    DevOpsAgent::Endpoint::DevOpsAgentClientContextParameters>;

AWS_DEVOPSAGENT_EXTERN template class AWS_DEVOPSAGENT_API Aws::Endpoint::BDDEndpointProvider<
    DevOpsAgent::Endpoint::DevOpsAgentClientConfiguration, DevOpsAgent::Endpoint::DevOpsAgentBuiltInParameters,
    DevOpsAgent::Endpoint::DevOpsAgentClientContextParameters>;
}  // namespace Endpoint

namespace DevOpsAgent {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_DEVOPSAGENT_API DevOpsAgentEndpointProvider : public DevOpsAgentDefaultEpProviderBase {
 public:
  using DevOpsAgentResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  DevOpsAgentEndpointProvider();

  ~DevOpsAgentEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace DevOpsAgent
}  // namespace Aws
