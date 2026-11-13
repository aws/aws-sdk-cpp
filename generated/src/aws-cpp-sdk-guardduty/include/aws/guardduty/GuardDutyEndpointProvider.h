/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/guardduty/GuardDutyClientConfiguration.h>
#include <aws/guardduty/GuardDuty_EXPORTS.h>

namespace Aws {
namespace GuardDuty {
namespace Endpoint {
using GuardDutyClientConfiguration = Aws::GuardDuty::GuardDutyClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using GuardDutyClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_GUARDDUTY_API GuardDutyBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~GuardDutyBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const GuardDutyClientConfiguration& config);
  virtual void SetFromClientConfiguration(const GuardDutyClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const GuardDutyClientConfiguration& config);
};

/**
 * The type for the GuardDuty Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using GuardDutyEndpointProviderBase =
    EndpointProviderBase<GuardDutyClientConfiguration, GuardDutyBuiltInParameters, GuardDutyClientContextParameters>;

using GuardDutyDefaultEpProviderBase =
    BDDEndpointProvider<GuardDutyClientConfiguration, GuardDutyBuiltInParameters, GuardDutyClientContextParameters>;

}  // namespace Endpoint
}  // namespace GuardDuty

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_GUARDDUTY_EXTERN template class AWS_GUARDDUTY_API
    Aws::Endpoint::EndpointProviderBase<GuardDuty::Endpoint::GuardDutyClientConfiguration, GuardDuty::Endpoint::GuardDutyBuiltInParameters,
                                        GuardDuty::Endpoint::GuardDutyClientContextParameters>;

AWS_GUARDDUTY_EXTERN template class AWS_GUARDDUTY_API
    Aws::Endpoint::BDDEndpointProvider<GuardDuty::Endpoint::GuardDutyClientConfiguration, GuardDuty::Endpoint::GuardDutyBuiltInParameters,
                                       GuardDuty::Endpoint::GuardDutyClientContextParameters>;
}  // namespace Endpoint

namespace GuardDuty {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_GUARDDUTY_API GuardDutyEndpointProvider : public GuardDutyDefaultEpProviderBase {
 public:
  using GuardDutyResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  GuardDutyEndpointProvider();

  ~GuardDutyEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace GuardDuty
}  // namespace Aws
