/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/directory-service-data/DirectoryServiceDataEndpointProvider.h>
#include <aws/directory-service-data/internal/DirectoryServiceDataEndpointRules.h>

namespace Aws {
namespace DirectoryServiceData {
namespace Endpoint {
DirectoryServiceDataEndpointProvider::DirectoryServiceDataEndpointProvider()
    : DirectoryServiceDataDefaultEpProviderBase(Aws::DirectoryServiceData::DirectoryServiceDataEndpointRules::GetRulesBlob(),
                                                Aws::DirectoryServiceData::DirectoryServiceDataEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace DirectoryServiceData
}  // namespace Aws
