/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/inspector2/model/AmiConfigurationStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace Inspector2 {
namespace Model {
namespace AmiConfigurationStatusMapper {

static const int SUCCESS_HASH = HashingUtils::HashString("SUCCESS");
static const int PENDING_HASH = HashingUtils::HashString("PENDING");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");

AmiConfigurationStatus GetAmiConfigurationStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == SUCCESS_HASH) {
    return AmiConfigurationStatus::SUCCESS;
  } else if (hashCode == PENDING_HASH) {
    return AmiConfigurationStatus::PENDING;
  } else if (hashCode == FAILED_HASH) {
    return AmiConfigurationStatus::FAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AmiConfigurationStatus>(hashCode);
  }

  return AmiConfigurationStatus::NOT_SET;
}

Aws::String GetNameForAmiConfigurationStatus(AmiConfigurationStatus enumValue) {
  switch (enumValue) {
    case AmiConfigurationStatus::NOT_SET:
      return {};
    case AmiConfigurationStatus::SUCCESS:
      return "SUCCESS";
    case AmiConfigurationStatus::PENDING:
      return "PENDING";
    case AmiConfigurationStatus::FAILED:
      return "FAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AmiConfigurationStatusMapper
}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
