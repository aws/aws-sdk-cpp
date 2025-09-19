/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/NetworkMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace BedrockAgentCoreControl
  {
    namespace Model
    {
      namespace NetworkModeMapper
      {

        static const int PUBLIC__HASH = HashingUtils::HashString("PUBLIC");
        static const int VPC_HASH = HashingUtils::HashString("VPC");


        NetworkMode GetNetworkModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PUBLIC__HASH)
          {
            return NetworkMode::PUBLIC_;
          }
          else if (hashCode == VPC_HASH)
          {
            return NetworkMode::VPC;
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
          case NetworkMode::NOT_SET:
            return {};
          case NetworkMode::PUBLIC_:
            return "PUBLIC";
          case NetworkMode::VPC:
            return "VPC";
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
  } // namespace BedrockAgentCoreControl
} // namespace Aws
