/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/LifecycleExecutionStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace imagebuilder
  {
    namespace Model
    {
      namespace LifecycleExecutionStatusMapper
      {

        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int CANCELLED_HASH = HashingUtils::HashString("CANCELLED");
        static const int CANCELLING_HASH = HashingUtils::HashString("CANCELLING");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int SUCCESS_HASH = HashingUtils::HashString("SUCCESS");
        static const int PENDING_HASH = HashingUtils::HashString("PENDING");


        LifecycleExecutionStatus GetLifecycleExecutionStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IN_PROGRESS_HASH)
          {
            return LifecycleExecutionStatus::IN_PROGRESS;
          }
          else if (hashCode == CANCELLED_HASH)
          {
            return LifecycleExecutionStatus::CANCELLED;
          }
          else if (hashCode == CANCELLING_HASH)
          {
            return LifecycleExecutionStatus::CANCELLING;
          }
          else if (hashCode == FAILED_HASH)
          {
            return LifecycleExecutionStatus::FAILED;
          }
          else if (hashCode == SUCCESS_HASH)
          {
            return LifecycleExecutionStatus::SUCCESS;
          }
          else if (hashCode == PENDING_HASH)
          {
            return LifecycleExecutionStatus::PENDING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LifecycleExecutionStatus>(hashCode);
          }

          return LifecycleExecutionStatus::NOT_SET;
        }

        Aws::String GetNameForLifecycleExecutionStatus(LifecycleExecutionStatus enumValue)
        {
          switch(enumValue)
          {
          case LifecycleExecutionStatus::NOT_SET:
            return {};
          case LifecycleExecutionStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case LifecycleExecutionStatus::CANCELLED:
            return "CANCELLED";
          case LifecycleExecutionStatus::CANCELLING:
            return "CANCELLING";
          case LifecycleExecutionStatus::FAILED:
            return "FAILED";
          case LifecycleExecutionStatus::SUCCESS:
            return "SUCCESS";
          case LifecycleExecutionStatus::PENDING:
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

      } // namespace LifecycleExecutionStatusMapper
    } // namespace Model
  } // namespace imagebuilder
} // namespace Aws
