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

#include <aws/workdocs/model/ResourceStateType.h>
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
      namespace ResourceStateTypeMapper
      {

        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int RESTORING_HASH = HashingUtils::HashString("RESTORING");
        static const int RECYCLING_HASH = HashingUtils::HashString("RECYCLING");
        static const int RECYCLED_HASH = HashingUtils::HashString("RECYCLED");


        ResourceStateType GetResourceStateTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return ResourceStateType::ACTIVE;
          }
          else if (hashCode == RESTORING_HASH)
          {
            return ResourceStateType::RESTORING;
          }
          else if (hashCode == RECYCLING_HASH)
          {
            return ResourceStateType::RECYCLING;
          }
          else if (hashCode == RECYCLED_HASH)
          {
            return ResourceStateType::RECYCLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResourceStateType>(hashCode);
          }

          return ResourceStateType::NOT_SET;
        }

        Aws::String GetNameForResourceStateType(ResourceStateType enumValue)
        {
          switch(enumValue)
          {
          case ResourceStateType::ACTIVE:
            return "ACTIVE";
          case ResourceStateType::RESTORING:
            return "RESTORING";
          case ResourceStateType::RECYCLING:
            return "RECYCLING";
          case ResourceStateType::RECYCLED:
            return "RECYCLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResourceStateTypeMapper
    } // namespace Model
  } // namespace WorkDocs
} // namespace Aws
