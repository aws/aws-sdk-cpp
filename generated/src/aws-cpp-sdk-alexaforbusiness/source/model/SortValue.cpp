/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/alexaforbusiness/model/SortValue.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AlexaForBusiness
  {
    namespace Model
    {
      namespace SortValueMapper
      {

        static const int ASC_HASH = HashingUtils::HashString("ASC");
        static const int DESC_HASH = HashingUtils::HashString("DESC");


        SortValue GetSortValueForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ASC_HASH)
          {
            return SortValue::ASC;
          }
          else if (hashCode == DESC_HASH)
          {
            return SortValue::DESC;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SortValue>(hashCode);
          }

          return SortValue::NOT_SET;
        }

        Aws::String GetNameForSortValue(SortValue enumValue)
        {
          switch(enumValue)
          {
          case SortValue::ASC:
            return "ASC";
          case SortValue::DESC:
            return "DESC";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SortValueMapper
    } // namespace Model
  } // namespace AlexaForBusiness
} // namespace Aws
