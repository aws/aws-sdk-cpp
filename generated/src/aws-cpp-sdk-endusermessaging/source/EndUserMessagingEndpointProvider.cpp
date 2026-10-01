/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/endusermessaging/EndUserMessagingEndpointProvider.h>
#include <aws/endusermessaging/internal/EndUserMessagingEndpointRules.h>

namespace Aws {
namespace EndUserMessaging {
namespace Endpoint {
EndUserMessagingEndpointProvider::EndUserMessagingEndpointProvider()
    : EndUserMessagingDefaultEpProviderBase(Aws::EndUserMessaging::EndUserMessagingEndpointRules::GetRulesBlob(),
                                            Aws::EndUserMessaging::EndUserMessagingEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace EndUserMessaging
}  // namespace Aws
