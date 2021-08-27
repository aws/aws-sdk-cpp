/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/RightsizingType.h>
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
      namespace RightsizingTypeMapper
      {

        static const int TERMINATE_HASH = HashingUtils::HashString("TERMINATE");
        static const int MODIFY_HASH = HashingUtils::HashString("MODIFY");


        RightsizingType GetRightsizingTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TERMINATE_HASH)
          {
            return RightsizingType::TERMINATE;
          }
          else if (hashCode == MODIFY_HASH)
          {
            return RightsizingType::MODIFY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RightsizingType>(hashCode);
          }

          return RightsizingType::NOT_SET;
        }

        Aws::String GetNameForRightsizingType(RightsizingType enumValue)
        {
          switch(enumValue)
          {
          case RightsizingType::TERMINATE:
            return "TERMINATE";
          case RightsizingType::MODIFY:
            return "MODIFY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RightsizingTypeMapper
    } // namespace Model
  } // namespace CostExplorer
} // namespace Aws
