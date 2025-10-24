﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/importexport/ImportExportEndpointRules.h>
#include <aws/importexport/ImportExport_EXPORTS.h>

namespace Aws {
namespace ImportExport {
namespace Endpoint {
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::DefaultEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using ImportExportClientContextParameters = Aws::Endpoint::ClientContextParameters;

using ImportExportClientConfiguration = Aws::Client::GenericClientConfiguration;
using ImportExportBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the ImportExport Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using ImportExportEndpointProviderBase =
    EndpointProviderBase<ImportExportClientConfiguration, ImportExportBuiltInParameters, ImportExportClientContextParameters>;

using ImportExportDefaultEpProviderBase =
    DefaultEndpointProvider<ImportExportClientConfiguration, ImportExportBuiltInParameters, ImportExportClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_IMPORTEXPORT_API ImportExportEndpointProvider : public ImportExportDefaultEpProviderBase {
 public:
  using ImportExportResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  ImportExportEndpointProvider()
      : ImportExportDefaultEpProviderBase(Aws::ImportExport::ImportExportEndpointRules::GetRulesBlob(),
                                          Aws::ImportExport::ImportExportEndpointRules::RulesBlobSize) {}

  ~ImportExportEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace ImportExport
}  // namespace Aws
