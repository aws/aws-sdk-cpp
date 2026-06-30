/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/PopulateIntermediateTableAnalysisType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace CleanRooms {
namespace Model {
namespace PopulateIntermediateTableAnalysisTypeMapper {

static const int QUERY_HASH = HashingUtils::HashString("QUERY");

PopulateIntermediateTableAnalysisType GetPopulateIntermediateTableAnalysisTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == QUERY_HASH) {
    return PopulateIntermediateTableAnalysisType::QUERY;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<PopulateIntermediateTableAnalysisType>(hashCode);
  }

  return PopulateIntermediateTableAnalysisType::NOT_SET;
}

Aws::String GetNameForPopulateIntermediateTableAnalysisType(PopulateIntermediateTableAnalysisType enumValue) {
  switch (enumValue) {
    case PopulateIntermediateTableAnalysisType::NOT_SET:
      return {};
    case PopulateIntermediateTableAnalysisType::QUERY:
      return "QUERY";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace PopulateIntermediateTableAnalysisTypeMapper
}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws
