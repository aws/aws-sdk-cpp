/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/abuse-signal/AbuseSignal_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws {
namespace AbuseSignal {
namespace Endpoint {
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using AbuseSignalClientContextParameters = Aws::Endpoint::ClientContextParameters;

using AbuseSignalClientConfiguration = Aws::Client::GenericClientConfiguration;
using AbuseSignalBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the AbuseSignal Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using AbuseSignalEndpointProviderBase =
    EndpointProviderBase<AbuseSignalClientConfiguration, AbuseSignalBuiltInParameters, AbuseSignalClientContextParameters>;

using AbuseSignalDefaultEpProviderBase =
    BDDEndpointProvider<AbuseSignalClientConfiguration, AbuseSignalBuiltInParameters, AbuseSignalClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_ABUSESIGNAL_API AbuseSignalEndpointProvider : public AbuseSignalDefaultEpProviderBase {
 public:
  using AbuseSignalResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  AbuseSignalEndpointProvider();

  ~AbuseSignalEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace AbuseSignal
}  // namespace Aws
