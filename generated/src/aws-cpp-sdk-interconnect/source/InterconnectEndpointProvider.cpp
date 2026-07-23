/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/interconnect/InterconnectEndpointProvider.h>
#include <aws/interconnect/internal/InterconnectEndpointRules.h>

namespace Aws {
namespace Interconnect {
namespace Endpoint {
InterconnectEndpointProvider::InterconnectEndpointProvider()
    : InterconnectDefaultEpProviderBase(Aws::Interconnect::InterconnectEndpointRules::GetRulesBlob(),
                                        Aws::Interconnect::InterconnectEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace Interconnect
}  // namespace Aws
