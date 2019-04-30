/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
