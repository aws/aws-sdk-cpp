/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplify/model/Platform.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Amplify
  {
    namespace Model
    {
      namespace PlatformMapper
      {

        static const int WEB_HASH = HashingUtils::HashString("WEB");
        static const int WEB_DYNAMIC_HASH = HashingUtils::HashString("WEB_DYNAMIC");
        static const int WEB_COMPUTE_HASH = HashingUtils::HashString("WEB_COMPUTE");


        Platform GetPlatformForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == WEB_HASH)
          {
            return Platform::WEB;
          }
          else if (hashCode == WEB_DYNAMIC_HASH)
          {
            return Platform::WEB_DYNAMIC;
          }
          else if (hashCode == WEB_COMPUTE_HASH)
          {
            return Platform::WEB_COMPUTE;
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
          case Platform::WEB:
            return "WEB";
          case Platform::WEB_DYNAMIC:
            return "WEB_DYNAMIC";
          case Platform::WEB_COMPUTE:
            return "WEB_COMPUTE";
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
  } // namespace Amplify
} // namespace Aws
