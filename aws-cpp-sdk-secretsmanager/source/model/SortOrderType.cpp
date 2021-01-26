/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/secretsmanager/model/SortOrderType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SecretsManager
  {
    namespace Model
    {
      namespace SortOrderTypeMapper
      {

        static const int asc_HASH = HashingUtils::HashString("asc");
        static const int desc_HASH = HashingUtils::HashString("desc");


        SortOrderType GetSortOrderTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == asc_HASH)
          {
            return SortOrderType::asc;
          }
          else if (hashCode == desc_HASH)
          {
            return SortOrderType::desc;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SortOrderType>(hashCode);
          }

          return SortOrderType::NOT_SET;
        }

        Aws::String GetNameForSortOrderType(SortOrderType enumValue)
        {
          switch(enumValue)
          {
          case SortOrderType::asc:
            return "asc";
          case SortOrderType::desc:
            return "desc";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SortOrderTypeMapper
    } // namespace Model
  } // namespace SecretsManager
} // namespace Aws
