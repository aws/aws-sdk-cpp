/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/OperatingSystem.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GameLift
  {
    namespace Model
    {
      namespace OperatingSystemMapper
      {

        static const int WINDOWS_2012_HASH = HashingUtils::HashString("WINDOWS_2012");
        static const int AMAZON_LINUX_HASH = HashingUtils::HashString("AMAZON_LINUX");
        static const int AMAZON_LINUX_2_HASH = HashingUtils::HashString("AMAZON_LINUX_2");


        OperatingSystem GetOperatingSystemForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == WINDOWS_2012_HASH)
          {
            return OperatingSystem::WINDOWS_2012;
          }
          else if (hashCode == AMAZON_LINUX_HASH)
          {
            return OperatingSystem::AMAZON_LINUX;
          }
          else if (hashCode == AMAZON_LINUX_2_HASH)
          {
            return OperatingSystem::AMAZON_LINUX_2;
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
          case OperatingSystem::WINDOWS_2012:
            return "WINDOWS_2012";
          case OperatingSystem::AMAZON_LINUX:
            return "AMAZON_LINUX";
          case OperatingSystem::AMAZON_LINUX_2:
            return "AMAZON_LINUX_2";
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
  } // namespace GameLift
} // namespace Aws
