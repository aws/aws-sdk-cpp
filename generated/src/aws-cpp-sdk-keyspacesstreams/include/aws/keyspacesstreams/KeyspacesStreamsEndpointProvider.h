/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/keyspacesstreams/KeyspacesStreamsClientConfiguration.h>
#include <aws/keyspacesstreams/KeyspacesStreams_EXPORTS.h>

namespace Aws {
namespace KeyspacesStreams {
namespace Endpoint {
using KeyspacesStreamsClientConfiguration = Aws::KeyspacesStreams::KeyspacesStreamsClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using KeyspacesStreamsClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_KEYSPACESSTREAMS_API KeyspacesStreamsBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~KeyspacesStreamsBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const KeyspacesStreamsClientConfiguration& config);
  virtual void SetFromClientConfiguration(const KeyspacesStreamsClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const KeyspacesStreamsClientConfiguration& config);
};

/**
 * The type for the KeyspacesStreams Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using KeyspacesStreamsEndpointProviderBase =
    EndpointProviderBase<KeyspacesStreamsClientConfiguration, KeyspacesStreamsBuiltInParameters, KeyspacesStreamsClientContextParameters>;

using KeyspacesStreamsDefaultEpProviderBase =
    BDDEndpointProvider<KeyspacesStreamsClientConfiguration, KeyspacesStreamsBuiltInParameters, KeyspacesStreamsClientContextParameters>;

}  // namespace Endpoint
}  // namespace KeyspacesStreams

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_KEYSPACESSTREAMS_EXTERN template class AWS_KEYSPACESSTREAMS_API Aws::Endpoint::EndpointProviderBase<
    KeyspacesStreams::Endpoint::KeyspacesStreamsClientConfiguration, KeyspacesStreams::Endpoint::KeyspacesStreamsBuiltInParameters,
    KeyspacesStreams::Endpoint::KeyspacesStreamsClientContextParameters>;

AWS_KEYSPACESSTREAMS_EXTERN template class AWS_KEYSPACESSTREAMS_API Aws::Endpoint::BDDEndpointProvider<
    KeyspacesStreams::Endpoint::KeyspacesStreamsClientConfiguration, KeyspacesStreams::Endpoint::KeyspacesStreamsBuiltInParameters,
    KeyspacesStreams::Endpoint::KeyspacesStreamsClientContextParameters>;
}  // namespace Endpoint

namespace KeyspacesStreams {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_KEYSPACESSTREAMS_API KeyspacesStreamsEndpointProvider : public KeyspacesStreamsDefaultEpProviderBase {
 public:
  using KeyspacesStreamsResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  KeyspacesStreamsEndpointProvider();

  ~KeyspacesStreamsEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace KeyspacesStreams
}  // namespace Aws
