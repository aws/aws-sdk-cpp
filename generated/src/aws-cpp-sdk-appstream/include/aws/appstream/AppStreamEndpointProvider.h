/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStreamClientConfiguration.h>
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws {
namespace AppStream {
namespace Endpoint {
using AppStreamClientConfiguration = Aws::AppStream::AppStreamClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using AppStreamClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_APPSTREAM_API AppStreamBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~AppStreamBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const AppStreamClientConfiguration& config);
  virtual void SetFromClientConfiguration(const AppStreamClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const AppStreamClientConfiguration& config);
};

/**
 * The type for the AppStream Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using AppStreamEndpointProviderBase =
    EndpointProviderBase<AppStreamClientConfiguration, AppStreamBuiltInParameters, AppStreamClientContextParameters>;

using AppStreamDefaultEpProviderBase =
    BDDEndpointProvider<AppStreamClientConfiguration, AppStreamBuiltInParameters, AppStreamClientContextParameters>;

}  // namespace Endpoint
}  // namespace AppStream

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_APPSTREAM_EXTERN template class AWS_APPSTREAM_API
    Aws::Endpoint::EndpointProviderBase<AppStream::Endpoint::AppStreamClientConfiguration, AppStream::Endpoint::AppStreamBuiltInParameters,
                                        AppStream::Endpoint::AppStreamClientContextParameters>;

AWS_APPSTREAM_EXTERN template class AWS_APPSTREAM_API
    Aws::Endpoint::BDDEndpointProvider<AppStream::Endpoint::AppStreamClientConfiguration, AppStream::Endpoint::AppStreamBuiltInParameters,
                                       AppStream::Endpoint::AppStreamClientContextParameters>;
}  // namespace Endpoint

namespace AppStream {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_APPSTREAM_API AppStreamEndpointProvider : public AppStreamDefaultEpProviderBase {
 public:
  using AppStreamResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  AppStreamEndpointProvider();

  ~AppStreamEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace AppStream
}  // namespace Aws
