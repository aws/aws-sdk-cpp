/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-data-exports/BCMDataExportsClientConfiguration.h>
#include <aws/bcm-data-exports/BCMDataExports_EXPORTS.h>
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws {
namespace BCMDataExports {
namespace Endpoint {
using BCMDataExportsClientConfiguration = Aws::BCMDataExports::BCMDataExportsClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using BCMDataExportsClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_BCMDATAEXPORTS_API BCMDataExportsBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~BCMDataExportsBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const BCMDataExportsClientConfiguration& config);
  virtual void SetFromClientConfiguration(const BCMDataExportsClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const BCMDataExportsClientConfiguration& config);
};

/**
 * The type for the BCMDataExports Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using BCMDataExportsEndpointProviderBase =
    EndpointProviderBase<BCMDataExportsClientConfiguration, BCMDataExportsBuiltInParameters, BCMDataExportsClientContextParameters>;

using BCMDataExportsDefaultEpProviderBase =
    BDDEndpointProvider<BCMDataExportsClientConfiguration, BCMDataExportsBuiltInParameters, BCMDataExportsClientContextParameters>;

}  // namespace Endpoint
}  // namespace BCMDataExports

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_BCMDATAEXPORTS_EXTERN template class AWS_BCMDATAEXPORTS_API Aws::Endpoint::EndpointProviderBase<
    BCMDataExports::Endpoint::BCMDataExportsClientConfiguration, BCMDataExports::Endpoint::BCMDataExportsBuiltInParameters,
    BCMDataExports::Endpoint::BCMDataExportsClientContextParameters>;

AWS_BCMDATAEXPORTS_EXTERN template class AWS_BCMDATAEXPORTS_API Aws::Endpoint::BDDEndpointProvider<
    BCMDataExports::Endpoint::BCMDataExportsClientConfiguration, BCMDataExports::Endpoint::BCMDataExportsBuiltInParameters,
    BCMDataExports::Endpoint::BCMDataExportsClientContextParameters>;
}  // namespace Endpoint

namespace BCMDataExports {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_BCMDATAEXPORTS_API BCMDataExportsEndpointProvider : public BCMDataExportsDefaultEpProviderBase {
 public:
  using BCMDataExportsResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  BCMDataExportsEndpointProvider();

  ~BCMDataExportsEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace BCMDataExports
}  // namespace Aws
