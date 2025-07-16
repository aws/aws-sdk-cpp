/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/GatewayStatus.h>
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
      namespace GatewayStatusMapper
      {

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
        static const int UPDATE_UNSUCCESSFUL_HASH = HashingUtils::HashString("UPDATE_UNSUCCESSFUL");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int READY_HASH = HashingUtils::HashString("READY");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        GatewayStatus GetGatewayStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return GatewayStatus::CREATING;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return GatewayStatus::UPDATING;
          }
          else if (hashCode == UPDATE_UNSUCCESSFUL_HASH)
          {
            return GatewayStatus::UPDATE_UNSUCCESSFUL;
          }
          else if (hashCode == DELETING_HASH)
          {
            return GatewayStatus::DELETING;
          }
          else if (hashCode == READY_HASH)
          {
            return GatewayStatus::READY;
          }
          else if (hashCode == FAILED_HASH)
          {
            return GatewayStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GatewayStatus>(hashCode);
          }

          return GatewayStatus::NOT_SET;
        }

        Aws::String GetNameForGatewayStatus(GatewayStatus enumValue)
        {
          switch(enumValue)
          {
          case GatewayStatus::NOT_SET:
            return {};
          case GatewayStatus::CREATING:
            return "CREATING";
          case GatewayStatus::UPDATING:
            return "UPDATING";
          case GatewayStatus::UPDATE_UNSUCCESSFUL:
            return "UPDATE_UNSUCCESSFUL";
          case GatewayStatus::DELETING:
            return "DELETING";
          case GatewayStatus::READY:
            return "READY";
          case GatewayStatus::FAILED:
            return "FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace GatewayStatusMapper
    } // namespace Model
  } // namespace BedrockAgentCoreControl
} // namespace Aws
