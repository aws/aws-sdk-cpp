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

        static constexpr uint32_t active_HASH = ConstExprHashingUtils::HashString("active");
        static constexpr uint32_t cancelling_HASH = ConstExprHashingUtils::HashString("cancelling");
        static constexpr uint32_t cancelled_HASH = ConstExprHashingUtils::HashString("cancelled");
        static constexpr uint32_t completed_HASH = ConstExprHashingUtils::HashString("completed");


        ExportTaskState GetExportTaskStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case ExportTaskState::NOT_SET:
            return {};
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
