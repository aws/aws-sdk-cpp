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
enum class OperationalStatus { NOT_SET, OPEN, CLOSED };

namespace OperationalStatusMapper {
AWS_CONNECT_API OperationalStatus GetOperationalStatusForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForOperationalStatus(OperationalStatus value);
}  // namespace OperationalStatusMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
