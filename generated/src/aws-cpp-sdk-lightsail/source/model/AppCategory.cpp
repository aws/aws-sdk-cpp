/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/AppCategory.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Lightsail
  {
    namespace Model
    {
      namespace AppCategoryMapper
      {

        static const int LfR_HASH = HashingUtils::HashString("LfR");


        AppCategory GetAppCategoryForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LfR_HASH)
          {
            return AppCategory::LfR;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AppCategory>(hashCode);
          }

          return AppCategory::NOT_SET;
        }

        Aws::String GetNameForAppCategory(AppCategory enumValue)
        {
          switch(enumValue)
          {
          case AppCategory::NOT_SET:
            return {};
          case AppCategory::LfR:
            return "LfR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AppCategoryMapper
    } // namespace Model
  } // namespace Lightsail
} // namespace Aws
