/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qldb-session/QLDBSession_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/qldb-session/QLDBSessionEndpointRules.h>


namespace Aws
{
namespace QLDBSession
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using QLDBSessionClientContextParameters = Aws::Endpoint::ClientContextParameters;

using QLDBSessionClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using QLDBSessionBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the QLDBSession Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using QLDBSessionEndpointProviderBase =
    EndpointProviderBase<QLDBSessionClientConfiguration, QLDBSessionBuiltInParameters, QLDBSessionClientContextParameters>;

using QLDBSessionDefaultEpProviderBase =
    DefaultEndpointProvider<QLDBSessionClientConfiguration, QLDBSessionBuiltInParameters, QLDBSessionClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_QLDBSESSION_API QLDBSessionEndpointProvider : public QLDBSessionDefaultEpProviderBase
{
public:
    using QLDBSessionResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    QLDBSessionEndpointProvider()
      : QLDBSessionDefaultEpProviderBase(Aws::QLDBSession::QLDBSessionEndpointRules::Rules)
    {}

    ~QLDBSessionEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace QLDBSession
} // namespace Aws
