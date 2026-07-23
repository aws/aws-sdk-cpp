/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/artifact/ArtifactEndpointProvider.h>
#include <aws/artifact/internal/ArtifactEndpointRules.h>

namespace Aws {
namespace Artifact {
namespace Endpoint {
ArtifactEndpointProvider::ArtifactEndpointProvider()
    : ArtifactDefaultEpProviderBase(Aws::Artifact::ArtifactEndpointRules::GetRulesBlob(),
                                    Aws::Artifact::ArtifactEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace Artifact
}  // namespace Aws
