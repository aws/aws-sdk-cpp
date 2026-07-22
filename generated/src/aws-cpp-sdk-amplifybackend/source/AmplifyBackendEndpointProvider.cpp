/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifybackend/AmplifyBackendEndpointProvider.h>
#include <aws/amplifybackend/internal/AmplifyBackendEndpointRules.h>

namespace Aws {
namespace AmplifyBackend {
namespace Endpoint {
AmplifyBackendEndpointProvider::AmplifyBackendEndpointProvider()
    : AmplifyBackendDefaultEpProviderBase(Aws::AmplifyBackend::AmplifyBackendEndpointRules::GetRulesBlob(),
                                          Aws::AmplifyBackend::AmplifyBackendEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace AmplifyBackend
}  // namespace Aws
