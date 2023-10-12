/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/InstancePlatform.h>
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
      namespace InstancePlatformMapper
      {

        static constexpr uint32_t LINUX_UNIX_HASH = ConstExprHashingUtils::HashString("LINUX_UNIX");
        static constexpr uint32_t WINDOWS_HASH = ConstExprHashingUtils::HashString("WINDOWS");


        InstancePlatform GetInstancePlatformForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LINUX_UNIX_HASH)
          {
            return InstancePlatform::LINUX_UNIX;
          }
          else if (hashCode == WINDOWS_HASH)
          {
            return InstancePlatform::WINDOWS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InstancePlatform>(hashCode);
          }

          return InstancePlatform::NOT_SET;
        }

        Aws::String GetNameForInstancePlatform(InstancePlatform enumValue)
        {
          switch(enumValue)
          {
          case InstancePlatform::NOT_SET:
            return {};
          case InstancePlatform::LINUX_UNIX:
            return "LINUX_UNIX";
          case InstancePlatform::WINDOWS:
            return "WINDOWS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InstancePlatformMapper
    } // namespace Model
  } // namespace Lightsail
} // namespace Aws
