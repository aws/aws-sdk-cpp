/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/appstream/AppStreamEndpointRules.h>


namespace Aws
{
namespace AppStream
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using AppStreamClientContextParameters = Aws::Endpoint::ClientContextParameters;

using AppStreamClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using AppStreamBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the AppStream Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using AppStreamEndpointProviderBase =
    EndpointProviderBase<AppStreamClientConfiguration, AppStreamBuiltInParameters, AppStreamClientContextParameters>;

using AppStreamDefaultEpProviderBase =
    DefaultEndpointProvider<AppStreamClientConfiguration, AppStreamBuiltInParameters, AppStreamClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_APPSTREAM_API AppStreamEndpointProvider : public AppStreamDefaultEpProviderBase
{
public:
    using AppStreamResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    AppStreamEndpointProvider()
      : AppStreamDefaultEpProviderBase(Aws::AppStream::AppStreamEndpointRules::Rules)
    {}

    ~AppStreamEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace AppStream
} // namespace Aws
