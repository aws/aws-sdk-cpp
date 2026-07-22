/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-data-exports/BCMDataExportsEndpointProvider.h>
#include <aws/bcm-data-exports/internal/BCMDataExportsEndpointRules.h>

namespace Aws {
namespace BCMDataExports {
namespace Endpoint {
BCMDataExportsEndpointProvider::BCMDataExportsEndpointProvider()
    : BCMDataExportsDefaultEpProviderBase(Aws::BCMDataExports::BCMDataExportsEndpointRules::GetRulesBlob(),
                                          Aws::BCMDataExports::BCMDataExportsEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace BCMDataExports
}  // namespace Aws
