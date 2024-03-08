/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/controltower/model/LandingZoneOperationStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ControlTower
  {
    namespace Model
    {
      namespace LandingZoneOperationStatusMapper
      {

        static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");


        LandingZoneOperationStatus GetLandingZoneOperationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SUCCEEDED_HASH)
          {
            return LandingZoneOperationStatus::SUCCEEDED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return LandingZoneOperationStatus::FAILED;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return LandingZoneOperationStatus::IN_PROGRESS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LandingZoneOperationStatus>(hashCode);
          }

          return LandingZoneOperationStatus::NOT_SET;
        }

        Aws::String GetNameForLandingZoneOperationStatus(LandingZoneOperationStatus enumValue)
        {
          switch(enumValue)
          {
          case LandingZoneOperationStatus::NOT_SET:
            return {};
          case LandingZoneOperationStatus::SUCCEEDED:
            return "SUCCEEDED";
          case LandingZoneOperationStatus::FAILED:
            return "FAILED";
          case LandingZoneOperationStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LandingZoneOperationStatusMapper
    } // namespace Model
  } // namespace ControlTower
} // namespace Aws
