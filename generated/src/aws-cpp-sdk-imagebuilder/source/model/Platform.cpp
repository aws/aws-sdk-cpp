/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/Platform.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace imagebuilder
  {
    namespace Model
    {
      namespace PlatformMapper
      {

        static const int Windows_HASH = HashingUtils::HashString("Windows");
        static const int Linux_HASH = HashingUtils::HashString("Linux");


        Platform GetPlatformForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Windows_HASH)
          {
            return Platform::Windows;
          }
          else if (hashCode == Linux_HASH)
          {
            return Platform::Linux;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Platform>(hashCode);
          }

          return Platform::NOT_SET;
        }

        Aws::String GetNameForPlatform(Platform enumValue)
        {
          switch(enumValue)
          {
          case Platform::Windows:
            return "Windows";
          case Platform::Linux:
            return "Linux";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PlatformMapper
    } // namespace Model
  } // namespace imagebuilder
} // namespace Aws
