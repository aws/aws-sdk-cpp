/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/fsx/model/OntapFileSystemUserType.h>

using namespace Aws::Utils;

namespace Aws {
namespace FSx {
namespace Model {
namespace OntapFileSystemUserTypeMapper {

static const int UNIX_HASH = HashingUtils::HashString("UNIX");
static const int WINDOWS_HASH = HashingUtils::HashString("WINDOWS");

OntapFileSystemUserType GetOntapFileSystemUserTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == UNIX_HASH) {
    return OntapFileSystemUserType::UNIX;
  } else if (hashCode == WINDOWS_HASH) {
    return OntapFileSystemUserType::WINDOWS;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<OntapFileSystemUserType>(hashCode);
  }

  return OntapFileSystemUserType::NOT_SET;
}

Aws::String GetNameForOntapFileSystemUserType(OntapFileSystemUserType enumValue) {
  switch (enumValue) {
    case OntapFileSystemUserType::NOT_SET:
      return {};
    case OntapFileSystemUserType::UNIX:
      return "UNIX";
    case OntapFileSystemUserType::WINDOWS:
      return "WINDOWS";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace OntapFileSystemUserTypeMapper
}  // namespace Model
}  // namespace FSx
}  // namespace Aws
