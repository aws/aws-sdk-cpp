/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
