/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager/LicenseManagerEndpointProvider.h>
#include <aws/license-manager/internal/LicenseManagerEndpointRules.h>

namespace Aws {
namespace LicenseManager {
namespace Endpoint {
LicenseManagerEndpointProvider::LicenseManagerEndpointProvider()
    : LicenseManagerDefaultEpProviderBase(Aws::LicenseManager::LicenseManagerEndpointRules::GetRulesBlob(),
                                          Aws::LicenseManager::LicenseManagerEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace LicenseManager
}  // namespace Aws
