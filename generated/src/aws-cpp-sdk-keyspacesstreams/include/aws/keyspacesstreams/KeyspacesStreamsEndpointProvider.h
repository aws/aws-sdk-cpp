/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/keyspacesstreams/KeyspacesStreams_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/keyspacesstreams/KeyspacesStreamsEndpointRules.h>


namespace Aws
{
namespace KeyspacesStreams
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using KeyspacesStreamsClientContextParameters = Aws::Endpoint::ClientContextParameters;

using KeyspacesStreamsClientConfiguration = Aws::Client::GenericClientConfiguration;
using KeyspacesStreamsBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the KeyspacesStreams Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using KeyspacesStreamsEndpointProviderBase =
    EndpointProviderBase<KeyspacesStreamsClientConfiguration, KeyspacesStreamsBuiltInParameters, KeyspacesStreamsClientContextParameters>;

using KeyspacesStreamsDefaultEpProviderBase =
    DefaultEndpointProvider<KeyspacesStreamsClientConfiguration, KeyspacesStreamsBuiltInParameters, KeyspacesStreamsClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_KEYSPACESSTREAMS_API KeyspacesStreamsEndpointProvider : public KeyspacesStreamsDefaultEpProviderBase
{
public:
    using KeyspacesStreamsResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    KeyspacesStreamsEndpointProvider()
      : KeyspacesStreamsDefaultEpProviderBase(Aws::KeyspacesStreams::KeyspacesStreamsEndpointRules::GetRulesBlob(), Aws::KeyspacesStreams::KeyspacesStreamsEndpointRules::RulesBlobSize)
    {}

    ~KeyspacesStreamsEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace KeyspacesStreams
} // namespace Aws
