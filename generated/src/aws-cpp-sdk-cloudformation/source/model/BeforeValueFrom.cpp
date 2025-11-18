/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/BeforeValueFrom.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace CloudFormation {
namespace Model {
namespace BeforeValueFromMapper {

static const int PREVIOUS_DEPLOYMENT_STATE_HASH = HashingUtils::HashString("PREVIOUS_DEPLOYMENT_STATE");
static const int ACTUAL_STATE_HASH = HashingUtils::HashString("ACTUAL_STATE");

BeforeValueFrom GetBeforeValueFromForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PREVIOUS_DEPLOYMENT_STATE_HASH) {
    return BeforeValueFrom::PREVIOUS_DEPLOYMENT_STATE;
  } else if (hashCode == ACTUAL_STATE_HASH) {
    return BeforeValueFrom::ACTUAL_STATE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<BeforeValueFrom>(hashCode);
  }

  return BeforeValueFrom::NOT_SET;
}

Aws::String GetNameForBeforeValueFrom(BeforeValueFrom enumValue) {
  switch (enumValue) {
    case BeforeValueFrom::NOT_SET:
      return {};
    case BeforeValueFrom::PREVIOUS_DEPLOYMENT_STATE:
      return "PREVIOUS_DEPLOYMENT_STATE";
    case BeforeValueFrom::ACTUAL_STATE:
      return "ACTUAL_STATE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace BeforeValueFromMapper
}  // namespace Model
}  // namespace CloudFormation
}  // namespace Aws
