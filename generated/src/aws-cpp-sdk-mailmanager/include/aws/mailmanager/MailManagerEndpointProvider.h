/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mailmanager/MailManagerClientConfiguration.h>
#include <aws/mailmanager/MailManager_EXPORTS.h>

namespace Aws {
namespace MailManager {
namespace Endpoint {
using MailManagerClientConfiguration = Aws::MailManager::MailManagerClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using MailManagerClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_MAILMANAGER_API MailManagerBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~MailManagerBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const MailManagerClientConfiguration& config);
  virtual void SetFromClientConfiguration(const MailManagerClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const MailManagerClientConfiguration& config);
};

/**
 * The type for the MailManager Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using MailManagerEndpointProviderBase =
    EndpointProviderBase<MailManagerClientConfiguration, MailManagerBuiltInParameters, MailManagerClientContextParameters>;

using MailManagerDefaultEpProviderBase =
    BDDEndpointProvider<MailManagerClientConfiguration, MailManagerBuiltInParameters, MailManagerClientContextParameters>;

}  // namespace Endpoint
}  // namespace MailManager

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_MAILMANAGER_EXTERN template class AWS_MAILMANAGER_API Aws::Endpoint::EndpointProviderBase<
    MailManager::Endpoint::MailManagerClientConfiguration, MailManager::Endpoint::MailManagerBuiltInParameters,
    MailManager::Endpoint::MailManagerClientContextParameters>;

AWS_MAILMANAGER_EXTERN template class AWS_MAILMANAGER_API Aws::Endpoint::BDDEndpointProvider<
    MailManager::Endpoint::MailManagerClientConfiguration, MailManager::Endpoint::MailManagerBuiltInParameters,
    MailManager::Endpoint::MailManagerClientContextParameters>;
}  // namespace Endpoint

namespace MailManager {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_MAILMANAGER_API MailManagerEndpointProvider : public MailManagerDefaultEpProviderBase {
 public:
  using MailManagerResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  MailManagerEndpointProvider();

  ~MailManagerEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace MailManager
}  // namespace Aws
