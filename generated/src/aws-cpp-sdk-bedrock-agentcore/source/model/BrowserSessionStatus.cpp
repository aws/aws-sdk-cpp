/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/BrowserSessionStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace BedrockAgentCore
  {
    namespace Model
    {
      namespace BrowserSessionStatusMapper
      {

        static const int READY_HASH = HashingUtils::HashString("READY");
        static const int TERMINATED_HASH = HashingUtils::HashString("TERMINATED");


        BrowserSessionStatus GetBrowserSessionStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == READY_HASH)
          {
            return BrowserSessionStatus::READY;
          }
          else if (hashCode == TERMINATED_HASH)
          {
            return BrowserSessionStatus::TERMINATED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BrowserSessionStatus>(hashCode);
          }

          return BrowserSessionStatus::NOT_SET;
        }

        Aws::String GetNameForBrowserSessionStatus(BrowserSessionStatus enumValue)
        {
          switch(enumValue)
          {
          case BrowserSessionStatus::NOT_SET:
            return {};
          case BrowserSessionStatus::READY:
            return "READY";
          case BrowserSessionStatus::TERMINATED:
            return "TERMINATED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BrowserSessionStatusMapper
    } // namespace Model
  } // namespace BedrockAgentCore
} // namespace Aws
