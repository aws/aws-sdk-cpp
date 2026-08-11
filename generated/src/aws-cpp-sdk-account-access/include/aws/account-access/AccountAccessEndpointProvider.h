/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/account-access/AccountAccess_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws {
namespace AccountAccess {
namespace Endpoint {
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using AccountAccessClientContextParameters = Aws::Endpoint::ClientContextParameters;

using AccountAccessClientConfiguration = Aws::Client::GenericClientConfiguration;
using AccountAccessBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the AccountAccess Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using AccountAccessEndpointProviderBase =
    EndpointProviderBase<AccountAccessClientConfiguration, AccountAccessBuiltInParameters, AccountAccessClientContextParameters>;

using AccountAccessDefaultEpProviderBase =
    BDDEndpointProvider<AccountAccessClientConfiguration, AccountAccessBuiltInParameters, AccountAccessClientContextParameters>;

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
