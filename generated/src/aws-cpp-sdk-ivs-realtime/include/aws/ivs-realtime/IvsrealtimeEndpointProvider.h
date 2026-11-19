/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ivs-realtime/IvsrealtimeClientConfiguration.h>
#include <aws/ivs-realtime/Ivsrealtime_EXPORTS.h>

namespace Aws {
namespace ivsrealtime {
namespace Endpoint {
using IvsrealtimeClientConfiguration = Aws::ivsrealtime::IvsrealtimeClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using IvsrealtimeClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_IVSREALTIME_API IvsrealtimeBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~IvsrealtimeBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const IvsrealtimeClientConfiguration& config);
  virtual void SetFromClientConfiguration(const IvsrealtimeClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const IvsrealtimeClientConfiguration& config);
};

/**
 * The type for the ivsrealtime Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using IvsrealtimeEndpointProviderBase =
    EndpointProviderBase<IvsrealtimeClientConfiguration, IvsrealtimeBuiltInParameters, IvsrealtimeClientContextParameters>;

using IvsrealtimeDefaultEpProviderBase =
    BDDEndpointProvider<IvsrealtimeClientConfiguration, IvsrealtimeBuiltInParameters, IvsrealtimeClientContextParameters>;

}  // namespace Endpoint
}  // namespace ivsrealtime

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_IVSREALTIME_EXTERN template class AWS_IVSREALTIME_API Aws::Endpoint::EndpointProviderBase<
    ivsrealtime::Endpoint::IvsrealtimeClientConfiguration, ivsrealtime::Endpoint::IvsrealtimeBuiltInParameters,
    ivsrealtime::Endpoint::IvsrealtimeClientContextParameters>;

AWS_IVSREALTIME_EXTERN template class AWS_IVSREALTIME_API Aws::Endpoint::BDDEndpointProvider<
    ivsrealtime::Endpoint::IvsrealtimeClientConfiguration, ivsrealtime::Endpoint::IvsrealtimeBuiltInParameters,
    ivsrealtime::Endpoint::IvsrealtimeClientContextParameters>;
}  // namespace Endpoint

namespace ivsrealtime {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_IVSREALTIME_API IvsrealtimeEndpointProvider : public IvsrealtimeDefaultEpProviderBase {
 public:
  using IvsrealtimeResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  IvsrealtimeEndpointProvider();

  ~IvsrealtimeEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace ivsrealtime
}  // namespace Aws
