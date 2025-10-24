﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/Glue_EXPORTS.h>

namespace Aws {
namespace Glue {
namespace Model {
enum class TableOptimizerType { NOT_SET, compaction, retention, orphan_file_deletion };

namespace TableOptimizerTypeMapper {
AWS_GLUE_API TableOptimizerType GetTableOptimizerTypeForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForTableOptimizerType(TableOptimizerType value);
}  // namespace TableOptimizerTypeMapper
}  // namespace Model
}  // namespace Glue
}  // namespace Aws
