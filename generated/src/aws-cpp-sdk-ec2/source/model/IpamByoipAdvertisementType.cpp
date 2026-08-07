/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ec2/model/IpamByoipAdvertisementType.h>

using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {
namespace IpamByoipAdvertisementTypeMapper {

static const int regional_HASH = HashingUtils::HashString("regional");
static const int global_HASH = HashingUtils::HashString("global");

IpamByoipAdvertisementType GetIpamByoipAdvertisementTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == regional_HASH) {
    return IpamByoipAdvertisementType::regional;
  } else if (hashCode == global_HASH) {
    return IpamByoipAdvertisementType::global;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<IpamByoipAdvertisementType>(hashCode);
  }

  return IpamByoipAdvertisementType::NOT_SET;
}

Aws::String GetNameForIpamByoipAdvertisementType(IpamByoipAdvertisementType enumValue) {
  switch (enumValue) {
    case IpamByoipAdvertisementType::NOT_SET:
      return {};
    case IpamByoipAdvertisementType::regional:
      return "regional";
    case IpamByoipAdvertisementType::global:
      return "global";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace IpamByoipAdvertisementTypeMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
