/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/DataSyncEndpointProvider.h>
#include <aws/datasync/internal/DataSyncEndpointRules.h>

namespace Aws {
namespace DataSync {
namespace Endpoint {
DataSyncEndpointProvider::DataSyncEndpointProvider()
    : DataSyncDefaultEpProviderBase(Aws::DataSync::DataSyncEndpointRules::GetRulesBlob(),
                                    Aws::DataSync::DataSyncEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace DataSync
}  // namespace Aws
