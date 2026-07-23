/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticfilesystem/EFSEndpointProvider.h>
#include <aws/elasticfilesystem/internal/EFSEndpointRules.h>

namespace Aws {
namespace EFS {
namespace Endpoint {
EFSEndpointProvider::EFSEndpointProvider()
    : EFSDefaultEpProviderBase(Aws::EFS::EFSEndpointRules::GetRulesBlob(), Aws::EFS::EFSEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace EFS
}  // namespace Aws
