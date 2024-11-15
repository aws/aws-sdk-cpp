/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcampaignsv2/model/CampaignState.h>
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
      namespace CampaignStateMapper
      {

        static const int Initialized_HASH = HashingUtils::HashString("Initialized");
        static const int Running_HASH = HashingUtils::HashString("Running");
        static const int Paused_HASH = HashingUtils::HashString("Paused");
        static const int Stopped_HASH = HashingUtils::HashString("Stopped");
        static const int Failed_HASH = HashingUtils::HashString("Failed");
        static const int Completed_HASH = HashingUtils::HashString("Completed");


        CampaignState GetCampaignStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Initialized_HASH)
          {
            return CampaignState::Initialized;
          }
          else if (hashCode == Running_HASH)
          {
            return CampaignState::Running;
          }
          else if (hashCode == Paused_HASH)
          {
            return CampaignState::Paused;
          }
          else if (hashCode == Stopped_HASH)
          {
            return CampaignState::Stopped;
          }
          else if (hashCode == Failed_HASH)
          {
            return CampaignState::Failed;
          }
          else if (hashCode == Completed_HASH)
          {
            return CampaignState::Completed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CampaignState>(hashCode);
          }

          return CampaignState::NOT_SET;
        }

        Aws::String GetNameForCampaignState(CampaignState enumValue)
        {
          switch(enumValue)
          {
          case CampaignState::NOT_SET:
            return {};
          case CampaignState::Initialized:
            return "Initialized";
          case CampaignState::Running:
            return "Running";
          case CampaignState::Paused:
            return "Paused";
          case CampaignState::Stopped:
            return "Stopped";
          case CampaignState::Failed:
            return "Failed";
          case CampaignState::Completed:
            return "Completed";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CampaignStateMapper
    } // namespace Model
  } // namespace ConnectCampaignsV2
} // namespace Aws
