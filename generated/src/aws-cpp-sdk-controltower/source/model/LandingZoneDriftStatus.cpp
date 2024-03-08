/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/controltower/model/LandingZoneDriftStatus.h>
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
      namespace LandingZoneDriftStatusMapper
      {

        static const int DRIFTED_HASH = HashingUtils::HashString("DRIFTED");
        static const int IN_SYNC_HASH = HashingUtils::HashString("IN_SYNC");


        LandingZoneDriftStatus GetLandingZoneDriftStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DRIFTED_HASH)
          {
            return LandingZoneDriftStatus::DRIFTED;
          }
          else if (hashCode == IN_SYNC_HASH)
          {
            return LandingZoneDriftStatus::IN_SYNC;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LandingZoneDriftStatus>(hashCode);
          }

          return LandingZoneDriftStatus::NOT_SET;
        }

        Aws::String GetNameForLandingZoneDriftStatus(LandingZoneDriftStatus enumValue)
        {
          switch(enumValue)
          {
          case LandingZoneDriftStatus::NOT_SET:
            return {};
          case LandingZoneDriftStatus::DRIFTED:
            return "DRIFTED";
          case LandingZoneDriftStatus::IN_SYNC:
            return "IN_SYNC";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LandingZoneDriftStatusMapper
    } // namespace Model
  } // namespace ControlTower
} // namespace Aws
