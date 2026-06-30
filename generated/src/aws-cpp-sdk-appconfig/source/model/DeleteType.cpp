/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appconfig/model/DeleteType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace AppConfig {
namespace Model {
namespace DeleteTypeMapper {

static const int ARCHIVE_HASH = HashingUtils::HashString("ARCHIVE");
static const int DESTROY_HASH = HashingUtils::HashString("DESTROY");

DeleteType GetDeleteTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ARCHIVE_HASH) {
    return DeleteType::ARCHIVE;
  } else if (hashCode == DESTROY_HASH) {
    return DeleteType::DESTROY;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DeleteType>(hashCode);
  }

  return DeleteType::NOT_SET;
}

Aws::String GetNameForDeleteType(DeleteType enumValue) {
  switch (enumValue) {
    case DeleteType::NOT_SET:
      return {};
    case DeleteType::ARCHIVE:
      return "ARCHIVE";
    case DeleteType::DESTROY:
      return "DESTROY";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DeleteTypeMapper
}  // namespace Model
}  // namespace AppConfig
}  // namespace Aws
