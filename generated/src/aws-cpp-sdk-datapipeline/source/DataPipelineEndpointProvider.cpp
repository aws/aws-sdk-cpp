/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datapipeline/DataPipelineEndpointProvider.h>
#include <aws/datapipeline/internal/DataPipelineEndpointRules.h>

namespace Aws {
#ifndef AWS_DATAPIPELINE_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<DataPipeline::Endpoint::DataPipelineClientConfiguration,
                                                   DataPipeline::Endpoint::DataPipelineBuiltInParameters,
                                                   DataPipeline::Endpoint::DataPipelineClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<DataPipeline::Endpoint::DataPipelineClientConfiguration,
                                                  DataPipeline::Endpoint::DataPipelineBuiltInParameters,
                                                  DataPipeline::Endpoint::DataPipelineClientContextParameters>;
}  // namespace Endpoint
#endif

namespace DataPipeline {
namespace Endpoint {
DataPipelineEndpointProvider::DataPipelineEndpointProvider()
    : DataPipelineDefaultEpProviderBase(Aws::DataPipeline::DataPipelineEndpointRules::GetRulesBlob(),
                                        Aws::DataPipeline::DataPipelineEndpointRules::RulesBlobSize) {}

void DataPipelineBuiltInParameters::SetFromClientConfiguration(const DataPipelineClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const DataPipelineClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void DataPipelineBuiltInParameters::SetFromClientConfiguration(const DataPipelineClientConfiguration& config,
                                                               const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const DataPipelineClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void DataPipelineBuiltInParameters::SetServiceSpecificParameters(const DataPipelineClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace DataPipeline
}  // namespace Aws
