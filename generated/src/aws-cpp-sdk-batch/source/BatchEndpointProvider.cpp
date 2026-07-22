/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/BatchEndpointProvider.h>
#include <aws/batch/internal/BatchEndpointRules.h>

namespace Aws {
namespace Batch {
namespace Endpoint {
BatchEndpointProvider::BatchEndpointProvider()
    : BatchDefaultEpProviderBase(Aws::Batch::BatchEndpointRules::GetRulesBlob(), Aws::Batch::BatchEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace Batch
}  // namespace Aws
