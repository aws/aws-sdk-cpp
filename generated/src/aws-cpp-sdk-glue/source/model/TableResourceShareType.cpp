/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/glue/model/TableResourceShareType.h>

using namespace Aws::Utils;

namespace Aws {
namespace Glue {
namespace Model {
namespace TableResourceShareTypeMapper {

static const int FEDERATED_HASH = HashingUtils::HashString("FEDERATED");
static const int ALL_HASH = HashingUtils::HashString("ALL");

TableResourceShareType GetTableResourceShareTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == FEDERATED_HASH) {
    return TableResourceShareType::FEDERATED;
  } else if (hashCode == ALL_HASH) {
    return TableResourceShareType::ALL;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<TableResourceShareType>(hashCode);
  }

  return TableResourceShareType::NOT_SET;
}

Aws::String GetNameForTableResourceShareType(TableResourceShareType enumValue) {
  switch (enumValue) {
    case TableResourceShareType::NOT_SET:
      return {};
    case TableResourceShareType::FEDERATED:
      return "FEDERATED";
    case TableResourceShareType::ALL:
      return "ALL";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TableResourceShareTypeMapper
}  // namespace Model
}  // namespace Glue
}  // namespace Aws
