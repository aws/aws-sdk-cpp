/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/account-access-runtime/AccountAccessRuntime_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws {
namespace AccountAccessRuntime {
namespace Endpoint {
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using AccountAccessRuntimeClientContextParameters = Aws::Endpoint::ClientContextParameters;

using AccountAccessRuntimeClientConfiguration = Aws::Client::GenericClientConfiguration;
using AccountAccessRuntimeBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the AccountAccessRuntime Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using AccountAccessRuntimeEndpointProviderBase =
    EndpointProviderBase<AccountAccessRuntimeClientConfiguration, AccountAccessRuntimeBuiltInParameters,
                         AccountAccessRuntimeClientContextParameters>;

using AccountAccessRuntimeDefaultEpProviderBase =
    BDDEndpointProvider<AccountAccessRuntimeClientConfiguration, AccountAccessRuntimeBuiltInParameters,
                        AccountAccessRuntimeClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_ACCOUNTACCESSRUNTIME_API AccountAccessRuntimeEndpointProvider : public AccountAccessRuntimeDefaultEpProviderBase {
 public:
  using AccountAccessRuntimeResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  AccountAccessRuntimeEndpointProvider();

  ~AccountAccessRuntimeEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace AccountAccessRuntime
}  // namespace Aws
