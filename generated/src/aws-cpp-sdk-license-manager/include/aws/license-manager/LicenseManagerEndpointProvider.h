/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/license-manager/LicenseManagerClientConfiguration.h>
#include <aws/license-manager/LicenseManager_EXPORTS.h>

namespace Aws {
namespace LicenseManager {
namespace Endpoint {
using LicenseManagerClientConfiguration = Aws::LicenseManager::LicenseManagerClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using LicenseManagerClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_LICENSEMANAGER_API LicenseManagerBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~LicenseManagerBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const LicenseManagerClientConfiguration& config);
  virtual void SetFromClientConfiguration(const LicenseManagerClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const LicenseManagerClientConfiguration& config);
};

/**
 * The type for the LicenseManager Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using LicenseManagerEndpointProviderBase =
    EndpointProviderBase<LicenseManagerClientConfiguration, LicenseManagerBuiltInParameters, LicenseManagerClientContextParameters>;

using LicenseManagerDefaultEpProviderBase =
    BDDEndpointProvider<LicenseManagerClientConfiguration, LicenseManagerBuiltInParameters, LicenseManagerClientContextParameters>;

}  // namespace Endpoint
}  // namespace LicenseManager

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_LICENSEMANAGER_EXTERN template class AWS_LICENSEMANAGER_API Aws::Endpoint::EndpointProviderBase<
    LicenseManager::Endpoint::LicenseManagerClientConfiguration, LicenseManager::Endpoint::LicenseManagerBuiltInParameters,
    LicenseManager::Endpoint::LicenseManagerClientContextParameters>;

AWS_LICENSEMANAGER_EXTERN template class AWS_LICENSEMANAGER_API Aws::Endpoint::BDDEndpointProvider<
    LicenseManager::Endpoint::LicenseManagerClientConfiguration, LicenseManager::Endpoint::LicenseManagerBuiltInParameters,
    LicenseManager::Endpoint::LicenseManagerClientContextParameters>;
}  // namespace Endpoint

namespace LicenseManager {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_LICENSEMANAGER_API LicenseManagerEndpointProvider : public LicenseManagerDefaultEpProviderBase {
 public:
  using LicenseManagerResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  LicenseManagerEndpointProvider();

  ~LicenseManagerEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace LicenseManager
}  // namespace Aws
