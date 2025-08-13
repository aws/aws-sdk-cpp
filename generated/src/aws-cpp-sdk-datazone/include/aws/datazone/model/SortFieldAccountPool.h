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
  enum class SortFieldAccountPool
  {
    NOT_SET,
    NAME
  };

namespace SortFieldAccountPoolMapper
{
AWS_DATAZONE_API SortFieldAccountPool GetSortFieldAccountPoolForName(const Aws::String& name);

AWS_DATAZONE_API Aws::String GetNameForSortFieldAccountPool(SortFieldAccountPool value);
} // namespace SortFieldAccountPoolMapper
} // namespace Model
} // namespace DataZone
} // namespace Aws
