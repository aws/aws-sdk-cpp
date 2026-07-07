/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/inspector2/model/ContainerImageSortBy.h>

using namespace Aws::Utils;

namespace Aws {
namespace Inspector2 {
namespace Model {
namespace ContainerImageSortByMapper {

static const int CRITICAL_HASH = HashingUtils::HashString("CRITICAL");
static const int HIGH_HASH = HashingUtils::HashString("HIGH");
static const int ALL_HASH = HashingUtils::HashString("ALL");

ContainerImageSortBy GetContainerImageSortByForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CRITICAL_HASH) {
    return ContainerImageSortBy::CRITICAL;
  } else if (hashCode == HIGH_HASH) {
    return ContainerImageSortBy::HIGH;
  } else if (hashCode == ALL_HASH) {
    return ContainerImageSortBy::ALL;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ContainerImageSortBy>(hashCode);
  }

  return ContainerImageSortBy::NOT_SET;
}

Aws::String GetNameForContainerImageSortBy(ContainerImageSortBy enumValue) {
  switch (enumValue) {
    case ContainerImageSortBy::NOT_SET:
      return {};
    case ContainerImageSortBy::CRITICAL:
      return "CRITICAL";
    case ContainerImageSortBy::HIGH:
      return "HIGH";
    case ContainerImageSortBy::ALL:
      return "ALL";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ContainerImageSortByMapper
}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
