/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/CloudFormationEndpointProvider.h>
#include <aws/cloudformation/internal/CloudFormationEndpointRules.h>

namespace Aws {
namespace CloudFormation {
namespace Endpoint {
CloudFormationEndpointProvider::CloudFormationEndpointProvider()
    : CloudFormationDefaultEpProviderBase(Aws::CloudFormation::CloudFormationEndpointRules::GetRulesBlob(),
                                          Aws::CloudFormation::CloudFormationEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace CloudFormation
}  // namespace Aws
