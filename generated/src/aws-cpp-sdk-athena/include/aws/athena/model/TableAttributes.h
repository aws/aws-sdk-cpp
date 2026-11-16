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
enum class TableAttributes { NOT_SET, NAME, TABLE_TYPE };

namespace TableAttributesMapper {
AWS_ATHENA_API TableAttributes GetTableAttributesForName(const Aws::String& name);

AWS_ATHENA_API Aws::String GetNameForTableAttributes(TableAttributes value);
}  // namespace TableAttributesMapper
}  // namespace Model
}  // namespace Athena
}  // namespace Aws
