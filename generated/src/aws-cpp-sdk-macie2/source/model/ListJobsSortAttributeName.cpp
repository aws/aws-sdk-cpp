/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/ListJobsSortAttributeName.h>
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
      namespace ListJobsSortAttributeNameMapper
      {

        static const int createdAt_HASH = HashingUtils::HashString("createdAt");
        static const int jobStatus_HASH = HashingUtils::HashString("jobStatus");
        static const int name_HASH = HashingUtils::HashString("name");
        static const int jobType_HASH = HashingUtils::HashString("jobType");


        ListJobsSortAttributeName GetListJobsSortAttributeNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == createdAt_HASH)
          {
            return ListJobsSortAttributeName::createdAt;
          }
          else if (hashCode == jobStatus_HASH)
          {
            return ListJobsSortAttributeName::jobStatus;
          }
          else if (hashCode == name_HASH)
          {
            return ListJobsSortAttributeName::name;
          }
          else if (hashCode == jobType_HASH)
          {
            return ListJobsSortAttributeName::jobType;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ListJobsSortAttributeName>(hashCode);
          }

          return ListJobsSortAttributeName::NOT_SET;
        }

        Aws::String GetNameForListJobsSortAttributeName(ListJobsSortAttributeName enumValue)
        {
          switch(enumValue)
          {
          case ListJobsSortAttributeName::createdAt:
            return "createdAt";
          case ListJobsSortAttributeName::jobStatus:
            return "jobStatus";
          case ListJobsSortAttributeName::name:
            return "name";
          case ListJobsSortAttributeName::jobType:
            return "jobType";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ListJobsSortAttributeNameMapper
    } // namespace Model
  } // namespace Macie2
} // namespace Aws
