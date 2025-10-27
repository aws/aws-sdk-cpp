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
enum class IcebergNullOrder { NOT_SET, nulls_first, nulls_last };

namespace IcebergNullOrderMapper {
AWS_GLUE_API IcebergNullOrder GetIcebergNullOrderForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForIcebergNullOrder(IcebergNullOrder value);
}  // namespace IcebergNullOrderMapper
}  // namespace Model
}  // namespace Glue
}  // namespace Aws
