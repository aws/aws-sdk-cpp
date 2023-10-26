/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/SimpleCriterionKeyForJob.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Macie2
  {
    namespace Model
    {
      namespace SimpleCriterionKeyForJobMapper
      {

        static const int ACCOUNT_ID_HASH = HashingUtils::HashString("ACCOUNT_ID");
        static const int S3_BUCKET_NAME_HASH = HashingUtils::HashString("S3_BUCKET_NAME");
        static const int S3_BUCKET_EFFECTIVE_PERMISSION_HASH = HashingUtils::HashString("S3_BUCKET_EFFECTIVE_PERMISSION");
        static const int S3_BUCKET_SHARED_ACCESS_HASH = HashingUtils::HashString("S3_BUCKET_SHARED_ACCESS");


        SimpleCriterionKeyForJob GetSimpleCriterionKeyForJobForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACCOUNT_ID_HASH)
          {
            return SimpleCriterionKeyForJob::ACCOUNT_ID;
          }
          else if (hashCode == S3_BUCKET_NAME_HASH)
          {
            return SimpleCriterionKeyForJob::S3_BUCKET_NAME;
          }
          else if (hashCode == S3_BUCKET_EFFECTIVE_PERMISSION_HASH)
          {
            return SimpleCriterionKeyForJob::S3_BUCKET_EFFECTIVE_PERMISSION;
          }
          else if (hashCode == S3_BUCKET_SHARED_ACCESS_HASH)
          {
            return SimpleCriterionKeyForJob::S3_BUCKET_SHARED_ACCESS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SimpleCriterionKeyForJob>(hashCode);
          }

          return SimpleCriterionKeyForJob::NOT_SET;
        }

        Aws::String GetNameForSimpleCriterionKeyForJob(SimpleCriterionKeyForJob enumValue)
        {
          switch(enumValue)
          {
          case SimpleCriterionKeyForJob::NOT_SET:
            return {};
          case SimpleCriterionKeyForJob::ACCOUNT_ID:
            return "ACCOUNT_ID";
          case SimpleCriterionKeyForJob::S3_BUCKET_NAME:
            return "S3_BUCKET_NAME";
          case SimpleCriterionKeyForJob::S3_BUCKET_EFFECTIVE_PERMISSION:
            return "S3_BUCKET_EFFECTIVE_PERMISSION";
          case SimpleCriterionKeyForJob::S3_BUCKET_SHARED_ACCESS:
            return "S3_BUCKET_SHARED_ACCESS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SimpleCriterionKeyForJobMapper
    } // namespace Model
  } // namespace Macie2
} // namespace Aws
