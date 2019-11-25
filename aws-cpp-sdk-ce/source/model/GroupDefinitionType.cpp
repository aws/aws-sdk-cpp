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

#include <aws/ce/model/GroupDefinitionType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CostExplorer
  {
    namespace Model
    {
      namespace GroupDefinitionTypeMapper
      {

        static const int DIMENSION_HASH = HashingUtils::HashString("DIMENSION");
        static const int TAG_HASH = HashingUtils::HashString("TAG");
        static const int COST_CATEGORY_HASH = HashingUtils::HashString("COST_CATEGORY");


        GroupDefinitionType GetGroupDefinitionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DIMENSION_HASH)
          {
            return GroupDefinitionType::DIMENSION;
          }
          else if (hashCode == TAG_HASH)
          {
            return GroupDefinitionType::TAG;
          }
          else if (hashCode == COST_CATEGORY_HASH)
          {
            return GroupDefinitionType::COST_CATEGORY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GroupDefinitionType>(hashCode);
          }

          return GroupDefinitionType::NOT_SET;
        }

        Aws::String GetNameForGroupDefinitionType(GroupDefinitionType enumValue)
        {
          switch(enumValue)
          {
          case GroupDefinitionType::DIMENSION:
            return "DIMENSION";
          case GroupDefinitionType::TAG:
            return "TAG";
          case GroupDefinitionType::COST_CATEGORY:
            return "COST_CATEGORY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace GroupDefinitionTypeMapper
    } // namespace Model
  } // namespace CostExplorer
} // namespace Aws
