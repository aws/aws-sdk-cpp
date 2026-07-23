/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/databrew/GlueDataBrewEndpointProvider.h>
#include <aws/databrew/internal/GlueDataBrewEndpointRules.h>

namespace Aws {
namespace GlueDataBrew {
namespace Endpoint {
GlueDataBrewEndpointProvider::GlueDataBrewEndpointProvider()
    : GlueDataBrewDefaultEpProviderBase(Aws::GlueDataBrew::GlueDataBrewEndpointRules::GetRulesBlob(),
                                        Aws::GlueDataBrew::GlueDataBrewEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace GlueDataBrew
}  // namespace Aws
