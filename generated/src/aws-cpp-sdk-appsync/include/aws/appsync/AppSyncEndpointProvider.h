/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appsync/AppSyncClientConfiguration.h>
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws {
namespace AppSync {
namespace Endpoint {
using AppSyncClientConfiguration = Aws::AppSync::AppSyncClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using AppSyncClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_APPSYNC_API AppSyncBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~AppSyncBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const AppSyncClientConfiguration& config);
  virtual void SetFromClientConfiguration(const AppSyncClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const AppSyncClientConfiguration& config);
};

/**
 * The type for the AppSync Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using AppSyncEndpointProviderBase =
    EndpointProviderBase<AppSyncClientConfiguration, AppSyncBuiltInParameters, AppSyncClientContextParameters>;

using AppSyncDefaultEpProviderBase =
    BDDEndpointProvider<AppSyncClientConfiguration, AppSyncBuiltInParameters, AppSyncClientContextParameters>;

}  // namespace Endpoint
}  // namespace AppSync

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_APPSYNC_EXTERN template class AWS_APPSYNC_API
    Aws::Endpoint::EndpointProviderBase<AppSync::Endpoint::AppSyncClientConfiguration, AppSync::Endpoint::AppSyncBuiltInParameters,
                                        AppSync::Endpoint::AppSyncClientContextParameters>;

AWS_APPSYNC_EXTERN template class AWS_APPSYNC_API
    Aws::Endpoint::BDDEndpointProvider<AppSync::Endpoint::AppSyncClientConfiguration, AppSync::Endpoint::AppSyncBuiltInParameters,
                                       AppSync::Endpoint::AppSyncClientContextParameters>;
}  // namespace Endpoint

namespace AppSync {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_APPSYNC_API AppSyncEndpointProvider : public AppSyncDefaultEpProviderBase {
 public:
  using AppSyncResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  AppSyncEndpointProvider();

  ~AppSyncEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace AppSync
}  // namespace Aws
