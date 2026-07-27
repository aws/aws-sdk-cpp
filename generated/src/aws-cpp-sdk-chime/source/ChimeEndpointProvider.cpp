/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/ChimeEndpointProvider.h>
#include <aws/chime/internal/ChimeEndpointRules.h>

namespace Aws {
namespace Chime {
namespace Endpoint {
ChimeEndpointProvider::ChimeEndpointProvider()
    : ChimeDefaultEpProviderBase(Aws::Chime::ChimeEndpointRules::GetRulesBlob(), Aws::Chime::ChimeEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace Chime
}  // namespace Aws
