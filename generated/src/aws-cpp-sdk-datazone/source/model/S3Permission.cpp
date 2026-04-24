/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/datazone/model/S3Permission.h>

using namespace Aws::Utils;

namespace Aws {
namespace DataZone {
namespace Model {
namespace S3PermissionMapper {

static const int READ_HASH = HashingUtils::HashString("READ");
static const int WRITE_HASH = HashingUtils::HashString("WRITE");

S3Permission GetS3PermissionForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == READ_HASH) {
    return S3Permission::READ;
  } else if (hashCode == WRITE_HASH) {
    return S3Permission::WRITE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<S3Permission>(hashCode);
  }

  return S3Permission::NOT_SET;
}

Aws::String GetNameForS3Permission(S3Permission enumValue) {
  switch (enumValue) {
    case S3Permission::NOT_SET:
      return {};
    case S3Permission::READ:
      return "READ";
    case S3Permission::WRITE:
      return "WRITE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace S3PermissionMapper
}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
