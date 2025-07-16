/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/CodeInterpreterStatus.h>
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
      namespace CodeInterpreterStatusMapper
      {

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int CREATE_FAILED_HASH = HashingUtils::HashString("CREATE_FAILED");
        static const int READY_HASH = HashingUtils::HashString("READY");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int DELETE_FAILED_HASH = HashingUtils::HashString("DELETE_FAILED");
        static const int DELETED_HASH = HashingUtils::HashString("DELETED");


        CodeInterpreterStatus GetCodeInterpreterStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return CodeInterpreterStatus::CREATING;
          }
          else if (hashCode == CREATE_FAILED_HASH)
          {
            return CodeInterpreterStatus::CREATE_FAILED;
          }
          else if (hashCode == READY_HASH)
          {
            return CodeInterpreterStatus::READY;
          }
          else if (hashCode == DELETING_HASH)
          {
            return CodeInterpreterStatus::DELETING;
          }
          else if (hashCode == DELETE_FAILED_HASH)
          {
            return CodeInterpreterStatus::DELETE_FAILED;
          }
          else if (hashCode == DELETED_HASH)
          {
            return CodeInterpreterStatus::DELETED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CodeInterpreterStatus>(hashCode);
          }

          return CodeInterpreterStatus::NOT_SET;
        }

        Aws::String GetNameForCodeInterpreterStatus(CodeInterpreterStatus enumValue)
        {
          switch(enumValue)
          {
          case CodeInterpreterStatus::NOT_SET:
            return {};
          case CodeInterpreterStatus::CREATING:
            return "CREATING";
          case CodeInterpreterStatus::CREATE_FAILED:
            return "CREATE_FAILED";
          case CodeInterpreterStatus::READY:
            return "READY";
          case CodeInterpreterStatus::DELETING:
            return "DELETING";
          case CodeInterpreterStatus::DELETE_FAILED:
            return "DELETE_FAILED";
          case CodeInterpreterStatus::DELETED:
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

      } // namespace CodeInterpreterStatusMapper
    } // namespace Model
  } // namespace BedrockAgentCoreControl
} // namespace Aws
