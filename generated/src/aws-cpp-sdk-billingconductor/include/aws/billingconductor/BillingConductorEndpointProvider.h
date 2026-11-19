/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billingconductor/BillingConductorClientConfiguration.h>
#include <aws/billingconductor/BillingConductor_EXPORTS.h>
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws {
namespace BillingConductor {
namespace Endpoint {
using BillingConductorClientConfiguration = Aws::BillingConductor::BillingConductorClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using BillingConductorClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_BILLINGCONDUCTOR_API BillingConductorBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~BillingConductorBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const BillingConductorClientConfiguration& config);
  virtual void SetFromClientConfiguration(const BillingConductorClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const BillingConductorClientConfiguration& config);
};

/**
 * The type for the BillingConductor Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using BillingConductorEndpointProviderBase =
    EndpointProviderBase<BillingConductorClientConfiguration, BillingConductorBuiltInParameters, BillingConductorClientContextParameters>;

using BillingConductorDefaultEpProviderBase =
    BDDEndpointProvider<BillingConductorClientConfiguration, BillingConductorBuiltInParameters, BillingConductorClientContextParameters>;

}  // namespace Endpoint
}  // namespace BillingConductor

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_BILLINGCONDUCTOR_EXTERN template class AWS_BILLINGCONDUCTOR_API Aws::Endpoint::EndpointProviderBase<
    BillingConductor::Endpoint::BillingConductorClientConfiguration, BillingConductor::Endpoint::BillingConductorBuiltInParameters,
    BillingConductor::Endpoint::BillingConductorClientContextParameters>;

AWS_BILLINGCONDUCTOR_EXTERN template class AWS_BILLINGCONDUCTOR_API Aws::Endpoint::BDDEndpointProvider<
    BillingConductor::Endpoint::BillingConductorClientConfiguration, BillingConductor::Endpoint::BillingConductorBuiltInParameters,
    BillingConductor::Endpoint::BillingConductorClientContextParameters>;
}  // namespace Endpoint

namespace BillingConductor {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_BILLINGCONDUCTOR_API BillingConductorEndpointProvider : public BillingConductorDefaultEpProviderBase {
 public:
  using BillingConductorResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  BillingConductorEndpointProvider();

  ~BillingConductorEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace BillingConductor
}  // namespace Aws
