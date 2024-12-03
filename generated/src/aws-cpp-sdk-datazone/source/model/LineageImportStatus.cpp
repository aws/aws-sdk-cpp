/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/LineageImportStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DataZone
  {
    namespace Model
    {
      namespace LineageImportStatusMapper
      {

        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int SUCCESS_HASH = HashingUtils::HashString("SUCCESS");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int PARTIALLY_SUCCEEDED_HASH = HashingUtils::HashString("PARTIALLY_SUCCEEDED");


        LineageImportStatus GetLineageImportStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IN_PROGRESS_HASH)
          {
            return LineageImportStatus::IN_PROGRESS;
          }
          else if (hashCode == SUCCESS_HASH)
          {
            return LineageImportStatus::SUCCESS;
          }
          else if (hashCode == FAILED_HASH)
          {
            return LineageImportStatus::FAILED;
          }
          else if (hashCode == PARTIALLY_SUCCEEDED_HASH)
          {
            return LineageImportStatus::PARTIALLY_SUCCEEDED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LineageImportStatus>(hashCode);
          }

          return LineageImportStatus::NOT_SET;
        }

        Aws::String GetNameForLineageImportStatus(LineageImportStatus enumValue)
        {
          switch(enumValue)
          {
          case LineageImportStatus::NOT_SET:
            return {};
          case LineageImportStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case LineageImportStatus::SUCCESS:
            return "SUCCESS";
          case LineageImportStatus::FAILED:
            return "FAILED";
          case LineageImportStatus::PARTIALLY_SUCCEEDED:
            return "PARTIALLY_SUCCEEDED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LineageImportStatusMapper
    } // namespace Model
  } // namespace DataZone
} // namespace Aws
