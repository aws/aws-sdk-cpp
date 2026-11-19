/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectparticipant/ConnectParticipantEndpointProvider.h>
#include <aws/connectparticipant/internal/ConnectParticipantEndpointRules.h>

namespace Aws {
#ifndef AWS_CONNECTPARTICIPANT_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<ConnectParticipant::Endpoint::ConnectParticipantClientConfiguration,
                                                   ConnectParticipant::Endpoint::ConnectParticipantBuiltInParameters,
                                                   ConnectParticipant::Endpoint::ConnectParticipantClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<ConnectParticipant::Endpoint::ConnectParticipantClientConfiguration,
                                                  ConnectParticipant::Endpoint::ConnectParticipantBuiltInParameters,
                                                  ConnectParticipant::Endpoint::ConnectParticipantClientContextParameters>;
}  // namespace Endpoint
#endif

namespace ConnectParticipant {
namespace Endpoint {
ConnectParticipantEndpointProvider::ConnectParticipantEndpointProvider()
    : ConnectParticipantDefaultEpProviderBase(Aws::ConnectParticipant::ConnectParticipantEndpointRules::GetRulesBlob(),
                                              Aws::ConnectParticipant::ConnectParticipantEndpointRules::RulesBlobSize) {}

void ConnectParticipantBuiltInParameters::SetFromClientConfiguration(const ConnectParticipantClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const ConnectParticipantClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void ConnectParticipantBuiltInParameters::SetFromClientConfiguration(const ConnectParticipantClientConfiguration& config,
                                                                     const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const ConnectParticipantClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void ConnectParticipantBuiltInParameters::SetServiceSpecificParameters(const ConnectParticipantClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace ConnectParticipant
}  // namespace Aws
