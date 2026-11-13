/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datapipeline/DataPipelineClientConfiguration.h>
#include <aws/datapipeline/DataPipeline_EXPORTS.h>

namespace Aws {
namespace DataPipeline {
namespace Endpoint {
using DataPipelineClientConfiguration = Aws::DataPipeline::DataPipelineClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using DataPipelineClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_DATAPIPELINE_API DataPipelineBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~DataPipelineBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const DataPipelineClientConfiguration& config);
  virtual void SetFromClientConfiguration(const DataPipelineClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const DataPipelineClientConfiguration& config);
};

/**
 * The type for the DataPipeline Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using DataPipelineEndpointProviderBase =
    EndpointProviderBase<DataPipelineClientConfiguration, DataPipelineBuiltInParameters, DataPipelineClientContextParameters>;

using DataPipelineDefaultEpProviderBase =
    BDDEndpointProvider<DataPipelineClientConfiguration, DataPipelineBuiltInParameters, DataPipelineClientContextParameters>;

}  // namespace Endpoint
}  // namespace DataPipeline

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_DATAPIPELINE_EXTERN template class AWS_DATAPIPELINE_API Aws::Endpoint::EndpointProviderBase<
    DataPipeline::Endpoint::DataPipelineClientConfiguration, DataPipeline::Endpoint::DataPipelineBuiltInParameters,
    DataPipeline::Endpoint::DataPipelineClientContextParameters>;

AWS_DATAPIPELINE_EXTERN template class AWS_DATAPIPELINE_API Aws::Endpoint::BDDEndpointProvider<
    DataPipeline::Endpoint::DataPipelineClientConfiguration, DataPipeline::Endpoint::DataPipelineBuiltInParameters,
    DataPipeline::Endpoint::DataPipelineClientContextParameters>;
}  // namespace Endpoint

namespace DataPipeline {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_DATAPIPELINE_API DataPipelineEndpointProvider : public DataPipelineDefaultEpProviderBase {
 public:
  using DataPipelineResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  DataPipelineEndpointProvider();

  ~DataPipelineEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace DataPipeline
}  // namespace Aws
