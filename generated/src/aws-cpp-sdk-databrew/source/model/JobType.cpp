/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/databrew/model/JobType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GlueDataBrew
  {
    namespace Model
    {
      namespace JobTypeMapper
      {

        static const int PROFILE_HASH = HashingUtils::HashString("PROFILE");
        static const int RECIPE_HASH = HashingUtils::HashString("RECIPE");


        JobType GetJobTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PROFILE_HASH)
          {
            return JobType::PROFILE;
          }
          else if (hashCode == RECIPE_HASH)
          {
            return JobType::RECIPE;
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
          case JobType::PROFILE:
            return "PROFILE";
          case JobType::RECIPE:
            return "RECIPE";
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
  } // namespace GlueDataBrew
} // namespace Aws
