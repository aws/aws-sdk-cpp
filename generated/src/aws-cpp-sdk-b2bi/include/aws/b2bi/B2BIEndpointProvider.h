/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/b2bi/B2BIClientConfiguration.h>
#include <aws/b2bi/B2BI_EXPORTS.h>
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws {
namespace B2BI {
namespace Endpoint {
using B2BIClientConfiguration = Aws::B2BI::B2BIClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using B2BIClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_B2BI_API B2BIBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~B2BIBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const B2BIClientConfiguration& config);
  virtual void SetFromClientConfiguration(const B2BIClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const B2BIClientConfiguration& config);
};

/**
 * The type for the B2BI Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using B2BIEndpointProviderBase = EndpointProviderBase<B2BIClientConfiguration, B2BIBuiltInParameters, B2BIClientContextParameters>;

using B2BIDefaultEpProviderBase = BDDEndpointProvider<B2BIClientConfiguration, B2BIBuiltInParameters, B2BIClientContextParameters>;

}  // namespace Endpoint
}  // namespace B2BI

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_B2BI_EXTERN template class AWS_B2BI_API Aws::Endpoint::EndpointProviderBase<
    B2BI::Endpoint::B2BIClientConfiguration, B2BI::Endpoint::B2BIBuiltInParameters, B2BI::Endpoint::B2BIClientContextParameters>;

AWS_B2BI_EXTERN template class AWS_B2BI_API Aws::Endpoint::BDDEndpointProvider<
    B2BI::Endpoint::B2BIClientConfiguration, B2BI::Endpoint::B2BIBuiltInParameters, B2BI::Endpoint::B2BIClientContextParameters>;
}  // namespace Endpoint

namespace B2BI {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_B2BI_API B2BIEndpointProvider : public B2BIDefaultEpProviderBase {
 public:
  using B2BIResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  B2BIEndpointProvider();

  ~B2BIEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace B2BI
}  // namespace Aws
