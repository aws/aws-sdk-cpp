/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/ContainerGroupType.h>
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
      namespace ContainerGroupTypeMapper
      {

        static const int GAME_SERVER_HASH = HashingUtils::HashString("GAME_SERVER");
        static const int PER_INSTANCE_HASH = HashingUtils::HashString("PER_INSTANCE");


        ContainerGroupType GetContainerGroupTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == GAME_SERVER_HASH)
          {
            return ContainerGroupType::GAME_SERVER;
          }
          else if (hashCode == PER_INSTANCE_HASH)
          {
            return ContainerGroupType::PER_INSTANCE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ContainerGroupType>(hashCode);
          }

          return ContainerGroupType::NOT_SET;
        }

        Aws::String GetNameForContainerGroupType(ContainerGroupType enumValue)
        {
          switch(enumValue)
          {
          case ContainerGroupType::NOT_SET:
            return {};
          case ContainerGroupType::GAME_SERVER:
            return "GAME_SERVER";
          case ContainerGroupType::PER_INSTANCE:
            return "PER_INSTANCE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ContainerGroupTypeMapper
    } // namespace Model
  } // namespace GameLift
} // namespace Aws
