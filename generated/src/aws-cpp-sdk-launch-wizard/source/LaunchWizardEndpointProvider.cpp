/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/launch-wizard/LaunchWizardEndpointProvider.h>
#include <aws/launch-wizard/internal/LaunchWizardEndpointRules.h>

namespace Aws {
namespace LaunchWizard {
namespace Endpoint {
LaunchWizardEndpointProvider::LaunchWizardEndpointProvider()
    : LaunchWizardDefaultEpProviderBase(Aws::LaunchWizard::LaunchWizardEndpointRules::GetRulesBlob(),
                                        Aws::LaunchWizard::LaunchWizardEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace LaunchWizard
}  // namespace Aws
