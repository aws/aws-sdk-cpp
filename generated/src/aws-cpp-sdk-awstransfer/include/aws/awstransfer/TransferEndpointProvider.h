/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/TransferClientConfiguration.h>
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws {
namespace Transfer {
namespace Endpoint {
using TransferClientConfiguration = Aws::Transfer::TransferClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using TransferClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_TRANSFER_API TransferBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~TransferBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const TransferClientConfiguration& config);
  virtual void SetFromClientConfiguration(const TransferClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const TransferClientConfiguration& config);
};

/**
 * The type for the Transfer Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using TransferEndpointProviderBase =
    EndpointProviderBase<TransferClientConfiguration, TransferBuiltInParameters, TransferClientContextParameters>;

using TransferDefaultEpProviderBase =
    BDDEndpointProvider<TransferClientConfiguration, TransferBuiltInParameters, TransferClientContextParameters>;

}  // namespace Endpoint
}  // namespace Transfer

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_TRANSFER_EXTERN template class AWS_TRANSFER_API
    Aws::Endpoint::EndpointProviderBase<Transfer::Endpoint::TransferClientConfiguration, Transfer::Endpoint::TransferBuiltInParameters,
                                        Transfer::Endpoint::TransferClientContextParameters>;

AWS_TRANSFER_EXTERN template class AWS_TRANSFER_API
    Aws::Endpoint::BDDEndpointProvider<Transfer::Endpoint::TransferClientConfiguration, Transfer::Endpoint::TransferBuiltInParameters,
                                       Transfer::Endpoint::TransferClientContextParameters>;
}  // namespace Endpoint

namespace Transfer {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_TRANSFER_API TransferEndpointProvider : public TransferDefaultEpProviderBase {
 public:
  using TransferResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  TransferEndpointProvider();

  ~TransferEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace Transfer
}  // namespace Aws
