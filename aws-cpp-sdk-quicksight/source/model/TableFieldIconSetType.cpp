/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/TableFieldIconSetType.h>
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
      namespace TableFieldIconSetTypeMapper
      {

        static const int LINK_HASH = HashingUtils::HashString("LINK");


        TableFieldIconSetType GetTableFieldIconSetTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LINK_HASH)
          {
            return TableFieldIconSetType::LINK;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TableFieldIconSetType>(hashCode);
          }

          return TableFieldIconSetType::NOT_SET;
        }

        Aws::String GetNameForTableFieldIconSetType(TableFieldIconSetType enumValue)
        {
          switch(enumValue)
          {
          case TableFieldIconSetType::LINK:
            return "LINK";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TableFieldIconSetTypeMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
