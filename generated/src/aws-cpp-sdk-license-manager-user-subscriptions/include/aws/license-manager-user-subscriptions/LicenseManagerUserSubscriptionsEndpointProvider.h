/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/license-manager-user-subscriptions/LicenseManagerUserSubscriptionsClientConfiguration.h>
#include <aws/license-manager-user-subscriptions/LicenseManagerUserSubscriptions_EXPORTS.h>

namespace Aws {
namespace LicenseManagerUserSubscriptions {
namespace Endpoint {
using LicenseManagerUserSubscriptionsClientConfiguration =
    Aws::LicenseManagerUserSubscriptions::LicenseManagerUserSubscriptionsClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using LicenseManagerUserSubscriptionsClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API LicenseManagerUserSubscriptionsBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~LicenseManagerUserSubscriptionsBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const LicenseManagerUserSubscriptionsClientConfiguration& config);
  virtual void SetFromClientConfiguration(const LicenseManagerUserSubscriptionsClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const LicenseManagerUserSubscriptionsClientConfiguration& config);
};

/**
 * The type for the LicenseManagerUserSubscriptions Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using LicenseManagerUserSubscriptionsEndpointProviderBase =
    EndpointProviderBase<LicenseManagerUserSubscriptionsClientConfiguration, LicenseManagerUserSubscriptionsBuiltInParameters,
                         LicenseManagerUserSubscriptionsClientContextParameters>;

using LicenseManagerUserSubscriptionsDefaultEpProviderBase =
    BDDEndpointProvider<LicenseManagerUserSubscriptionsClientConfiguration, LicenseManagerUserSubscriptionsBuiltInParameters,
                        LicenseManagerUserSubscriptionsClientContextParameters>;

}  // namespace Endpoint
}  // namespace LicenseManagerUserSubscriptions

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_EXTERN template class AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API
    Aws::Endpoint::EndpointProviderBase<LicenseManagerUserSubscriptions::Endpoint::LicenseManagerUserSubscriptionsClientConfiguration,
                                        LicenseManagerUserSubscriptions::Endpoint::LicenseManagerUserSubscriptionsBuiltInParameters,
                                        LicenseManagerUserSubscriptions::Endpoint::LicenseManagerUserSubscriptionsClientContextParameters>;

AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_EXTERN template class AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API
    Aws::Endpoint::BDDEndpointProvider<LicenseManagerUserSubscriptions::Endpoint::LicenseManagerUserSubscriptionsClientConfiguration,
                                       LicenseManagerUserSubscriptions::Endpoint::LicenseManagerUserSubscriptionsBuiltInParameters,
                                       LicenseManagerUserSubscriptions::Endpoint::LicenseManagerUserSubscriptionsClientContextParameters>;
}  // namespace Endpoint

namespace LicenseManagerUserSubscriptions {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API LicenseManagerUserSubscriptionsEndpointProvider
    : public LicenseManagerUserSubscriptionsDefaultEpProviderBase {
 public:
  using LicenseManagerUserSubscriptionsResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  LicenseManagerUserSubscriptionsEndpointProvider();

  ~LicenseManagerUserSubscriptionsEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace LicenseManagerUserSubscriptions
}  // namespace Aws
