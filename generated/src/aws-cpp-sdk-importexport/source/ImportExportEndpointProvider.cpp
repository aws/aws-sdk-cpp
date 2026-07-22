/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/importexport/ImportExportEndpointProvider.h>
#include <aws/importexport/internal/ImportExportEndpointRules.h>

namespace Aws {
namespace ImportExport {
namespace Endpoint {
ImportExportEndpointProvider::ImportExportEndpointProvider()
    : ImportExportDefaultEpProviderBase(Aws::ImportExport::ImportExportEndpointRules::GetRulesBlob(),
                                        Aws::ImportExport::ImportExportEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace ImportExport
}  // namespace Aws
