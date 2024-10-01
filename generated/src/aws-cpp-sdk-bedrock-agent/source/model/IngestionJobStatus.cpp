/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/IngestionJobStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace BedrockAgent
  {
    namespace Model
    {
      namespace IngestionJobStatusMapper
      {

        static const int STARTING_HASH = HashingUtils::HashString("STARTING");
        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int COMPLETE_HASH = HashingUtils::HashString("COMPLETE");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int STOPPING_HASH = HashingUtils::HashString("STOPPING");
        static const int STOPPED_HASH = HashingUtils::HashString("STOPPED");


        IngestionJobStatus GetIngestionJobStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STARTING_HASH)
          {
            return IngestionJobStatus::STARTING;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return IngestionJobStatus::IN_PROGRESS;
          }
          else if (hashCode == COMPLETE_HASH)
          {
            return IngestionJobStatus::COMPLETE;
          }
          else if (hashCode == FAILED_HASH)
          {
            return IngestionJobStatus::FAILED;
          }
          else if (hashCode == STOPPING_HASH)
          {
            return IngestionJobStatus::STOPPING;
          }
          else if (hashCode == STOPPED_HASH)
          {
            return IngestionJobStatus::STOPPED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IngestionJobStatus>(hashCode);
          }

          return IngestionJobStatus::NOT_SET;
        }

        Aws::String GetNameForIngestionJobStatus(IngestionJobStatus enumValue)
        {
          switch(enumValue)
          {
          case IngestionJobStatus::NOT_SET:
            return {};
          case IngestionJobStatus::STARTING:
            return "STARTING";
          case IngestionJobStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case IngestionJobStatus::COMPLETE:
            return "COMPLETE";
          case IngestionJobStatus::FAILED:
            return "FAILED";
          case IngestionJobStatus::STOPPING:
            return "STOPPING";
          case IngestionJobStatus::STOPPED:
            return "STOPPED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IngestionJobStatusMapper
    } // namespace Model
  } // namespace BedrockAgent
} // namespace Aws
