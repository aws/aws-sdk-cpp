/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/PreEvaluationFilterResourceType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {
namespace PreEvaluationFilterResourceTypeMapper {

static const int CONTACT_HASH = HashingUtils::HashString("CONTACT");
static const int CONTACT_EVALUATION_HASH = HashingUtils::HashString("CONTACT_EVALUATION");

PreEvaluationFilterResourceType GetPreEvaluationFilterResourceTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CONTACT_HASH) {
    return PreEvaluationFilterResourceType::CONTACT;
  } else if (hashCode == CONTACT_EVALUATION_HASH) {
    return PreEvaluationFilterResourceType::CONTACT_EVALUATION;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<PreEvaluationFilterResourceType>(hashCode);
  }

  return PreEvaluationFilterResourceType::NOT_SET;
}

Aws::String GetNameForPreEvaluationFilterResourceType(PreEvaluationFilterResourceType enumValue) {
  switch (enumValue) {
    case PreEvaluationFilterResourceType::NOT_SET:
      return {};
    case PreEvaluationFilterResourceType::CONTACT:
      return "CONTACT";
    case PreEvaluationFilterResourceType::CONTACT_EVALUATION:
      return "CONTACT_EVALUATION";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace PreEvaluationFilterResourceTypeMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
