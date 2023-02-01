/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/TrafficDistributionGroupStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Connect
  {
    namespace Model
    {
      namespace TrafficDistributionGroupStatusMapper
      {

        static const int CREATION_IN_PROGRESS_HASH = HashingUtils::HashString("CREATION_IN_PROGRESS");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int CREATION_FAILED_HASH = HashingUtils::HashString("CREATION_FAILED");
        static const int PENDING_DELETION_HASH = HashingUtils::HashString("PENDING_DELETION");
        static const int DELETION_FAILED_HASH = HashingUtils::HashString("DELETION_FAILED");
        static const int UPDATE_IN_PROGRESS_HASH = HashingUtils::HashString("UPDATE_IN_PROGRESS");


        TrafficDistributionGroupStatus GetTrafficDistributionGroupStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATION_IN_PROGRESS_HASH)
          {
            return TrafficDistributionGroupStatus::CREATION_IN_PROGRESS;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return TrafficDistributionGroupStatus::ACTIVE;
          }
          else if (hashCode == CREATION_FAILED_HASH)
          {
            return TrafficDistributionGroupStatus::CREATION_FAILED;
          }
          else if (hashCode == PENDING_DELETION_HASH)
          {
            return TrafficDistributionGroupStatus::PENDING_DELETION;
          }
          else if (hashCode == DELETION_FAILED_HASH)
          {
            return TrafficDistributionGroupStatus::DELETION_FAILED;
          }
          else if (hashCode == UPDATE_IN_PROGRESS_HASH)
          {
            return TrafficDistributionGroupStatus::UPDATE_IN_PROGRESS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TrafficDistributionGroupStatus>(hashCode);
          }

          return TrafficDistributionGroupStatus::NOT_SET;
        }

        Aws::String GetNameForTrafficDistributionGroupStatus(TrafficDistributionGroupStatus enumValue)
        {
          switch(enumValue)
          {
          case TrafficDistributionGroupStatus::CREATION_IN_PROGRESS:
            return "CREATION_IN_PROGRESS";
          case TrafficDistributionGroupStatus::ACTIVE:
            return "ACTIVE";
          case TrafficDistributionGroupStatus::CREATION_FAILED:
            return "CREATION_FAILED";
          case TrafficDistributionGroupStatus::PENDING_DELETION:
            return "PENDING_DELETION";
          case TrafficDistributionGroupStatus::DELETION_FAILED:
            return "DELETION_FAILED";
          case TrafficDistributionGroupStatus::UPDATE_IN_PROGRESS:
            return "UPDATE_IN_PROGRESS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TrafficDistributionGroupStatusMapper
    } // namespace Model
  } // namespace Connect
} // namespace Aws
