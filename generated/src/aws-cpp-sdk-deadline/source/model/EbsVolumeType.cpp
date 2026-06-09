/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/deadline/model/EbsVolumeType.h>

using namespace Aws::Utils;

namespace Aws {
namespace deadline {
namespace Model {
namespace EbsVolumeTypeMapper {

static const int gp3_HASH = HashingUtils::HashString("gp3");

EbsVolumeType GetEbsVolumeTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == gp3_HASH) {
    return EbsVolumeType::gp3;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<EbsVolumeType>(hashCode);
  }

  return EbsVolumeType::NOT_SET;
}

Aws::String GetNameForEbsVolumeType(EbsVolumeType enumValue) {
  switch (enumValue) {
    case EbsVolumeType::NOT_SET:
      return {};
    case EbsVolumeType::gp3:
      return "gp3";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace EbsVolumeTypeMapper
}  // namespace Model
}  // namespace deadline
}  // namespace Aws
