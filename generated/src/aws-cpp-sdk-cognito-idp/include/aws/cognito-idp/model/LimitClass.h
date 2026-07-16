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
enum class LimitClass { NOT_SET, API_CATEGORY };

namespace LimitClassMapper {
AWS_COGNITOIDENTITYPROVIDER_API LimitClass GetLimitClassForName(const Aws::String& name);

AWS_COGNITOIDENTITYPROVIDER_API Aws::String GetNameForLimitClass(LimitClass value);
}  // namespace LimitClassMapper
}  // namespace Model
}  // namespace CognitoIdentityProvider
}  // namespace Aws
