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

#include <aws/workdocs/model/ResourceCollectionType.h>
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
      namespace ResourceCollectionTypeMapper
      {

        static const int SHARED_WITH_ME_HASH = HashingUtils::HashString("SHARED_WITH_ME");


        ResourceCollectionType GetResourceCollectionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SHARED_WITH_ME_HASH)
          {
            return ResourceCollectionType::SHARED_WITH_ME;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResourceCollectionType>(hashCode);
          }

          return ResourceCollectionType::NOT_SET;
        }

        Aws::String GetNameForResourceCollectionType(ResourceCollectionType enumValue)
        {
          switch(enumValue)
          {
          case ResourceCollectionType::SHARED_WITH_ME:
            return "SHARED_WITH_ME";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResourceCollectionTypeMapper
    } // namespace Model
  } // namespace WorkDocs
} // namespace Aws
