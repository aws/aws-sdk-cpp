/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcampaignsv2/model/CommunicationLimitsConfigType.h>
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
      namespace CommunicationLimitsConfigTypeMapper
      {

        static const int ALL_CHANNEL_SUBTYPES_HASH = HashingUtils::HashString("ALL_CHANNEL_SUBTYPES");


        CommunicationLimitsConfigType GetCommunicationLimitsConfigTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALL_CHANNEL_SUBTYPES_HASH)
          {
            return CommunicationLimitsConfigType::ALL_CHANNEL_SUBTYPES;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CommunicationLimitsConfigType>(hashCode);
          }

          return CommunicationLimitsConfigType::NOT_SET;
        }

        Aws::String GetNameForCommunicationLimitsConfigType(CommunicationLimitsConfigType enumValue)
        {
          switch(enumValue)
          {
          case CommunicationLimitsConfigType::NOT_SET:
            return {};
          case CommunicationLimitsConfigType::ALL_CHANNEL_SUBTYPES:
            return "ALL_CHANNEL_SUBTYPES";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CommunicationLimitsConfigTypeMapper
    } // namespace Model
  } // namespace ConnectCampaignsV2
} // namespace Aws
