/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehendmedical/ComprehendMedicalEndpointProvider.h>
#include <aws/comprehendmedical/internal/ComprehendMedicalEndpointRules.h>

namespace Aws {
namespace ComprehendMedical {
namespace Endpoint {
ComprehendMedicalEndpointProvider::ComprehendMedicalEndpointProvider()
    : ComprehendMedicalDefaultEpProviderBase(Aws::ComprehendMedical::ComprehendMedicalEndpointRules::GetRulesBlob(),
                                             Aws::ComprehendMedical::ComprehendMedicalEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace ComprehendMedical
}  // namespace Aws
