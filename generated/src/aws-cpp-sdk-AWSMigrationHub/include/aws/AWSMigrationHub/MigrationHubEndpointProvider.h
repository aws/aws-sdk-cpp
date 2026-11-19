/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/AWSMigrationHub/MigrationHubClientConfiguration.h>
#include <aws/AWSMigrationHub/MigrationHub_EXPORTS.h>
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws {
namespace MigrationHub {
namespace Endpoint {
using MigrationHubClientConfiguration = Aws::MigrationHub::MigrationHubClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using MigrationHubClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_MIGRATIONHUB_API MigrationHubBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~MigrationHubBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const MigrationHubClientConfiguration& config);
  virtual void SetFromClientConfiguration(const MigrationHubClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const MigrationHubClientConfiguration& config);
};

/**
 * The type for the MigrationHub Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using MigrationHubEndpointProviderBase =
    EndpointProviderBase<MigrationHubClientConfiguration, MigrationHubBuiltInParameters, MigrationHubClientContextParameters>;

using MigrationHubDefaultEpProviderBase =
    BDDEndpointProvider<MigrationHubClientConfiguration, MigrationHubBuiltInParameters, MigrationHubClientContextParameters>;

}  // namespace Endpoint
}  // namespace MigrationHub

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_MIGRATIONHUB_EXTERN template class AWS_MIGRATIONHUB_API Aws::Endpoint::EndpointProviderBase<
    MigrationHub::Endpoint::MigrationHubClientConfiguration, MigrationHub::Endpoint::MigrationHubBuiltInParameters,
    MigrationHub::Endpoint::MigrationHubClientContextParameters>;

AWS_MIGRATIONHUB_EXTERN template class AWS_MIGRATIONHUB_API Aws::Endpoint::BDDEndpointProvider<
    MigrationHub::Endpoint::MigrationHubClientConfiguration, MigrationHub::Endpoint::MigrationHubBuiltInParameters,
    MigrationHub::Endpoint::MigrationHubClientContextParameters>;
}  // namespace Endpoint

namespace MigrationHub {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_MIGRATIONHUB_API MigrationHubEndpointProvider : public MigrationHubDefaultEpProviderBase {
 public:
  using MigrationHubResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  MigrationHubEndpointProvider();

  ~MigrationHubEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace MigrationHub
}  // namespace Aws
