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
  enum class FieldName
  {
    NOT_SET,
    CRAWL_ID,
    STATE,
    START_TIME,
    END_TIME,
    DPU_HOUR
  };

namespace FieldNameMapper
{
AWS_GLUE_API FieldName GetFieldNameForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForFieldName(FieldName value);
} // namespace FieldNameMapper
} // namespace Model
} // namespace Glue
} // namespace Aws
