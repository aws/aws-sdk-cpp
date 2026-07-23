/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/CognitoIdentityProviderEndpointProvider.h>
#include <aws/cognito-idp/internal/CognitoIdentityProviderEndpointRules.h>

namespace Aws {
namespace CognitoIdentityProvider {
namespace Endpoint {
CognitoIdentityProviderEndpointProvider::CognitoIdentityProviderEndpointProvider()
    : CognitoIdentityProviderDefaultEpProviderBase(Aws::CognitoIdentityProvider::CognitoIdentityProviderEndpointRules::GetRulesBlob(),
                                                   Aws::CognitoIdentityProvider::CognitoIdentityProviderEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace CognitoIdentityProvider
}  // namespace Aws
