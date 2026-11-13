/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/customer-profiles/CustomerProfilesClientConfiguration.h>
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>

namespace Aws {
namespace CustomerProfiles {
namespace Endpoint {
using CustomerProfilesClientConfiguration = Aws::CustomerProfiles::CustomerProfilesClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using CustomerProfilesClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_CUSTOMERPROFILES_API CustomerProfilesBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~CustomerProfilesBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const CustomerProfilesClientConfiguration& config);
  virtual void SetFromClientConfiguration(const CustomerProfilesClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const CustomerProfilesClientConfiguration& config);
};

/**
 * The type for the CustomerProfiles Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using CustomerProfilesEndpointProviderBase =
    EndpointProviderBase<CustomerProfilesClientConfiguration, CustomerProfilesBuiltInParameters, CustomerProfilesClientContextParameters>;

using CustomerProfilesDefaultEpProviderBase =
    BDDEndpointProvider<CustomerProfilesClientConfiguration, CustomerProfilesBuiltInParameters, CustomerProfilesClientContextParameters>;

}  // namespace Endpoint
}  // namespace CustomerProfiles

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_CUSTOMERPROFILES_EXTERN template class AWS_CUSTOMERPROFILES_API Aws::Endpoint::EndpointProviderBase<
    CustomerProfiles::Endpoint::CustomerProfilesClientConfiguration, CustomerProfiles::Endpoint::CustomerProfilesBuiltInParameters,
    CustomerProfiles::Endpoint::CustomerProfilesClientContextParameters>;

AWS_CUSTOMERPROFILES_EXTERN template class AWS_CUSTOMERPROFILES_API Aws::Endpoint::BDDEndpointProvider<
    CustomerProfiles::Endpoint::CustomerProfilesClientConfiguration, CustomerProfiles::Endpoint::CustomerProfilesBuiltInParameters,
    CustomerProfiles::Endpoint::CustomerProfilesClientContextParameters>;
}  // namespace Endpoint

namespace CustomerProfiles {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_CUSTOMERPROFILES_API CustomerProfilesEndpointProvider : public CustomerProfilesDefaultEpProviderBase {
 public:
  using CustomerProfilesResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  CustomerProfilesEndpointProvider();

  ~CustomerProfilesEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace CustomerProfiles
}  // namespace Aws
