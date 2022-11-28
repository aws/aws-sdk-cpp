/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/oam/OAM_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/oam/OAMEndpointRules.h>


namespace Aws
{
namespace OAM
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using OAMClientContextParameters = Aws::Endpoint::ClientContextParameters;

using OAMClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using OAMBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the OAM Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using OAMEndpointProviderBase =
    EndpointProviderBase<OAMClientConfiguration, OAMBuiltInParameters, OAMClientContextParameters>;

using OAMDefaultEpProviderBase =
    DefaultEndpointProvider<OAMClientConfiguration, OAMBuiltInParameters, OAMClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_OAM_API OAMEndpointProvider : public OAMDefaultEpProviderBase
{
public:
    using OAMResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    OAMEndpointProvider()
      : OAMDefaultEpProviderBase(Aws::OAM::OAMEndpointRules::Rules)
    {}

    ~OAMEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace OAM
} // namespace Aws
