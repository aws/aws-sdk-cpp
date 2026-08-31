/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/kinesis/model/ChannelEncryptionType.h>

using namespace Aws::Utils;

namespace Aws {
namespace Kinesis {
namespace Model {
namespace ChannelEncryptionTypeMapper {

static const int KMS_HASH = HashingUtils::HashString("KMS");

ChannelEncryptionType GetChannelEncryptionTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == KMS_HASH) {
    return ChannelEncryptionType::KMS;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ChannelEncryptionType>(hashCode);
  }

  return ChannelEncryptionType::NOT_SET;
}

Aws::String GetNameForChannelEncryptionType(ChannelEncryptionType enumValue) {
  switch (enumValue) {
    case ChannelEncryptionType::NOT_SET:
      return {};
    case ChannelEncryptionType::KMS:
      return "KMS";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ChannelEncryptionTypeMapper
}  // namespace Model
}  // namespace Kinesis
}  // namespace Aws
