/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/devops-agent/model/CapabilityType.h>

using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {
namespace CapabilityTypeMapper {

static const int RELEASE_READINESS_REVIEW_HASH = HashingUtils::HashString("RELEASE_READINESS_REVIEW");
static const int RELEASE_READINESS_REVIEW_AUTOMATED_TESTING_HASH = HashingUtils::HashString("RELEASE_READINESS_REVIEW_AUTOMATED_TESTING");

CapabilityType GetCapabilityTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == RELEASE_READINESS_REVIEW_HASH) {
    return CapabilityType::RELEASE_READINESS_REVIEW;
  } else if (hashCode == RELEASE_READINESS_REVIEW_AUTOMATED_TESTING_HASH) {
    return CapabilityType::RELEASE_READINESS_REVIEW_AUTOMATED_TESTING;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<CapabilityType>(hashCode);
  }

  return CapabilityType::NOT_SET;
}

Aws::String GetNameForCapabilityType(CapabilityType enumValue) {
  switch (enumValue) {
    case CapabilityType::NOT_SET:
      return {};
    case CapabilityType::RELEASE_READINESS_REVIEW:
      return "RELEASE_READINESS_REVIEW";
    case CapabilityType::RELEASE_READINESS_REVIEW_AUTOMATED_TESTING:
      return "RELEASE_READINESS_REVIEW_AUTOMATED_TESTING";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CapabilityTypeMapper
}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
