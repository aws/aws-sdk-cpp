/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/importexport/ImportExportEndpointProvider.h>
#include <aws/importexport/internal/ImportExportEndpointRules.h>

namespace Aws {
#ifndef AWS_IMPORTEXPORT_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<ImportExport::Endpoint::ImportExportClientConfiguration,
                                                   ImportExport::Endpoint::ImportExportBuiltInParameters,
                                                   ImportExport::Endpoint::ImportExportClientContextParameters>;

template class Aws::Endpoint::DefaultEndpointProvider<ImportExport::Endpoint::ImportExportClientConfiguration,
                                                      ImportExport::Endpoint::ImportExportBuiltInParameters,
                                                      ImportExport::Endpoint::ImportExportClientContextParameters>;
}  // namespace Endpoint
#endif

namespace ImportExport {
namespace Endpoint {
ImportExportEndpointProvider::ImportExportEndpointProvider()
    : ImportExportDefaultEpProviderBase(Aws::ImportExport::ImportExportEndpointRules::GetRulesBlob(),
                                        Aws::ImportExport::ImportExportEndpointRules::RulesBlobSize) {}

void ImportExportBuiltInParameters::SetFromClientConfiguration(const ImportExportClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const ImportExportClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void ImportExportBuiltInParameters::SetFromClientConfiguration(const ImportExportClientConfiguration& config,
                                                               const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const ImportExportClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void ImportExportBuiltInParameters::SetServiceSpecificParameters(const ImportExportClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace ImportExport
}  // namespace Aws
