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
enum class ResultTypeEnum { NOT_SET, ALL, PASSED_ONLY, FAILED_ONLY };

namespace ResultTypeEnumMapper {
AWS_GLUE_API ResultTypeEnum GetResultTypeEnumForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForResultTypeEnum(ResultTypeEnum value);
}  // namespace ResultTypeEnumMapper
}  // namespace Model
}  // namespace Glue
}  // namespace Aws
