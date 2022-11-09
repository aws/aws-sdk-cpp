/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivschat/Ivschat_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/ivschat/IvschatEndpointRules.h>


namespace Aws
{
namespace ivschat
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using IvschatClientContextParameters = Aws::Endpoint::ClientContextParameters;

using IvschatClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using IvschatBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the ivschat Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using IvschatEndpointProviderBase =
    EndpointProviderBase<IvschatClientConfiguration, IvschatBuiltInParameters, IvschatClientContextParameters>;

using IvschatDefaultEpProviderBase =
    DefaultEndpointProvider<IvschatClientConfiguration, IvschatBuiltInParameters, IvschatClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_IVSCHAT_API IvschatEndpointProvider : public IvschatDefaultEpProviderBase
{
public:
    using IvschatResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    IvschatEndpointProvider()
      : IvschatDefaultEpProviderBase(Aws::ivschat::IvschatEndpointRules::Rules)
    {}

    ~IvschatEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace ivschat
} // namespace Aws
