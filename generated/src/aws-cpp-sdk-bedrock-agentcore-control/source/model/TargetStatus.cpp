/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/TargetStatus.h>
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
      namespace TargetStatusMapper
      {

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
        static const int UPDATE_UNSUCCESSFUL_HASH = HashingUtils::HashString("UPDATE_UNSUCCESSFUL");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int READY_HASH = HashingUtils::HashString("READY");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        TargetStatus GetTargetStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return TargetStatus::CREATING;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return TargetStatus::UPDATING;
          }
          else if (hashCode == UPDATE_UNSUCCESSFUL_HASH)
          {
            return TargetStatus::UPDATE_UNSUCCESSFUL;
          }
          else if (hashCode == DELETING_HASH)
          {
            return TargetStatus::DELETING;
          }
          else if (hashCode == READY_HASH)
          {
            return TargetStatus::READY;
          }
          else if (hashCode == FAILED_HASH)
          {
            return TargetStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TargetStatus>(hashCode);
          }

          return TargetStatus::NOT_SET;
        }

        Aws::String GetNameForTargetStatus(TargetStatus enumValue)
        {
          switch(enumValue)
          {
          case TargetStatus::NOT_SET:
            return {};
          case TargetStatus::CREATING:
            return "CREATING";
          case TargetStatus::UPDATING:
            return "UPDATING";
          case TargetStatus::UPDATE_UNSUCCESSFUL:
            return "UPDATE_UNSUCCESSFUL";
          case TargetStatus::DELETING:
            return "DELETING";
          case TargetStatus::READY:
            return "READY";
          case TargetStatus::FAILED:
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

      } // namespace TargetStatusMapper
    } // namespace Model
  } // namespace BedrockAgentCoreControl
} // namespace Aws
