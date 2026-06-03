/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/AnalysisType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace CostExplorer {
namespace Model {
namespace AnalysisTypeMapper {

static const int MAX_SAVINGS_HASH = HashingUtils::HashString("MAX_SAVINGS");
static const int CUSTOM_COMMITMENT_HASH = HashingUtils::HashString("CUSTOM_COMMITMENT");
static const int TARGET_AVERAGE_COVERAGE_HASH = HashingUtils::HashString("TARGET_AVERAGE_COVERAGE");

AnalysisType GetAnalysisTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == MAX_SAVINGS_HASH) {
    return AnalysisType::MAX_SAVINGS;
  } else if (hashCode == CUSTOM_COMMITMENT_HASH) {
    return AnalysisType::CUSTOM_COMMITMENT;
  } else if (hashCode == TARGET_AVERAGE_COVERAGE_HASH) {
    return AnalysisType::TARGET_AVERAGE_COVERAGE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AnalysisType>(hashCode);
  }

  return AnalysisType::NOT_SET;
}

Aws::String GetNameForAnalysisType(AnalysisType enumValue) {
  switch (enumValue) {
    case AnalysisType::NOT_SET:
      return {};
    case AnalysisType::MAX_SAVINGS:
      return "MAX_SAVINGS";
    case AnalysisType::CUSTOM_COMMITMENT:
      return "CUSTOM_COMMITMENT";
    case AnalysisType::TARGET_AVERAGE_COVERAGE:
      return "TARGET_AVERAGE_COVERAGE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AnalysisTypeMapper
}  // namespace Model
}  // namespace CostExplorer
}  // namespace Aws
