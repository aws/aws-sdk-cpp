/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/Drs_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/drs/DrsEndpointRules.h>


namespace Aws
{
namespace drs
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using DrsClientContextParameters = Aws::Endpoint::ClientContextParameters;

using DrsClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using DrsBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the drs Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using DrsEndpointProviderBase =
    EndpointProviderBase<DrsClientConfiguration, DrsBuiltInParameters, DrsClientContextParameters>;

using DrsDefaultEpProviderBase =
    DefaultEndpointProvider<DrsClientConfiguration, DrsBuiltInParameters, DrsClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_DRS_API DrsEndpointProvider : public DrsDefaultEpProviderBase
{
public:
    using DrsResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    DrsEndpointProvider()
      : DrsDefaultEpProviderBase(Aws::drs::DrsEndpointRules::Rules)
    {}

    ~DrsEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace drs
} // namespace Aws
