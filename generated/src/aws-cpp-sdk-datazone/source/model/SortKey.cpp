/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/SortKey.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DataZone
  {
    namespace Model
    {
      namespace SortKeyMapper
      {

        static const int CREATED_AT_HASH = HashingUtils::HashString("CREATED_AT");
        static const int UPDATED_AT_HASH = HashingUtils::HashString("UPDATED_AT");


        SortKey GetSortKeyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATED_AT_HASH)
          {
            return SortKey::CREATED_AT;
          }
          else if (hashCode == UPDATED_AT_HASH)
          {
            return SortKey::UPDATED_AT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SortKey>(hashCode);
          }

          return SortKey::NOT_SET;
        }

        Aws::String GetNameForSortKey(SortKey enumValue)
        {
          switch(enumValue)
          {
          case SortKey::NOT_SET:
            return {};
          case SortKey::CREATED_AT:
            return "CREATED_AT";
          case SortKey::UPDATED_AT:
            return "UPDATED_AT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SortKeyMapper
    } // namespace Model
  } // namespace DataZone
} // namespace Aws
