/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManagerClientConfiguration.h>
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws {
namespace AuditManager {
namespace Endpoint {
using AuditManagerClientConfiguration = Aws::AuditManager::AuditManagerClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using AuditManagerClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_AUDITMANAGER_API AuditManagerBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~AuditManagerBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const AuditManagerClientConfiguration& config);
  virtual void SetFromClientConfiguration(const AuditManagerClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const AuditManagerClientConfiguration& config);
};

/**
 * The type for the AuditManager Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using AuditManagerEndpointProviderBase =
    EndpointProviderBase<AuditManagerClientConfiguration, AuditManagerBuiltInParameters, AuditManagerClientContextParameters>;

using AuditManagerDefaultEpProviderBase =
    BDDEndpointProvider<AuditManagerClientConfiguration, AuditManagerBuiltInParameters, AuditManagerClientContextParameters>;

}  // namespace Endpoint
}  // namespace AuditManager

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_AUDITMANAGER_EXTERN template class AWS_AUDITMANAGER_API Aws::Endpoint::EndpointProviderBase<
    AuditManager::Endpoint::AuditManagerClientConfiguration, AuditManager::Endpoint::AuditManagerBuiltInParameters,
    AuditManager::Endpoint::AuditManagerClientContextParameters>;

AWS_AUDITMANAGER_EXTERN template class AWS_AUDITMANAGER_API Aws::Endpoint::BDDEndpointProvider<
    AuditManager::Endpoint::AuditManagerClientConfiguration, AuditManager::Endpoint::AuditManagerBuiltInParameters,
    AuditManager::Endpoint::AuditManagerClientContextParameters>;
}  // namespace Endpoint

namespace AuditManager {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_AUDITMANAGER_API AuditManagerEndpointProvider : public AuditManagerDefaultEpProviderBase {
 public:
  using AuditManagerResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  AuditManagerEndpointProvider();

  ~AuditManagerEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace AuditManager
}  // namespace Aws
