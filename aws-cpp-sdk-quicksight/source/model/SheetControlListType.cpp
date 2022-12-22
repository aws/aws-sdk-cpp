/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/SheetControlListType.h>
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
      namespace SheetControlListTypeMapper
      {

        static const int MULTI_SELECT_HASH = HashingUtils::HashString("MULTI_SELECT");
        static const int SINGLE_SELECT_HASH = HashingUtils::HashString("SINGLE_SELECT");


        SheetControlListType GetSheetControlListTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MULTI_SELECT_HASH)
          {
            return SheetControlListType::MULTI_SELECT;
          }
          else if (hashCode == SINGLE_SELECT_HASH)
          {
            return SheetControlListType::SINGLE_SELECT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SheetControlListType>(hashCode);
          }

          return SheetControlListType::NOT_SET;
        }

        Aws::String GetNameForSheetControlListType(SheetControlListType enumValue)
        {
          switch(enumValue)
          {
          case SheetControlListType::MULTI_SELECT:
            return "MULTI_SELECT";
          case SheetControlListType::SINGLE_SELECT:
            return "SINGLE_SELECT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SheetControlListTypeMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
