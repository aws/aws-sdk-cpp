/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/kafka/model/AssessmentType.h>

using namespace Aws::Utils;

namespace Aws {
namespace Kafka {
namespace Model {
namespace AssessmentTypeMapper {

static const int UPDATE_BROKER_TYPE_HASH = HashingUtils::HashString("UPDATE_BROKER_TYPE");

AssessmentType GetAssessmentTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == UPDATE_BROKER_TYPE_HASH) {
    return AssessmentType::UPDATE_BROKER_TYPE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AssessmentType>(hashCode);
  }

  return AssessmentType::NOT_SET;
}

Aws::String GetNameForAssessmentType(AssessmentType enumValue) {
  switch (enumValue) {
    case AssessmentType::NOT_SET:
      return {};
    case AssessmentType::UPDATE_BROKER_TYPE:
      return "UPDATE_BROKER_TYPE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AssessmentTypeMapper
}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
