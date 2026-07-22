/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/Inspector2EndpointProvider.h>
#include <aws/inspector2/internal/Inspector2EndpointRules.h>

namespace Aws {
namespace Inspector2 {
namespace Endpoint {
Inspector2EndpointProvider::Inspector2EndpointProvider()
    : Inspector2DefaultEpProviderBase(Aws::Inspector2::Inspector2EndpointRules::GetRulesBlob(),
                                      Aws::Inspector2::Inspector2EndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace Inspector2
}  // namespace Aws
