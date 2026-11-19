/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/DataSyncEndpointProvider.h>
#include <aws/datasync/internal/DataSyncEndpointRules.h>

namespace Aws {
#ifndef AWS_DATASYNC_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<DataSync::Endpoint::DataSyncClientConfiguration,
                                                   DataSync::Endpoint::DataSyncBuiltInParameters,
                                                   DataSync::Endpoint::DataSyncClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<DataSync::Endpoint::DataSyncClientConfiguration,
                                                  DataSync::Endpoint::DataSyncBuiltInParameters,
                                                  DataSync::Endpoint::DataSyncClientContextParameters>;
}  // namespace Endpoint
#endif

namespace DataSync {
namespace Endpoint {
DataSyncEndpointProvider::DataSyncEndpointProvider()
    : DataSyncDefaultEpProviderBase(Aws::DataSync::DataSyncEndpointRules::GetRulesBlob(),
                                    Aws::DataSync::DataSyncEndpointRules::RulesBlobSize) {}

void DataSyncBuiltInParameters::SetFromClientConfiguration(const DataSyncClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const DataSyncClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void DataSyncBuiltInParameters::SetFromClientConfiguration(const DataSyncClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const DataSyncClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void DataSyncBuiltInParameters::SetServiceSpecificParameters(const DataSyncClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace DataSync
}  // namespace Aws
