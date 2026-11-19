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
enum class CIMDCacheActionType { NOT_SET, REFRESH, INVALIDATE };

namespace CIMDCacheActionTypeMapper {
AWS_COGNITOIDENTITYPROVIDER_API CIMDCacheActionType GetCIMDCacheActionTypeForName(const Aws::String& name);

AWS_COGNITOIDENTITYPROVIDER_API Aws::String GetNameForCIMDCacheActionType(CIMDCacheActionType value);
}  // namespace CIMDCacheActionTypeMapper
}  // namespace Model
}  // namespace CognitoIdentityProvider
}  // namespace Aws
