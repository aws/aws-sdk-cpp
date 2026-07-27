/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/braket/BraketEndpointProvider.h>
#include <aws/braket/internal/BraketEndpointRules.h>

namespace Aws {
namespace Braket {
namespace Endpoint {
BraketEndpointProvider::BraketEndpointProvider()
    : BraketDefaultEpProviderBase(Aws::Braket::BraketEndpointRules::GetRulesBlob(), Aws::Braket::BraketEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace Braket
}  // namespace Aws
