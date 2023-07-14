/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Athena
{
namespace Model
{
  enum class ColumnNullable
  {
    NOT_SET,
    NOT_NULL,
    NULLABLE,
    UNKNOWN
  };

namespace ColumnNullableMapper
{
AWS_ATHENA_API ColumnNullable GetColumnNullableForName(const Aws::String& name);

AWS_ATHENA_API Aws::String GetNameForColumnNullable(ColumnNullable value);
} // namespace ColumnNullableMapper
} // namespace Model
} // namespace Athena
} // namespace Aws
