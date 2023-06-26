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
  enum class PiiType
  {
    NOT_SET,
    RowAudit,
    RowMasking,
    ColumnAudit,
    ColumnMasking
  };

namespace PiiTypeMapper
{
AWS_GLUE_API PiiType GetPiiTypeForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForPiiType(PiiType value);
} // namespace PiiTypeMapper
} // namespace Model
} // namespace Glue
} // namespace Aws
