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

        static constexpr uint32_t Assets_per_revision_HASH = ConstExprHashingUtils::HashString("Assets per revision");
        static constexpr uint32_t Asset_size_in_GB_HASH = ConstExprHashingUtils::HashString("Asset size in GB");
        static constexpr uint32_t Amazon_Redshift_datashare_assets_per_revision_HASH = ConstExprHashingUtils::HashString("Amazon Redshift datashare assets per revision");
        static constexpr uint32_t AWS_Lake_Formation_data_permission_assets_per_revision_HASH = ConstExprHashingUtils::HashString("AWS Lake Formation data permission assets per revision");
        static constexpr uint32_t Amazon_S3_data_access_assets_per_revision_HASH = ConstExprHashingUtils::HashString("Amazon S3 data access assets per revision");


        JobErrorLimitName GetJobErrorLimitNameForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Assets_per_revision_HASH)
          {
            return JobErrorLimitName::Assets_per_revision;
          }
          else if (hashCode == Asset_size_in_GB_HASH)
          {
            return JobErrorLimitName::Asset_size_in_GB;
          }
          else if (hashCode == Amazon_Redshift_datashare_assets_per_revision_HASH)
          {
            return JobErrorLimitName::Amazon_Redshift_datashare_assets_per_revision;
          }
          else if (hashCode == AWS_Lake_Formation_data_permission_assets_per_revision_HASH)
          {
            return JobErrorLimitName::AWS_Lake_Formation_data_permission_assets_per_revision;
          }
          else if (hashCode == Amazon_S3_data_access_assets_per_revision_HASH)
          {
            return JobErrorLimitName::Amazon_S3_data_access_assets_per_revision;
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
          case JobErrorLimitName::NOT_SET:
            return {};
          case JobErrorLimitName::Assets_per_revision:
            return "Assets per revision";
          case JobErrorLimitName::Asset_size_in_GB:
            return "Asset size in GB";
          case JobErrorLimitName::Amazon_Redshift_datashare_assets_per_revision:
            return "Amazon Redshift datashare assets per revision";
          case JobErrorLimitName::AWS_Lake_Formation_data_permission_assets_per_revision:
            return "AWS Lake Formation data permission assets per revision";
          case JobErrorLimitName::Amazon_S3_data_access_assets_per_revision:
            return "Amazon S3 data access assets per revision";
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
