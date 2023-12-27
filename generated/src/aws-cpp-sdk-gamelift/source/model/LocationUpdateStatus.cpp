/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/LocationUpdateStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GameLift
  {
    namespace Model
    {
      namespace LocationUpdateStatusMapper
      {

        static const int PENDING_UPDATE_HASH = HashingUtils::HashString("PENDING_UPDATE");


        LocationUpdateStatus GetLocationUpdateStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_UPDATE_HASH)
          {
            return LocationUpdateStatus::PENDING_UPDATE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LocationUpdateStatus>(hashCode);
          }

          return LocationUpdateStatus::NOT_SET;
        }

        Aws::String GetNameForLocationUpdateStatus(LocationUpdateStatus enumValue)
        {
          switch(enumValue)
          {
          case LocationUpdateStatus::NOT_SET:
            return {};
          case LocationUpdateStatus::PENDING_UPDATE:
            return "PENDING_UPDATE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LocationUpdateStatusMapper
    } // namespace Model
  } // namespace GameLift
} // namespace Aws
