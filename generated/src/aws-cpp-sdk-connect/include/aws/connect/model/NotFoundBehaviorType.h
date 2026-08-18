/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace Connect {
namespace Model {
enum class NotFoundBehaviorType { NOT_SET, USE_DEFAULT_VALUE, OMIT };

namespace NotFoundBehaviorTypeMapper {
AWS_CONNECT_API NotFoundBehaviorType GetNotFoundBehaviorTypeForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForNotFoundBehaviorType(NotFoundBehaviorType value);
}  // namespace NotFoundBehaviorTypeMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
