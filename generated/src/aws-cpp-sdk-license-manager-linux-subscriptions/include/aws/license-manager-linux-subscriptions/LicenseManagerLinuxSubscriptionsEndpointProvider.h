/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/license-manager-linux-subscriptions/LicenseManagerLinuxSubscriptionsClientConfiguration.h>
#include <aws/license-manager-linux-subscriptions/LicenseManagerLinuxSubscriptions_EXPORTS.h>

namespace Aws {
namespace LicenseManagerLinuxSubscriptions {
namespace Endpoint {
using LicenseManagerLinuxSubscriptionsClientConfiguration =
    Aws::LicenseManagerLinuxSubscriptions::LicenseManagerLinuxSubscriptionsClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using LicenseManagerLinuxSubscriptionsClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_LICENSEMANAGERLINUXSUBSCRIPTIONS_API LicenseManagerLinuxSubscriptionsBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~LicenseManagerLinuxSubscriptionsBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const LicenseManagerLinuxSubscriptionsClientConfiguration& config);
  virtual void SetFromClientConfiguration(const LicenseManagerLinuxSubscriptionsClientConfiguration& config,
                                          const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const LicenseManagerLinuxSubscriptionsClientConfiguration& config);
};

/**
 * The type for the LicenseManagerLinuxSubscriptions Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using LicenseManagerLinuxSubscriptionsEndpointProviderBase =
    EndpointProviderBase<LicenseManagerLinuxSubscriptionsClientConfiguration, LicenseManagerLinuxSubscriptionsBuiltInParameters,
                         LicenseManagerLinuxSubscriptionsClientContextParameters>;

using LicenseManagerLinuxSubscriptionsDefaultEpProviderBase =
    BDDEndpointProvider<LicenseManagerLinuxSubscriptionsClientConfiguration, LicenseManagerLinuxSubscriptionsBuiltInParameters,
                        LicenseManagerLinuxSubscriptionsClientContextParameters>;

}  // namespace Endpoint
}  // namespace LicenseManagerLinuxSubscriptions

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_LICENSEMANAGERLINUXSUBSCRIPTIONS_EXTERN template class AWS_LICENSEMANAGERLINUXSUBSCRIPTIONS_API Aws::Endpoint::EndpointProviderBase<
    LicenseManagerLinuxSubscriptions::Endpoint::LicenseManagerLinuxSubscriptionsClientConfiguration,
    LicenseManagerLinuxSubscriptions::Endpoint::LicenseManagerLinuxSubscriptionsBuiltInParameters,
    LicenseManagerLinuxSubscriptions::Endpoint::LicenseManagerLinuxSubscriptionsClientContextParameters>;

AWS_LICENSEMANAGERLINUXSUBSCRIPTIONS_EXTERN template class AWS_LICENSEMANAGERLINUXSUBSCRIPTIONS_API
    Aws::Endpoint::BDDEndpointProvider<LicenseManagerLinuxSubscriptions::Endpoint::LicenseManagerLinuxSubscriptionsClientConfiguration,
                                       LicenseManagerLinuxSubscriptions::Endpoint::LicenseManagerLinuxSubscriptionsBuiltInParameters,
                                       LicenseManagerLinuxSubscriptions::Endpoint::LicenseManagerLinuxSubscriptionsClientContextParameters>;
}  // namespace Endpoint

namespace LicenseManagerLinuxSubscriptions {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_LICENSEMANAGERLINUXSUBSCRIPTIONS_API LicenseManagerLinuxSubscriptionsEndpointProvider
    : public LicenseManagerLinuxSubscriptionsDefaultEpProviderBase {
 public:
  using LicenseManagerLinuxSubscriptionsResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  LicenseManagerLinuxSubscriptionsEndpointProvider();

  ~LicenseManagerLinuxSubscriptionsEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace LicenseManagerLinuxSubscriptions
}  // namespace Aws
