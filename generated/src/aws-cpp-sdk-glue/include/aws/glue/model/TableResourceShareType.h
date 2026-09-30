/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/Glue_EXPORTS.h>

namespace Aws {
namespace Glue {
namespace Model {
enum class TableResourceShareType { NOT_SET, FEDERATED, ALL };

namespace TableResourceShareTypeMapper {
AWS_GLUE_API TableResourceShareType GetTableResourceShareTypeForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForTableResourceShareType(TableResourceShareType value);
}  // namespace TableResourceShareTypeMapper
}  // namespace Model
}  // namespace Glue
}  // namespace Aws
