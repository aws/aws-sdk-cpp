/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dms/DatabaseMigrationServiceClientConfiguration.h>
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>

namespace Aws {
namespace DatabaseMigrationService {
namespace Endpoint {
using DatabaseMigrationServiceClientConfiguration = Aws::DatabaseMigrationService::DatabaseMigrationServiceClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using DatabaseMigrationServiceClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_DATABASEMIGRATIONSERVICE_API DatabaseMigrationServiceBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~DatabaseMigrationServiceBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const DatabaseMigrationServiceClientConfiguration& config);
  virtual void SetFromClientConfiguration(const DatabaseMigrationServiceClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const DatabaseMigrationServiceClientConfiguration& config);
};

/**
 * The type for the DatabaseMigrationService Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using DatabaseMigrationServiceEndpointProviderBase =
    EndpointProviderBase<DatabaseMigrationServiceClientConfiguration, DatabaseMigrationServiceBuiltInParameters,
                         DatabaseMigrationServiceClientContextParameters>;

using DatabaseMigrationServiceDefaultEpProviderBase =
    BDDEndpointProvider<DatabaseMigrationServiceClientConfiguration, DatabaseMigrationServiceBuiltInParameters,
                        DatabaseMigrationServiceClientContextParameters>;

}  // namespace Endpoint
}  // namespace DatabaseMigrationService

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_DATABASEMIGRATIONSERVICE_EXTERN template class AWS_DATABASEMIGRATIONSERVICE_API
    Aws::Endpoint::EndpointProviderBase<DatabaseMigrationService::Endpoint::DatabaseMigrationServiceClientConfiguration,
                                        DatabaseMigrationService::Endpoint::DatabaseMigrationServiceBuiltInParameters,
                                        DatabaseMigrationService::Endpoint::DatabaseMigrationServiceClientContextParameters>;

AWS_DATABASEMIGRATIONSERVICE_EXTERN template class AWS_DATABASEMIGRATIONSERVICE_API
    Aws::Endpoint::BDDEndpointProvider<DatabaseMigrationService::Endpoint::DatabaseMigrationServiceClientConfiguration,
                                       DatabaseMigrationService::Endpoint::DatabaseMigrationServiceBuiltInParameters,
                                       DatabaseMigrationService::Endpoint::DatabaseMigrationServiceClientContextParameters>;
}  // namespace Endpoint

namespace DatabaseMigrationService {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_DATABASEMIGRATIONSERVICE_API DatabaseMigrationServiceEndpointProvider : public DatabaseMigrationServiceDefaultEpProviderBase {
 public:
  using DatabaseMigrationServiceResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  DatabaseMigrationServiceEndpointProvider();

  ~DatabaseMigrationServiceEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace DatabaseMigrationService
}  // namespace Aws
