/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/JobType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CleanRooms
  {
    namespace Model
    {
      namespace JobTypeMapper
      {

        static const int BATCH_HASH = HashingUtils::HashString("BATCH");
        static const int INCREMENTAL_HASH = HashingUtils::HashString("INCREMENTAL");
        static const int DELETE_ONLY_HASH = HashingUtils::HashString("DELETE_ONLY");


        JobType GetJobTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BATCH_HASH)
          {
            return JobType::BATCH;
          }
          else if (hashCode == INCREMENTAL_HASH)
          {
            return JobType::INCREMENTAL;
          }
          else if (hashCode == DELETE_ONLY_HASH)
          {
            return JobType::DELETE_ONLY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<JobType>(hashCode);
          }

          return JobType::NOT_SET;
        }

        Aws::String GetNameForJobType(JobType enumValue)
        {
          switch(enumValue)
          {
          case JobType::NOT_SET:
            return {};
          case JobType::BATCH:
            return "BATCH";
          case JobType::INCREMENTAL:
            return "INCREMENTAL";
          case JobType::DELETE_ONLY:
            return "DELETE_ONLY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace JobTypeMapper
    } // namespace Model
  } // namespace CleanRooms
} // namespace Aws
