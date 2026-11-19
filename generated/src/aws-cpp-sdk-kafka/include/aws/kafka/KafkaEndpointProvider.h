/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kafka/KafkaClientConfiguration.h>
#include <aws/kafka/Kafka_EXPORTS.h>

namespace Aws {
namespace Kafka {
namespace Endpoint {
using KafkaClientConfiguration = Aws::Kafka::KafkaClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using KafkaClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_KAFKA_API KafkaBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~KafkaBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const KafkaClientConfiguration& config);
  virtual void SetFromClientConfiguration(const KafkaClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const KafkaClientConfiguration& config);
};

/**
 * The type for the Kafka Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using KafkaEndpointProviderBase = EndpointProviderBase<KafkaClientConfiguration, KafkaBuiltInParameters, KafkaClientContextParameters>;

using KafkaDefaultEpProviderBase = BDDEndpointProvider<KafkaClientConfiguration, KafkaBuiltInParameters, KafkaClientContextParameters>;

}  // namespace Endpoint
}  // namespace Kafka

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_KAFKA_EXTERN template class AWS_KAFKA_API Aws::Endpoint::EndpointProviderBase<
    Kafka::Endpoint::KafkaClientConfiguration, Kafka::Endpoint::KafkaBuiltInParameters, Kafka::Endpoint::KafkaClientContextParameters>;

AWS_KAFKA_EXTERN template class AWS_KAFKA_API Aws::Endpoint::BDDEndpointProvider<
    Kafka::Endpoint::KafkaClientConfiguration, Kafka::Endpoint::KafkaBuiltInParameters, Kafka::Endpoint::KafkaClientContextParameters>;
}  // namespace Endpoint

namespace Kafka {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_KAFKA_API KafkaEndpointProvider : public KafkaDefaultEpProviderBase {
 public:
  using KafkaResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  KafkaEndpointProvider();

  ~KafkaEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace Kafka
}  // namespace Aws
