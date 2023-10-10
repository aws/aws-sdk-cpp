/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutmetrics/model/AnomalyDetectorStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LookoutMetrics
  {
    namespace Model
    {
      namespace AnomalyDetectorStatusMapper
      {

        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int ACTIVATING_HASH = HashingUtils::HashString("ACTIVATING");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int INACTIVE_HASH = HashingUtils::HashString("INACTIVE");
        static const int LEARNING_HASH = HashingUtils::HashString("LEARNING");
        static const int BACK_TEST_ACTIVATING_HASH = HashingUtils::HashString("BACK_TEST_ACTIVATING");
        static const int BACK_TEST_ACTIVE_HASH = HashingUtils::HashString("BACK_TEST_ACTIVE");
        static const int BACK_TEST_COMPLETE_HASH = HashingUtils::HashString("BACK_TEST_COMPLETE");
        static const int DEACTIVATED_HASH = HashingUtils::HashString("DEACTIVATED");
        static const int DEACTIVATING_HASH = HashingUtils::HashString("DEACTIVATING");


        AnomalyDetectorStatus GetAnomalyDetectorStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return AnomalyDetectorStatus::ACTIVE;
          }
          else if (hashCode == ACTIVATING_HASH)
          {
            return AnomalyDetectorStatus::ACTIVATING;
          }
          else if (hashCode == DELETING_HASH)
          {
            return AnomalyDetectorStatus::DELETING;
          }
          else if (hashCode == FAILED_HASH)
          {
            return AnomalyDetectorStatus::FAILED;
          }
          else if (hashCode == INACTIVE_HASH)
          {
            return AnomalyDetectorStatus::INACTIVE;
          }
          else if (hashCode == LEARNING_HASH)
          {
            return AnomalyDetectorStatus::LEARNING;
          }
          else if (hashCode == BACK_TEST_ACTIVATING_HASH)
          {
            return AnomalyDetectorStatus::BACK_TEST_ACTIVATING;
          }
          else if (hashCode == BACK_TEST_ACTIVE_HASH)
          {
            return AnomalyDetectorStatus::BACK_TEST_ACTIVE;
          }
          else if (hashCode == BACK_TEST_COMPLETE_HASH)
          {
            return AnomalyDetectorStatus::BACK_TEST_COMPLETE;
          }
          else if (hashCode == DEACTIVATED_HASH)
          {
            return AnomalyDetectorStatus::DEACTIVATED;
          }
          else if (hashCode == DEACTIVATING_HASH)
          {
            return AnomalyDetectorStatus::DEACTIVATING;
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
          case AnomalyDetectorStatus::ACTIVE:
            return "ACTIVE";
          case AnomalyDetectorStatus::ACTIVATING:
            return "ACTIVATING";
          case AnomalyDetectorStatus::DELETING:
            return "DELETING";
          case AnomalyDetectorStatus::FAILED:
            return "FAILED";
          case AnomalyDetectorStatus::INACTIVE:
            return "INACTIVE";
          case AnomalyDetectorStatus::LEARNING:
            return "LEARNING";
          case AnomalyDetectorStatus::BACK_TEST_ACTIVATING:
            return "BACK_TEST_ACTIVATING";
          case AnomalyDetectorStatus::BACK_TEST_ACTIVE:
            return "BACK_TEST_ACTIVE";
          case AnomalyDetectorStatus::BACK_TEST_COMPLETE:
            return "BACK_TEST_COMPLETE";
          case AnomalyDetectorStatus::DEACTIVATED:
            return "DEACTIVATED";
          case AnomalyDetectorStatus::DEACTIVATING:
            return "DEACTIVATING";
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
  } // namespace LookoutMetrics
} // namespace Aws
