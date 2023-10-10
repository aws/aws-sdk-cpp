/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/FindingTypeSortBy.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Inspector2
  {
    namespace Model
    {
      namespace FindingTypeSortByMapper
      {

        static const int CRITICAL_HASH = HashingUtils::HashString("CRITICAL");
        static const int HIGH_HASH = HashingUtils::HashString("HIGH");
        static const int ALL_HASH = HashingUtils::HashString("ALL");


        FindingTypeSortBy GetFindingTypeSortByForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CRITICAL_HASH)
          {
            return FindingTypeSortBy::CRITICAL;
          }
          else if (hashCode == HIGH_HASH)
          {
            return FindingTypeSortBy::HIGH;
          }
          else if (hashCode == ALL_HASH)
          {
            return FindingTypeSortBy::ALL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FindingTypeSortBy>(hashCode);
          }

          return FindingTypeSortBy::NOT_SET;
        }

        Aws::String GetNameForFindingTypeSortBy(FindingTypeSortBy enumValue)
        {
          switch(enumValue)
          {
          case FindingTypeSortBy::NOT_SET:
            return {};
          case FindingTypeSortBy::CRITICAL:
            return "CRITICAL";
          case FindingTypeSortBy::HIGH:
            return "HIGH";
          case FindingTypeSortBy::ALL:
            return "ALL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FindingTypeSortByMapper
    } // namespace Model
  } // namespace Inspector2
} // namespace Aws
