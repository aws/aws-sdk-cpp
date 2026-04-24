/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanroomsml/model/SyntheticDataColumnType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace CleanRoomsML {
namespace Model {
namespace SyntheticDataColumnTypeMapper {

static const int CATEGORICAL_HASH = HashingUtils::HashString("CATEGORICAL");
static const int NUMERICAL_HASH = HashingUtils::HashString("NUMERICAL");

SyntheticDataColumnType GetSyntheticDataColumnTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CATEGORICAL_HASH) {
    return SyntheticDataColumnType::CATEGORICAL;
  } else if (hashCode == NUMERICAL_HASH) {
    return SyntheticDataColumnType::NUMERICAL;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SyntheticDataColumnType>(hashCode);
  }

  return SyntheticDataColumnType::NOT_SET;
}

Aws::String GetNameForSyntheticDataColumnType(SyntheticDataColumnType enumValue) {
  switch (enumValue) {
    case SyntheticDataColumnType::NOT_SET:
      return {};
    case SyntheticDataColumnType::CATEGORICAL:
      return "CATEGORICAL";
    case SyntheticDataColumnType::NUMERICAL:
      return "NUMERICAL";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SyntheticDataColumnTypeMapper
}  // namespace Model
}  // namespace CleanRoomsML
}  // namespace Aws
