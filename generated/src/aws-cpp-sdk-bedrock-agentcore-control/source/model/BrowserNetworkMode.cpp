/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/BrowserNetworkMode.h>
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
      namespace BrowserNetworkModeMapper
      {

        static const int PUBLIC__HASH = HashingUtils::HashString("PUBLIC");
        static const int VPC_HASH = HashingUtils::HashString("VPC");


        BrowserNetworkMode GetBrowserNetworkModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PUBLIC__HASH)
          {
            return BrowserNetworkMode::PUBLIC_;
          }
          else if (hashCode == VPC_HASH)
          {
            return BrowserNetworkMode::VPC;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BrowserNetworkMode>(hashCode);
          }

          return BrowserNetworkMode::NOT_SET;
        }

        Aws::String GetNameForBrowserNetworkMode(BrowserNetworkMode enumValue)
        {
          switch(enumValue)
          {
          case BrowserNetworkMode::NOT_SET:
            return {};
          case BrowserNetworkMode::PUBLIC_:
            return "PUBLIC";
          case BrowserNetworkMode::VPC:
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

      } // namespace BrowserNetworkModeMapper
    } // namespace Model
  } // namespace BedrockAgentCoreControl
} // namespace Aws
