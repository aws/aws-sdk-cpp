/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/FleetStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace deadline
  {
    namespace Model
    {
      namespace FleetStatusMapper
      {

        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int CREATE_IN_PROGRESS_HASH = HashingUtils::HashString("CREATE_IN_PROGRESS");
        static const int UPDATE_IN_PROGRESS_HASH = HashingUtils::HashString("UPDATE_IN_PROGRESS");
        static const int CREATE_FAILED_HASH = HashingUtils::HashString("CREATE_FAILED");
        static const int UPDATE_FAILED_HASH = HashingUtils::HashString("UPDATE_FAILED");


        FleetStatus GetFleetStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return FleetStatus::ACTIVE;
          }
          else if (hashCode == CREATE_IN_PROGRESS_HASH)
          {
            return FleetStatus::CREATE_IN_PROGRESS;
          }
          else if (hashCode == UPDATE_IN_PROGRESS_HASH)
          {
            return FleetStatus::UPDATE_IN_PROGRESS;
          }
          else if (hashCode == CREATE_FAILED_HASH)
          {
            return FleetStatus::CREATE_FAILED;
          }
          else if (hashCode == UPDATE_FAILED_HASH)
          {
            return FleetStatus::UPDATE_FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FleetStatus>(hashCode);
          }

          return FleetStatus::NOT_SET;
        }

        Aws::String GetNameForFleetStatus(FleetStatus enumValue)
        {
          switch(enumValue)
          {
          case FleetStatus::NOT_SET:
            return {};
          case FleetStatus::ACTIVE:
            return "ACTIVE";
          case FleetStatus::CREATE_IN_PROGRESS:
            return "CREATE_IN_PROGRESS";
          case FleetStatus::UPDATE_IN_PROGRESS:
            return "UPDATE_IN_PROGRESS";
          case FleetStatus::CREATE_FAILED:
            return "CREATE_FAILED";
          case FleetStatus::UPDATE_FAILED:
            return "UPDATE_FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FleetStatusMapper
    } // namespace Model
  } // namespace deadline
} // namespace Aws
