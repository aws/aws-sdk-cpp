/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ExportTaskState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EC2
  {
    namespace Model
    {
      namespace ExportTaskStateMapper
      {

        static const int active_HASH = HashingUtils::HashString("active");
        static const int cancelling_HASH = HashingUtils::HashString("cancelling");
        static const int cancelled_HASH = HashingUtils::HashString("cancelled");
        static const int completed_HASH = HashingUtils::HashString("completed");


        ExportTaskState GetExportTaskStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == active_HASH)
          {
            return ExportTaskState::active;
          }
          else if (hashCode == cancelling_HASH)
          {
            return ExportTaskState::cancelling;
          }
          else if (hashCode == cancelled_HASH)
          {
            return ExportTaskState::cancelled;
          }
          else if (hashCode == completed_HASH)
          {
            return ExportTaskState::completed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ExportTaskState>(hashCode);
          }

          return ExportTaskState::NOT_SET;
        }

        Aws::String GetNameForExportTaskState(ExportTaskState enumValue)
        {
          switch(enumValue)
          {
          case ExportTaskState::active:
            return "active";
          case ExportTaskState::cancelling:
            return "cancelling";
          case ExportTaskState::cancelled:
            return "cancelled";
          case ExportTaskState::completed:
            return "completed";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ExportTaskStateMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
