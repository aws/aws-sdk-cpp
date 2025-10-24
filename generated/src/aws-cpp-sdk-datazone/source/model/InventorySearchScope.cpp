﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/datazone/model/InventorySearchScope.h>

using namespace Aws::Utils;

namespace Aws {
namespace DataZone {
namespace Model {
namespace InventorySearchScopeMapper {

static const int ASSET_HASH = HashingUtils::HashString("ASSET");
static const int GLOSSARY_HASH = HashingUtils::HashString("GLOSSARY");
static const int GLOSSARY_TERM_HASH = HashingUtils::HashString("GLOSSARY_TERM");
static const int DATA_PRODUCT_HASH = HashingUtils::HashString("DATA_PRODUCT");

InventorySearchScope GetInventorySearchScopeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ASSET_HASH) {
    return InventorySearchScope::ASSET;
  } else if (hashCode == GLOSSARY_HASH) {
    return InventorySearchScope::GLOSSARY;
  } else if (hashCode == GLOSSARY_TERM_HASH) {
    return InventorySearchScope::GLOSSARY_TERM;
  } else if (hashCode == DATA_PRODUCT_HASH) {
    return InventorySearchScope::DATA_PRODUCT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<InventorySearchScope>(hashCode);
  }

  return InventorySearchScope::NOT_SET;
}

Aws::String GetNameForInventorySearchScope(InventorySearchScope enumValue) {
  switch (enumValue) {
    case InventorySearchScope::NOT_SET:
      return {};
    case InventorySearchScope::ASSET:
      return "ASSET";
    case InventorySearchScope::GLOSSARY:
      return "GLOSSARY";
    case InventorySearchScope::GLOSSARY_TERM:
      return "GLOSSARY_TERM";
    case InventorySearchScope::DATA_PRODUCT:
      return "DATA_PRODUCT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace InventorySearchScopeMapper
}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
