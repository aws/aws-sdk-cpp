/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/deadline/model/RangeConstraint.h>

using namespace Aws::Utils;

namespace Aws {
namespace deadline {
namespace Model {
namespace RangeConstraintMapper {

static const int CONTIGUOUS_HASH = HashingUtils::HashString("CONTIGUOUS");
static const int NONCONTIGUOUS_HASH = HashingUtils::HashString("NONCONTIGUOUS");

RangeConstraint GetRangeConstraintForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CONTIGUOUS_HASH) {
    return RangeConstraint::CONTIGUOUS;
  } else if (hashCode == NONCONTIGUOUS_HASH) {
    return RangeConstraint::NONCONTIGUOUS;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RangeConstraint>(hashCode);
  }

  return RangeConstraint::NOT_SET;
}

Aws::String GetNameForRangeConstraint(RangeConstraint enumValue) {
  switch (enumValue) {
    case RangeConstraint::NOT_SET:
      return {};
    case RangeConstraint::CONTIGUOUS:
      return "CONTIGUOUS";
    case RangeConstraint::NONCONTIGUOUS:
      return "NONCONTIGUOUS";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RangeConstraintMapper
}  // namespace Model
}  // namespace deadline
}  // namespace Aws
