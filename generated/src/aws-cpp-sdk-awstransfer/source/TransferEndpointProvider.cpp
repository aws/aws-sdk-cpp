/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/TransferEndpointProvider.h>
#include <aws/awstransfer/internal/TransferEndpointRules.h>

namespace Aws {
namespace Transfer {
namespace Endpoint {
TransferEndpointProvider::TransferEndpointProvider()
    : TransferDefaultEpProviderBase(Aws::Transfer::TransferEndpointRules::GetRulesBlob(),
                                    Aws::Transfer::TransferEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace Transfer
}  // namespace Aws
