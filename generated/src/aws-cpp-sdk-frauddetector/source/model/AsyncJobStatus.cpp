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

        static const int IN_PROGRESS_INITIALIZING_HASH = HashingUtils::HashString("IN_PROGRESS_INITIALIZING");
        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int CANCEL_IN_PROGRESS_HASH = HashingUtils::HashString("CANCEL_IN_PROGRESS");
        static const int CANCELED_HASH = HashingUtils::HashString("CANCELED");
        static const int COMPLETE_HASH = HashingUtils::HashString("COMPLETE");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        AsyncJobStatus GetAsyncJobStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
