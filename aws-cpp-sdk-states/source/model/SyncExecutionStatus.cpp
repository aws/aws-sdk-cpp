/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/states/model/SyncExecutionStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SFN
  {
    namespace Model
    {
      namespace SyncExecutionStatusMapper
      {

        static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int TIMED_OUT_HASH = HashingUtils::HashString("TIMED_OUT");


        SyncExecutionStatus GetSyncExecutionStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SUCCEEDED_HASH)
          {
            return SyncExecutionStatus::SUCCEEDED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return SyncExecutionStatus::FAILED;
          }
          else if (hashCode == TIMED_OUT_HASH)
          {
            return SyncExecutionStatus::TIMED_OUT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SyncExecutionStatus>(hashCode);
          }

          return SyncExecutionStatus::NOT_SET;
        }

        Aws::String GetNameForSyncExecutionStatus(SyncExecutionStatus enumValue)
        {
          switch(enumValue)
          {
          case SyncExecutionStatus::SUCCEEDED:
            return "SUCCEEDED";
          case SyncExecutionStatus::FAILED:
            return "FAILED";
          case SyncExecutionStatus::TIMED_OUT:
            return "TIMED_OUT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SyncExecutionStatusMapper
    } // namespace Model
  } // namespace SFN
} // namespace Aws
