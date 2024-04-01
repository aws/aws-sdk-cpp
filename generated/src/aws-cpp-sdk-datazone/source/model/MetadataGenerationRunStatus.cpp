/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/MetadataGenerationRunStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DataZone
  {
    namespace Model
    {
      namespace MetadataGenerationRunStatusMapper
      {

        static const int SUBMITTED_HASH = HashingUtils::HashString("SUBMITTED");
        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int CANCELED_HASH = HashingUtils::HashString("CANCELED");
        static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        MetadataGenerationRunStatus GetMetadataGenerationRunStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SUBMITTED_HASH)
          {
            return MetadataGenerationRunStatus::SUBMITTED;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return MetadataGenerationRunStatus::IN_PROGRESS;
          }
          else if (hashCode == CANCELED_HASH)
          {
            return MetadataGenerationRunStatus::CANCELED;
          }
          else if (hashCode == SUCCEEDED_HASH)
          {
            return MetadataGenerationRunStatus::SUCCEEDED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return MetadataGenerationRunStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MetadataGenerationRunStatus>(hashCode);
          }

          return MetadataGenerationRunStatus::NOT_SET;
        }

        Aws::String GetNameForMetadataGenerationRunStatus(MetadataGenerationRunStatus enumValue)
        {
          switch(enumValue)
          {
          case MetadataGenerationRunStatus::NOT_SET:
            return {};
          case MetadataGenerationRunStatus::SUBMITTED:
            return "SUBMITTED";
          case MetadataGenerationRunStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case MetadataGenerationRunStatus::CANCELED:
            return "CANCELED";
          case MetadataGenerationRunStatus::SUCCEEDED:
            return "SUCCEEDED";
          case MetadataGenerationRunStatus::FAILED:
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

      } // namespace MetadataGenerationRunStatusMapper
    } // namespace Model
  } // namespace DataZone
} // namespace Aws
