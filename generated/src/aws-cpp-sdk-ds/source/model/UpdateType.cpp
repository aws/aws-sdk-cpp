﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ds/model/UpdateType.h>

using namespace Aws::Utils;

namespace Aws {
namespace DirectoryService {
namespace Model {
namespace UpdateTypeMapper {

static const int OS_HASH = HashingUtils::HashString("OS");
static const int NETWORK_HASH = HashingUtils::HashString("NETWORK");
static const int SIZE_HASH = HashingUtils::HashString("SIZE");

UpdateType GetUpdateTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == OS_HASH) {
    return UpdateType::OS;
  } else if (hashCode == NETWORK_HASH) {
    return UpdateType::NETWORK;
  } else if (hashCode == SIZE_HASH) {
    return UpdateType::SIZE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<UpdateType>(hashCode);
  }

  return UpdateType::NOT_SET;
}

Aws::String GetNameForUpdateType(UpdateType enumValue) {
  switch (enumValue) {
    case UpdateType::NOT_SET:
      return {};
    case UpdateType::OS:
      return "OS";
    case UpdateType::NETWORK:
      return "NETWORK";
    case UpdateType::SIZE:
      return "SIZE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace UpdateTypeMapper
}  // namespace Model
}  // namespace DirectoryService
}  // namespace Aws
