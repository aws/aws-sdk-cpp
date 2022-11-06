/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/states/SFN_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/states/SFNEndpointRules.h>


namespace Aws
{
namespace SFN
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using SFNClientContextParameters = Aws::Endpoint::ClientContextParameters;

using SFNClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using SFNBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the SFN Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using SFNEndpointProviderBase =
    EndpointProviderBase<SFNClientConfiguration, SFNBuiltInParameters, SFNClientContextParameters>;

using SFNDefaultEpProviderBase =
    DefaultEndpointProvider<SFNClientConfiguration, SFNBuiltInParameters, SFNClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_SFN_API SFNEndpointProvider : public SFNDefaultEpProviderBase
{
public:
    using SFNResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    SFNEndpointProvider()
      : SFNDefaultEpProviderBase(Aws::SFN::SFNEndpointRules::Rules)
    {}

    ~SFNEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace SFN
} // namespace Aws
