﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/datazone/model/SortFieldAccountPool.h>

using namespace Aws::Utils;

namespace Aws {
namespace DataZone {
namespace Model {
namespace SortFieldAccountPoolMapper {

static const int NAME_HASH = HashingUtils::HashString("NAME");

SortFieldAccountPool GetSortFieldAccountPoolForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == NAME_HASH) {
    return SortFieldAccountPool::NAME;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SortFieldAccountPool>(hashCode);
  }

  return SortFieldAccountPool::NOT_SET;
}

Aws::String GetNameForSortFieldAccountPool(SortFieldAccountPool enumValue) {
  switch (enumValue) {
    case SortFieldAccountPool::NOT_SET:
      return {};
    case SortFieldAccountPool::NAME:
      return "NAME";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SortFieldAccountPoolMapper
}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
