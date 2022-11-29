/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/omics/OmicsEndpointRules.h>


namespace Aws
{
namespace Omics
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using OmicsClientContextParameters = Aws::Endpoint::ClientContextParameters;

using OmicsClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using OmicsBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the Omics Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using OmicsEndpointProviderBase =
    EndpointProviderBase<OmicsClientConfiguration, OmicsBuiltInParameters, OmicsClientContextParameters>;

using OmicsDefaultEpProviderBase =
    DefaultEndpointProvider<OmicsClientConfiguration, OmicsBuiltInParameters, OmicsClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_OMICS_API OmicsEndpointProvider : public OmicsDefaultEpProviderBase
{
public:
    using OmicsResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    OmicsEndpointProvider()
      : OmicsDefaultEpProviderBase(Aws::Omics::OmicsEndpointRules::Rules)
    {}

    ~OmicsEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace Omics
} // namespace Aws
