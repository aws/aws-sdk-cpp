/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/emr-serverless/model/JobRunMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EMRServerless
  {
    namespace Model
    {
      namespace JobRunModeMapper
      {

        static const int BATCH_HASH = HashingUtils::HashString("BATCH");
        static const int STREAMING_HASH = HashingUtils::HashString("STREAMING");


        JobRunMode GetJobRunModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BATCH_HASH)
          {
            return JobRunMode::BATCH;
          }
          else if (hashCode == STREAMING_HASH)
          {
            return JobRunMode::STREAMING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<JobRunMode>(hashCode);
          }

          return JobRunMode::NOT_SET;
        }

        Aws::String GetNameForJobRunMode(JobRunMode enumValue)
        {
          switch(enumValue)
          {
          case JobRunMode::NOT_SET:
            return {};
          case JobRunMode::BATCH:
            return "BATCH";
          case JobRunMode::STREAMING:
            return "STREAMING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace JobRunModeMapper
    } // namespace Model
  } // namespace EMRServerless
} // namespace Aws
