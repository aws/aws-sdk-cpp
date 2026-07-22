/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-identity/CognitoIdentityEndpointProvider.h>
#include <aws/cognito-identity/internal/CognitoIdentityEndpointRules.h>

namespace Aws {
namespace CognitoIdentity {
namespace Endpoint {
CognitoIdentityEndpointProvider::CognitoIdentityEndpointProvider()
    : CognitoIdentityDefaultEpProviderBase(Aws::CognitoIdentity::CognitoIdentityEndpointRules::GetRulesBlob(),
                                           Aws::CognitoIdentity::CognitoIdentityEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace CognitoIdentity
}  // namespace Aws
