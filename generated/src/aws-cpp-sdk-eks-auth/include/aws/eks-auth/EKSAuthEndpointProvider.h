/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks-auth/EKSAuth_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/eks-auth/EKSAuthEndpointRules.h>


namespace Aws
{
namespace EKSAuth
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using EKSAuthClientContextParameters = Aws::Endpoint::ClientContextParameters;

using EKSAuthClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using EKSAuthBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the EKSAuth Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using EKSAuthEndpointProviderBase =
    EndpointProviderBase<EKSAuthClientConfiguration, EKSAuthBuiltInParameters, EKSAuthClientContextParameters>;

using EKSAuthDefaultEpProviderBase =
    DefaultEndpointProvider<EKSAuthClientConfiguration, EKSAuthBuiltInParameters, EKSAuthClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_EKSAUTH_API EKSAuthEndpointProvider : public EKSAuthDefaultEpProviderBase
{
public:
    using EKSAuthResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    EKSAuthEndpointProvider()
      : EKSAuthDefaultEpProviderBase(Aws::EKSAuth::EKSAuthEndpointRules::GetRulesBlob(), Aws::EKSAuth::EKSAuthEndpointRules::RulesBlobSize)
    {}

    ~EKSAuthEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace EKSAuth
} // namespace Aws
