/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/fis/FISClientConfiguration.h>
#include <aws/fis/FIS_EXPORTS.h>

namespace Aws {
namespace FIS {
namespace Endpoint {
using FISClientConfiguration = Aws::FIS::FISClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using FISClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_FIS_API FISBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~FISBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const FISClientConfiguration& config);
  virtual void SetFromClientConfiguration(const FISClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const FISClientConfiguration& config);
};

/**
 * The type for the FIS Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using FISEndpointProviderBase = EndpointProviderBase<FISClientConfiguration, FISBuiltInParameters, FISClientContextParameters>;

using FISDefaultEpProviderBase = BDDEndpointProvider<FISClientConfiguration, FISBuiltInParameters, FISClientContextParameters>;

}  // namespace Endpoint
}  // namespace FIS

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_FIS_EXTERN template class AWS_FIS_API Aws::Endpoint::EndpointProviderBase<
    FIS::Endpoint::FISClientConfiguration, FIS::Endpoint::FISBuiltInParameters, FIS::Endpoint::FISClientContextParameters>;

AWS_FIS_EXTERN template class AWS_FIS_API Aws::Endpoint::BDDEndpointProvider<
    FIS::Endpoint::FISClientConfiguration, FIS::Endpoint::FISBuiltInParameters, FIS::Endpoint::FISClientContextParameters>;
}  // namespace Endpoint

namespace FIS {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_FIS_API FISEndpointProvider : public FISDefaultEpProviderBase {
 public:
  using FISResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  FISEndpointProvider();

  ~FISEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace FIS
}  // namespace Aws
