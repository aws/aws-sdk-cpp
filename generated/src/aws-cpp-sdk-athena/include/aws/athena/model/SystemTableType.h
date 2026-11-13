/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace Athena {
namespace Model {
enum class SystemTableType { NOT_SET, QUERY_EXECUTIONS };

namespace SystemTableTypeMapper {
AWS_ATHENA_API SystemTableType GetSystemTableTypeForName(const Aws::String& name);

AWS_ATHENA_API Aws::String GetNameForSystemTableType(SystemTableType value);
}  // namespace SystemTableTypeMapper
}  // namespace Model
}  // namespace Athena
}  // namespace Aws
