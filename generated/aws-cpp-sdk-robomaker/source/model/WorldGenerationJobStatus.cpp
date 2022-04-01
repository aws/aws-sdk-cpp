/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/robomaker/model/WorldGenerationJobStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace RoboMaker
  {
    namespace Model
    {
      namespace WorldGenerationJobStatusMapper
      {

        static const int Pending_HASH = HashingUtils::HashString("Pending");
        static const int Running_HASH = HashingUtils::HashString("Running");
        static const int Completed_HASH = HashingUtils::HashString("Completed");
        static const int Failed_HASH = HashingUtils::HashString("Failed");
        static const int PartialFailed_HASH = HashingUtils::HashString("PartialFailed");
        static const int Canceling_HASH = HashingUtils::HashString("Canceling");
        static const int Canceled_HASH = HashingUtils::HashString("Canceled");


        WorldGenerationJobStatus GetWorldGenerationJobStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Pending_HASH)
          {
            return WorldGenerationJobStatus::Pending;
          }
          else if (hashCode == Running_HASH)
          {
            return WorldGenerationJobStatus::Running;
          }
          else if (hashCode == Completed_HASH)
          {
            return WorldGenerationJobStatus::Completed;
          }
          else if (hashCode == Failed_HASH)
          {
            return WorldGenerationJobStatus::Failed;
          }
          else if (hashCode == PartialFailed_HASH)
          {
            return WorldGenerationJobStatus::PartialFailed;
          }
          else if (hashCode == Canceling_HASH)
          {
            return WorldGenerationJobStatus::Canceling;
          }
          else if (hashCode == Canceled_HASH)
          {
            return WorldGenerationJobStatus::Canceled;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<WorldGenerationJobStatus>(hashCode);
          }

          return WorldGenerationJobStatus::NOT_SET;
        }

        Aws::String GetNameForWorldGenerationJobStatus(WorldGenerationJobStatus enumValue)
        {
          switch(enumValue)
          {
          case WorldGenerationJobStatus::Pending:
            return "Pending";
          case WorldGenerationJobStatus::Running:
            return "Running";
          case WorldGenerationJobStatus::Completed:
            return "Completed";
          case WorldGenerationJobStatus::Failed:
            return "Failed";
          case WorldGenerationJobStatus::PartialFailed:
            return "PartialFailed";
          case WorldGenerationJobStatus::Canceling:
            return "Canceling";
          case WorldGenerationJobStatus::Canceled:
            return "Canceled";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace WorldGenerationJobStatusMapper
    } // namespace Model
  } // namespace RoboMaker
} // namespace Aws
