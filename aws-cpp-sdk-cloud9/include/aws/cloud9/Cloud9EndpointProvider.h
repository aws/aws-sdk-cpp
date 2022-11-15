/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloud9/Cloud9_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/cloud9/Cloud9EndpointRules.h>


namespace Aws
{
namespace Cloud9
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using Cloud9ClientContextParameters = Aws::Endpoint::ClientContextParameters;

using Cloud9ClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using Cloud9BuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the Cloud9 Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using Cloud9EndpointProviderBase =
    EndpointProviderBase<Cloud9ClientConfiguration, Cloud9BuiltInParameters, Cloud9ClientContextParameters>;

using Cloud9DefaultEpProviderBase =
    DefaultEndpointProvider<Cloud9ClientConfiguration, Cloud9BuiltInParameters, Cloud9ClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_CLOUD9_API Cloud9EndpointProvider : public Cloud9DefaultEpProviderBase
{
public:
    using Cloud9ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    Cloud9EndpointProvider()
      : Cloud9DefaultEpProviderBase(Aws::Cloud9::Cloud9EndpointRules::Rules)
    {}

    ~Cloud9EndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace Cloud9
} // namespace Aws
