/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-meetings/ChimeSDKMeetingsClientConfiguration.h>
#include <aws/chime-sdk-meetings/ChimeSDKMeetings_EXPORTS.h>
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws {
namespace ChimeSDKMeetings {
namespace Endpoint {
using ChimeSDKMeetingsClientConfiguration = Aws::ChimeSDKMeetings::ChimeSDKMeetingsClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using ChimeSDKMeetingsClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_CHIMESDKMEETINGS_API ChimeSDKMeetingsBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~ChimeSDKMeetingsBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const ChimeSDKMeetingsClientConfiguration& config);
  virtual void SetFromClientConfiguration(const ChimeSDKMeetingsClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const ChimeSDKMeetingsClientConfiguration& config);
};

/**
 * The type for the ChimeSDKMeetings Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using ChimeSDKMeetingsEndpointProviderBase =
    EndpointProviderBase<ChimeSDKMeetingsClientConfiguration, ChimeSDKMeetingsBuiltInParameters, ChimeSDKMeetingsClientContextParameters>;

using ChimeSDKMeetingsDefaultEpProviderBase =
    BDDEndpointProvider<ChimeSDKMeetingsClientConfiguration, ChimeSDKMeetingsBuiltInParameters, ChimeSDKMeetingsClientContextParameters>;

}  // namespace Endpoint
}  // namespace ChimeSDKMeetings

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_CHIMESDKMEETINGS_EXTERN template class AWS_CHIMESDKMEETINGS_API Aws::Endpoint::EndpointProviderBase<
    ChimeSDKMeetings::Endpoint::ChimeSDKMeetingsClientConfiguration, ChimeSDKMeetings::Endpoint::ChimeSDKMeetingsBuiltInParameters,
    ChimeSDKMeetings::Endpoint::ChimeSDKMeetingsClientContextParameters>;

AWS_CHIMESDKMEETINGS_EXTERN template class AWS_CHIMESDKMEETINGS_API Aws::Endpoint::BDDEndpointProvider<
    ChimeSDKMeetings::Endpoint::ChimeSDKMeetingsClientConfiguration, ChimeSDKMeetings::Endpoint::ChimeSDKMeetingsBuiltInParameters,
    ChimeSDKMeetings::Endpoint::ChimeSDKMeetingsClientContextParameters>;
}  // namespace Endpoint

namespace ChimeSDKMeetings {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_CHIMESDKMEETINGS_API ChimeSDKMeetingsEndpointProvider : public ChimeSDKMeetingsDefaultEpProviderBase {
 public:
  using ChimeSDKMeetingsResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  ChimeSDKMeetingsEndpointProvider();

  ~ChimeSDKMeetingsEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace ChimeSDKMeetings
}  // namespace Aws
