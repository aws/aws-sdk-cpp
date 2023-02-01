/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotfleetwise/model/CampaignStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTFleetWise
  {
    namespace Model
    {
      namespace CampaignStatusMapper
      {

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int WAITING_FOR_APPROVAL_HASH = HashingUtils::HashString("WAITING_FOR_APPROVAL");
        static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
        static const int SUSPENDED_HASH = HashingUtils::HashString("SUSPENDED");


        CampaignStatus GetCampaignStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return CampaignStatus::CREATING;
          }
          else if (hashCode == WAITING_FOR_APPROVAL_HASH)
          {
            return CampaignStatus::WAITING_FOR_APPROVAL;
          }
          else if (hashCode == RUNNING_HASH)
          {
            return CampaignStatus::RUNNING;
          }
          else if (hashCode == SUSPENDED_HASH)
          {
            return CampaignStatus::SUSPENDED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CampaignStatus>(hashCode);
          }

          return CampaignStatus::NOT_SET;
        }

        Aws::String GetNameForCampaignStatus(CampaignStatus enumValue)
        {
          switch(enumValue)
          {
          case CampaignStatus::CREATING:
            return "CREATING";
          case CampaignStatus::WAITING_FOR_APPROVAL:
            return "WAITING_FOR_APPROVAL";
          case CampaignStatus::RUNNING:
            return "RUNNING";
          case CampaignStatus::SUSPENDED:
            return "SUSPENDED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CampaignStatusMapper
    } // namespace Model
  } // namespace IoTFleetWise
} // namespace Aws
