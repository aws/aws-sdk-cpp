/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datasync/DataSyncClientConfiguration.h>
#include <aws/datasync/DataSync_EXPORTS.h>

namespace Aws {
namespace DataSync {
namespace Endpoint {
using DataSyncClientConfiguration = Aws::DataSync::DataSyncClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using DataSyncClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_DATASYNC_API DataSyncBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~DataSyncBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const DataSyncClientConfiguration& config);
  virtual void SetFromClientConfiguration(const DataSyncClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const DataSyncClientConfiguration& config);
};

/**
 * The type for the DataSync Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using DataSyncEndpointProviderBase =
    EndpointProviderBase<DataSyncClientConfiguration, DataSyncBuiltInParameters, DataSyncClientContextParameters>;

using DataSyncDefaultEpProviderBase =
    BDDEndpointProvider<DataSyncClientConfiguration, DataSyncBuiltInParameters, DataSyncClientContextParameters>;

}  // namespace Endpoint
}  // namespace DataSync

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_DATASYNC_EXTERN template class AWS_DATASYNC_API
    Aws::Endpoint::EndpointProviderBase<DataSync::Endpoint::DataSyncClientConfiguration, DataSync::Endpoint::DataSyncBuiltInParameters,
                                        DataSync::Endpoint::DataSyncClientContextParameters>;

AWS_DATASYNC_EXTERN template class AWS_DATASYNC_API
    Aws::Endpoint::BDDEndpointProvider<DataSync::Endpoint::DataSyncClientConfiguration, DataSync::Endpoint::DataSyncBuiltInParameters,
                                       DataSync::Endpoint::DataSyncClientContextParameters>;
}  // namespace Endpoint

namespace DataSync {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_DATASYNC_API DataSyncEndpointProvider : public DataSyncDefaultEpProviderBase {
 public:
  using DataSyncResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  DataSyncEndpointProvider();

  ~DataSyncEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace DataSync
}  // namespace Aws
