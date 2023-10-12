/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/frauddetector/model/AsyncJobStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace FraudDetector
  {
    namespace Model
    {
      namespace AsyncJobStatusMapper
      {

        static constexpr uint32_t IN_PROGRESS_INITIALIZING_HASH = ConstExprHashingUtils::HashString("IN_PROGRESS_INITIALIZING");
        static constexpr uint32_t IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("IN_PROGRESS");
        static constexpr uint32_t CANCEL_IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("CANCEL_IN_PROGRESS");
        static constexpr uint32_t CANCELED_HASH = ConstExprHashingUtils::HashString("CANCELED");
        static constexpr uint32_t COMPLETE_HASH = ConstExprHashingUtils::HashString("COMPLETE");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");


        AsyncJobStatus GetAsyncJobStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IN_PROGRESS_INITIALIZING_HASH)
          {
            return AsyncJobStatus::IN_PROGRESS_INITIALIZING;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return AsyncJobStatus::IN_PROGRESS;
          }
          else if (hashCode == CANCEL_IN_PROGRESS_HASH)
          {
            return AsyncJobStatus::CANCEL_IN_PROGRESS;
          }
          else if (hashCode == CANCELED_HASH)
          {
            return AsyncJobStatus::CANCELED;
          }
          else if (hashCode == COMPLETE_HASH)
          {
            return AsyncJobStatus::COMPLETE;
          }
          else if (hashCode == FAILED_HASH)
          {
            return AsyncJobStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AsyncJobStatus>(hashCode);
          }

          return AsyncJobStatus::NOT_SET;
        }

        Aws::String GetNameForAsyncJobStatus(AsyncJobStatus enumValue)
        {
          switch(enumValue)
          {
          case AsyncJobStatus::NOT_SET:
            return {};
          case AsyncJobStatus::IN_PROGRESS_INITIALIZING:
            return "IN_PROGRESS_INITIALIZING";
          case AsyncJobStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case AsyncJobStatus::CANCEL_IN_PROGRESS:
            return "CANCEL_IN_PROGRESS";
          case AsyncJobStatus::CANCELED:
            return "CANCELED";
          case AsyncJobStatus::COMPLETE:
            return "COMPLETE";
          case AsyncJobStatus::FAILED:
            return "FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AsyncJobStatusMapper
    } // namespace Model
  } // namespace FraudDetector
} // namespace Aws
