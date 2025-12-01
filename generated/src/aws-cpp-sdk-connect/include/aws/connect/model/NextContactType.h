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
enum class NextContactType { NOT_SET, QUICK_CONNECT };

namespace NextContactTypeMapper {
AWS_CONNECT_API NextContactType GetNextContactTypeForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForNextContactType(NextContactType value);
}  // namespace NextContactTypeMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
