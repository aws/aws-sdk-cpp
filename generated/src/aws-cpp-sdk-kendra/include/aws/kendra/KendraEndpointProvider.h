/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kendra/KendraClientConfiguration.h>
#include <aws/kendra/Kendra_EXPORTS.h>

namespace Aws {
namespace kendra {
namespace Endpoint {
using KendraClientConfiguration = Aws::kendra::KendraClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using KendraClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_KENDRA_API KendraBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~KendraBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const KendraClientConfiguration& config);
  virtual void SetFromClientConfiguration(const KendraClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const KendraClientConfiguration& config);
};

/**
 * The type for the kendra Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using KendraEndpointProviderBase = EndpointProviderBase<KendraClientConfiguration, KendraBuiltInParameters, KendraClientContextParameters>;

using KendraDefaultEpProviderBase = BDDEndpointProvider<KendraClientConfiguration, KendraBuiltInParameters, KendraClientContextParameters>;

}  // namespace Endpoint
}  // namespace kendra

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_KENDRA_EXTERN template class AWS_KENDRA_API
    Aws::Endpoint::EndpointProviderBase<kendra::Endpoint::KendraClientConfiguration, kendra::Endpoint::KendraBuiltInParameters,
                                        kendra::Endpoint::KendraClientContextParameters>;

AWS_KENDRA_EXTERN template class AWS_KENDRA_API
    Aws::Endpoint::BDDEndpointProvider<kendra::Endpoint::KendraClientConfiguration, kendra::Endpoint::KendraBuiltInParameters,
                                       kendra::Endpoint::KendraClientContextParameters>;
}  // namespace Endpoint

namespace kendra {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_KENDRA_API KendraEndpointProvider : public KendraDefaultEpProviderBase {
 public:
  using KendraResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  KendraEndpointProvider();

  ~KendraEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace kendra
}  // namespace Aws
