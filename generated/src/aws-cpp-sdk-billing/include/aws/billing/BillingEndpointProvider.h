/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billing/BillingClientConfiguration.h>
#include <aws/billing/Billing_EXPORTS.h>
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws {
namespace Billing {
namespace Endpoint {
using BillingClientConfiguration = Aws::Billing::BillingClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using BillingClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_BILLING_API BillingBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~BillingBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const BillingClientConfiguration& config);
  virtual void SetFromClientConfiguration(const BillingClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const BillingClientConfiguration& config);
};

/**
 * The type for the Billing Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using BillingEndpointProviderBase =
    EndpointProviderBase<BillingClientConfiguration, BillingBuiltInParameters, BillingClientContextParameters>;

using BillingDefaultEpProviderBase =
    BDDEndpointProvider<BillingClientConfiguration, BillingBuiltInParameters, BillingClientContextParameters>;

}  // namespace Endpoint
}  // namespace Billing

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_BILLING_EXTERN template class AWS_BILLING_API
    Aws::Endpoint::EndpointProviderBase<Billing::Endpoint::BillingClientConfiguration, Billing::Endpoint::BillingBuiltInParameters,
                                        Billing::Endpoint::BillingClientContextParameters>;

AWS_BILLING_EXTERN template class AWS_BILLING_API
    Aws::Endpoint::BDDEndpointProvider<Billing::Endpoint::BillingClientConfiguration, Billing::Endpoint::BillingBuiltInParameters,
                                       Billing::Endpoint::BillingClientContextParameters>;
}  // namespace Endpoint

namespace Billing {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_BILLING_API BillingEndpointProvider : public BillingDefaultEpProviderBase {
 public:
  using BillingResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  BillingEndpointProvider();

  ~BillingEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace Billing
}  // namespace Aws
