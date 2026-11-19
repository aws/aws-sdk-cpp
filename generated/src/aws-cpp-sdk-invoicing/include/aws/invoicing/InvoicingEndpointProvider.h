/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/invoicing/InvoicingClientConfiguration.h>
#include <aws/invoicing/Invoicing_EXPORTS.h>

namespace Aws {
namespace Invoicing {
namespace Endpoint {
using InvoicingClientConfiguration = Aws::Invoicing::InvoicingClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using InvoicingClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_INVOICING_API InvoicingBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~InvoicingBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const InvoicingClientConfiguration& config);
  virtual void SetFromClientConfiguration(const InvoicingClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const InvoicingClientConfiguration& config);
};

/**
 * The type for the Invoicing Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using InvoicingEndpointProviderBase =
    EndpointProviderBase<InvoicingClientConfiguration, InvoicingBuiltInParameters, InvoicingClientContextParameters>;

using InvoicingDefaultEpProviderBase =
    BDDEndpointProvider<InvoicingClientConfiguration, InvoicingBuiltInParameters, InvoicingClientContextParameters>;

}  // namespace Endpoint
}  // namespace Invoicing

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_INVOICING_EXTERN template class AWS_INVOICING_API
    Aws::Endpoint::EndpointProviderBase<Invoicing::Endpoint::InvoicingClientConfiguration, Invoicing::Endpoint::InvoicingBuiltInParameters,
                                        Invoicing::Endpoint::InvoicingClientContextParameters>;

AWS_INVOICING_EXTERN template class AWS_INVOICING_API
    Aws::Endpoint::BDDEndpointProvider<Invoicing::Endpoint::InvoicingClientConfiguration, Invoicing::Endpoint::InvoicingBuiltInParameters,
                                       Invoicing::Endpoint::InvoicingClientContextParameters>;
}  // namespace Endpoint

namespace Invoicing {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_INVOICING_API InvoicingEndpointProvider : public InvoicingDefaultEpProviderBase {
 public:
  using InvoicingResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  InvoicingEndpointProvider();

  ~InvoicingEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace Invoicing
}  // namespace Aws
