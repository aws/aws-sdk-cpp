/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/kinesis/model/ChannelDestinationType.h>

using namespace Aws::Utils;

namespace Aws {
namespace Kinesis {
namespace Model {
namespace ChannelDestinationTypeMapper {

static const int S3_HASH = HashingUtils::HashString("S3");
static const int S3_TABLES_HASH = HashingUtils::HashString("S3_TABLES");

ChannelDestinationType GetChannelDestinationTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == S3_HASH) {
    return ChannelDestinationType::S3;
  } else if (hashCode == S3_TABLES_HASH) {
    return ChannelDestinationType::S3_TABLES;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ChannelDestinationType>(hashCode);
  }

  return ChannelDestinationType::NOT_SET;
}

Aws::String GetNameForChannelDestinationType(ChannelDestinationType enumValue) {
  switch (enumValue) {
    case ChannelDestinationType::NOT_SET:
      return {};
    case ChannelDestinationType::S3:
      return "S3";
    case ChannelDestinationType::S3_TABLES:
      return "S3_TABLES";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ChannelDestinationTypeMapper
}  // namespace Model
}  // namespace Kinesis
}  // namespace Aws
