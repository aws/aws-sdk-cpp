/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/SortDirectionType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Glue
  {
    namespace Model
    {
      namespace SortDirectionTypeMapper
      {

        static const int DESCENDING_HASH = HashingUtils::HashString("DESCENDING");
        static const int ASCENDING_HASH = HashingUtils::HashString("ASCENDING");


        SortDirectionType GetSortDirectionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DESCENDING_HASH)
          {
            return SortDirectionType::DESCENDING;
          }
          else if (hashCode == ASCENDING_HASH)
          {
            return SortDirectionType::ASCENDING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SortDirectionType>(hashCode);
          }

          return SortDirectionType::NOT_SET;
        }

        Aws::String GetNameForSortDirectionType(SortDirectionType enumValue)
        {
          switch(enumValue)
          {
          case SortDirectionType::DESCENDING:
            return "DESCENDING";
          case SortDirectionType::ASCENDING:
            return "ASCENDING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SortDirectionTypeMapper
    } // namespace Model
  } // namespace Glue
} // namespace Aws
