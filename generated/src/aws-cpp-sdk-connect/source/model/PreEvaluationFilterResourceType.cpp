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

PreEvaluationFilterResourceType GetPreEvaluationFilterResourceTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CONTACT_HASH) {
    return PreEvaluationFilterResourceType::CONTACT;
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
