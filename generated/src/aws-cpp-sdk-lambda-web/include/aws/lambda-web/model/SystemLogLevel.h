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
enum class SystemLogLevel { NOT_SET, DEBUG_, INFO, WARN };

namespace SystemLogLevelMapper {
AWS_LAMBDAWEB_API SystemLogLevel GetSystemLogLevelForName(const Aws::String& name);

AWS_LAMBDAWEB_API Aws::String GetNameForSystemLogLevel(SystemLogLevel value);
}  // namespace SystemLogLevelMapper
}  // namespace Model
}  // namespace LambdaWeb
}  // namespace Aws
