/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotanalytics/model/ReprocessingStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTAnalytics
  {
    namespace Model
    {
      namespace ReprocessingStatusMapper
      {

        static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
        static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");
        static const int CANCELLED_HASH = HashingUtils::HashString("CANCELLED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        ReprocessingStatus GetReprocessingStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RUNNING_HASH)
          {
            return ReprocessingStatus::RUNNING;
          }
          else if (hashCode == SUCCEEDED_HASH)
          {
            return ReprocessingStatus::SUCCEEDED;
          }
          else if (hashCode == CANCELLED_HASH)
          {
            return ReprocessingStatus::CANCELLED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return ReprocessingStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReprocessingStatus>(hashCode);
          }

          return ReprocessingStatus::NOT_SET;
        }

        Aws::String GetNameForReprocessingStatus(ReprocessingStatus enumValue)
        {
          switch(enumValue)
          {
          case ReprocessingStatus::RUNNING:
            return "RUNNING";
          case ReprocessingStatus::SUCCEEDED:
            return "SUCCEEDED";
          case ReprocessingStatus::CANCELLED:
            return "CANCELLED";
          case ReprocessingStatus::FAILED:
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

      } // namespace ReprocessingStatusMapper
    } // namespace Model
  } // namespace IoTAnalytics
} // namespace Aws
