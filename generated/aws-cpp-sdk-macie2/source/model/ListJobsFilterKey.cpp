/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/ListJobsFilterKey.h>
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
      namespace ListJobsFilterKeyMapper
      {

        static const int jobType_HASH = HashingUtils::HashString("jobType");
        static const int jobStatus_HASH = HashingUtils::HashString("jobStatus");
        static const int createdAt_HASH = HashingUtils::HashString("createdAt");
        static const int name_HASH = HashingUtils::HashString("name");


        ListJobsFilterKey GetListJobsFilterKeyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == jobType_HASH)
          {
            return ListJobsFilterKey::jobType;
          }
          else if (hashCode == jobStatus_HASH)
          {
            return ListJobsFilterKey::jobStatus;
          }
          else if (hashCode == createdAt_HASH)
          {
            return ListJobsFilterKey::createdAt;
          }
          else if (hashCode == name_HASH)
          {
            return ListJobsFilterKey::name;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ListJobsFilterKey>(hashCode);
          }

          return ListJobsFilterKey::NOT_SET;
        }

        Aws::String GetNameForListJobsFilterKey(ListJobsFilterKey enumValue)
        {
          switch(enumValue)
          {
          case ListJobsFilterKey::jobType:
            return "jobType";
          case ListJobsFilterKey::jobStatus:
            return "jobStatus";
          case ListJobsFilterKey::createdAt:
            return "createdAt";
          case ListJobsFilterKey::name:
            return "name";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ListJobsFilterKeyMapper
    } // namespace Model
  } // namespace Macie2
} // namespace Aws
