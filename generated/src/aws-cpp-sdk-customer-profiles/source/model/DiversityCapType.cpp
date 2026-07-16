/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/customer-profiles/model/DiversityCapType.h>

using namespace Aws::Utils;

namespace Aws {
namespace CustomerProfiles {
namespace Model {
namespace DiversityCapTypeMapper {

static const int PERCENTAGE_HASH = HashingUtils::HashString("PERCENTAGE");
static const int VALUE_HASH = HashingUtils::HashString("VALUE");

DiversityCapType GetDiversityCapTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PERCENTAGE_HASH) {
    return DiversityCapType::PERCENTAGE;
  } else if (hashCode == VALUE_HASH) {
    return DiversityCapType::VALUE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DiversityCapType>(hashCode);
  }

  return DiversityCapType::NOT_SET;
}

Aws::String GetNameForDiversityCapType(DiversityCapType enumValue) {
  switch (enumValue) {
    case DiversityCapType::NOT_SET:
      return {};
    case DiversityCapType::PERCENTAGE:
      return "PERCENTAGE";
    case DiversityCapType::VALUE:
      return "VALUE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DiversityCapTypeMapper
}  // namespace Model
}  // namespace CustomerProfiles
}  // namespace Aws
