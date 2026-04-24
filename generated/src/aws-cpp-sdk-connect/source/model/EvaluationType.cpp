/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/EvaluationType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {
namespace EvaluationTypeMapper {

static const int STANDARD_HASH = HashingUtils::HashString("STANDARD");
static const int CALIBRATION_HASH = HashingUtils::HashString("CALIBRATION");

EvaluationType GetEvaluationTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == STANDARD_HASH) {
    return EvaluationType::STANDARD;
  } else if (hashCode == CALIBRATION_HASH) {
    return EvaluationType::CALIBRATION;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<EvaluationType>(hashCode);
  }

  return EvaluationType::NOT_SET;
}

Aws::String GetNameForEvaluationType(EvaluationType enumValue) {
  switch (enumValue) {
    case EvaluationType::NOT_SET:
      return {};
    case EvaluationType::STANDARD:
      return "STANDARD";
    case EvaluationType::CALIBRATION:
      return "CALIBRATION";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace EvaluationTypeMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
