/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/alexaforbusiness/AlexaForBusiness_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/alexaforbusiness/AlexaForBusinessEndpointRules.h>


namespace Aws
{
namespace AlexaForBusiness
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using AlexaForBusinessClientContextParameters = Aws::Endpoint::ClientContextParameters;

using AlexaForBusinessClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using AlexaForBusinessBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the AlexaForBusiness Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using AlexaForBusinessEndpointProviderBase =
    EndpointProviderBase<AlexaForBusinessClientConfiguration, AlexaForBusinessBuiltInParameters, AlexaForBusinessClientContextParameters>;

using AlexaForBusinessDefaultEpProviderBase =
    DefaultEndpointProvider<AlexaForBusinessClientConfiguration, AlexaForBusinessBuiltInParameters, AlexaForBusinessClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_ALEXAFORBUSINESS_API AlexaForBusinessEndpointProvider : public AlexaForBusinessDefaultEpProviderBase
{
public:
    using AlexaForBusinessResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    AlexaForBusinessEndpointProvider()
      : AlexaForBusinessDefaultEpProviderBase(Aws::AlexaForBusiness::AlexaForBusinessEndpointRules::Rules)
    {}

    ~AlexaForBusinessEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace AlexaForBusiness
} // namespace Aws
