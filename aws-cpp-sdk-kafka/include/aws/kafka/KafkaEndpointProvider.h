/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/kafka/KafkaEndpointRules.h>


namespace Aws
{
namespace Kafka
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using KafkaClientContextParameters = Aws::Endpoint::ClientContextParameters;

using KafkaClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using KafkaBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the Kafka Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using KafkaEndpointProviderBase =
    EndpointProviderBase<KafkaClientConfiguration, KafkaBuiltInParameters, KafkaClientContextParameters>;

using KafkaDefaultEpProviderBase =
    DefaultEndpointProvider<KafkaClientConfiguration, KafkaBuiltInParameters, KafkaClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_KAFKA_API KafkaEndpointProvider : public KafkaDefaultEpProviderBase
{
public:
    using KafkaResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    KafkaEndpointProvider()
      : KafkaDefaultEpProviderBase(Aws::Kafka::KafkaEndpointRules::Rules)
    {}

    ~KafkaEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace Kafka
} // namespace Aws
