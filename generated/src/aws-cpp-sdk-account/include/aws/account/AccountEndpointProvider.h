/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/account/AccountClientConfiguration.h>
#include <aws/account/Account_EXPORTS.h>
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws {
namespace Account {
namespace Endpoint {
using AccountClientConfiguration = Aws::Account::AccountClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using AccountClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_ACCOUNT_API AccountBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~AccountBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const AccountClientConfiguration& config);
  virtual void SetFromClientConfiguration(const AccountClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const AccountClientConfiguration& config);
};

/**
 * The type for the Account Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using AccountEndpointProviderBase =
    EndpointProviderBase<AccountClientConfiguration, AccountBuiltInParameters, AccountClientContextParameters>;

using AccountDefaultEpProviderBase =
    BDDEndpointProvider<AccountClientConfiguration, AccountBuiltInParameters, AccountClientContextParameters>;

}  // namespace Endpoint
}  // namespace Account

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_ACCOUNT_EXTERN template class AWS_ACCOUNT_API
    Aws::Endpoint::EndpointProviderBase<Account::Endpoint::AccountClientConfiguration, Account::Endpoint::AccountBuiltInParameters,
                                        Account::Endpoint::AccountClientContextParameters>;

AWS_ACCOUNT_EXTERN template class AWS_ACCOUNT_API
    Aws::Endpoint::BDDEndpointProvider<Account::Endpoint::AccountClientConfiguration, Account::Endpoint::AccountBuiltInParameters,
                                       Account::Endpoint::AccountClientContextParameters>;
}  // namespace Endpoint

namespace Account {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_ACCOUNT_API AccountEndpointProvider : public AccountDefaultEpProviderBase {
 public:
  using AccountResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  AccountEndpointProvider();

  ~AccountEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace Account
}  // namespace Aws
