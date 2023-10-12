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

        static constexpr uint32_t ACTIVE_HASH = ConstExprHashingUtils::HashString("ACTIVE");
        static constexpr uint32_t ACTIVATING_HASH = ConstExprHashingUtils::HashString("ACTIVATING");
        static constexpr uint32_t DELETING_HASH = ConstExprHashingUtils::HashString("DELETING");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");
        static constexpr uint32_t INACTIVE_HASH = ConstExprHashingUtils::HashString("INACTIVE");
        static constexpr uint32_t LEARNING_HASH = ConstExprHashingUtils::HashString("LEARNING");
        static constexpr uint32_t BACK_TEST_ACTIVATING_HASH = ConstExprHashingUtils::HashString("BACK_TEST_ACTIVATING");
        static constexpr uint32_t BACK_TEST_ACTIVE_HASH = ConstExprHashingUtils::HashString("BACK_TEST_ACTIVE");
        static constexpr uint32_t BACK_TEST_COMPLETE_HASH = ConstExprHashingUtils::HashString("BACK_TEST_COMPLETE");
        static constexpr uint32_t DEACTIVATED_HASH = ConstExprHashingUtils::HashString("DEACTIVATED");
        static constexpr uint32_t DEACTIVATING_HASH = ConstExprHashingUtils::HashString("DEACTIVATING");


        AnomalyDetectorStatus GetAnomalyDetectorStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
