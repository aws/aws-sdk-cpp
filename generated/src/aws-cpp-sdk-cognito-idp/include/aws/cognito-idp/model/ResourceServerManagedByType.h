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
enum class ResourceServerManagedByType { NOT_SET, COGNITO };

namespace ResourceServerManagedByTypeMapper {
AWS_COGNITOIDENTITYPROVIDER_API ResourceServerManagedByType GetResourceServerManagedByTypeForName(const Aws::String& name);

AWS_COGNITOIDENTITYPROVIDER_API Aws::String GetNameForResourceServerManagedByType(ResourceServerManagedByType value);
}  // namespace ResourceServerManagedByTypeMapper
}  // namespace Model
}  // namespace CognitoIdentityProvider
}  // namespace Aws
