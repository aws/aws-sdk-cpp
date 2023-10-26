/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/AppVisibility.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AppStream
  {
    namespace Model
    {
      namespace AppVisibilityMapper
      {

        static const int ALL_HASH = HashingUtils::HashString("ALL");
        static const int ASSOCIATED_HASH = HashingUtils::HashString("ASSOCIATED");


        AppVisibility GetAppVisibilityForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALL_HASH)
          {
            return AppVisibility::ALL;
          }
          else if (hashCode == ASSOCIATED_HASH)
          {
            return AppVisibility::ASSOCIATED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AppVisibility>(hashCode);
          }

          return AppVisibility::NOT_SET;
        }

        Aws::String GetNameForAppVisibility(AppVisibility enumValue)
        {
          switch(enumValue)
          {
          case AppVisibility::NOT_SET:
            return {};
          case AppVisibility::ALL:
            return "ALL";
          case AppVisibility::ASSOCIATED:
            return "ASSOCIATED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AppVisibilityMapper
    } // namespace Model
  } // namespace AppStream
} // namespace Aws
