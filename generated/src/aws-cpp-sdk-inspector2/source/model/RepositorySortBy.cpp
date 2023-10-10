/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/RepositorySortBy.h>
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
      namespace RepositorySortByMapper
      {

        static const int CRITICAL_HASH = HashingUtils::HashString("CRITICAL");
        static const int HIGH_HASH = HashingUtils::HashString("HIGH");
        static const int ALL_HASH = HashingUtils::HashString("ALL");
        static const int AFFECTED_IMAGES_HASH = HashingUtils::HashString("AFFECTED_IMAGES");


        RepositorySortBy GetRepositorySortByForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CRITICAL_HASH)
          {
            return RepositorySortBy::CRITICAL;
          }
          else if (hashCode == HIGH_HASH)
          {
            return RepositorySortBy::HIGH;
          }
          else if (hashCode == ALL_HASH)
          {
            return RepositorySortBy::ALL;
          }
          else if (hashCode == AFFECTED_IMAGES_HASH)
          {
            return RepositorySortBy::AFFECTED_IMAGES;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RepositorySortBy>(hashCode);
          }

          return RepositorySortBy::NOT_SET;
        }

        Aws::String GetNameForRepositorySortBy(RepositorySortBy enumValue)
        {
          switch(enumValue)
          {
          case RepositorySortBy::NOT_SET:
            return {};
          case RepositorySortBy::CRITICAL:
            return "CRITICAL";
          case RepositorySortBy::HIGH:
            return "HIGH";
          case RepositorySortBy::ALL:
            return "ALL";
          case RepositorySortBy::AFFECTED_IMAGES:
            return "AFFECTED_IMAGES";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RepositorySortByMapper
    } // namespace Model
  } // namespace Inspector2
} // namespace Aws
