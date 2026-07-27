/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ds/DirectoryServiceEndpointProvider.h>
#include <aws/ds/internal/DirectoryServiceEndpointRules.h>

namespace Aws {
namespace DirectoryService {
namespace Endpoint {
DirectoryServiceEndpointProvider::DirectoryServiceEndpointProvider()
    : DirectoryServiceDefaultEpProviderBase(Aws::DirectoryService::DirectoryServiceEndpointRules::GetRulesBlob(),
                                            Aws::DirectoryService::DirectoryServiceEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace DirectoryService
}  // namespace Aws
