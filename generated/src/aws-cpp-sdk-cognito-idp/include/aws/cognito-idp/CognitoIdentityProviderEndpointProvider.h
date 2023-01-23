/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/cognito-idp/CognitoIdentityProviderEndpointRules.h>


namespace Aws
{
namespace CognitoIdentityProvider
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using CognitoIdentityProviderClientContextParameters = Aws::Endpoint::ClientContextParameters;

using CognitoIdentityProviderClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using CognitoIdentityProviderBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the CognitoIdentityProvider Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using CognitoIdentityProviderEndpointProviderBase =
    EndpointProviderBase<CognitoIdentityProviderClientConfiguration, CognitoIdentityProviderBuiltInParameters, CognitoIdentityProviderClientContextParameters>;

using CognitoIdentityProviderDefaultEpProviderBase =
    DefaultEndpointProvider<CognitoIdentityProviderClientConfiguration, CognitoIdentityProviderBuiltInParameters, CognitoIdentityProviderClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_COGNITOIDENTITYPROVIDER_API CognitoIdentityProviderEndpointProvider : public CognitoIdentityProviderDefaultEpProviderBase
{
public:
    using CognitoIdentityProviderResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    CognitoIdentityProviderEndpointProvider()
      : CognitoIdentityProviderDefaultEpProviderBase(Aws::CognitoIdentityProvider::CognitoIdentityProviderEndpointRules::GetRulesBlob(), Aws::CognitoIdentityProvider::CognitoIdentityProviderEndpointRules::RulesBlobSize)
    {}

    ~CognitoIdentityProviderEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace CognitoIdentityProvider
} // namespace Aws
