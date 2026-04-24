/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ecr/model/SigningStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace ECR {
namespace Model {
namespace SigningStatusMapper {

static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
static const int COMPLETE_HASH = HashingUtils::HashString("COMPLETE");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");

SigningStatus GetSigningStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == IN_PROGRESS_HASH) {
    return SigningStatus::IN_PROGRESS;
  } else if (hashCode == COMPLETE_HASH) {
    return SigningStatus::COMPLETE;
  } else if (hashCode == FAILED_HASH) {
    return SigningStatus::FAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SigningStatus>(hashCode);
  }

  return SigningStatus::NOT_SET;
}

Aws::String GetNameForSigningStatus(SigningStatus enumValue) {
  switch (enumValue) {
    case SigningStatus::NOT_SET:
      return {};
    case SigningStatus::IN_PROGRESS:
      return "IN_PROGRESS";
    case SigningStatus::COMPLETE:
      return "COMPLETE";
    case SigningStatus::FAILED:
      return "FAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SigningStatusMapper
}  // namespace Model
}  // namespace ECR
}  // namespace Aws
