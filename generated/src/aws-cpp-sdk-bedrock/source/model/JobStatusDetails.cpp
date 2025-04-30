/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/JobStatusDetails.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Bedrock
  {
    namespace Model
    {
      namespace JobStatusDetailsMapper
      {

        static const int InProgress_HASH = HashingUtils::HashString("InProgress");
        static const int Completed_HASH = HashingUtils::HashString("Completed");
        static const int Stopping_HASH = HashingUtils::HashString("Stopping");
        static const int Stopped_HASH = HashingUtils::HashString("Stopped");
        static const int Failed_HASH = HashingUtils::HashString("Failed");
        static const int NotStarted_HASH = HashingUtils::HashString("NotStarted");


        JobStatusDetails GetJobStatusDetailsForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == InProgress_HASH)
          {
            return JobStatusDetails::InProgress;
          }
          else if (hashCode == Completed_HASH)
          {
            return JobStatusDetails::Completed;
          }
          else if (hashCode == Stopping_HASH)
          {
            return JobStatusDetails::Stopping;
          }
          else if (hashCode == Stopped_HASH)
          {
            return JobStatusDetails::Stopped;
          }
          else if (hashCode == Failed_HASH)
          {
            return JobStatusDetails::Failed;
          }
          else if (hashCode == NotStarted_HASH)
          {
            return JobStatusDetails::NotStarted;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<JobStatusDetails>(hashCode);
          }

          return JobStatusDetails::NOT_SET;
        }

        Aws::String GetNameForJobStatusDetails(JobStatusDetails enumValue)
        {
          switch(enumValue)
          {
          case JobStatusDetails::NOT_SET:
            return {};
          case JobStatusDetails::InProgress:
            return "InProgress";
          case JobStatusDetails::Completed:
            return "Completed";
          case JobStatusDetails::Stopping:
            return "Stopping";
          case JobStatusDetails::Stopped:
            return "Stopped";
          case JobStatusDetails::Failed:
            return "Failed";
          case JobStatusDetails::NotStarted:
            return "NotStarted";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace JobStatusDetailsMapper
    } // namespace Model
  } // namespace Bedrock
} // namespace Aws
