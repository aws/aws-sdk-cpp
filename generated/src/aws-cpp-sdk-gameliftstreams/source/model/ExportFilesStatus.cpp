/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gameliftstreams/model/ExportFilesStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GameLiftStreams
  {
    namespace Model
    {
      namespace ExportFilesStatusMapper
      {

        static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int PENDING_HASH = HashingUtils::HashString("PENDING");


        ExportFilesStatus GetExportFilesStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SUCCEEDED_HASH)
          {
            return ExportFilesStatus::SUCCEEDED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return ExportFilesStatus::FAILED;
          }
          else if (hashCode == PENDING_HASH)
          {
            return ExportFilesStatus::PENDING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ExportFilesStatus>(hashCode);
          }

          return ExportFilesStatus::NOT_SET;
        }

        Aws::String GetNameForExportFilesStatus(ExportFilesStatus enumValue)
        {
          switch(enumValue)
          {
          case ExportFilesStatus::NOT_SET:
            return {};
          case ExportFilesStatus::SUCCEEDED:
            return "SUCCEEDED";
          case ExportFilesStatus::FAILED:
            return "FAILED";
          case ExportFilesStatus::PENDING:
            return "PENDING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ExportFilesStatusMapper
    } // namespace Model
  } // namespace GameLiftStreams
} // namespace Aws
