/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/AppBlockState.h>
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
      namespace AppBlockStateMapper
      {

        static const int INACTIVE_HASH = HashingUtils::HashString("INACTIVE");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");


        AppBlockState GetAppBlockStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INACTIVE_HASH)
          {
            return AppBlockState::INACTIVE;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return AppBlockState::ACTIVE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AppBlockState>(hashCode);
          }

          return AppBlockState::NOT_SET;
        }

        Aws::String GetNameForAppBlockState(AppBlockState enumValue)
        {
          switch(enumValue)
          {
          case AppBlockState::NOT_SET:
            return {};
          case AppBlockState::INACTIVE:
            return "INACTIVE";
          case AppBlockState::ACTIVE:
            return "ACTIVE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AppBlockStateMapper
    } // namespace Model
  } // namespace AppStream
} // namespace Aws
