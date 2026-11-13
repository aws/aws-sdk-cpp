/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kafkaconnect/KafkaConnectClientConfiguration.h>
#include <aws/kafkaconnect/KafkaConnect_EXPORTS.h>

namespace Aws {
namespace KafkaConnect {
namespace Endpoint {
using KafkaConnectClientConfiguration = Aws::KafkaConnect::KafkaConnectClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using KafkaConnectClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_KAFKACONNECT_API KafkaConnectBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~KafkaConnectBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const KafkaConnectClientConfiguration& config);
  virtual void SetFromClientConfiguration(const KafkaConnectClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const KafkaConnectClientConfiguration& config);
};

/**
 * The type for the KafkaConnect Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using KafkaConnectEndpointProviderBase =
    EndpointProviderBase<KafkaConnectClientConfiguration, KafkaConnectBuiltInParameters, KafkaConnectClientContextParameters>;

using KafkaConnectDefaultEpProviderBase =
    BDDEndpointProvider<KafkaConnectClientConfiguration, KafkaConnectBuiltInParameters, KafkaConnectClientContextParameters>;

}  // namespace Endpoint
}  // namespace KafkaConnect

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_KAFKACONNECT_EXTERN template class AWS_KAFKACONNECT_API Aws::Endpoint::EndpointProviderBase<
    KafkaConnect::Endpoint::KafkaConnectClientConfiguration, KafkaConnect::Endpoint::KafkaConnectBuiltInParameters,
    KafkaConnect::Endpoint::KafkaConnectClientContextParameters>;

AWS_KAFKACONNECT_EXTERN template class AWS_KAFKACONNECT_API Aws::Endpoint::BDDEndpointProvider<
    KafkaConnect::Endpoint::KafkaConnectClientConfiguration, KafkaConnect::Endpoint::KafkaConnectBuiltInParameters,
    KafkaConnect::Endpoint::KafkaConnectClientContextParameters>;
}  // namespace Endpoint

namespace KafkaConnect {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_KAFKACONNECT_API KafkaConnectEndpointProvider : public KafkaConnectDefaultEpProviderBase {
 public:
  using KafkaConnectResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  KafkaConnectEndpointProvider();

  ~KafkaConnectEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace KafkaConnect
}  // namespace Aws
