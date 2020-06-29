/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/managedblockchain/model/NodeStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ManagedBlockchain
  {
    namespace Model
    {
      namespace NodeStatusMapper
      {

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int AVAILABLE_HASH = HashingUtils::HashString("AVAILABLE");
        static const int CREATE_FAILED_HASH = HashingUtils::HashString("CREATE_FAILED");
        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int DELETED_HASH = HashingUtils::HashString("DELETED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        NodeStatus GetNodeStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return NodeStatus::CREATING;
          }
          else if (hashCode == AVAILABLE_HASH)
          {
            return NodeStatus::AVAILABLE;
          }
          else if (hashCode == CREATE_FAILED_HASH)
          {
            return NodeStatus::CREATE_FAILED;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return NodeStatus::UPDATING;
          }
          else if (hashCode == DELETING_HASH)
          {
            return NodeStatus::DELETING;
          }
          else if (hashCode == DELETED_HASH)
          {
            return NodeStatus::DELETED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return NodeStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NodeStatus>(hashCode);
          }

          return NodeStatus::NOT_SET;
        }

        Aws::String GetNameForNodeStatus(NodeStatus enumValue)
        {
          switch(enumValue)
          {
          case NodeStatus::CREATING:
            return "CREATING";
          case NodeStatus::AVAILABLE:
            return "AVAILABLE";
          case NodeStatus::CREATE_FAILED:
            return "CREATE_FAILED";
          case NodeStatus::UPDATING:
            return "UPDATING";
          case NodeStatus::DELETING:
            return "DELETING";
          case NodeStatus::DELETED:
            return "DELETED";
          case NodeStatus::FAILED:
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

      } // namespace NodeStatusMapper
    } // namespace Model
  } // namespace ManagedBlockchain
} // namespace Aws
