/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/JobMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Glue
  {
    namespace Model
    {
      namespace JobModeMapper
      {

        static const int SCRIPT_HASH = HashingUtils::HashString("SCRIPT");
        static const int VISUAL_HASH = HashingUtils::HashString("VISUAL");
        static const int NOTEBOOK_HASH = HashingUtils::HashString("NOTEBOOK");


        JobMode GetJobModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SCRIPT_HASH)
          {
            return JobMode::SCRIPT;
          }
          else if (hashCode == VISUAL_HASH)
          {
            return JobMode::VISUAL;
          }
          else if (hashCode == NOTEBOOK_HASH)
          {
            return JobMode::NOTEBOOK;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<JobMode>(hashCode);
          }

          return JobMode::NOT_SET;
        }

        Aws::String GetNameForJobMode(JobMode enumValue)
        {
          switch(enumValue)
          {
          case JobMode::NOT_SET:
            return {};
          case JobMode::SCRIPT:
            return "SCRIPT";
          case JobMode::VISUAL:
            return "VISUAL";
          case JobMode::NOTEBOOK:
            return "NOTEBOOK";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace JobModeMapper
    } // namespace Model
  } // namespace Glue
} // namespace Aws
