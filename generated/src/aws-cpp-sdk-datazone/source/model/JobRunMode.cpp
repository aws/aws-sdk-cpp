/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/JobRunMode.h>
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
      namespace JobRunModeMapper
      {

        static const int SCHEDULED_HASH = HashingUtils::HashString("SCHEDULED");
        static const int ON_DEMAND_HASH = HashingUtils::HashString("ON_DEMAND");


        JobRunMode GetJobRunModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SCHEDULED_HASH)
          {
            return JobRunMode::SCHEDULED;
          }
          else if (hashCode == ON_DEMAND_HASH)
          {
            return JobRunMode::ON_DEMAND;
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
          case JobRunMode::SCHEDULED:
            return "SCHEDULED";
          case JobRunMode::ON_DEMAND:
            return "ON_DEMAND";
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
  } // namespace DataZone
} // namespace Aws
