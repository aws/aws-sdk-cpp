/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mwaa/MWAA_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/mwaa/MWAAEndpointRules.h>


namespace Aws
{
namespace MWAA
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using MWAAClientContextParameters = Aws::Endpoint::ClientContextParameters;

using MWAAClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using MWAABuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the MWAA Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using MWAAEndpointProviderBase =
    EndpointProviderBase<MWAAClientConfiguration, MWAABuiltInParameters, MWAAClientContextParameters>;

using MWAADefaultEpProviderBase =
    DefaultEndpointProvider<MWAAClientConfiguration, MWAABuiltInParameters, MWAAClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_MWAA_API MWAAEndpointProvider : public MWAADefaultEpProviderBase
{
public:
    using MWAAResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    MWAAEndpointProvider()
      : MWAADefaultEpProviderBase(Aws::MWAA::MWAAEndpointRules::Rules)
    {}

    ~MWAAEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace MWAA
} // namespace Aws
