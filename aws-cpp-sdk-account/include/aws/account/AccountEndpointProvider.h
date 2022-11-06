/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/account/Account_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/account/AccountEndpointRules.h>


namespace Aws
{
namespace Account
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using AccountClientContextParameters = Aws::Endpoint::ClientContextParameters;

using AccountClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using AccountBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the Account Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using AccountEndpointProviderBase =
    EndpointProviderBase<AccountClientConfiguration, AccountBuiltInParameters, AccountClientContextParameters>;

using AccountDefaultEpProviderBase =
    DefaultEndpointProvider<AccountClientConfiguration, AccountBuiltInParameters, AccountClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_ACCOUNT_API AccountEndpointProvider : public AccountDefaultEpProviderBase
{
public:
    using AccountResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    AccountEndpointProvider()
      : AccountDefaultEpProviderBase(Aws::Account::AccountEndpointRules::Rules)
    {}

    ~AccountEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace Account
} // namespace Aws
