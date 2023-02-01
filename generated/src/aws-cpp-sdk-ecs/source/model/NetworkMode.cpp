/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/NetworkMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ECS
  {
    namespace Model
    {
      namespace NetworkModeMapper
      {

        static const int bridge_HASH = HashingUtils::HashString("bridge");
        static const int host_HASH = HashingUtils::HashString("host");
        static const int awsvpc_HASH = HashingUtils::HashString("awsvpc");
        static const int none_HASH = HashingUtils::HashString("none");


        NetworkMode GetNetworkModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == bridge_HASH)
          {
            return NetworkMode::bridge;
          }
          else if (hashCode == host_HASH)
          {
            return NetworkMode::host;
          }
          else if (hashCode == awsvpc_HASH)
          {
            return NetworkMode::awsvpc;
          }
          else if (hashCode == none_HASH)
          {
            return NetworkMode::none;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NetworkMode>(hashCode);
          }

          return NetworkMode::NOT_SET;
        }

        Aws::String GetNameForNetworkMode(NetworkMode enumValue)
        {
          switch(enumValue)
          {
          case NetworkMode::bridge:
            return "bridge";
          case NetworkMode::host:
            return "host";
          case NetworkMode::awsvpc:
            return "awsvpc";
          case NetworkMode::none:
            return "none";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NetworkModeMapper
    } // namespace Model
  } // namespace ECS
} // namespace Aws
