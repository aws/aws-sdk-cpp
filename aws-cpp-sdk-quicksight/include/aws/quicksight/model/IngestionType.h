/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace QuickSight
{
namespace Model
{
  enum class IngestionType
  {
    NOT_SET,
    INCREMENTAL_REFRESH,
    FULL_REFRESH
  };

namespace IngestionTypeMapper
{
AWS_QUICKSIGHT_API IngestionType GetIngestionTypeForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForIngestionType(IngestionType value);
} // namespace IngestionTypeMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
