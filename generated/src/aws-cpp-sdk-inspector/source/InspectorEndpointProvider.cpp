/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector/InspectorEndpointProvider.h>
#include <aws/inspector/internal/InspectorEndpointRules.h>

namespace Aws {
namespace Inspector {
namespace Endpoint {
InspectorEndpointProvider::InspectorEndpointProvider()
    : InspectorDefaultEpProviderBase(Aws::Inspector::InspectorEndpointRules::GetRulesBlob(),
                                     Aws::Inspector::InspectorEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace Inspector
}  // namespace Aws
