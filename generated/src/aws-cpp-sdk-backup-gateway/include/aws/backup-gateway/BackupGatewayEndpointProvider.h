/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup-gateway/BackupGatewayClientConfiguration.h>
#include <aws/backup-gateway/BackupGateway_EXPORTS.h>
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws {
namespace BackupGateway {
namespace Endpoint {
using BackupGatewayClientConfiguration = Aws::BackupGateway::BackupGatewayClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using BackupGatewayClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_BACKUPGATEWAY_API BackupGatewayBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~BackupGatewayBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const BackupGatewayClientConfiguration& config);
  virtual void SetFromClientConfiguration(const BackupGatewayClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const BackupGatewayClientConfiguration& config);
};

/**
 * The type for the BackupGateway Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using BackupGatewayEndpointProviderBase =
    EndpointProviderBase<BackupGatewayClientConfiguration, BackupGatewayBuiltInParameters, BackupGatewayClientContextParameters>;

using BackupGatewayDefaultEpProviderBase =
    BDDEndpointProvider<BackupGatewayClientConfiguration, BackupGatewayBuiltInParameters, BackupGatewayClientContextParameters>;

}  // namespace Endpoint
}  // namespace BackupGateway

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_BACKUPGATEWAY_EXTERN template class AWS_BACKUPGATEWAY_API Aws::Endpoint::EndpointProviderBase<
    BackupGateway::Endpoint::BackupGatewayClientConfiguration, BackupGateway::Endpoint::BackupGatewayBuiltInParameters,
    BackupGateway::Endpoint::BackupGatewayClientContextParameters>;

AWS_BACKUPGATEWAY_EXTERN template class AWS_BACKUPGATEWAY_API Aws::Endpoint::BDDEndpointProvider<
    BackupGateway::Endpoint::BackupGatewayClientConfiguration, BackupGateway::Endpoint::BackupGatewayBuiltInParameters,
    BackupGateway::Endpoint::BackupGatewayClientContextParameters>;
}  // namespace Endpoint

namespace BackupGateway {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_BACKUPGATEWAY_API BackupGatewayEndpointProvider : public BackupGatewayDefaultEpProviderBase {
 public:
  using BackupGatewayResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  BackupGatewayEndpointProvider();

  ~BackupGatewayEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace BackupGateway
}  // namespace Aws
