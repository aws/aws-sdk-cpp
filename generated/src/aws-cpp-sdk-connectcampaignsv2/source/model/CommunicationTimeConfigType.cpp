/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcampaignsv2/model/CommunicationTimeConfigType.h>
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
      namespace CommunicationTimeConfigTypeMapper
      {

        static const int TELEPHONY_HASH = HashingUtils::HashString("TELEPHONY");
        static const int SMS_HASH = HashingUtils::HashString("SMS");
        static const int EMAIL_HASH = HashingUtils::HashString("EMAIL");


        CommunicationTimeConfigType GetCommunicationTimeConfigTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TELEPHONY_HASH)
          {
            return CommunicationTimeConfigType::TELEPHONY;
          }
          else if (hashCode == SMS_HASH)
          {
            return CommunicationTimeConfigType::SMS;
          }
          else if (hashCode == EMAIL_HASH)
          {
            return CommunicationTimeConfigType::EMAIL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CommunicationTimeConfigType>(hashCode);
          }

          return CommunicationTimeConfigType::NOT_SET;
        }

        Aws::String GetNameForCommunicationTimeConfigType(CommunicationTimeConfigType enumValue)
        {
          switch(enumValue)
          {
          case CommunicationTimeConfigType::NOT_SET:
            return {};
          case CommunicationTimeConfigType::TELEPHONY:
            return "TELEPHONY";
          case CommunicationTimeConfigType::SMS:
            return "SMS";
          case CommunicationTimeConfigType::EMAIL:
            return "EMAIL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CommunicationTimeConfigTypeMapper
    } // namespace Model
  } // namespace ConnectCampaignsV2
} // namespace Aws
