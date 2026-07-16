/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/artifact/model/InquirySupportMode.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Artifact {
namespace Model {
namespace InquirySupportModeMapper {

static const int AI_ONLY_HASH = HashingUtils::HashString("AI_ONLY");
static const int FULL_SUPPORT_HASH = HashingUtils::HashString("FULL_SUPPORT");

InquirySupportMode GetInquirySupportModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == AI_ONLY_HASH) {
    return InquirySupportMode::AI_ONLY;
  } else if (hashCode == FULL_SUPPORT_HASH) {
    return InquirySupportMode::FULL_SUPPORT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<InquirySupportMode>(hashCode);
  }

  return InquirySupportMode::NOT_SET;
}

Aws::String GetNameForInquirySupportMode(InquirySupportMode enumValue) {
  switch (enumValue) {
    case InquirySupportMode::NOT_SET:
      return {};
    case InquirySupportMode::AI_ONLY:
      return "AI_ONLY";
    case InquirySupportMode::FULL_SUPPORT:
      return "FULL_SUPPORT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace InquirySupportModeMapper
}  // namespace Model
}  // namespace Artifact
}  // namespace Aws
