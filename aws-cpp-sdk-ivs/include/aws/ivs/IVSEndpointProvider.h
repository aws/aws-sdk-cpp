/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs/IVS_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/ivs/IVSEndpointRules.h>


namespace Aws
{
namespace IVS
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using IVSClientContextParameters = Aws::Endpoint::ClientContextParameters;

using IVSClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using IVSBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the IVS Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using IVSEndpointProviderBase =
    EndpointProviderBase<IVSClientConfiguration, IVSBuiltInParameters, IVSClientContextParameters>;

using IVSDefaultEpProviderBase =
    DefaultEndpointProvider<IVSClientConfiguration, IVSBuiltInParameters, IVSClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_IVS_API IVSEndpointProvider : public IVSDefaultEpProviderBase
{
public:
    using IVSResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    IVSEndpointProvider()
      : IVSDefaultEpProviderBase(Aws::IVS::IVSEndpointRules::Rules)
    {}

    ~IVSEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace IVS
} // namespace Aws
