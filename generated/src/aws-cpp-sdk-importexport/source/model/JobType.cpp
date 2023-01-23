/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/importexport/model/JobType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ImportExport
  {
    namespace Model
    {
      namespace JobTypeMapper
      {

        static const int Import_HASH = HashingUtils::HashString("Import");
        static const int Export_HASH = HashingUtils::HashString("Export");


        JobType GetJobTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Import_HASH)
          {
            return JobType::Import;
          }
          else if (hashCode == Export_HASH)
          {
            return JobType::Export;
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
          case JobType::Import:
            return "Import";
          case JobType::Export:
            return "Export";
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
  } // namespace ImportExport
} // namespace Aws
