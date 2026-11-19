/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-sync/CognitoSyncClientConfiguration.h>
#include <aws/cognito-sync/CognitoSync_EXPORTS.h>
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws {
namespace CognitoSync {
namespace Endpoint {
using CognitoSyncClientConfiguration = Aws::CognitoSync::CognitoSyncClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using CognitoSyncClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_COGNITOSYNC_API CognitoSyncBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~CognitoSyncBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const CognitoSyncClientConfiguration& config);
  virtual void SetFromClientConfiguration(const CognitoSyncClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const CognitoSyncClientConfiguration& config);
};

/**
 * The type for the CognitoSync Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using CognitoSyncEndpointProviderBase =
    EndpointProviderBase<CognitoSyncClientConfiguration, CognitoSyncBuiltInParameters, CognitoSyncClientContextParameters>;

using CognitoSyncDefaultEpProviderBase =
    BDDEndpointProvider<CognitoSyncClientConfiguration, CognitoSyncBuiltInParameters, CognitoSyncClientContextParameters>;

}  // namespace Endpoint
}  // namespace CognitoSync

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_COGNITOSYNC_EXTERN template class AWS_COGNITOSYNC_API Aws::Endpoint::EndpointProviderBase<
    CognitoSync::Endpoint::CognitoSyncClientConfiguration, CognitoSync::Endpoint::CognitoSyncBuiltInParameters,
    CognitoSync::Endpoint::CognitoSyncClientContextParameters>;

AWS_COGNITOSYNC_EXTERN template class AWS_COGNITOSYNC_API Aws::Endpoint::BDDEndpointProvider<
    CognitoSync::Endpoint::CognitoSyncClientConfiguration, CognitoSync::Endpoint::CognitoSyncBuiltInParameters,
    CognitoSync::Endpoint::CognitoSyncClientContextParameters>;
}  // namespace Endpoint

namespace CognitoSync {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_COGNITOSYNC_API CognitoSyncEndpointProvider : public CognitoSyncDefaultEpProviderBase {
 public:
  using CognitoSyncResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  CognitoSyncEndpointProvider();

  ~CognitoSyncEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace CognitoSync
}  // namespace Aws
