/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dlm/DLMEndpointProvider.h>
#include <aws/dlm/internal/DLMEndpointRules.h>

namespace Aws {
namespace DLM {
namespace Endpoint {
DLMEndpointProvider::DLMEndpointProvider()
    : DLMDefaultEpProviderBase(Aws::DLM::DLMEndpointRules::GetRulesBlob(), Aws::DLM::DLMEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace DLM
}  // namespace Aws
