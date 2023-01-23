/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/GroupBy.h>
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
      namespace GroupByMapper
      {

        static const int resourcesAffected_s3Bucket_name_HASH = HashingUtils::HashString("resourcesAffected.s3Bucket.name");
        static const int type_HASH = HashingUtils::HashString("type");
        static const int classificationDetails_jobId_HASH = HashingUtils::HashString("classificationDetails.jobId");
        static const int severity_description_HASH = HashingUtils::HashString("severity.description");


        GroupBy GetGroupByForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == resourcesAffected_s3Bucket_name_HASH)
          {
            return GroupBy::resourcesAffected_s3Bucket_name;
          }
          else if (hashCode == type_HASH)
          {
            return GroupBy::type;
          }
          else if (hashCode == classificationDetails_jobId_HASH)
          {
            return GroupBy::classificationDetails_jobId;
          }
          else if (hashCode == severity_description_HASH)
          {
            return GroupBy::severity_description;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GroupBy>(hashCode);
          }

          return GroupBy::NOT_SET;
        }

        Aws::String GetNameForGroupBy(GroupBy enumValue)
        {
          switch(enumValue)
          {
          case GroupBy::resourcesAffected_s3Bucket_name:
            return "resourcesAffected.s3Bucket.name";
          case GroupBy::type:
            return "type";
          case GroupBy::classificationDetails_jobId:
            return "classificationDetails.jobId";
          case GroupBy::severity_description:
            return "severity.description";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace GroupByMapper
    } // namespace Model
  } // namespace Macie2
} // namespace Aws
