/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrass/model/UpdateTargetsOperatingSystem.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Greengrass
  {
    namespace Model
    {
      namespace UpdateTargetsOperatingSystemMapper
      {

        static const int ubuntu_HASH = HashingUtils::HashString("ubuntu");
        static const int raspbian_HASH = HashingUtils::HashString("raspbian");
        static const int amazon_linux_HASH = HashingUtils::HashString("amazon_linux");
        static const int openwrt_HASH = HashingUtils::HashString("openwrt");


        UpdateTargetsOperatingSystem GetUpdateTargetsOperatingSystemForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ubuntu_HASH)
          {
            return UpdateTargetsOperatingSystem::ubuntu;
          }
          else if (hashCode == raspbian_HASH)
          {
            return UpdateTargetsOperatingSystem::raspbian;
          }
          else if (hashCode == amazon_linux_HASH)
          {
            return UpdateTargetsOperatingSystem::amazon_linux;
          }
          else if (hashCode == openwrt_HASH)
          {
            return UpdateTargetsOperatingSystem::openwrt;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UpdateTargetsOperatingSystem>(hashCode);
          }

          return UpdateTargetsOperatingSystem::NOT_SET;
        }

        Aws::String GetNameForUpdateTargetsOperatingSystem(UpdateTargetsOperatingSystem enumValue)
        {
          switch(enumValue)
          {
          case UpdateTargetsOperatingSystem::ubuntu:
            return "ubuntu";
          case UpdateTargetsOperatingSystem::raspbian:
            return "raspbian";
          case UpdateTargetsOperatingSystem::amazon_linux:
            return "amazon_linux";
          case UpdateTargetsOperatingSystem::openwrt:
            return "openwrt";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace UpdateTargetsOperatingSystemMapper
    } // namespace Model
  } // namespace Greengrass
} // namespace Aws
