/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/PackageSortBy.h>
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
      namespace PackageSortByMapper
      {

        static const int CRITICAL_HASH = HashingUtils::HashString("CRITICAL");
        static const int HIGH_HASH = HashingUtils::HashString("HIGH");
        static const int ALL_HASH = HashingUtils::HashString("ALL");


        PackageSortBy GetPackageSortByForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CRITICAL_HASH)
          {
            return PackageSortBy::CRITICAL;
          }
          else if (hashCode == HIGH_HASH)
          {
            return PackageSortBy::HIGH;
          }
          else if (hashCode == ALL_HASH)
          {
            return PackageSortBy::ALL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PackageSortBy>(hashCode);
          }

          return PackageSortBy::NOT_SET;
        }

        Aws::String GetNameForPackageSortBy(PackageSortBy enumValue)
        {
          switch(enumValue)
          {
          case PackageSortBy::NOT_SET:
            return {};
          case PackageSortBy::CRITICAL:
            return "CRITICAL";
          case PackageSortBy::HIGH:
            return "HIGH";
          case PackageSortBy::ALL:
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

      } // namespace PackageSortByMapper
    } // namespace Model
  } // namespace Inspector2
} // namespace Aws
