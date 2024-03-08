/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/LifecycleExecutionResourceStatus.h>
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
      namespace LifecycleExecutionResourceStatusMapper
      {

        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int SKIPPED_HASH = HashingUtils::HashString("SKIPPED");
        static const int SUCCESS_HASH = HashingUtils::HashString("SUCCESS");


        LifecycleExecutionResourceStatus GetLifecycleExecutionResourceStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FAILED_HASH)
          {
            return LifecycleExecutionResourceStatus::FAILED;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return LifecycleExecutionResourceStatus::IN_PROGRESS;
          }
          else if (hashCode == SKIPPED_HASH)
          {
            return LifecycleExecutionResourceStatus::SKIPPED;
          }
          else if (hashCode == SUCCESS_HASH)
          {
            return LifecycleExecutionResourceStatus::SUCCESS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LifecycleExecutionResourceStatus>(hashCode);
          }

          return LifecycleExecutionResourceStatus::NOT_SET;
        }

        Aws::String GetNameForLifecycleExecutionResourceStatus(LifecycleExecutionResourceStatus enumValue)
        {
          switch(enumValue)
          {
          case LifecycleExecutionResourceStatus::NOT_SET:
            return {};
          case LifecycleExecutionResourceStatus::FAILED:
            return "FAILED";
          case LifecycleExecutionResourceStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case LifecycleExecutionResourceStatus::SKIPPED:
            return "SKIPPED";
          case LifecycleExecutionResourceStatus::SUCCESS:
            return "SUCCESS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LifecycleExecutionResourceStatusMapper
    } // namespace Model
  } // namespace imagebuilder
} // namespace Aws
