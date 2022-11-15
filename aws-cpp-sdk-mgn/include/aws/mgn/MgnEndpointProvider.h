/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/mgn/MgnEndpointRules.h>


namespace Aws
{
namespace mgn
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using MgnClientContextParameters = Aws::Endpoint::ClientContextParameters;

using MgnClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using MgnBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the mgn Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using MgnEndpointProviderBase =
    EndpointProviderBase<MgnClientConfiguration, MgnBuiltInParameters, MgnClientContextParameters>;

using MgnDefaultEpProviderBase =
    DefaultEndpointProvider<MgnClientConfiguration, MgnBuiltInParameters, MgnClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_MGN_API MgnEndpointProvider : public MgnDefaultEpProviderBase
{
public:
    using MgnResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    MgnEndpointProvider()
      : MgnDefaultEpProviderBase(Aws::mgn::MgnEndpointRules::Rules)
    {}

    ~MgnEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace mgn
} // namespace Aws
