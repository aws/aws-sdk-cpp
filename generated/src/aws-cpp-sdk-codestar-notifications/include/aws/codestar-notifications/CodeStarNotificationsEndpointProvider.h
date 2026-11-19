/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codestar-notifications/CodeStarNotificationsClientConfiguration.h>
#include <aws/codestar-notifications/CodeStarNotifications_EXPORTS.h>
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws {
namespace CodeStarNotifications {
namespace Endpoint {
using CodeStarNotificationsClientConfiguration = Aws::CodeStarNotifications::CodeStarNotificationsClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using CodeStarNotificationsClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_CODESTARNOTIFICATIONS_API CodeStarNotificationsBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~CodeStarNotificationsBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const CodeStarNotificationsClientConfiguration& config);
  virtual void SetFromClientConfiguration(const CodeStarNotificationsClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const CodeStarNotificationsClientConfiguration& config);
};

/**
 * The type for the CodeStarNotifications Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using CodeStarNotificationsEndpointProviderBase =
    EndpointProviderBase<CodeStarNotificationsClientConfiguration, CodeStarNotificationsBuiltInParameters,
                         CodeStarNotificationsClientContextParameters>;

using CodeStarNotificationsDefaultEpProviderBase =
    BDDEndpointProvider<CodeStarNotificationsClientConfiguration, CodeStarNotificationsBuiltInParameters,
                        CodeStarNotificationsClientContextParameters>;

}  // namespace Endpoint
}  // namespace CodeStarNotifications

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_CODESTARNOTIFICATIONS_EXTERN template class AWS_CODESTARNOTIFICATIONS_API
    Aws::Endpoint::EndpointProviderBase<CodeStarNotifications::Endpoint::CodeStarNotificationsClientConfiguration,
                                        CodeStarNotifications::Endpoint::CodeStarNotificationsBuiltInParameters,
                                        CodeStarNotifications::Endpoint::CodeStarNotificationsClientContextParameters>;

AWS_CODESTARNOTIFICATIONS_EXTERN template class AWS_CODESTARNOTIFICATIONS_API
    Aws::Endpoint::BDDEndpointProvider<CodeStarNotifications::Endpoint::CodeStarNotificationsClientConfiguration,
                                       CodeStarNotifications::Endpoint::CodeStarNotificationsBuiltInParameters,
                                       CodeStarNotifications::Endpoint::CodeStarNotificationsClientContextParameters>;
}  // namespace Endpoint

namespace CodeStarNotifications {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_CODESTARNOTIFICATIONS_API CodeStarNotificationsEndpointProvider : public CodeStarNotificationsDefaultEpProviderBase {
 public:
  using CodeStarNotificationsResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  CodeStarNotificationsEndpointProvider();

  ~CodeStarNotificationsEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace CodeStarNotifications
}  // namespace Aws
