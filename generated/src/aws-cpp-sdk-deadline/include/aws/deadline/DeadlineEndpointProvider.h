/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/deadline/DeadlineClientConfiguration.h>
#include <aws/deadline/Deadline_EXPORTS.h>

namespace Aws {
namespace deadline {
namespace Endpoint {
using DeadlineClientConfiguration = Aws::deadline::DeadlineClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using DeadlineClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_DEADLINE_API DeadlineBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~DeadlineBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const DeadlineClientConfiguration& config);
  virtual void SetFromClientConfiguration(const DeadlineClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const DeadlineClientConfiguration& config);
};

/**
 * The type for the deadline Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using DeadlineEndpointProviderBase =
    EndpointProviderBase<DeadlineClientConfiguration, DeadlineBuiltInParameters, DeadlineClientContextParameters>;

using DeadlineDefaultEpProviderBase =
    BDDEndpointProvider<DeadlineClientConfiguration, DeadlineBuiltInParameters, DeadlineClientContextParameters>;

}  // namespace Endpoint
}  // namespace deadline

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_DEADLINE_EXTERN template class AWS_DEADLINE_API
    Aws::Endpoint::EndpointProviderBase<deadline::Endpoint::DeadlineClientConfiguration, deadline::Endpoint::DeadlineBuiltInParameters,
                                        deadline::Endpoint::DeadlineClientContextParameters>;

AWS_DEADLINE_EXTERN template class AWS_DEADLINE_API
    Aws::Endpoint::BDDEndpointProvider<deadline::Endpoint::DeadlineClientConfiguration, deadline::Endpoint::DeadlineBuiltInParameters,
                                       deadline::Endpoint::DeadlineClientContextParameters>;
}  // namespace Endpoint

namespace deadline {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_DEADLINE_API DeadlineEndpointProvider : public DeadlineDefaultEpProviderBase {
 public:
  using DeadlineResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  DeadlineEndpointProvider();

  ~DeadlineEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace deadline
}  // namespace Aws
