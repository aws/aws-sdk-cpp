/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DataZone
{
namespace Model
{
  enum class SortKey
  {
    NOT_SET,
    CREATED_AT,
    UPDATED_AT
  };

namespace SortKeyMapper
{
AWS_DATAZONE_API SortKey GetSortKeyForName(const Aws::String& name);

AWS_DATAZONE_API Aws::String GetNameForSortKey(SortKey value);
} // namespace SortKeyMapper
} // namespace Model
} // namespace DataZone
} // namespace Aws
