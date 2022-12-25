/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/ReadSetActivationJobItemStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Omics
  {
    namespace Model
    {
      namespace ReadSetActivationJobItemStatusMapper
      {

        static const int NOT_STARTED_HASH = HashingUtils::HashString("NOT_STARTED");
        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int FINISHED_HASH = HashingUtils::HashString("FINISHED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        ReadSetActivationJobItemStatus GetReadSetActivationJobItemStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NOT_STARTED_HASH)
          {
            return ReadSetActivationJobItemStatus::NOT_STARTED;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return ReadSetActivationJobItemStatus::IN_PROGRESS;
          }
          else if (hashCode == FINISHED_HASH)
          {
            return ReadSetActivationJobItemStatus::FINISHED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return ReadSetActivationJobItemStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReadSetActivationJobItemStatus>(hashCode);
          }

          return ReadSetActivationJobItemStatus::NOT_SET;
        }

        Aws::String GetNameForReadSetActivationJobItemStatus(ReadSetActivationJobItemStatus enumValue)
        {
          switch(enumValue)
          {
          case ReadSetActivationJobItemStatus::NOT_STARTED:
            return "NOT_STARTED";
          case ReadSetActivationJobItemStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case ReadSetActivationJobItemStatus::FINISHED:
            return "FINISHED";
          case ReadSetActivationJobItemStatus::FAILED:
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

      } // namespace ReadSetActivationJobItemStatusMapper
    } // namespace Model
  } // namespace Omics
} // namespace Aws
