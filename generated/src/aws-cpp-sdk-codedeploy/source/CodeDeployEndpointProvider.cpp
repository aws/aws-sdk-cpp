/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codedeploy/CodeDeployEndpointProvider.h>
#include <aws/codedeploy/internal/CodeDeployEndpointRules.h>

namespace Aws {
namespace CodeDeploy {
namespace Endpoint {
CodeDeployEndpointProvider::CodeDeployEndpointProvider()
    : CodeDeployDefaultEpProviderBase(Aws::CodeDeploy::CodeDeployEndpointRules::GetRulesBlob(),
                                      Aws::CodeDeploy::CodeDeployEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace CodeDeploy
}  // namespace Aws
