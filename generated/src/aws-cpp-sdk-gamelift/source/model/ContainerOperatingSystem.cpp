/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/ContainerOperatingSystem.h>
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
      namespace ContainerOperatingSystemMapper
      {

        static const int AMAZON_LINUX_2023_HASH = HashingUtils::HashString("AMAZON_LINUX_2023");


        ContainerOperatingSystem GetContainerOperatingSystemForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AMAZON_LINUX_2023_HASH)
          {
            return ContainerOperatingSystem::AMAZON_LINUX_2023;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ContainerOperatingSystem>(hashCode);
          }

          return ContainerOperatingSystem::NOT_SET;
        }

        Aws::String GetNameForContainerOperatingSystem(ContainerOperatingSystem enumValue)
        {
          switch(enumValue)
          {
          case ContainerOperatingSystem::NOT_SET:
            return {};
          case ContainerOperatingSystem::AMAZON_LINUX_2023:
            return "AMAZON_LINUX_2023";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ContainerOperatingSystemMapper
    } // namespace Model
  } // namespace GameLift
} // namespace Aws
