/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect-contact-lens/ConnectContactLens_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/connect-contact-lens/ConnectContactLensEndpointRules.h>


namespace Aws
{
namespace ConnectContactLens
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using ConnectContactLensClientContextParameters = Aws::Endpoint::ClientContextParameters;

using ConnectContactLensClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using ConnectContactLensBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the ConnectContactLens Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using ConnectContactLensEndpointProviderBase =
    EndpointProviderBase<ConnectContactLensClientConfiguration, ConnectContactLensBuiltInParameters, ConnectContactLensClientContextParameters>;

using ConnectContactLensDefaultEpProviderBase =
    DefaultEndpointProvider<ConnectContactLensClientConfiguration, ConnectContactLensBuiltInParameters, ConnectContactLensClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_CONNECTCONTACTLENS_API ConnectContactLensEndpointProvider : public ConnectContactLensDefaultEpProviderBase
{
public:
    using ConnectContactLensResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    ConnectContactLensEndpointProvider()
      : ConnectContactLensDefaultEpProviderBase(Aws::ConnectContactLens::ConnectContactLensEndpointRules::Rules)
    {}

    ~ConnectContactLensEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace ConnectContactLens
} // namespace Aws
