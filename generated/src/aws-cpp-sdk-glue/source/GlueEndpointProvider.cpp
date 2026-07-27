/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/GlueEndpointProvider.h>
#include <aws/glue/internal/GlueEndpointRules.h>

namespace Aws {
namespace Glue {
namespace Endpoint {
GlueEndpointProvider::GlueEndpointProvider()
    : GlueDefaultEpProviderBase(Aws::Glue::GlueEndpointRules::GetRulesBlob(), Aws::Glue::GlueEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace Glue
}  // namespace Aws
