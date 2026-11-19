/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/controlcatalog/ControlCatalogClientConfiguration.h>
#include <aws/controlcatalog/ControlCatalog_EXPORTS.h>
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws {
namespace ControlCatalog {
namespace Endpoint {
using ControlCatalogClientConfiguration = Aws::ControlCatalog::ControlCatalogClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using ControlCatalogClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_CONTROLCATALOG_API ControlCatalogBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~ControlCatalogBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const ControlCatalogClientConfiguration& config);
  virtual void SetFromClientConfiguration(const ControlCatalogClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const ControlCatalogClientConfiguration& config);
};

/**
 * The type for the ControlCatalog Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using ControlCatalogEndpointProviderBase =
    EndpointProviderBase<ControlCatalogClientConfiguration, ControlCatalogBuiltInParameters, ControlCatalogClientContextParameters>;

using ControlCatalogDefaultEpProviderBase =
    BDDEndpointProvider<ControlCatalogClientConfiguration, ControlCatalogBuiltInParameters, ControlCatalogClientContextParameters>;

}  // namespace Endpoint
}  // namespace ControlCatalog

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_CONTROLCATALOG_EXTERN template class AWS_CONTROLCATALOG_API Aws::Endpoint::EndpointProviderBase<
    ControlCatalog::Endpoint::ControlCatalogClientConfiguration, ControlCatalog::Endpoint::ControlCatalogBuiltInParameters,
    ControlCatalog::Endpoint::ControlCatalogClientContextParameters>;

AWS_CONTROLCATALOG_EXTERN template class AWS_CONTROLCATALOG_API Aws::Endpoint::BDDEndpointProvider<
    ControlCatalog::Endpoint::ControlCatalogClientConfiguration, ControlCatalog::Endpoint::ControlCatalogBuiltInParameters,
    ControlCatalog::Endpoint::ControlCatalogClientContextParameters>;
}  // namespace Endpoint

namespace ControlCatalog {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_CONTROLCATALOG_API ControlCatalogEndpointProvider : public ControlCatalogDefaultEpProviderBase {
 public:
  using ControlCatalogResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  ControlCatalogEndpointProvider();

  ~ControlCatalogEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace ControlCatalog
}  // namespace Aws
