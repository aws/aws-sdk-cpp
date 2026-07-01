/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/eks/model/CancellationStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace EKS {
namespace Model {
namespace CancellationStatusMapper {

static const int InProgress_HASH = HashingUtils::HashString("InProgress");
static const int Failed_HASH = HashingUtils::HashString("Failed");
static const int Successful_HASH = HashingUtils::HashString("Successful");

CancellationStatus GetCancellationStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == InProgress_HASH) {
    return CancellationStatus::InProgress;
  } else if (hashCode == Failed_HASH) {
    return CancellationStatus::Failed;
  } else if (hashCode == Successful_HASH) {
    return CancellationStatus::Successful;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<CancellationStatus>(hashCode);
  }

  return CancellationStatus::NOT_SET;
}

Aws::String GetNameForCancellationStatus(CancellationStatus enumValue) {
  switch (enumValue) {
    case CancellationStatus::NOT_SET:
      return {};
    case CancellationStatus::InProgress:
      return "InProgress";
    case CancellationStatus::Failed:
      return "Failed";
    case CancellationStatus::Successful:
      return "Successful";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CancellationStatusMapper
}  // namespace Model
}  // namespace EKS
}  // namespace Aws
