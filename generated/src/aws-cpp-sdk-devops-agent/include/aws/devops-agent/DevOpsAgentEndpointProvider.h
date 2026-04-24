/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/devops-agent/DevOpsAgentEndpointRules.h>
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>

namespace Aws {
namespace DevOpsAgent {
namespace Endpoint {
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::DefaultEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using DevOpsAgentClientContextParameters = Aws::Endpoint::ClientContextParameters;

using DevOpsAgentClientConfiguration = Aws::Client::GenericClientConfiguration;
using DevOpsAgentBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the DevOpsAgent Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using DevOpsAgentEndpointProviderBase =
    EndpointProviderBase<DevOpsAgentClientConfiguration, DevOpsAgentBuiltInParameters, DevOpsAgentClientContextParameters>;

using DevOpsAgentDefaultEpProviderBase =
    DefaultEndpointProvider<DevOpsAgentClientConfiguration, DevOpsAgentBuiltInParameters, DevOpsAgentClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_DEVOPSAGENT_API DevOpsAgentEndpointProvider : public DevOpsAgentDefaultEpProviderBase {
 public:
  using DevOpsAgentResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  DevOpsAgentEndpointProvider()
      : DevOpsAgentDefaultEpProviderBase(Aws::DevOpsAgent::DevOpsAgentEndpointRules::GetRulesBlob(),
                                         Aws::DevOpsAgent::DevOpsAgentEndpointRules::RulesBlobSize) {}

  ~DevOpsAgentEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace DevOpsAgent
}  // namespace Aws
