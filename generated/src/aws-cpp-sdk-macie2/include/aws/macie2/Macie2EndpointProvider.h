/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/macie2/Macie2ClientConfiguration.h>
#include <aws/macie2/Macie2_EXPORTS.h>

namespace Aws {
namespace Macie2 {
namespace Endpoint {
using Macie2ClientConfiguration = Aws::Macie2::Macie2ClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using Macie2ClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_MACIE2_API Macie2BuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~Macie2BuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const Macie2ClientConfiguration& config);
  virtual void SetFromClientConfiguration(const Macie2ClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const Macie2ClientConfiguration& config);
};

/**
 * The type for the Macie2 Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using Macie2EndpointProviderBase = EndpointProviderBase<Macie2ClientConfiguration, Macie2BuiltInParameters, Macie2ClientContextParameters>;

using Macie2DefaultEpProviderBase = BDDEndpointProvider<Macie2ClientConfiguration, Macie2BuiltInParameters, Macie2ClientContextParameters>;

}  // namespace Endpoint
}  // namespace Macie2

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_MACIE2_EXTERN template class AWS_MACIE2_API
    Aws::Endpoint::EndpointProviderBase<Macie2::Endpoint::Macie2ClientConfiguration, Macie2::Endpoint::Macie2BuiltInParameters,
                                        Macie2::Endpoint::Macie2ClientContextParameters>;

AWS_MACIE2_EXTERN template class AWS_MACIE2_API
    Aws::Endpoint::BDDEndpointProvider<Macie2::Endpoint::Macie2ClientConfiguration, Macie2::Endpoint::Macie2BuiltInParameters,
                                       Macie2::Endpoint::Macie2ClientContextParameters>;
}  // namespace Endpoint

namespace Macie2 {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_MACIE2_API Macie2EndpointProvider : public Macie2DefaultEpProviderBase {
 public:
  using Macie2ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  Macie2EndpointProvider();

  ~Macie2EndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace Macie2
}  // namespace Aws
