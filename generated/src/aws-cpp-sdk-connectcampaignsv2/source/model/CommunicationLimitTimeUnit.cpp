/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcampaignsv2/model/CommunicationLimitTimeUnit.h>
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
      namespace CommunicationLimitTimeUnitMapper
      {

        static const int DAY_HASH = HashingUtils::HashString("DAY");


        CommunicationLimitTimeUnit GetCommunicationLimitTimeUnitForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DAY_HASH)
          {
            return CommunicationLimitTimeUnit::DAY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CommunicationLimitTimeUnit>(hashCode);
          }

          return CommunicationLimitTimeUnit::NOT_SET;
        }

        Aws::String GetNameForCommunicationLimitTimeUnit(CommunicationLimitTimeUnit enumValue)
        {
          switch(enumValue)
          {
          case CommunicationLimitTimeUnit::NOT_SET:
            return {};
          case CommunicationLimitTimeUnit::DAY:
            return "DAY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CommunicationLimitTimeUnitMapper
    } // namespace Model
  } // namespace ConnectCampaignsV2
} // namespace Aws
