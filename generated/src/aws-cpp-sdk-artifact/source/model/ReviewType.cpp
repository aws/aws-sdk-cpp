/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/artifact/model/ReviewType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Artifact {
namespace Model {
namespace ReviewTypeMapper {

static const int HUMAN_HASH = HashingUtils::HashString("HUMAN");
static const int AI_HASH = HashingUtils::HashString("AI");

ReviewType GetReviewTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == HUMAN_HASH) {
    return ReviewType::HUMAN;
  } else if (hashCode == AI_HASH) {
    return ReviewType::AI;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ReviewType>(hashCode);
  }

  return ReviewType::NOT_SET;
}

Aws::String GetNameForReviewType(ReviewType enumValue) {
  switch (enumValue) {
    case ReviewType::NOT_SET:
      return {};
    case ReviewType::HUMAN:
      return "HUMAN";
    case ReviewType::AI:
      return "AI";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ReviewTypeMapper
}  // namespace Model
}  // namespace Artifact
}  // namespace Aws
