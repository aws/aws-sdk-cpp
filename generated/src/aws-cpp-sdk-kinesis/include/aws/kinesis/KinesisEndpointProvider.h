/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kinesis/KinesisClientConfiguration.h>
#include <aws/kinesis/Kinesis_EXPORTS.h>

namespace Aws {
namespace Kinesis {
namespace Endpoint {
using KinesisClientConfiguration = Aws::Kinesis::KinesisClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using KinesisClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_KINESIS_API KinesisBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~KinesisBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const KinesisClientConfiguration& config);
};

/**
 * The type for the Kinesis Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using KinesisEndpointProviderBase =
    EndpointProviderBase<KinesisClientConfiguration, KinesisBuiltInParameters, KinesisClientContextParameters>;

using KinesisDefaultEpProviderBase =
    BDDEndpointProvider<KinesisClientConfiguration, KinesisBuiltInParameters, KinesisClientContextParameters>;

}  // namespace Endpoint
}  // namespace Kinesis

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_KINESIS_EXTERN template class AWS_KINESIS_API
    Aws::Endpoint::EndpointProviderBase<Kinesis::Endpoint::KinesisClientConfiguration, Kinesis::Endpoint::KinesisBuiltInParameters,
                                        Kinesis::Endpoint::KinesisClientContextParameters>;

AWS_KINESIS_EXTERN template class AWS_KINESIS_API
    Aws::Endpoint::BDDEndpointProvider<Kinesis::Endpoint::KinesisClientConfiguration, Kinesis::Endpoint::KinesisBuiltInParameters,
                                       Kinesis::Endpoint::KinesisClientContextParameters>;
}  // namespace Endpoint

namespace Kinesis {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_KINESIS_API KinesisEndpointProvider : public KinesisDefaultEpProviderBase {
 public:
  using KinesisResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  KinesisEndpointProvider();

  ~KinesisEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace Kinesis
}  // namespace Aws
