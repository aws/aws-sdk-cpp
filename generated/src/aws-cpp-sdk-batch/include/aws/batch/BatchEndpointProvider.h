/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/BatchClientConfiguration.h>
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws {
namespace Batch {
namespace Endpoint {
using BatchClientConfiguration = Aws::Batch::BatchClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using BatchClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_BATCH_API BatchBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~BatchBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const BatchClientConfiguration& config);
  virtual void SetFromClientConfiguration(const BatchClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const BatchClientConfiguration& config);
};

/**
 * The type for the Batch Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using BatchEndpointProviderBase = EndpointProviderBase<BatchClientConfiguration, BatchBuiltInParameters, BatchClientContextParameters>;

using BatchDefaultEpProviderBase = BDDEndpointProvider<BatchClientConfiguration, BatchBuiltInParameters, BatchClientContextParameters>;

}  // namespace Endpoint
}  // namespace Batch

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_BATCH_EXTERN template class AWS_BATCH_API Aws::Endpoint::EndpointProviderBase<
    Batch::Endpoint::BatchClientConfiguration, Batch::Endpoint::BatchBuiltInParameters, Batch::Endpoint::BatchClientContextParameters>;

AWS_BATCH_EXTERN template class AWS_BATCH_API Aws::Endpoint::BDDEndpointProvider<
    Batch::Endpoint::BatchClientConfiguration, Batch::Endpoint::BatchBuiltInParameters, Batch::Endpoint::BatchClientContextParameters>;
}  // namespace Endpoint

namespace Batch {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_BATCH_API BatchEndpointProvider : public BatchDefaultEpProviderBase {
 public:
  using BatchResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  BatchEndpointProvider();

  ~BatchEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace Batch
}  // namespace Aws
