/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-signals/ApplicationSignalsEndpointProvider.h>
#include <aws/application-signals/internal/ApplicationSignalsEndpointRules.h>

namespace Aws {
namespace ApplicationSignals {
namespace Endpoint {
ApplicationSignalsEndpointProvider::ApplicationSignalsEndpointProvider()
    : ApplicationSignalsDefaultEpProviderBase(Aws::ApplicationSignals::ApplicationSignalsEndpointRules::GetRulesBlob(),
                                              Aws::ApplicationSignals::ApplicationSignalsEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace ApplicationSignals
}  // namespace Aws
