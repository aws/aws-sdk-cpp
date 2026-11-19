/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/firehose/FirehoseClientConfiguration.h>
#include <aws/firehose/Firehose_EXPORTS.h>

namespace Aws {
namespace Firehose {
namespace Endpoint {
using FirehoseClientConfiguration = Aws::Firehose::FirehoseClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using FirehoseClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_FIREHOSE_API FirehoseBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~FirehoseBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const FirehoseClientConfiguration& config);
  virtual void SetFromClientConfiguration(const FirehoseClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const FirehoseClientConfiguration& config);
};

/**
 * The type for the Firehose Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using FirehoseEndpointProviderBase =
    EndpointProviderBase<FirehoseClientConfiguration, FirehoseBuiltInParameters, FirehoseClientContextParameters>;

using FirehoseDefaultEpProviderBase =
    BDDEndpointProvider<FirehoseClientConfiguration, FirehoseBuiltInParameters, FirehoseClientContextParameters>;

}  // namespace Endpoint
}  // namespace Firehose

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_FIREHOSE_EXTERN template class AWS_FIREHOSE_API
    Aws::Endpoint::EndpointProviderBase<Firehose::Endpoint::FirehoseClientConfiguration, Firehose::Endpoint::FirehoseBuiltInParameters,
                                        Firehose::Endpoint::FirehoseClientContextParameters>;

AWS_FIREHOSE_EXTERN template class AWS_FIREHOSE_API
    Aws::Endpoint::BDDEndpointProvider<Firehose::Endpoint::FirehoseClientConfiguration, Firehose::Endpoint::FirehoseBuiltInParameters,
                                       Firehose::Endpoint::FirehoseClientContextParameters>;
}  // namespace Endpoint

namespace Firehose {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_FIREHOSE_API FirehoseEndpointProvider : public FirehoseDefaultEpProviderBase {
 public:
  using FirehoseResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  FirehoseEndpointProvider();

  ~FirehoseEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace Firehose
}  // namespace Aws
