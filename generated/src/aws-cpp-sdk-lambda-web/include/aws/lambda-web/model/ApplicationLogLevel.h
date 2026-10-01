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
enum class ApplicationLogLevel { NOT_SET, TRACE, DEBUG_, INFO, WARN, ERROR_, FATAL };

namespace ApplicationLogLevelMapper {
AWS_LAMBDAWEB_API ApplicationLogLevel GetApplicationLogLevelForName(const Aws::String& name);

AWS_LAMBDAWEB_API Aws::String GetNameForApplicationLogLevel(ApplicationLogLevel value);
}  // namespace ApplicationLogLevelMapper
}  // namespace Model
}  // namespace LambdaWeb
}  // namespace Aws
