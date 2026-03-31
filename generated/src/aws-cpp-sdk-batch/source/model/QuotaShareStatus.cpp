/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/QuotaShareStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Batch {
namespace Model {
namespace QuotaShareStatusMapper {

static const int CREATING_HASH = HashingUtils::HashString("CREATING");
static const int VALID_HASH = HashingUtils::HashString("VALID");
static const int INVALID_HASH = HashingUtils::HashString("INVALID");
static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
static const int DELETING_HASH = HashingUtils::HashString("DELETING");

QuotaShareStatus GetQuotaShareStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CREATING_HASH) {
    return QuotaShareStatus::CREATING;
  } else if (hashCode == VALID_HASH) {
    return QuotaShareStatus::VALID;
  } else if (hashCode == INVALID_HASH) {
    return QuotaShareStatus::INVALID;
  } else if (hashCode == UPDATING_HASH) {
    return QuotaShareStatus::UPDATING;
  } else if (hashCode == DELETING_HASH) {
    return QuotaShareStatus::DELETING;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<QuotaShareStatus>(hashCode);
  }

  return QuotaShareStatus::NOT_SET;
}

Aws::String GetNameForQuotaShareStatus(QuotaShareStatus enumValue) {
  switch (enumValue) {
    case QuotaShareStatus::NOT_SET:
      return {};
    case QuotaShareStatus::CREATING:
      return "CREATING";
    case QuotaShareStatus::VALID:
      return "VALID";
    case QuotaShareStatus::INVALID:
      return "INVALID";
    case QuotaShareStatus::UPDATING:
      return "UPDATING";
    case QuotaShareStatus::DELETING:
      return "DELETING";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace QuotaShareStatusMapper
}  // namespace Model
}  // namespace Batch
}  // namespace Aws
