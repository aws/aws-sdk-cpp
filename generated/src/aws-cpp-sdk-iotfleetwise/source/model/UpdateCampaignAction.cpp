/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotfleetwise/model/UpdateCampaignAction.h>
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
      namespace UpdateCampaignActionMapper
      {

        static const int APPROVE_HASH = HashingUtils::HashString("APPROVE");
        static const int SUSPEND_HASH = HashingUtils::HashString("SUSPEND");
        static const int RESUME_HASH = HashingUtils::HashString("RESUME");
        static const int UPDATE_HASH = HashingUtils::HashString("UPDATE");


        UpdateCampaignAction GetUpdateCampaignActionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == APPROVE_HASH)
          {
            return UpdateCampaignAction::APPROVE;
          }
          else if (hashCode == SUSPEND_HASH)
          {
            return UpdateCampaignAction::SUSPEND;
          }
          else if (hashCode == RESUME_HASH)
          {
            return UpdateCampaignAction::RESUME;
          }
          else if (hashCode == UPDATE_HASH)
          {
            return UpdateCampaignAction::UPDATE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UpdateCampaignAction>(hashCode);
          }

          return UpdateCampaignAction::NOT_SET;
        }

        Aws::String GetNameForUpdateCampaignAction(UpdateCampaignAction enumValue)
        {
          switch(enumValue)
          {
          case UpdateCampaignAction::APPROVE:
            return "APPROVE";
          case UpdateCampaignAction::SUSPEND:
            return "SUSPEND";
          case UpdateCampaignAction::RESUME:
            return "RESUME";
          case UpdateCampaignAction::UPDATE:
            return "UPDATE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace UpdateCampaignActionMapper
    } // namespace Model
  } // namespace IoTFleetWise
} // namespace Aws
