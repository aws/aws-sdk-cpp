/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/controltower/model/LandingZoneStatus.h>
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
      namespace LandingZoneStatusMapper
      {

        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int PROCESSING_HASH = HashingUtils::HashString("PROCESSING");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        LandingZoneStatus GetLandingZoneStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return LandingZoneStatus::ACTIVE;
          }
          else if (hashCode == PROCESSING_HASH)
          {
            return LandingZoneStatus::PROCESSING;
          }
          else if (hashCode == FAILED_HASH)
          {
            return LandingZoneStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LandingZoneStatus>(hashCode);
          }

          return LandingZoneStatus::NOT_SET;
        }

        Aws::String GetNameForLandingZoneStatus(LandingZoneStatus enumValue)
        {
          switch(enumValue)
          {
          case LandingZoneStatus::NOT_SET:
            return {};
          case LandingZoneStatus::ACTIVE:
            return "ACTIVE";
          case LandingZoneStatus::PROCESSING:
            return "PROCESSING";
          case LandingZoneStatus::FAILED:
            return "FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LandingZoneStatusMapper
    } // namespace Model
  } // namespace ControlTower
} // namespace Aws
