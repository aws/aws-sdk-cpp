/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-sync/CognitoSyncEndpointProvider.h>
#include <aws/cognito-sync/internal/CognitoSyncEndpointRules.h>

namespace Aws {
namespace CognitoSync {
namespace Endpoint {
CognitoSyncEndpointProvider::CognitoSyncEndpointProvider()
    : CognitoSyncDefaultEpProviderBase(Aws::CognitoSync::CognitoSyncEndpointRules::GetRulesBlob(),
                                       Aws::CognitoSync::CognitoSyncEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace CognitoSync
}  // namespace Aws
