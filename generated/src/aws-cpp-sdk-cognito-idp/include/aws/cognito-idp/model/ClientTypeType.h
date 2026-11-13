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
enum class ClientTypeType { NOT_SET, REGULAR, DCR };

namespace ClientTypeTypeMapper {
AWS_COGNITOIDENTITYPROVIDER_API ClientTypeType GetClientTypeTypeForName(const Aws::String& name);

AWS_COGNITOIDENTITYPROVIDER_API Aws::String GetNameForClientTypeType(ClientTypeType value);
}  // namespace ClientTypeTypeMapper
}  // namespace Model
}  // namespace CognitoIdentityProvider
}  // namespace Aws
