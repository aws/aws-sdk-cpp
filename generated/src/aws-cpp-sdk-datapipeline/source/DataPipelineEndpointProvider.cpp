/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datapipeline/DataPipelineEndpointProvider.h>
#include <aws/datapipeline/internal/DataPipelineEndpointRules.h>

namespace Aws {
namespace DataPipeline {
namespace Endpoint {
DataPipelineEndpointProvider::DataPipelineEndpointProvider()
    : DataPipelineDefaultEpProviderBase(Aws::DataPipeline::DataPipelineEndpointRules::GetRulesBlob(),
                                        Aws::DataPipeline::DataPipelineEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace DataPipeline
}  // namespace Aws
