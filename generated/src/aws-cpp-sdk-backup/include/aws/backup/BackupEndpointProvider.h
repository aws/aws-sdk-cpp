/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/BackupClientConfiguration.h>
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws {
namespace Backup {
namespace Endpoint {
using BackupClientConfiguration = Aws::Backup::BackupClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using BackupClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_BACKUP_API BackupBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~BackupBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const BackupClientConfiguration& config);
  virtual void SetFromClientConfiguration(const BackupClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const BackupClientConfiguration& config);
};

/**
 * The type for the Backup Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using BackupEndpointProviderBase = EndpointProviderBase<BackupClientConfiguration, BackupBuiltInParameters, BackupClientContextParameters>;

using BackupDefaultEpProviderBase = BDDEndpointProvider<BackupClientConfiguration, BackupBuiltInParameters, BackupClientContextParameters>;

}  // namespace Endpoint
}  // namespace Backup

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_BACKUP_EXTERN template class AWS_BACKUP_API
    Aws::Endpoint::EndpointProviderBase<Backup::Endpoint::BackupClientConfiguration, Backup::Endpoint::BackupBuiltInParameters,
                                        Backup::Endpoint::BackupClientContextParameters>;

AWS_BACKUP_EXTERN template class AWS_BACKUP_API
    Aws::Endpoint::BDDEndpointProvider<Backup::Endpoint::BackupClientConfiguration, Backup::Endpoint::BackupBuiltInParameters,
                                       Backup::Endpoint::BackupClientContextParameters>;
}  // namespace Endpoint

namespace Backup {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_BACKUP_API BackupEndpointProvider : public BackupDefaultEpProviderBase {
 public:
  using BackupResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  BackupEndpointProvider();

  ~BackupEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace Backup
}  // namespace Aws
