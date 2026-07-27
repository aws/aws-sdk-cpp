/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glacier/GlacierEndpointProvider.h>
#include <aws/glacier/internal/GlacierEndpointRules.h>

namespace Aws {
namespace Glacier {
namespace Endpoint {
GlacierEndpointProvider::GlacierEndpointProvider()
    : GlacierDefaultEpProviderBase(Aws::Glacier::GlacierEndpointRules::GetRulesBlob(), Aws::Glacier::GlacierEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace Glacier
}  // namespace Aws
