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
enum class UserSessionTrackingType { NOT_SET, ENABLED, DISABLED };

namespace UserSessionTrackingTypeMapper {
AWS_COGNITOIDENTITYPROVIDER_API UserSessionTrackingType GetUserSessionTrackingTypeForName(const Aws::String& name);

AWS_COGNITOIDENTITYPROVIDER_API Aws::String GetNameForUserSessionTrackingType(UserSessionTrackingType value);
}  // namespace UserSessionTrackingTypeMapper
}  // namespace Model
}  // namespace CognitoIdentityProvider
}  // namespace Aws
