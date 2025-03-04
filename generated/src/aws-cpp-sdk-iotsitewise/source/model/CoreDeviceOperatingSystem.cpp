/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/CoreDeviceOperatingSystem.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTSiteWise
  {
    namespace Model
    {
      namespace CoreDeviceOperatingSystemMapper
      {

        static const int LINUX_AARCH64_HASH = HashingUtils::HashString("LINUX_AARCH64");
        static const int LINUX_AMD64_HASH = HashingUtils::HashString("LINUX_AMD64");
        static const int WINDOWS_AMD64_HASH = HashingUtils::HashString("WINDOWS_AMD64");


        CoreDeviceOperatingSystem GetCoreDeviceOperatingSystemForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LINUX_AARCH64_HASH)
          {
            return CoreDeviceOperatingSystem::LINUX_AARCH64;
          }
          else if (hashCode == LINUX_AMD64_HASH)
          {
            return CoreDeviceOperatingSystem::LINUX_AMD64;
          }
          else if (hashCode == WINDOWS_AMD64_HASH)
          {
            return CoreDeviceOperatingSystem::WINDOWS_AMD64;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CoreDeviceOperatingSystem>(hashCode);
          }

          return CoreDeviceOperatingSystem::NOT_SET;
        }

        Aws::String GetNameForCoreDeviceOperatingSystem(CoreDeviceOperatingSystem enumValue)
        {
          switch(enumValue)
          {
          case CoreDeviceOperatingSystem::NOT_SET:
            return {};
          case CoreDeviceOperatingSystem::LINUX_AARCH64:
            return "LINUX_AARCH64";
          case CoreDeviceOperatingSystem::LINUX_AMD64:
            return "LINUX_AMD64";
          case CoreDeviceOperatingSystem::WINDOWS_AMD64:
            return "WINDOWS_AMD64";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CoreDeviceOperatingSystemMapper
    } // namespace Model
  } // namespace IoTSiteWise
} // namespace Aws
