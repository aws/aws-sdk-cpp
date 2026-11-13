/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectparticipant/ConnectParticipantClientConfiguration.h>
#include <aws/connectparticipant/ConnectParticipant_EXPORTS.h>
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws {
namespace ConnectParticipant {
namespace Endpoint {
using ConnectParticipantClientConfiguration = Aws::ConnectParticipant::ConnectParticipantClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using ConnectParticipantClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_CONNECTPARTICIPANT_API ConnectParticipantBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~ConnectParticipantBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const ConnectParticipantClientConfiguration& config);
  virtual void SetFromClientConfiguration(const ConnectParticipantClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const ConnectParticipantClientConfiguration& config);
};

/**
 * The type for the ConnectParticipant Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using ConnectParticipantEndpointProviderBase =
    EndpointProviderBase<ConnectParticipantClientConfiguration, ConnectParticipantBuiltInParameters,
                         ConnectParticipantClientContextParameters>;

using ConnectParticipantDefaultEpProviderBase =
    BDDEndpointProvider<ConnectParticipantClientConfiguration, ConnectParticipantBuiltInParameters,
                        ConnectParticipantClientContextParameters>;

}  // namespace Endpoint
}  // namespace ConnectParticipant

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_CONNECTPARTICIPANT_EXTERN template class AWS_CONNECTPARTICIPANT_API Aws::Endpoint::EndpointProviderBase<
    ConnectParticipant::Endpoint::ConnectParticipantClientConfiguration, ConnectParticipant::Endpoint::ConnectParticipantBuiltInParameters,
    ConnectParticipant::Endpoint::ConnectParticipantClientContextParameters>;

AWS_CONNECTPARTICIPANT_EXTERN template class AWS_CONNECTPARTICIPANT_API Aws::Endpoint::BDDEndpointProvider<
    ConnectParticipant::Endpoint::ConnectParticipantClientConfiguration, ConnectParticipant::Endpoint::ConnectParticipantBuiltInParameters,
    ConnectParticipant::Endpoint::ConnectParticipantClientContextParameters>;
}  // namespace Endpoint

namespace ConnectParticipant {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_CONNECTPARTICIPANT_API ConnectParticipantEndpointProvider : public ConnectParticipantDefaultEpProviderBase {
 public:
  using ConnectParticipantResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  ConnectParticipantEndpointProvider();

  ~ConnectParticipantEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace ConnectParticipant
}  // namespace Aws
