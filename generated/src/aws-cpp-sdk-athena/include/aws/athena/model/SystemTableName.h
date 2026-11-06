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
enum class SystemTableName { NOT_SET, ALL };

namespace SystemTableNameMapper {
AWS_ATHENA_API SystemTableName GetSystemTableNameForName(const Aws::String& name);

AWS_ATHENA_API Aws::String GetNameForSystemTableName(SystemTableName value);
}  // namespace SystemTableNameMapper
}  // namespace Model
}  // namespace Athena
}  // namespace Aws
