/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudwatchomni/model/DomainStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace CloudWatchOmni {
namespace Model {
namespace DomainStatusMapper {

static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");

DomainStatus GetDomainStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ACTIVE_HASH) {
    return DomainStatus::ACTIVE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DomainStatus>(hashCode);
  }

  return DomainStatus::NOT_SET;
}

Aws::String GetNameForDomainStatus(DomainStatus enumValue) {
  switch (enumValue) {
    case DomainStatus::NOT_SET:
      return {};
    case DomainStatus::ACTIVE:
      return "ACTIVE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DomainStatusMapper
}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
