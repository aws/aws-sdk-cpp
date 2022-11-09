/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-sync/CognitoSync_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/cognito-sync/CognitoSyncEndpointRules.h>


namespace Aws
{
namespace CognitoSync
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using CognitoSyncClientContextParameters = Aws::Endpoint::ClientContextParameters;

using CognitoSyncClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using CognitoSyncBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the CognitoSync Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using CognitoSyncEndpointProviderBase =
    EndpointProviderBase<CognitoSyncClientConfiguration, CognitoSyncBuiltInParameters, CognitoSyncClientContextParameters>;

using CognitoSyncDefaultEpProviderBase =
    DefaultEndpointProvider<CognitoSyncClientConfiguration, CognitoSyncBuiltInParameters, CognitoSyncClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_COGNITOSYNC_API CognitoSyncEndpointProvider : public CognitoSyncDefaultEpProviderBase
{
public:
    using CognitoSyncResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    CognitoSyncEndpointProvider()
      : CognitoSyncDefaultEpProviderBase(Aws::CognitoSync::CognitoSyncEndpointRules::Rules)
    {}

    ~CognitoSyncEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace CognitoSync
} // namespace Aws
