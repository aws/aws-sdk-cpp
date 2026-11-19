/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/keyspaces/KeyspacesClientConfiguration.h>
#include <aws/keyspaces/Keyspaces_EXPORTS.h>

namespace Aws {
namespace Keyspaces {
namespace Endpoint {
using KeyspacesClientConfiguration = Aws::Keyspaces::KeyspacesClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using KeyspacesClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_KEYSPACES_API KeyspacesBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~KeyspacesBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const KeyspacesClientConfiguration& config);
  virtual void SetFromClientConfiguration(const KeyspacesClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const KeyspacesClientConfiguration& config);
};

/**
 * The type for the Keyspaces Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using KeyspacesEndpointProviderBase =
    EndpointProviderBase<KeyspacesClientConfiguration, KeyspacesBuiltInParameters, KeyspacesClientContextParameters>;

using KeyspacesDefaultEpProviderBase =
    BDDEndpointProvider<KeyspacesClientConfiguration, KeyspacesBuiltInParameters, KeyspacesClientContextParameters>;

}  // namespace Endpoint
}  // namespace Keyspaces

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_KEYSPACES_EXTERN template class AWS_KEYSPACES_API
    Aws::Endpoint::EndpointProviderBase<Keyspaces::Endpoint::KeyspacesClientConfiguration, Keyspaces::Endpoint::KeyspacesBuiltInParameters,
                                        Keyspaces::Endpoint::KeyspacesClientContextParameters>;

AWS_KEYSPACES_EXTERN template class AWS_KEYSPACES_API
    Aws::Endpoint::BDDEndpointProvider<Keyspaces::Endpoint::KeyspacesClientConfiguration, Keyspaces::Endpoint::KeyspacesBuiltInParameters,
                                       Keyspaces::Endpoint::KeyspacesClientContextParameters>;
}  // namespace Endpoint

namespace Keyspaces {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_KEYSPACES_API KeyspacesEndpointProvider : public KeyspacesDefaultEpProviderBase {
 public:
  using KeyspacesResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  KeyspacesEndpointProvider();

  ~KeyspacesEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace Keyspaces
}  // namespace Aws
