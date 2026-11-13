/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appconfigdata/AppConfigDataClientConfiguration.h>
#include <aws/appconfigdata/AppConfigData_EXPORTS.h>
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws {
namespace AppConfigData {
namespace Endpoint {
using AppConfigDataClientConfiguration = Aws::AppConfigData::AppConfigDataClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using AppConfigDataClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_APPCONFIGDATA_API AppConfigDataBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~AppConfigDataBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const AppConfigDataClientConfiguration& config);
  virtual void SetFromClientConfiguration(const AppConfigDataClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const AppConfigDataClientConfiguration& config);
};

/**
 * The type for the AppConfigData Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using AppConfigDataEndpointProviderBase =
    EndpointProviderBase<AppConfigDataClientConfiguration, AppConfigDataBuiltInParameters, AppConfigDataClientContextParameters>;

using AppConfigDataDefaultEpProviderBase =
    BDDEndpointProvider<AppConfigDataClientConfiguration, AppConfigDataBuiltInParameters, AppConfigDataClientContextParameters>;

}  // namespace Endpoint
}  // namespace AppConfigData

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_APPCONFIGDATA_EXTERN template class AWS_APPCONFIGDATA_API Aws::Endpoint::EndpointProviderBase<
    AppConfigData::Endpoint::AppConfigDataClientConfiguration, AppConfigData::Endpoint::AppConfigDataBuiltInParameters,
    AppConfigData::Endpoint::AppConfigDataClientContextParameters>;

AWS_APPCONFIGDATA_EXTERN template class AWS_APPCONFIGDATA_API Aws::Endpoint::BDDEndpointProvider<
    AppConfigData::Endpoint::AppConfigDataClientConfiguration, AppConfigData::Endpoint::AppConfigDataBuiltInParameters,
    AppConfigData::Endpoint::AppConfigDataClientContextParameters>;
}  // namespace Endpoint

namespace AppConfigData {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_APPCONFIGDATA_API AppConfigDataEndpointProvider : public AppConfigDataDefaultEpProviderBase {
 public:
  using AppConfigDataResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  AppConfigDataEndpointProvider();

  ~AppConfigDataEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace AppConfigData
}  // namespace Aws
