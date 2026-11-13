/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/importexport/ImportExportClientConfiguration.h>
#include <aws/importexport/ImportExport_EXPORTS.h>

namespace Aws {
namespace ImportExport {
namespace Endpoint {
using ImportExportClientConfiguration = Aws::ImportExport::ImportExportClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::DefaultEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using ImportExportClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_IMPORTEXPORT_API ImportExportBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~ImportExportBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const ImportExportClientConfiguration& config);
  virtual void SetFromClientConfiguration(const ImportExportClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const ImportExportClientConfiguration& config);
};

/**
 * The type for the ImportExport Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using ImportExportEndpointProviderBase =
    EndpointProviderBase<ImportExportClientConfiguration, ImportExportBuiltInParameters, ImportExportClientContextParameters>;

using ImportExportDefaultEpProviderBase =
    DefaultEndpointProvider<ImportExportClientConfiguration, ImportExportBuiltInParameters, ImportExportClientContextParameters>;

}  // namespace Endpoint
}  // namespace ImportExport

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_IMPORTEXPORT_EXTERN template class AWS_IMPORTEXPORT_API Aws::Endpoint::EndpointProviderBase<
    ImportExport::Endpoint::ImportExportClientConfiguration, ImportExport::Endpoint::ImportExportBuiltInParameters,
    ImportExport::Endpoint::ImportExportClientContextParameters>;

AWS_IMPORTEXPORT_EXTERN template class AWS_IMPORTEXPORT_API Aws::Endpoint::DefaultEndpointProvider<
    ImportExport::Endpoint::ImportExportClientConfiguration, ImportExport::Endpoint::ImportExportBuiltInParameters,
    ImportExport::Endpoint::ImportExportClientContextParameters>;
}  // namespace Endpoint

namespace ImportExport {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_IMPORTEXPORT_API ImportExportEndpointProvider : public ImportExportDefaultEpProviderBase {
 public:
  using ImportExportResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  ImportExportEndpointProvider();

  ~ImportExportEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace ImportExport
}  // namespace Aws
