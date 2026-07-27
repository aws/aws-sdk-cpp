/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/CodeBuildEndpointProvider.h>
#include <aws/codebuild/internal/CodeBuildEndpointRules.h>

namespace Aws {
namespace CodeBuild {
namespace Endpoint {
CodeBuildEndpointProvider::CodeBuildEndpointProvider()
    : CodeBuildDefaultEpProviderBase(Aws::CodeBuild::CodeBuildEndpointRules::GetRulesBlob(),
                                     Aws::CodeBuild::CodeBuildEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace CodeBuild
}  // namespace Aws
