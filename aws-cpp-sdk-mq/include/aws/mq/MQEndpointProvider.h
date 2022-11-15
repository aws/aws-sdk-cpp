/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mq/MQ_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/mq/MQEndpointRules.h>


namespace Aws
{
namespace MQ
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using MQClientContextParameters = Aws::Endpoint::ClientContextParameters;

using MQClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using MQBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the MQ Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using MQEndpointProviderBase =
    EndpointProviderBase<MQClientConfiguration, MQBuiltInParameters, MQClientContextParameters>;

using MQDefaultEpProviderBase =
    DefaultEndpointProvider<MQClientConfiguration, MQBuiltInParameters, MQClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_MQ_API MQEndpointProvider : public MQDefaultEpProviderBase
{
public:
    using MQResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    MQEndpointProvider()
      : MQDefaultEpProviderBase(Aws::MQ::MQEndpointRules::Rules)
    {}

    ~MQEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace MQ
} // namespace Aws
