/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devops-agent/DevOpsAgentEndpointProvider.h>
#include <aws/devops-agent/internal/DevOpsAgentEndpointRules.h>

namespace Aws {
namespace DevOpsAgent {
namespace Endpoint {
DevOpsAgentEndpointProvider::DevOpsAgentEndpointProvider()
    : DevOpsAgentDefaultEpProviderBase(Aws::DevOpsAgent::DevOpsAgentEndpointRules::GetRulesBlob(),
                                       Aws::DevOpsAgent::DevOpsAgentEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace DevOpsAgent
}  // namespace Aws
