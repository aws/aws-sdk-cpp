/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/CodePipelineEndpointProvider.h>
#include <aws/codepipeline/internal/CodePipelineEndpointRules.h>

namespace Aws {
namespace CodePipeline {
namespace Endpoint {
CodePipelineEndpointProvider::CodePipelineEndpointProvider()
    : CodePipelineDefaultEpProviderBase(Aws::CodePipeline::CodePipelineEndpointRules::GetRulesBlob(),
                                        Aws::CodePipeline::CodePipelineEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace CodePipeline
}  // namespace Aws
