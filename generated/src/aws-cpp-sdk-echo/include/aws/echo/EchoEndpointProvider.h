/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/echo/Echo_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/echo/EchoEndpointRules.h>


namespace Aws
{
namespace Echo
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using EchoClientContextParameters = Aws::Endpoint::ClientContextParameters;

using EchoClientConfiguration = Aws::Client::GenericClientConfiguration;
using EchoBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the Echo Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using EchoEndpointProviderBase =
    EndpointProviderBase<EchoClientConfiguration, EchoBuiltInParameters, EchoClientContextParameters>;

using EchoDefaultEpProviderBase =
    DefaultEndpointProvider<EchoClientConfiguration, EchoBuiltInParameters, EchoClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_ECHO_API EchoEndpointProvider : public EchoDefaultEpProviderBase
{
public:
    using EchoResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    EchoEndpointProvider()
      : EchoDefaultEpProviderBase(Aws::Echo::EchoEndpointRules::GetRulesBlob(), Aws::Echo::EchoEndpointRules::RulesBlobSize)
    {}

    ~EchoEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace Echo
} // namespace Aws
