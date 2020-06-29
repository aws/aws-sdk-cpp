/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dataexchange/model/JobErrorLimitName.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DataExchange
  {
    namespace Model
    {
      namespace JobErrorLimitNameMapper
      {

        static const int Assets_per_revision_HASH = HashingUtils::HashString("Assets per revision");
        static const int Asset_size_in_GB_HASH = HashingUtils::HashString("Asset size in GB");


        JobErrorLimitName GetJobErrorLimitNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Assets_per_revision_HASH)
          {
            return JobErrorLimitName::Assets_per_revision;
          }
          else if (hashCode == Asset_size_in_GB_HASH)
          {
            return JobErrorLimitName::Asset_size_in_GB;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<JobErrorLimitName>(hashCode);
          }

          return JobErrorLimitName::NOT_SET;
        }

        Aws::String GetNameForJobErrorLimitName(JobErrorLimitName enumValue)
        {
          switch(enumValue)
          {
          case JobErrorLimitName::Assets_per_revision:
            return "Assets per revision";
          case JobErrorLimitName::Asset_size_in_GB:
            return "Asset size in GB";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace JobErrorLimitNameMapper
    } // namespace Model
  } // namespace DataExchange
} // namespace Aws
