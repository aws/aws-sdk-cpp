/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoiceClientConfiguration.h>
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws {
namespace ChimeSDKVoice {
namespace Endpoint {
using ChimeSDKVoiceClientConfiguration = Aws::ChimeSDKVoice::ChimeSDKVoiceClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using ChimeSDKVoiceClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_CHIMESDKVOICE_API ChimeSDKVoiceBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~ChimeSDKVoiceBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const ChimeSDKVoiceClientConfiguration& config);
  virtual void SetFromClientConfiguration(const ChimeSDKVoiceClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const ChimeSDKVoiceClientConfiguration& config);
};

/**
 * The type for the ChimeSDKVoice Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using ChimeSDKVoiceEndpointProviderBase =
    EndpointProviderBase<ChimeSDKVoiceClientConfiguration, ChimeSDKVoiceBuiltInParameters, ChimeSDKVoiceClientContextParameters>;

using ChimeSDKVoiceDefaultEpProviderBase =
    BDDEndpointProvider<ChimeSDKVoiceClientConfiguration, ChimeSDKVoiceBuiltInParameters, ChimeSDKVoiceClientContextParameters>;

}  // namespace Endpoint
}  // namespace ChimeSDKVoice

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_CHIMESDKVOICE_EXTERN template class AWS_CHIMESDKVOICE_API Aws::Endpoint::EndpointProviderBase<
    ChimeSDKVoice::Endpoint::ChimeSDKVoiceClientConfiguration, ChimeSDKVoice::Endpoint::ChimeSDKVoiceBuiltInParameters,
    ChimeSDKVoice::Endpoint::ChimeSDKVoiceClientContextParameters>;

AWS_CHIMESDKVOICE_EXTERN template class AWS_CHIMESDKVOICE_API Aws::Endpoint::BDDEndpointProvider<
    ChimeSDKVoice::Endpoint::ChimeSDKVoiceClientConfiguration, ChimeSDKVoice::Endpoint::ChimeSDKVoiceBuiltInParameters,
    ChimeSDKVoice::Endpoint::ChimeSDKVoiceClientContextParameters>;
}  // namespace Endpoint

namespace ChimeSDKVoice {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_CHIMESDKVOICE_API ChimeSDKVoiceEndpointProvider : public ChimeSDKVoiceDefaultEpProviderBase {
 public:
  using ChimeSDKVoiceResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  ChimeSDKVoiceEndpointProvider();

  ~ChimeSDKVoiceEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace ChimeSDKVoice
}  // namespace Aws
