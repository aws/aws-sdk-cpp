/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/DataRetentionStorageDestination.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Bedrock {
namespace Model {
namespace DataRetentionStorageDestinationMapper {

static const int customer_managed_HASH = HashingUtils::HashString("customer_managed");
static const int amazon_managed_HASH = HashingUtils::HashString("amazon_managed");

DataRetentionStorageDestination GetDataRetentionStorageDestinationForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == customer_managed_HASH) {
    return DataRetentionStorageDestination::customer_managed;
  } else if (hashCode == amazon_managed_HASH) {
    return DataRetentionStorageDestination::amazon_managed;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DataRetentionStorageDestination>(hashCode);
  }

  return DataRetentionStorageDestination::NOT_SET;
}

Aws::String GetNameForDataRetentionStorageDestination(DataRetentionStorageDestination enumValue) {
  switch (enumValue) {
    case DataRetentionStorageDestination::NOT_SET:
      return {};
    case DataRetentionStorageDestination::customer_managed:
      return "customer_managed";
    case DataRetentionStorageDestination::amazon_managed:
      return "amazon_managed";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DataRetentionStorageDestinationMapper
}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
