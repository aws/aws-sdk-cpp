/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticfilesystem/EFSClientConfiguration.h>
#include <aws/elasticfilesystem/EFS_EXPORTS.h>

namespace Aws {
namespace EFS {
namespace Endpoint {
using EFSClientConfiguration = Aws::EFS::EFSClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using EFSClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_EFS_API EFSBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~EFSBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const EFSClientConfiguration& config);
  virtual void SetFromClientConfiguration(const EFSClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const EFSClientConfiguration& config);
};

/**
 * The type for the EFS Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using EFSEndpointProviderBase = EndpointProviderBase<EFSClientConfiguration, EFSBuiltInParameters, EFSClientContextParameters>;

using EFSDefaultEpProviderBase = BDDEndpointProvider<EFSClientConfiguration, EFSBuiltInParameters, EFSClientContextParameters>;

}  // namespace Endpoint
}  // namespace EFS

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_EFS_EXTERN template class AWS_EFS_API Aws::Endpoint::EndpointProviderBase<
    EFS::Endpoint::EFSClientConfiguration, EFS::Endpoint::EFSBuiltInParameters, EFS::Endpoint::EFSClientContextParameters>;

AWS_EFS_EXTERN template class AWS_EFS_API Aws::Endpoint::BDDEndpointProvider<
    EFS::Endpoint::EFSClientConfiguration, EFS::Endpoint::EFSBuiltInParameters, EFS::Endpoint::EFSClientContextParameters>;
}  // namespace Endpoint

namespace EFS {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_EFS_API EFSEndpointProvider : public EFSDefaultEpProviderBase {
 public:
  using EFSResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  EFSEndpointProvider();

  ~EFSEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace EFS
}  // namespace Aws
