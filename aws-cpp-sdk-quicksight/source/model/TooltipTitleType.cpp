/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/TooltipTitleType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QuickSight
  {
    namespace Model
    {
      namespace TooltipTitleTypeMapper
      {

        static const int NONE_HASH = HashingUtils::HashString("NONE");
        static const int PRIMARY_VALUE_HASH = HashingUtils::HashString("PRIMARY_VALUE");


        TooltipTitleType GetTooltipTitleTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return TooltipTitleType::NONE;
          }
          else if (hashCode == PRIMARY_VALUE_HASH)
          {
            return TooltipTitleType::PRIMARY_VALUE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TooltipTitleType>(hashCode);
          }

          return TooltipTitleType::NOT_SET;
        }

        Aws::String GetNameForTooltipTitleType(TooltipTitleType enumValue)
        {
          switch(enumValue)
          {
          case TooltipTitleType::NONE:
            return "NONE";
          case TooltipTitleType::PRIMARY_VALUE:
            return "PRIMARY_VALUE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TooltipTitleTypeMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
