/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/BuildBatchPhaseType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodeBuild
  {
    namespace Model
    {
      namespace BuildBatchPhaseTypeMapper
      {

        static const int SUBMITTED_HASH = HashingUtils::HashString("SUBMITTED");
        static const int DOWNLOAD_BATCHSPEC_HASH = HashingUtils::HashString("DOWNLOAD_BATCHSPEC");
        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int COMBINE_ARTIFACTS_HASH = HashingUtils::HashString("COMBINE_ARTIFACTS");
        static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int STOPPED_HASH = HashingUtils::HashString("STOPPED");


        BuildBatchPhaseType GetBuildBatchPhaseTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SUBMITTED_HASH)
          {
            return BuildBatchPhaseType::SUBMITTED;
          }
          else if (hashCode == DOWNLOAD_BATCHSPEC_HASH)
          {
            return BuildBatchPhaseType::DOWNLOAD_BATCHSPEC;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return BuildBatchPhaseType::IN_PROGRESS;
          }
          else if (hashCode == COMBINE_ARTIFACTS_HASH)
          {
            return BuildBatchPhaseType::COMBINE_ARTIFACTS;
          }
          else if (hashCode == SUCCEEDED_HASH)
          {
            return BuildBatchPhaseType::SUCCEEDED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return BuildBatchPhaseType::FAILED;
          }
          else if (hashCode == STOPPED_HASH)
          {
            return BuildBatchPhaseType::STOPPED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BuildBatchPhaseType>(hashCode);
          }

          return BuildBatchPhaseType::NOT_SET;
        }

        Aws::String GetNameForBuildBatchPhaseType(BuildBatchPhaseType enumValue)
        {
          switch(enumValue)
          {
          case BuildBatchPhaseType::SUBMITTED:
            return "SUBMITTED";
          case BuildBatchPhaseType::DOWNLOAD_BATCHSPEC:
            return "DOWNLOAD_BATCHSPEC";
          case BuildBatchPhaseType::IN_PROGRESS:
            return "IN_PROGRESS";
          case BuildBatchPhaseType::COMBINE_ARTIFACTS:
            return "COMBINE_ARTIFACTS";
          case BuildBatchPhaseType::SUCCEEDED:
            return "SUCCEEDED";
          case BuildBatchPhaseType::FAILED:
            return "FAILED";
          case BuildBatchPhaseType::STOPPED:
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

      } // namespace BuildBatchPhaseTypeMapper
    } // namespace Model
  } // namespace CodeBuild
} // namespace Aws
