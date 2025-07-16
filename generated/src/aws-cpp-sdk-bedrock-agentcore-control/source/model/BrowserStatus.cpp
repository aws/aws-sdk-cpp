/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/BrowserStatus.h>
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
      namespace BrowserStatusMapper
      {

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int CREATE_FAILED_HASH = HashingUtils::HashString("CREATE_FAILED");
        static const int READY_HASH = HashingUtils::HashString("READY");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int DELETE_FAILED_HASH = HashingUtils::HashString("DELETE_FAILED");
        static const int DELETED_HASH = HashingUtils::HashString("DELETED");


        BrowserStatus GetBrowserStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return BrowserStatus::CREATING;
          }
          else if (hashCode == CREATE_FAILED_HASH)
          {
            return BrowserStatus::CREATE_FAILED;
          }
          else if (hashCode == READY_HASH)
          {
            return BrowserStatus::READY;
          }
          else if (hashCode == DELETING_HASH)
          {
            return BrowserStatus::DELETING;
          }
          else if (hashCode == DELETE_FAILED_HASH)
          {
            return BrowserStatus::DELETE_FAILED;
          }
          else if (hashCode == DELETED_HASH)
          {
            return BrowserStatus::DELETED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BrowserStatus>(hashCode);
          }

          return BrowserStatus::NOT_SET;
        }

        Aws::String GetNameForBrowserStatus(BrowserStatus enumValue)
        {
          switch(enumValue)
          {
          case BrowserStatus::NOT_SET:
            return {};
          case BrowserStatus::CREATING:
            return "CREATING";
          case BrowserStatus::CREATE_FAILED:
            return "CREATE_FAILED";
          case BrowserStatus::READY:
            return "READY";
          case BrowserStatus::DELETING:
            return "DELETING";
          case BrowserStatus::DELETE_FAILED:
            return "DELETE_FAILED";
          case BrowserStatus::DELETED:
            return "DELETED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BrowserStatusMapper
    } // namespace Model
  } // namespace BedrockAgentCoreControl
} // namespace Aws
