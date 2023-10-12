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

        static constexpr uint32_t WEB_HASH = ConstExprHashingUtils::HashString("WEB");
        static constexpr uint32_t WEB_DYNAMIC_HASH = ConstExprHashingUtils::HashString("WEB_DYNAMIC");
        static constexpr uint32_t WEB_COMPUTE_HASH = ConstExprHashingUtils::HashString("WEB_COMPUTE");


        Platform GetPlatformForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case Platform::NOT_SET:
            return {};
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
