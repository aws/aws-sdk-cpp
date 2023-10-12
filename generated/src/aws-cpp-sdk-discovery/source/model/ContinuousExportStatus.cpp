/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/discovery/model/ContinuousExportStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ApplicationDiscoveryService
  {
    namespace Model
    {
      namespace ContinuousExportStatusMapper
      {

        static constexpr uint32_t START_IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("START_IN_PROGRESS");
        static constexpr uint32_t START_FAILED_HASH = ConstExprHashingUtils::HashString("START_FAILED");
        static constexpr uint32_t ACTIVE_HASH = ConstExprHashingUtils::HashString("ACTIVE");
        static constexpr uint32_t ERROR__HASH = ConstExprHashingUtils::HashString("ERROR");
        static constexpr uint32_t STOP_IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("STOP_IN_PROGRESS");
        static constexpr uint32_t STOP_FAILED_HASH = ConstExprHashingUtils::HashString("STOP_FAILED");
        static constexpr uint32_t INACTIVE_HASH = ConstExprHashingUtils::HashString("INACTIVE");


        ContinuousExportStatus GetContinuousExportStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == START_IN_PROGRESS_HASH)
          {
            return ContinuousExportStatus::START_IN_PROGRESS;
          }
          else if (hashCode == START_FAILED_HASH)
          {
            return ContinuousExportStatus::START_FAILED;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return ContinuousExportStatus::ACTIVE;
          }
          else if (hashCode == ERROR__HASH)
          {
            return ContinuousExportStatus::ERROR_;
          }
          else if (hashCode == STOP_IN_PROGRESS_HASH)
          {
            return ContinuousExportStatus::STOP_IN_PROGRESS;
          }
          else if (hashCode == STOP_FAILED_HASH)
          {
            return ContinuousExportStatus::STOP_FAILED;
          }
          else if (hashCode == INACTIVE_HASH)
          {
            return ContinuousExportStatus::INACTIVE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ContinuousExportStatus>(hashCode);
          }

          return ContinuousExportStatus::NOT_SET;
        }

        Aws::String GetNameForContinuousExportStatus(ContinuousExportStatus enumValue)
        {
          switch(enumValue)
          {
          case ContinuousExportStatus::NOT_SET:
            return {};
          case ContinuousExportStatus::START_IN_PROGRESS:
            return "START_IN_PROGRESS";
          case ContinuousExportStatus::START_FAILED:
            return "START_FAILED";
          case ContinuousExportStatus::ACTIVE:
            return "ACTIVE";
          case ContinuousExportStatus::ERROR_:
            return "ERROR";
          case ContinuousExportStatus::STOP_IN_PROGRESS:
            return "STOP_IN_PROGRESS";
          case ContinuousExportStatus::STOP_FAILED:
            return "STOP_FAILED";
          case ContinuousExportStatus::INACTIVE:
            return "INACTIVE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ContinuousExportStatusMapper
    } // namespace Model
  } // namespace ApplicationDiscoveryService
} // namespace Aws
