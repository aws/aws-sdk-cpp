/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/Ec2Platform.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Inspector2
  {
    namespace Model
    {
      namespace Ec2PlatformMapper
      {

        static const int WINDOWS_HASH = HashingUtils::HashString("WINDOWS");
        static const int LINUX_HASH = HashingUtils::HashString("LINUX");
        static const int UNKNOWN_HASH = HashingUtils::HashString("UNKNOWN");
        static const int MACOS_HASH = HashingUtils::HashString("MACOS");


        Ec2Platform GetEc2PlatformForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == WINDOWS_HASH)
          {
            return Ec2Platform::WINDOWS;
          }
          else if (hashCode == LINUX_HASH)
          {
            return Ec2Platform::LINUX;
          }
          else if (hashCode == UNKNOWN_HASH)
          {
            return Ec2Platform::UNKNOWN;
          }
          else if (hashCode == MACOS_HASH)
          {
            return Ec2Platform::MACOS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Ec2Platform>(hashCode);
          }

          return Ec2Platform::NOT_SET;
        }

        Aws::String GetNameForEc2Platform(Ec2Platform enumValue)
        {
          switch(enumValue)
          {
          case Ec2Platform::NOT_SET:
            return {};
          case Ec2Platform::WINDOWS:
            return "WINDOWS";
          case Ec2Platform::LINUX:
            return "LINUX";
          case Ec2Platform::UNKNOWN:
            return "UNKNOWN";
          case Ec2Platform::MACOS:
            return "MACOS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace Ec2PlatformMapper
    } // namespace Model
  } // namespace Inspector2
} // namespace Aws
