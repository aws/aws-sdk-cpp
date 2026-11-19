/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/identitystore/IdentityStoreClientConfiguration.h>
#include <aws/identitystore/IdentityStore_EXPORTS.h>

namespace Aws {
namespace IdentityStore {
namespace Endpoint {
using IdentityStoreClientConfiguration = Aws::IdentityStore::IdentityStoreClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using IdentityStoreClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_IDENTITYSTORE_API IdentityStoreBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~IdentityStoreBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const IdentityStoreClientConfiguration& config);
  virtual void SetFromClientConfiguration(const IdentityStoreClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const IdentityStoreClientConfiguration& config);
};

/**
 * The type for the IdentityStore Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using IdentityStoreEndpointProviderBase =
    EndpointProviderBase<IdentityStoreClientConfiguration, IdentityStoreBuiltInParameters, IdentityStoreClientContextParameters>;

using IdentityStoreDefaultEpProviderBase =
    BDDEndpointProvider<IdentityStoreClientConfiguration, IdentityStoreBuiltInParameters, IdentityStoreClientContextParameters>;

}  // namespace Endpoint
}  // namespace IdentityStore

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_IDENTITYSTORE_EXTERN template class AWS_IDENTITYSTORE_API Aws::Endpoint::EndpointProviderBase<
    IdentityStore::Endpoint::IdentityStoreClientConfiguration, IdentityStore::Endpoint::IdentityStoreBuiltInParameters,
    IdentityStore::Endpoint::IdentityStoreClientContextParameters>;

AWS_IDENTITYSTORE_EXTERN template class AWS_IDENTITYSTORE_API Aws::Endpoint::BDDEndpointProvider<
    IdentityStore::Endpoint::IdentityStoreClientConfiguration, IdentityStore::Endpoint::IdentityStoreBuiltInParameters,
    IdentityStore::Endpoint::IdentityStoreClientContextParameters>;
}  // namespace Endpoint

namespace IdentityStore {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_IDENTITYSTORE_API IdentityStoreEndpointProvider : public IdentityStoreDefaultEpProviderBase {
 public:
  using IdentityStoreResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  IdentityStoreEndpointProvider();

  ~IdentityStoreEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace IdentityStore
}  // namespace Aws
