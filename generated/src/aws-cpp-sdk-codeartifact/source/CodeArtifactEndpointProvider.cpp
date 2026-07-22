/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeartifact/CodeArtifactEndpointProvider.h>
#include <aws/codeartifact/internal/CodeArtifactEndpointRules.h>

namespace Aws {
namespace CodeArtifact {
namespace Endpoint {
CodeArtifactEndpointProvider::CodeArtifactEndpointProvider()
    : CodeArtifactDefaultEpProviderBase(Aws::CodeArtifact::CodeArtifactEndpointRules::GetRulesBlob(),
                                        Aws::CodeArtifact::CodeArtifactEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace CodeArtifact
}  // namespace Aws
