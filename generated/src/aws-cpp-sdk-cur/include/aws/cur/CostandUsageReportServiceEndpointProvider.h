/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cur/CostandUsageReportServiceClientConfiguration.h>
#include <aws/cur/CostandUsageReportService_EXPORTS.h>

namespace Aws {
namespace CostandUsageReportService {
namespace Endpoint {
using CostandUsageReportServiceClientConfiguration = Aws::CostandUsageReportService::CostandUsageReportServiceClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using CostandUsageReportServiceClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_COSTANDUSAGEREPORTSERVICE_API CostandUsageReportServiceBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~CostandUsageReportServiceBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const CostandUsageReportServiceClientConfiguration& config);
  virtual void SetFromClientConfiguration(const CostandUsageReportServiceClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const CostandUsageReportServiceClientConfiguration& config);
};

/**
 * The type for the CostandUsageReportService Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using CostandUsageReportServiceEndpointProviderBase =
    EndpointProviderBase<CostandUsageReportServiceClientConfiguration, CostandUsageReportServiceBuiltInParameters,
                         CostandUsageReportServiceClientContextParameters>;

using CostandUsageReportServiceDefaultEpProviderBase =
    BDDEndpointProvider<CostandUsageReportServiceClientConfiguration, CostandUsageReportServiceBuiltInParameters,
                        CostandUsageReportServiceClientContextParameters>;

}  // namespace Endpoint
}  // namespace CostandUsageReportService

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_COSTANDUSAGEREPORTSERVICE_EXTERN template class AWS_COSTANDUSAGEREPORTSERVICE_API
    Aws::Endpoint::EndpointProviderBase<CostandUsageReportService::Endpoint::CostandUsageReportServiceClientConfiguration,
                                        CostandUsageReportService::Endpoint::CostandUsageReportServiceBuiltInParameters,
                                        CostandUsageReportService::Endpoint::CostandUsageReportServiceClientContextParameters>;

AWS_COSTANDUSAGEREPORTSERVICE_EXTERN template class AWS_COSTANDUSAGEREPORTSERVICE_API
    Aws::Endpoint::BDDEndpointProvider<CostandUsageReportService::Endpoint::CostandUsageReportServiceClientConfiguration,
                                       CostandUsageReportService::Endpoint::CostandUsageReportServiceBuiltInParameters,
                                       CostandUsageReportService::Endpoint::CostandUsageReportServiceClientContextParameters>;
}  // namespace Endpoint

namespace CostandUsageReportService {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_COSTANDUSAGEREPORTSERVICE_API CostandUsageReportServiceEndpointProvider : public CostandUsageReportServiceDefaultEpProviderBase {
 public:
  using CostandUsageReportServiceResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  CostandUsageReportServiceEndpointProvider();

  ~CostandUsageReportServiceEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace CostandUsageReportService
}  // namespace Aws
