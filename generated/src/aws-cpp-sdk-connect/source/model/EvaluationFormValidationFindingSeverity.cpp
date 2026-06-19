/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/EvaluationFormValidationFindingSeverity.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {
namespace EvaluationFormValidationFindingSeverityMapper {

static const int WARNING_HASH = HashingUtils::HashString("WARNING");
static const int ERROR__HASH = HashingUtils::HashString("ERROR");

EvaluationFormValidationFindingSeverity GetEvaluationFormValidationFindingSeverityForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == WARNING_HASH) {
    return EvaluationFormValidationFindingSeverity::WARNING;
  } else if (hashCode == ERROR__HASH) {
    return EvaluationFormValidationFindingSeverity::ERROR_;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<EvaluationFormValidationFindingSeverity>(hashCode);
  }

  return EvaluationFormValidationFindingSeverity::NOT_SET;
}

Aws::String GetNameForEvaluationFormValidationFindingSeverity(EvaluationFormValidationFindingSeverity enumValue) {
  switch (enumValue) {
    case EvaluationFormValidationFindingSeverity::NOT_SET:
      return {};
    case EvaluationFormValidationFindingSeverity::WARNING:
      return "WARNING";
    case EvaluationFormValidationFindingSeverity::ERROR_:
      return "ERROR";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace EvaluationFormValidationFindingSeverityMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
