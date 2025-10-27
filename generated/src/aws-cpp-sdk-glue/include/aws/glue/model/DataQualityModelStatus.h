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
enum class DataQualityModelStatus { NOT_SET, RUNNING, SUCCEEDED, FAILED };

namespace DataQualityModelStatusMapper {
AWS_GLUE_API DataQualityModelStatus GetDataQualityModelStatusForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForDataQualityModelStatus(DataQualityModelStatus value);
}  // namespace DataQualityModelStatusMapper
}  // namespace Model
}  // namespace Glue
}  // namespace Aws
