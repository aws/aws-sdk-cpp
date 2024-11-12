/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/ContainerMountPointAccessLevel.h>
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
      namespace ContainerMountPointAccessLevelMapper
      {

        static const int READ_ONLY_HASH = HashingUtils::HashString("READ_ONLY");
        static const int READ_AND_WRITE_HASH = HashingUtils::HashString("READ_AND_WRITE");


        ContainerMountPointAccessLevel GetContainerMountPointAccessLevelForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == READ_ONLY_HASH)
          {
            return ContainerMountPointAccessLevel::READ_ONLY;
          }
          else if (hashCode == READ_AND_WRITE_HASH)
          {
            return ContainerMountPointAccessLevel::READ_AND_WRITE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ContainerMountPointAccessLevel>(hashCode);
          }

          return ContainerMountPointAccessLevel::NOT_SET;
        }

        Aws::String GetNameForContainerMountPointAccessLevel(ContainerMountPointAccessLevel enumValue)
        {
          switch(enumValue)
          {
          case ContainerMountPointAccessLevel::NOT_SET:
            return {};
          case ContainerMountPointAccessLevel::READ_ONLY:
            return "READ_ONLY";
          case ContainerMountPointAccessLevel::READ_AND_WRITE:
            return "READ_AND_WRITE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ContainerMountPointAccessLevelMapper
    } // namespace Model
  } // namespace GameLift
} // namespace Aws
