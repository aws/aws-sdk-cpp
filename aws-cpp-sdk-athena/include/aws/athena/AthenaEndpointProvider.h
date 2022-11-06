/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/athena/AthenaEndpointRules.h>


namespace Aws
{
namespace Athena
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using AthenaClientContextParameters = Aws::Endpoint::ClientContextParameters;

using AthenaClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using AthenaBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the Athena Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using AthenaEndpointProviderBase =
    EndpointProviderBase<AthenaClientConfiguration, AthenaBuiltInParameters, AthenaClientContextParameters>;

using AthenaDefaultEpProviderBase =
    DefaultEndpointProvider<AthenaClientConfiguration, AthenaBuiltInParameters, AthenaClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_ATHENA_API AthenaEndpointProvider : public AthenaDefaultEpProviderBase
{
public:
    using AthenaResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    AthenaEndpointProvider()
      : AthenaDefaultEpProviderBase(Aws::Athena::AthenaEndpointRules::Rules)
    {}

    ~AthenaEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace Athena
} // namespace Aws
