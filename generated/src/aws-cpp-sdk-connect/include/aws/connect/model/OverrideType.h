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
enum class OverrideType { NOT_SET, STANDARD, OPEN, CLOSED };

namespace OverrideTypeMapper {
AWS_CONNECT_API OverrideType GetOverrideTypeForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForOverrideType(OverrideType value);
}  // namespace OverrideTypeMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
