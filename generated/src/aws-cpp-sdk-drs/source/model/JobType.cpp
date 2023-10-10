/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/drs/model/JobType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace drs
  {
    namespace Model
    {
      namespace JobTypeMapper
      {

        static const int LAUNCH_HASH = HashingUtils::HashString("LAUNCH");
        static const int TERMINATE_HASH = HashingUtils::HashString("TERMINATE");
        static const int CREATE_CONVERTED_SNAPSHOT_HASH = HashingUtils::HashString("CREATE_CONVERTED_SNAPSHOT");


        JobType GetJobTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LAUNCH_HASH)
          {
            return JobType::LAUNCH;
          }
          else if (hashCode == TERMINATE_HASH)
          {
            return JobType::TERMINATE;
          }
          else if (hashCode == CREATE_CONVERTED_SNAPSHOT_HASH)
          {
            return JobType::CREATE_CONVERTED_SNAPSHOT;
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
          case JobType::LAUNCH:
            return "LAUNCH";
          case JobType::TERMINATE:
            return "TERMINATE";
          case JobType::CREATE_CONVERTED_SNAPSHOT:
            return "CREATE_CONVERTED_SNAPSHOT";
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
  } // namespace drs
} // namespace Aws
