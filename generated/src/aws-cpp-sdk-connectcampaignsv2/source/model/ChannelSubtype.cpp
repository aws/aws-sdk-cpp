/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcampaignsv2/model/ChannelSubtype.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace ConnectCampaignsV2 {
namespace Model {
namespace ChannelSubtypeMapper {

static const int TELEPHONY_HASH = HashingUtils::HashString("TELEPHONY");
static const int SMS_HASH = HashingUtils::HashString("SMS");
static const int EMAIL_HASH = HashingUtils::HashString("EMAIL");
static const int WHATSAPP_HASH = HashingUtils::HashString("WHATSAPP");

ChannelSubtype GetChannelSubtypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == TELEPHONY_HASH) {
    return ChannelSubtype::TELEPHONY;
  } else if (hashCode == SMS_HASH) {
    return ChannelSubtype::SMS;
  } else if (hashCode == EMAIL_HASH) {
    return ChannelSubtype::EMAIL;
  } else if (hashCode == WHATSAPP_HASH) {
    return ChannelSubtype::WHATSAPP;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ChannelSubtype>(hashCode);
  }

  return ChannelSubtype::NOT_SET;
}

Aws::String GetNameForChannelSubtype(ChannelSubtype enumValue) {
  switch (enumValue) {
    case ChannelSubtype::NOT_SET:
      return {};
    case ChannelSubtype::TELEPHONY:
      return "TELEPHONY";
    case ChannelSubtype::SMS:
      return "SMS";
    case ChannelSubtype::EMAIL:
      return "EMAIL";
    case ChannelSubtype::WHATSAPP:
      return "WHATSAPP";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ChannelSubtypeMapper
}  // namespace Model
}  // namespace ConnectCampaignsV2
}  // namespace Aws
