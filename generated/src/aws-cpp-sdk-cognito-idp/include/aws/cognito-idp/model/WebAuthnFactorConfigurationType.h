/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace CognitoIdentityProvider {
namespace Model {
enum class WebAuthnFactorConfigurationType { NOT_SET, SINGLE_FACTOR, MULTI_FACTOR_WITH_USER_VERIFICATION };

namespace WebAuthnFactorConfigurationTypeMapper {
AWS_COGNITOIDENTITYPROVIDER_API WebAuthnFactorConfigurationType GetWebAuthnFactorConfigurationTypeForName(const Aws::String& name);

AWS_COGNITOIDENTITYPROVIDER_API Aws::String GetNameForWebAuthnFactorConfigurationType(WebAuthnFactorConfigurationType value);
}  // namespace WebAuthnFactorConfigurationTypeMapper
}  // namespace Model
}  // namespace CognitoIdentityProvider
}  // namespace Aws
