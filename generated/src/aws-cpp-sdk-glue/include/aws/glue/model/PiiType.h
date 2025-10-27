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
enum class PiiType { NOT_SET, RowAudit, RowHashing, RowMasking, RowPartialMasking, ColumnAudit, ColumnHashing, ColumnMasking };

namespace PiiTypeMapper {
AWS_GLUE_API PiiType GetPiiTypeForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForPiiType(PiiType value);
}  // namespace PiiTypeMapper
}  // namespace Model
}  // namespace Glue
}  // namespace Aws
