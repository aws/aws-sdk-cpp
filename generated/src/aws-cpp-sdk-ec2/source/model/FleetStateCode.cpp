/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/FleetStateCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EC2
  {
    namespace Model
    {
      namespace FleetStateCodeMapper
      {

        static const int submitted_HASH = HashingUtils::HashString("submitted");
        static const int active_HASH = HashingUtils::HashString("active");
        static const int deleted_HASH = HashingUtils::HashString("deleted");
        static const int failed_HASH = HashingUtils::HashString("failed");
        static const int deleted_running_HASH = HashingUtils::HashString("deleted_running");
        static const int deleted_terminating_HASH = HashingUtils::HashString("deleted_terminating");
        static const int modifying_HASH = HashingUtils::HashString("modifying");


        FleetStateCode GetFleetStateCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == submitted_HASH)
          {
            return FleetStateCode::submitted;
          }
          else if (hashCode == active_HASH)
          {
            return FleetStateCode::active;
          }
          else if (hashCode == deleted_HASH)
          {
            return FleetStateCode::deleted;
          }
          else if (hashCode == failed_HASH)
          {
            return FleetStateCode::failed;
          }
          else if (hashCode == deleted_running_HASH)
          {
            return FleetStateCode::deleted_running;
          }
          else if (hashCode == deleted_terminating_HASH)
          {
            return FleetStateCode::deleted_terminating;
          }
          else if (hashCode == modifying_HASH)
          {
            return FleetStateCode::modifying;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FleetStateCode>(hashCode);
          }

          return FleetStateCode::NOT_SET;
        }

        Aws::String GetNameForFleetStateCode(FleetStateCode enumValue)
        {
          switch(enumValue)
          {
          case FleetStateCode::submitted:
            return "submitted";
          case FleetStateCode::active:
            return "active";
          case FleetStateCode::deleted:
            return "deleted";
          case FleetStateCode::failed:
            return "failed";
          case FleetStateCode::deleted_running:
            return "deleted_running";
          case FleetStateCode::deleted_terminating:
            return "deleted_terminating";
          case FleetStateCode::modifying:
            return "modifying";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FleetStateCodeMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
