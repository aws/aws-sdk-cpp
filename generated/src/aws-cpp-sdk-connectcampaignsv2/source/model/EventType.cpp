/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcampaignsv2/model/EventType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ConnectCampaignsV2
  {
    namespace Model
    {
      namespace EventTypeMapper
      {

        static const int Campaign_Email_HASH = HashingUtils::HashString("Campaign-Email");
        static const int Campaign_SMS_HASH = HashingUtils::HashString("Campaign-SMS");
        static const int Campaign_Telephony_HASH = HashingUtils::HashString("Campaign-Telephony");
        static const int Campaign_Orchestration_HASH = HashingUtils::HashString("Campaign-Orchestration");


        EventType GetEventTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Campaign_Email_HASH)
          {
            return EventType::Campaign_Email;
          }
          else if (hashCode == Campaign_SMS_HASH)
          {
            return EventType::Campaign_SMS;
          }
          else if (hashCode == Campaign_Telephony_HASH)
          {
            return EventType::Campaign_Telephony;
          }
          else if (hashCode == Campaign_Orchestration_HASH)
          {
            return EventType::Campaign_Orchestration;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EventType>(hashCode);
          }

          return EventType::NOT_SET;
        }

        Aws::String GetNameForEventType(EventType enumValue)
        {
          switch(enumValue)
          {
          case EventType::NOT_SET:
            return {};
          case EventType::Campaign_Email:
            return "Campaign-Email";
          case EventType::Campaign_SMS:
            return "Campaign-SMS";
          case EventType::Campaign_Telephony:
            return "Campaign-Telephony";
          case EventType::Campaign_Orchestration:
            return "Campaign-Orchestration";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EventTypeMapper
    } // namespace Model
  } // namespace ConnectCampaignsV2
} // namespace Aws
