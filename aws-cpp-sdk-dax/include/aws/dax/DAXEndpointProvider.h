/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dax/DAX_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/dax/DAXEndpointRules.h>


namespace Aws
{
namespace DAX
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using DAXClientContextParameters = Aws::Endpoint::ClientContextParameters;

using DAXClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using DAXBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the DAX Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using DAXEndpointProviderBase =
    EndpointProviderBase<DAXClientConfiguration, DAXBuiltInParameters, DAXClientContextParameters>;

using DAXDefaultEpProviderBase =
    DefaultEndpointProvider<DAXClientConfiguration, DAXBuiltInParameters, DAXClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_DAX_API DAXEndpointProvider : public DAXDefaultEpProviderBase
{
public:
    using DAXResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    DAXEndpointProvider()
      : DAXDefaultEpProviderBase(Aws::DAX::DAXEndpointRules::Rules)
    {}

    ~DAXEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace DAX
} // namespace Aws
