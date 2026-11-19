/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/es/ElasticsearchServiceClientConfiguration.h>
#include <aws/es/ElasticsearchService_EXPORTS.h>

namespace Aws {
namespace ElasticsearchService {
namespace Endpoint {
using ElasticsearchServiceClientConfiguration = Aws::ElasticsearchService::ElasticsearchServiceClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using ElasticsearchServiceClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_ELASTICSEARCHSERVICE_API ElasticsearchServiceBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~ElasticsearchServiceBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const ElasticsearchServiceClientConfiguration& config);
  virtual void SetFromClientConfiguration(const ElasticsearchServiceClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const ElasticsearchServiceClientConfiguration& config);
};

/**
 * The type for the ElasticsearchService Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using ElasticsearchServiceEndpointProviderBase =
    EndpointProviderBase<ElasticsearchServiceClientConfiguration, ElasticsearchServiceBuiltInParameters,
                         ElasticsearchServiceClientContextParameters>;

using ElasticsearchServiceDefaultEpProviderBase =
    BDDEndpointProvider<ElasticsearchServiceClientConfiguration, ElasticsearchServiceBuiltInParameters,
                        ElasticsearchServiceClientContextParameters>;

}  // namespace Endpoint
}  // namespace ElasticsearchService

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_ELASTICSEARCHSERVICE_EXTERN template class AWS_ELASTICSEARCHSERVICE_API
    Aws::Endpoint::EndpointProviderBase<ElasticsearchService::Endpoint::ElasticsearchServiceClientConfiguration,
                                        ElasticsearchService::Endpoint::ElasticsearchServiceBuiltInParameters,
                                        ElasticsearchService::Endpoint::ElasticsearchServiceClientContextParameters>;

AWS_ELASTICSEARCHSERVICE_EXTERN template class AWS_ELASTICSEARCHSERVICE_API
    Aws::Endpoint::BDDEndpointProvider<ElasticsearchService::Endpoint::ElasticsearchServiceClientConfiguration,
                                       ElasticsearchService::Endpoint::ElasticsearchServiceBuiltInParameters,
                                       ElasticsearchService::Endpoint::ElasticsearchServiceClientContextParameters>;
}  // namespace Endpoint

namespace ElasticsearchService {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_ELASTICSEARCHSERVICE_API ElasticsearchServiceEndpointProvider : public ElasticsearchServiceDefaultEpProviderBase {
 public:
  using ElasticsearchServiceResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  ElasticsearchServiceEndpointProvider();

  ~ElasticsearchServiceEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace ElasticsearchService
}  // namespace Aws
