/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/fsx/FSxEndpointRules.h>


namespace Aws
{
namespace FSx
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using FSxClientContextParameters = Aws::Endpoint::ClientContextParameters;

using FSxClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using FSxBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the FSx Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using FSxEndpointProviderBase =
    EndpointProviderBase<FSxClientConfiguration, FSxBuiltInParameters, FSxClientContextParameters>;

using FSxDefaultEpProviderBase =
    DefaultEndpointProvider<FSxClientConfiguration, FSxBuiltInParameters, FSxClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_FSX_API FSxEndpointProvider : public FSxDefaultEpProviderBase
{
public:
    using FSxResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    FSxEndpointProvider()
      : FSxDefaultEpProviderBase(Aws::FSx::FSxEndpointRules::Rules)
    {}

    ~FSxEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace FSx
} // namespace Aws
