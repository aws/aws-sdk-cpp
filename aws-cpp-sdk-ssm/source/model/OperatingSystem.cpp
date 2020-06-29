/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/OperatingSystem.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SSM
  {
    namespace Model
    {
      namespace OperatingSystemMapper
      {

        static const int WINDOWS_HASH = HashingUtils::HashString("WINDOWS");
        static const int AMAZON_LINUX_HASH = HashingUtils::HashString("AMAZON_LINUX");
        static const int AMAZON_LINUX_2_HASH = HashingUtils::HashString("AMAZON_LINUX_2");
        static const int UBUNTU_HASH = HashingUtils::HashString("UBUNTU");
        static const int REDHAT_ENTERPRISE_LINUX_HASH = HashingUtils::HashString("REDHAT_ENTERPRISE_LINUX");
        static const int SUSE_HASH = HashingUtils::HashString("SUSE");
        static const int CENTOS_HASH = HashingUtils::HashString("CENTOS");
        static const int ORACLE_LINUX_HASH = HashingUtils::HashString("ORACLE_LINUX");
        static const int DEBIAN_HASH = HashingUtils::HashString("DEBIAN");


        OperatingSystem GetOperatingSystemForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == WINDOWS_HASH)
          {
            return OperatingSystem::WINDOWS;
          }
          else if (hashCode == AMAZON_LINUX_HASH)
          {
            return OperatingSystem::AMAZON_LINUX;
          }
          else if (hashCode == AMAZON_LINUX_2_HASH)
          {
            return OperatingSystem::AMAZON_LINUX_2;
          }
          else if (hashCode == UBUNTU_HASH)
          {
            return OperatingSystem::UBUNTU;
          }
          else if (hashCode == REDHAT_ENTERPRISE_LINUX_HASH)
          {
            return OperatingSystem::REDHAT_ENTERPRISE_LINUX;
          }
          else if (hashCode == SUSE_HASH)
          {
            return OperatingSystem::SUSE;
          }
          else if (hashCode == CENTOS_HASH)
          {
            return OperatingSystem::CENTOS;
          }
          else if (hashCode == ORACLE_LINUX_HASH)
          {
            return OperatingSystem::ORACLE_LINUX;
          }
          else if (hashCode == DEBIAN_HASH)
          {
            return OperatingSystem::DEBIAN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OperatingSystem>(hashCode);
          }

          return OperatingSystem::NOT_SET;
        }

        Aws::String GetNameForOperatingSystem(OperatingSystem enumValue)
        {
          switch(enumValue)
          {
          case OperatingSystem::WINDOWS:
            return "WINDOWS";
          case OperatingSystem::AMAZON_LINUX:
            return "AMAZON_LINUX";
          case OperatingSystem::AMAZON_LINUX_2:
            return "AMAZON_LINUX_2";
          case OperatingSystem::UBUNTU:
            return "UBUNTU";
          case OperatingSystem::REDHAT_ENTERPRISE_LINUX:
            return "REDHAT_ENTERPRISE_LINUX";
          case OperatingSystem::SUSE:
            return "SUSE";
          case OperatingSystem::CENTOS:
            return "CENTOS";
          case OperatingSystem::ORACLE_LINUX:
            return "ORACLE_LINUX";
          case OperatingSystem::DEBIAN:
            return "DEBIAN";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OperatingSystemMapper
    } // namespace Model
  } // namespace SSM
} // namespace Aws
