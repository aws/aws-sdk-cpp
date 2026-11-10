/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorerClientConfiguration.h>
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws {
namespace CostExplorer {
namespace Endpoint {
using CostExplorerClientConfiguration = Aws::CostExplorer::CostExplorerClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using CostExplorerClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_COSTEXPLORER_API CostExplorerBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~CostExplorerBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const CostExplorerClientConfiguration& config);
  virtual void SetFromClientConfiguration(const CostExplorerClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const CostExplorerClientConfiguration& config);
};

/**
 * The type for the CostExplorer Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using CostExplorerEndpointProviderBase =
    EndpointProviderBase<CostExplorerClientConfiguration, CostExplorerBuiltInParameters, CostExplorerClientContextParameters>;

using CostExplorerDefaultEpProviderBase =
    BDDEndpointProvider<CostExplorerClientConfiguration, CostExplorerBuiltInParameters, CostExplorerClientContextParameters>;

}  // namespace Endpoint
}  // namespace CostExplorer

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_COSTEXPLORER_EXTERN template class AWS_COSTEXPLORER_API Aws::Endpoint::EndpointProviderBase<
    CostExplorer::Endpoint::CostExplorerClientConfiguration, CostExplorer::Endpoint::CostExplorerBuiltInParameters,
    CostExplorer::Endpoint::CostExplorerClientContextParameters>;

AWS_COSTEXPLORER_EXTERN template class AWS_COSTEXPLORER_API Aws::Endpoint::BDDEndpointProvider<
    CostExplorer::Endpoint::CostExplorerClientConfiguration, CostExplorer::Endpoint::CostExplorerBuiltInParameters,
    CostExplorer::Endpoint::CostExplorerClientContextParameters>;
}  // namespace Endpoint

namespace CostExplorer {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_COSTEXPLORER_API CostExplorerEndpointProvider : public CostExplorerDefaultEpProviderBase {
 public:
  using CostExplorerResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  CostExplorerEndpointProvider();

  ~CostExplorerEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace CostExplorer
}  // namespace Aws
