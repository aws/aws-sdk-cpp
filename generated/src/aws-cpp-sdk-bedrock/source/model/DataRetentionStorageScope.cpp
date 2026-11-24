/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/DataRetentionStorageScope.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Bedrock {
namespace Model {
namespace DataRetentionStorageScopeMapper {

static const int account_HASH = HashingUtils::HashString("account");
static const int organization_HASH = HashingUtils::HashString("organization");
static const int project_HASH = HashingUtils::HashString("project");

DataRetentionStorageScope GetDataRetentionStorageScopeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == account_HASH) {
    return DataRetentionStorageScope::account;
  } else if (hashCode == organization_HASH) {
    return DataRetentionStorageScope::organization;
  } else if (hashCode == project_HASH) {
    return DataRetentionStorageScope::project;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DataRetentionStorageScope>(hashCode);
  }

  return DataRetentionStorageScope::NOT_SET;
}

Aws::String GetNameForDataRetentionStorageScope(DataRetentionStorageScope enumValue) {
  switch (enumValue) {
    case DataRetentionStorageScope::NOT_SET:
      return {};
    case DataRetentionStorageScope::account:
      return "account";
    case DataRetentionStorageScope::organization:
      return "organization";
    case DataRetentionStorageScope::project:
      return "project";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DataRetentionStorageScopeMapper
}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
