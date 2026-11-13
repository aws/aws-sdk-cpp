/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/endusermessaging/EndUserMessagingClientConfiguration.h>
#include <aws/endusermessaging/EndUserMessaging_EXPORTS.h>

namespace Aws {
namespace EndUserMessaging {
namespace Endpoint {
using EndUserMessagingClientConfiguration = Aws::EndUserMessaging::EndUserMessagingClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using EndUserMessagingClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_ENDUSERMESSAGING_API EndUserMessagingBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~EndUserMessagingBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const EndUserMessagingClientConfiguration& config);
  virtual void SetFromClientConfiguration(const EndUserMessagingClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const EndUserMessagingClientConfiguration& config);
};

/**
 * The type for the EndUserMessaging Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using EndUserMessagingEndpointProviderBase =
    EndpointProviderBase<EndUserMessagingClientConfiguration, EndUserMessagingBuiltInParameters, EndUserMessagingClientContextParameters>;

using EndUserMessagingDefaultEpProviderBase =
    BDDEndpointProvider<EndUserMessagingClientConfiguration, EndUserMessagingBuiltInParameters, EndUserMessagingClientContextParameters>;

}  // namespace Endpoint
}  // namespace EndUserMessaging

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_ENDUSERMESSAGING_EXTERN template class AWS_ENDUSERMESSAGING_API Aws::Endpoint::EndpointProviderBase<
    EndUserMessaging::Endpoint::EndUserMessagingClientConfiguration, EndUserMessaging::Endpoint::EndUserMessagingBuiltInParameters,
    EndUserMessaging::Endpoint::EndUserMessagingClientContextParameters>;

AWS_ENDUSERMESSAGING_EXTERN template class AWS_ENDUSERMESSAGING_API Aws::Endpoint::BDDEndpointProvider<
    EndUserMessaging::Endpoint::EndUserMessagingClientConfiguration, EndUserMessaging::Endpoint::EndUserMessagingBuiltInParameters,
    EndUserMessaging::Endpoint::EndUserMessagingClientContextParameters>;
}  // namespace Endpoint

namespace EndUserMessaging {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_ENDUSERMESSAGING_API EndUserMessagingEndpointProvider : public EndUserMessagingDefaultEpProviderBase {
 public:
  using EndUserMessagingResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  EndUserMessagingEndpointProvider();

  ~EndUserMessagingEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace EndUserMessaging
}  // namespace Aws
