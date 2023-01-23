/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Glue
{
namespace Model
{
  enum class DataQualityRuleResultStatus
  {
    NOT_SET,
    PASS,
    FAIL,
    ERROR_
  };

namespace DataQualityRuleResultStatusMapper
{
AWS_GLUE_API DataQualityRuleResultStatus GetDataQualityRuleResultStatusForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForDataQualityRuleResultStatus(DataQualityRuleResultStatus value);
} // namespace DataQualityRuleResultStatusMapper
} // namespace Model
} // namespace Glue
} // namespace Aws
