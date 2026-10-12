/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda-web/LambdaWeb_EXPORTS.h>

namespace Aws {
namespace LambdaWeb {
namespace Model {
enum class AuthType { NOT_SET, ApplicationManaged, IamAuth };

namespace AuthTypeMapper {
AWS_LAMBDAWEB_API AuthType GetAuthTypeForName(const Aws::String& name);

AWS_LAMBDAWEB_API Aws::String GetNameForAuthType(AuthType value);
}  // namespace AuthTypeMapper
}  // namespace Model
}  // namespace LambdaWeb
}  // namespace Aws
