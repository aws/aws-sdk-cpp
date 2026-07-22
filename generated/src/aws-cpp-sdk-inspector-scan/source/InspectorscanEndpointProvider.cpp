/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector-scan/InspectorscanEndpointProvider.h>
#include <aws/inspector-scan/internal/InspectorscanEndpointRules.h>

namespace Aws {
namespace inspectorscan {
namespace Endpoint {
InspectorscanEndpointProvider::InspectorscanEndpointProvider()
    : InspectorscanDefaultEpProviderBase(Aws::inspectorscan::InspectorscanEndpointRules::GetRulesBlob(),
                                         Aws::inspectorscan::InspectorscanEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace inspectorscan
}  // namespace Aws
