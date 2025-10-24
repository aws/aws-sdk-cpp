﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kafkaconnect/KafkaConnectEndpointRules.h>
#include <aws/kafkaconnect/KafkaConnect_EXPORTS.h>

namespace Aws {
namespace KafkaConnect {
namespace Endpoint {
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::DefaultEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using KafkaConnectClientContextParameters = Aws::Endpoint::ClientContextParameters;

using KafkaConnectClientConfiguration = Aws::Client::GenericClientConfiguration;
using KafkaConnectBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the KafkaConnect Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using KafkaConnectEndpointProviderBase =
    EndpointProviderBase<KafkaConnectClientConfiguration, KafkaConnectBuiltInParameters, KafkaConnectClientContextParameters>;

using KafkaConnectDefaultEpProviderBase =
    DefaultEndpointProvider<KafkaConnectClientConfiguration, KafkaConnectBuiltInParameters, KafkaConnectClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_KAFKACONNECT_API KafkaConnectEndpointProvider : public KafkaConnectDefaultEpProviderBase {
 public:
  using KafkaConnectResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  KafkaConnectEndpointProvider()
      : KafkaConnectDefaultEpProviderBase(Aws::KafkaConnect::KafkaConnectEndpointRules::GetRulesBlob(),
                                          Aws::KafkaConnect::KafkaConnectEndpointRules::RulesBlobSize) {}

  ~KafkaConnectEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace KafkaConnect
}  // namespace Aws
