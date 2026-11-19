/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/account-access/AccountAccessClientConfiguration.h>
#include <aws/account-access/AccountAccess_EXPORTS.h>
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws {
namespace AccountAccess {
namespace Endpoint {
using AccountAccessClientConfiguration = Aws::AccountAccess::AccountAccessClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using AccountAccessClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_ACCOUNTACCESS_API AccountAccessBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~AccountAccessBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const AccountAccessClientConfiguration& config);
  virtual void SetFromClientConfiguration(const AccountAccessClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const AccountAccessClientConfiguration& config);
};

/**
 * The type for the AccountAccess Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using AccountAccessEndpointProviderBase =
    EndpointProviderBase<AccountAccessClientConfiguration, AccountAccessBuiltInParameters, AccountAccessClientContextParameters>;

using AccountAccessDefaultEpProviderBase =
    BDDEndpointProvider<AccountAccessClientConfiguration, AccountAccessBuiltInParameters, AccountAccessClientContextParameters>;

}  // namespace Endpoint
}  // namespace AccountAccess

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_ACCOUNTACCESS_EXTERN template class AWS_ACCOUNTACCESS_API Aws::Endpoint::EndpointProviderBase<
    AccountAccess::Endpoint::AccountAccessClientConfiguration, AccountAccess::Endpoint::AccountAccessBuiltInParameters,
    AccountAccess::Endpoint::AccountAccessClientContextParameters>;

AWS_ACCOUNTACCESS_EXTERN template class AWS_ACCOUNTACCESS_API Aws::Endpoint::BDDEndpointProvider<
    AccountAccess::Endpoint::AccountAccessClientConfiguration, AccountAccess::Endpoint::AccountAccessBuiltInParameters,
    AccountAccess::Endpoint::AccountAccessClientContextParameters>;
}  // namespace Endpoint

namespace AccountAccess {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_ACCOUNTACCESS_API AccountAccessEndpointProvider : public AccountAccessDefaultEpProviderBase {
 public:
  using AccountAccessResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  AccountAccessEndpointProvider();

  ~AccountAccessEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace AccountAccess
}  // namespace Aws
