/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/endusermessaging/model/NotifyChannel.h>

using namespace Aws::Utils;

namespace Aws {
namespace EndUserMessaging {
namespace Model {
namespace NotifyChannelMapper {

static const int TEXT_HASH = HashingUtils::HashString("TEXT");
static const int VOICE_HASH = HashingUtils::HashString("VOICE");
static const int WHATSAPP_HASH = HashingUtils::HashString("WHATSAPP");

NotifyChannel GetNotifyChannelForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == TEXT_HASH) {
    return NotifyChannel::TEXT;
  } else if (hashCode == VOICE_HASH) {
    return NotifyChannel::VOICE;
  } else if (hashCode == WHATSAPP_HASH) {
    return NotifyChannel::WHATSAPP;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<NotifyChannel>(hashCode);
  }

  return NotifyChannel::NOT_SET;
}

Aws::String GetNameForNotifyChannel(NotifyChannel enumValue) {
  switch (enumValue) {
    case NotifyChannel::NOT_SET:
      return {};
    case NotifyChannel::TEXT:
      return "TEXT";
    case NotifyChannel::VOICE:
      return "VOICE";
    case NotifyChannel::WHATSAPP:
      return "WHATSAPP";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace NotifyChannelMapper
}  // namespace Model
}  // namespace EndUserMessaging
}  // namespace Aws
