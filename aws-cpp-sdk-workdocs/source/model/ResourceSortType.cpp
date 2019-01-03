/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/workdocs/model/ResourceSortType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WorkDocs
  {
    namespace Model
    {
      namespace ResourceSortTypeMapper
      {

        static const int DATE_HASH = HashingUtils::HashString("DATE");
        static const int NAME_HASH = HashingUtils::HashString("NAME");


        ResourceSortType GetResourceSortTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DATE_HASH)
          {
            return ResourceSortType::DATE;
          }
          else if (hashCode == NAME_HASH)
          {
            return ResourceSortType::NAME;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResourceSortType>(hashCode);
          }

          return ResourceSortType::NOT_SET;
        }

        Aws::String GetNameForResourceSortType(ResourceSortType enumValue)
        {
          switch(enumValue)
          {
          case ResourceSortType::DATE:
            return "DATE";
          case ResourceSortType::NAME:
            return "NAME";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResourceSortTypeMapper
    } // namespace Model
  } // namespace WorkDocs
} // namespace Aws
