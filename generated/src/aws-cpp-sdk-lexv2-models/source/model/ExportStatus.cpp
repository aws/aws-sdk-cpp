/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/ExportStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LexModelsV2
  {
    namespace Model
    {
      namespace ExportStatusMapper
      {

        static const int InProgress_HASH = HashingUtils::HashString("InProgress");
        static const int Completed_HASH = HashingUtils::HashString("Completed");
        static const int Failed_HASH = HashingUtils::HashString("Failed");
        static const int Deleting_HASH = HashingUtils::HashString("Deleting");


        ExportStatus GetExportStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == InProgress_HASH)
          {
            return ExportStatus::InProgress;
          }
          else if (hashCode == Completed_HASH)
          {
            return ExportStatus::Completed;
          }
          else if (hashCode == Failed_HASH)
          {
            return ExportStatus::Failed;
          }
          else if (hashCode == Deleting_HASH)
          {
            return ExportStatus::Deleting;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ExportStatus>(hashCode);
          }

          return ExportStatus::NOT_SET;
        }

        Aws::String GetNameForExportStatus(ExportStatus enumValue)
        {
          switch(enumValue)
          {
          case ExportStatus::NOT_SET:
            return {};
          case ExportStatus::InProgress:
            return "InProgress";
          case ExportStatus::Completed:
            return "Completed";
          case ExportStatus::Failed:
            return "Failed";
          case ExportStatus::Deleting:
            return "Deleting";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ExportStatusMapper
    } // namespace Model
  } // namespace LexModelsV2
} // namespace Aws
