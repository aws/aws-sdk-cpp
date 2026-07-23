/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/clouddirectory/CloudDirectoryEndpointProvider.h>
#include <aws/clouddirectory/internal/CloudDirectoryEndpointRules.h>

namespace Aws {
namespace CloudDirectory {
namespace Endpoint {
CloudDirectoryEndpointProvider::CloudDirectoryEndpointProvider()
    : CloudDirectoryDefaultEpProviderBase(Aws::CloudDirectory::CloudDirectoryEndpointRules::GetRulesBlob(),
                                          Aws::CloudDirectory::CloudDirectoryEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace CloudDirectory
}  // namespace Aws
