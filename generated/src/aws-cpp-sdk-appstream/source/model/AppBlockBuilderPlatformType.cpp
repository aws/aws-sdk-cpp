/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/AppBlockBuilderPlatformType.h>
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
      namespace AppBlockBuilderPlatformTypeMapper
      {

        static const int WINDOWS_SERVER_2019_HASH = HashingUtils::HashString("WINDOWS_SERVER_2019");


        AppBlockBuilderPlatformType GetAppBlockBuilderPlatformTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == WINDOWS_SERVER_2019_HASH)
          {
            return AppBlockBuilderPlatformType::WINDOWS_SERVER_2019;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AppBlockBuilderPlatformType>(hashCode);
          }

          return AppBlockBuilderPlatformType::NOT_SET;
        }

        Aws::String GetNameForAppBlockBuilderPlatformType(AppBlockBuilderPlatformType enumValue)
        {
          switch(enumValue)
          {
          case AppBlockBuilderPlatformType::NOT_SET:
            return {};
          case AppBlockBuilderPlatformType::WINDOWS_SERVER_2019:
            return "WINDOWS_SERVER_2019";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AppBlockBuilderPlatformTypeMapper
    } // namespace Model
  } // namespace AppStream
} // namespace Aws
