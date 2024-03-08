/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/SearchResourcesComparator.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Macie2
  {
    namespace Model
    {
      namespace SearchResourcesComparatorMapper
      {

        static const int EQ_HASH = HashingUtils::HashString("EQ");
        static const int NE_HASH = HashingUtils::HashString("NE");


        SearchResourcesComparator GetSearchResourcesComparatorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EQ_HASH)
          {
            return SearchResourcesComparator::EQ;
          }
          else if (hashCode == NE_HASH)
          {
            return SearchResourcesComparator::NE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SearchResourcesComparator>(hashCode);
          }

          return SearchResourcesComparator::NOT_SET;
        }

        Aws::String GetNameForSearchResourcesComparator(SearchResourcesComparator enumValue)
        {
          switch(enumValue)
          {
          case SearchResourcesComparator::NOT_SET:
            return {};
          case SearchResourcesComparator::EQ:
            return "EQ";
          case SearchResourcesComparator::NE:
            return "NE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SearchResourcesComparatorMapper
    } // namespace Model
  } // namespace Macie2
} // namespace Aws
