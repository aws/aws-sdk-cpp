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

        static const int START_IN_PROGRESS_HASH = HashingUtils::HashString("START_IN_PROGRESS");
        static const int START_FAILED_HASH = HashingUtils::HashString("START_FAILED");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int ERROR__HASH = HashingUtils::HashString("ERROR");
        static const int STOP_IN_PROGRESS_HASH = HashingUtils::HashString("STOP_IN_PROGRESS");
        static const int STOP_FAILED_HASH = HashingUtils::HashString("STOP_FAILED");
        static const int INACTIVE_HASH = HashingUtils::HashString("INACTIVE");


        ContinuousExportStatus GetContinuousExportStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
