/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/healthlake/model/BackupType.h>

using namespace Aws::Utils;

namespace Aws {
namespace HealthLake {
namespace Model {
namespace BackupTypeMapper {

static const int CONTINUOUS_HASH = HashingUtils::HashString("CONTINUOUS");

BackupType GetBackupTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CONTINUOUS_HASH) {
    return BackupType::CONTINUOUS;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<BackupType>(hashCode);
  }

  return BackupType::NOT_SET;
}

Aws::String GetNameForBackupType(BackupType enumValue) {
  switch (enumValue) {
    case BackupType::NOT_SET:
      return {};
    case BackupType::CONTINUOUS:
      return "CONTINUOUS";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace BackupTypeMapper
}  // namespace Model
}  // namespace HealthLake
}  // namespace Aws
