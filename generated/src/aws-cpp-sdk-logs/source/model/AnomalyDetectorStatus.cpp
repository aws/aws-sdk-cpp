/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/AnomalyDetectorStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudWatchLogs
  {
    namespace Model
    {
      namespace AnomalyDetectorStatusMapper
      {

        static const int INITIALIZING_HASH = HashingUtils::HashString("INITIALIZING");
        static const int TRAINING_HASH = HashingUtils::HashString("TRAINING");
        static const int ANALYZING_HASH = HashingUtils::HashString("ANALYZING");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int DELETED_HASH = HashingUtils::HashString("DELETED");
        static const int PAUSED_HASH = HashingUtils::HashString("PAUSED");


        AnomalyDetectorStatus GetAnomalyDetectorStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INITIALIZING_HASH)
          {
            return AnomalyDetectorStatus::INITIALIZING;
          }
          else if (hashCode == TRAINING_HASH)
          {
            return AnomalyDetectorStatus::TRAINING;
          }
          else if (hashCode == ANALYZING_HASH)
          {
            return AnomalyDetectorStatus::ANALYZING;
          }
          else if (hashCode == FAILED_HASH)
          {
            return AnomalyDetectorStatus::FAILED;
          }
          else if (hashCode == DELETED_HASH)
          {
            return AnomalyDetectorStatus::DELETED;
          }
          else if (hashCode == PAUSED_HASH)
          {
            return AnomalyDetectorStatus::PAUSED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AnomalyDetectorStatus>(hashCode);
          }

          return AnomalyDetectorStatus::NOT_SET;
        }

        Aws::String GetNameForAnomalyDetectorStatus(AnomalyDetectorStatus enumValue)
        {
          switch(enumValue)
          {
          case AnomalyDetectorStatus::NOT_SET:
            return {};
          case AnomalyDetectorStatus::INITIALIZING:
            return "INITIALIZING";
          case AnomalyDetectorStatus::TRAINING:
            return "TRAINING";
          case AnomalyDetectorStatus::ANALYZING:
            return "ANALYZING";
          case AnomalyDetectorStatus::FAILED:
            return "FAILED";
          case AnomalyDetectorStatus::DELETED:
            return "DELETED";
          case AnomalyDetectorStatus::PAUSED:
            return "PAUSED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AnomalyDetectorStatusMapper
    } // namespace Model
  } // namespace CloudWatchLogs
} // namespace Aws
