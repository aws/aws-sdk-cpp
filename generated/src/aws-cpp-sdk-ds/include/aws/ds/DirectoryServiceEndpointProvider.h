/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ds/DirectoryServiceClientConfiguration.h>
#include <aws/ds/DirectoryService_EXPORTS.h>

namespace Aws {
namespace DirectoryService {
namespace Endpoint {
using DirectoryServiceClientConfiguration = Aws::DirectoryService::DirectoryServiceClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using DirectoryServiceClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_DIRECTORYSERVICE_API DirectoryServiceBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~DirectoryServiceBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const DirectoryServiceClientConfiguration& config);
  virtual void SetFromClientConfiguration(const DirectoryServiceClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const DirectoryServiceClientConfiguration& config);
};

/**
 * The type for the DirectoryService Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using DirectoryServiceEndpointProviderBase =
    EndpointProviderBase<DirectoryServiceClientConfiguration, DirectoryServiceBuiltInParameters, DirectoryServiceClientContextParameters>;

using DirectoryServiceDefaultEpProviderBase =
    BDDEndpointProvider<DirectoryServiceClientConfiguration, DirectoryServiceBuiltInParameters, DirectoryServiceClientContextParameters>;

}  // namespace Endpoint
}  // namespace DirectoryService

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_DIRECTORYSERVICE_EXTERN template class AWS_DIRECTORYSERVICE_API Aws::Endpoint::EndpointProviderBase<
    DirectoryService::Endpoint::DirectoryServiceClientConfiguration, DirectoryService::Endpoint::DirectoryServiceBuiltInParameters,
    DirectoryService::Endpoint::DirectoryServiceClientContextParameters>;

AWS_DIRECTORYSERVICE_EXTERN template class AWS_DIRECTORYSERVICE_API Aws::Endpoint::BDDEndpointProvider<
    DirectoryService::Endpoint::DirectoryServiceClientConfiguration, DirectoryService::Endpoint::DirectoryServiceBuiltInParameters,
    DirectoryService::Endpoint::DirectoryServiceClientContextParameters>;
}  // namespace Endpoint

namespace DirectoryService {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_DIRECTORYSERVICE_API DirectoryServiceEndpointProvider : public DirectoryServiceDefaultEpProviderBase {
 public:
  using DirectoryServiceResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  DirectoryServiceEndpointProvider();

  ~DirectoryServiceEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace DirectoryService
}  // namespace Aws
