/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectparticipant/ConnectParticipantEndpointProvider.h>
#include <aws/connectparticipant/internal/ConnectParticipantEndpointRules.h>

namespace Aws {
namespace ConnectParticipant {
namespace Endpoint {
ConnectParticipantEndpointProvider::ConnectParticipantEndpointProvider()
    : ConnectParticipantDefaultEpProviderBase(Aws::ConnectParticipant::ConnectParticipantEndpointRules::GetRulesBlob(),
                                              Aws::ConnectParticipant::ConnectParticipantEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace ConnectParticipant
}  // namespace Aws
