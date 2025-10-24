﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/datazone/model/TypesSearchScope.h>

using namespace Aws::Utils;

namespace Aws {
namespace DataZone {
namespace Model {
namespace TypesSearchScopeMapper {

static const int ASSET_TYPE_HASH = HashingUtils::HashString("ASSET_TYPE");
static const int FORM_TYPE_HASH = HashingUtils::HashString("FORM_TYPE");
static const int LINEAGE_NODE_TYPE_HASH = HashingUtils::HashString("LINEAGE_NODE_TYPE");

TypesSearchScope GetTypesSearchScopeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ASSET_TYPE_HASH) {
    return TypesSearchScope::ASSET_TYPE;
  } else if (hashCode == FORM_TYPE_HASH) {
    return TypesSearchScope::FORM_TYPE;
  } else if (hashCode == LINEAGE_NODE_TYPE_HASH) {
    return TypesSearchScope::LINEAGE_NODE_TYPE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<TypesSearchScope>(hashCode);
  }

  return TypesSearchScope::NOT_SET;
}

Aws::String GetNameForTypesSearchScope(TypesSearchScope enumValue) {
  switch (enumValue) {
    case TypesSearchScope::NOT_SET:
      return {};
    case TypesSearchScope::ASSET_TYPE:
      return "ASSET_TYPE";
    case TypesSearchScope::FORM_TYPE:
      return "FORM_TYPE";
    case TypesSearchScope::LINEAGE_NODE_TYPE:
      return "LINEAGE_NODE_TYPE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TypesSearchScopeMapper
}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
