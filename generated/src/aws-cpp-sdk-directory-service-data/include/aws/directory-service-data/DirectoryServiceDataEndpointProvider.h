/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/directory-service-data/DirectoryServiceDataClientConfiguration.h>
#include <aws/directory-service-data/DirectoryServiceData_EXPORTS.h>

namespace Aws {
namespace DirectoryServiceData {
namespace Endpoint {
using DirectoryServiceDataClientConfiguration = Aws::DirectoryServiceData::DirectoryServiceDataClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using DirectoryServiceDataClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_DIRECTORYSERVICEDATA_API DirectoryServiceDataBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~DirectoryServiceDataBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const DirectoryServiceDataClientConfiguration& config);
  virtual void SetFromClientConfiguration(const DirectoryServiceDataClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const DirectoryServiceDataClientConfiguration& config);
};

/**
 * The type for the DirectoryServiceData Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using DirectoryServiceDataEndpointProviderBase =
    EndpointProviderBase<DirectoryServiceDataClientConfiguration, DirectoryServiceDataBuiltInParameters,
                         DirectoryServiceDataClientContextParameters>;

using DirectoryServiceDataDefaultEpProviderBase =
    BDDEndpointProvider<DirectoryServiceDataClientConfiguration, DirectoryServiceDataBuiltInParameters,
                        DirectoryServiceDataClientContextParameters>;

}  // namespace Endpoint
}  // namespace DirectoryServiceData

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_DIRECTORYSERVICEDATA_EXTERN template class AWS_DIRECTORYSERVICEDATA_API
    Aws::Endpoint::EndpointProviderBase<DirectoryServiceData::Endpoint::DirectoryServiceDataClientConfiguration,
                                        DirectoryServiceData::Endpoint::DirectoryServiceDataBuiltInParameters,
                                        DirectoryServiceData::Endpoint::DirectoryServiceDataClientContextParameters>;

AWS_DIRECTORYSERVICEDATA_EXTERN template class AWS_DIRECTORYSERVICEDATA_API
    Aws::Endpoint::BDDEndpointProvider<DirectoryServiceData::Endpoint::DirectoryServiceDataClientConfiguration,
                                       DirectoryServiceData::Endpoint::DirectoryServiceDataBuiltInParameters,
                                       DirectoryServiceData::Endpoint::DirectoryServiceDataClientContextParameters>;
}  // namespace Endpoint

namespace DirectoryServiceData {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_DIRECTORYSERVICEDATA_API DirectoryServiceDataEndpointProvider : public DirectoryServiceDataDefaultEpProviderBase {
 public:
  using DirectoryServiceDataResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  DirectoryServiceDataEndpointProvider();

  ~DirectoryServiceDataEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace DirectoryServiceData
}  // namespace Aws
