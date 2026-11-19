/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amp/PrometheusServiceClientConfiguration.h>
#include <aws/amp/PrometheusService_EXPORTS.h>
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws {
namespace PrometheusService {
namespace Endpoint {
using PrometheusServiceClientConfiguration = Aws::PrometheusService::PrometheusServiceClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using PrometheusServiceClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_PROMETHEUSSERVICE_API PrometheusServiceBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~PrometheusServiceBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const PrometheusServiceClientConfiguration& config);
  virtual void SetFromClientConfiguration(const PrometheusServiceClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const PrometheusServiceClientConfiguration& config);
};

/**
 * The type for the PrometheusService Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using PrometheusServiceEndpointProviderBase = EndpointProviderBase<PrometheusServiceClientConfiguration, PrometheusServiceBuiltInParameters,
                                                                   PrometheusServiceClientContextParameters>;

using PrometheusServiceDefaultEpProviderBase =
    BDDEndpointProvider<PrometheusServiceClientConfiguration, PrometheusServiceBuiltInParameters, PrometheusServiceClientContextParameters>;

}  // namespace Endpoint
}  // namespace PrometheusService

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_PROMETHEUSSERVICE_EXTERN template class AWS_PROMETHEUSSERVICE_API Aws::Endpoint::EndpointProviderBase<
    PrometheusService::Endpoint::PrometheusServiceClientConfiguration, PrometheusService::Endpoint::PrometheusServiceBuiltInParameters,
    PrometheusService::Endpoint::PrometheusServiceClientContextParameters>;

AWS_PROMETHEUSSERVICE_EXTERN template class AWS_PROMETHEUSSERVICE_API Aws::Endpoint::BDDEndpointProvider<
    PrometheusService::Endpoint::PrometheusServiceClientConfiguration, PrometheusService::Endpoint::PrometheusServiceBuiltInParameters,
    PrometheusService::Endpoint::PrometheusServiceClientContextParameters>;
}  // namespace Endpoint

namespace PrometheusService {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_PROMETHEUSSERVICE_API PrometheusServiceEndpointProvider : public PrometheusServiceDefaultEpProviderBase {
 public:
  using PrometheusServiceResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  PrometheusServiceEndpointProvider();

  ~PrometheusServiceEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace PrometheusService
}  // namespace Aws
