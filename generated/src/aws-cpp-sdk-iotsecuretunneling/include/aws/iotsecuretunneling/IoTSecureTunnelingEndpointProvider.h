﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsecuretunneling/IoTSecureTunneling_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/iotsecuretunneling/IoTSecureTunnelingEndpointRules.h>


namespace Aws
{
namespace IoTSecureTunneling
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using IoTSecureTunnelingClientContextParameters = Aws::Endpoint::ClientContextParameters;

using IoTSecureTunnelingClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using IoTSecureTunnelingBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the IoTSecureTunneling Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using IoTSecureTunnelingEndpointProviderBase =
    EndpointProviderBase<IoTSecureTunnelingClientConfiguration, IoTSecureTunnelingBuiltInParameters, IoTSecureTunnelingClientContextParameters>;

using IoTSecureTunnelingDefaultEpProviderBase =
    DefaultEndpointProvider<IoTSecureTunnelingClientConfiguration, IoTSecureTunnelingBuiltInParameters, IoTSecureTunnelingClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_IOTSECURETUNNELING_API IoTSecureTunnelingEndpointProvider : public IoTSecureTunnelingDefaultEpProviderBase
{
public:
    using IoTSecureTunnelingResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    IoTSecureTunnelingEndpointProvider()
      : IoTSecureTunnelingDefaultEpProviderBase(Aws::IoTSecureTunneling::IoTSecureTunnelingEndpointRules::GetRulesBlob(), Aws::IoTSecureTunneling::IoTSecureTunnelingEndpointRules::RulesBlobSize)
    {}

    ~IoTSecureTunnelingEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace IoTSecureTunneling
} // namespace Aws
