/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks/model/NodegroupStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EKS
  {
    namespace Model
    {
      namespace NodegroupStatusMapper
      {

        static constexpr uint32_t CREATING_HASH = ConstExprHashingUtils::HashString("CREATING");
        static constexpr uint32_t ACTIVE_HASH = ConstExprHashingUtils::HashString("ACTIVE");
        static constexpr uint32_t UPDATING_HASH = ConstExprHashingUtils::HashString("UPDATING");
        static constexpr uint32_t DELETING_HASH = ConstExprHashingUtils::HashString("DELETING");
        static constexpr uint32_t CREATE_FAILED_HASH = ConstExprHashingUtils::HashString("CREATE_FAILED");
        static constexpr uint32_t DELETE_FAILED_HASH = ConstExprHashingUtils::HashString("DELETE_FAILED");
        static constexpr uint32_t DEGRADED_HASH = ConstExprHashingUtils::HashString("DEGRADED");


        NodegroupStatus GetNodegroupStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return NodegroupStatus::CREATING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return NodegroupStatus::ACTIVE;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return NodegroupStatus::UPDATING;
          }
          else if (hashCode == DELETING_HASH)
          {
            return NodegroupStatus::DELETING;
          }
          else if (hashCode == CREATE_FAILED_HASH)
          {
            return NodegroupStatus::CREATE_FAILED;
          }
          else if (hashCode == DELETE_FAILED_HASH)
          {
            return NodegroupStatus::DELETE_FAILED;
          }
          else if (hashCode == DEGRADED_HASH)
          {
            return NodegroupStatus::DEGRADED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NodegroupStatus>(hashCode);
          }

          return NodegroupStatus::NOT_SET;
        }

        Aws::String GetNameForNodegroupStatus(NodegroupStatus enumValue)
        {
          switch(enumValue)
          {
          case NodegroupStatus::NOT_SET:
            return {};
          case NodegroupStatus::CREATING:
            return "CREATING";
          case NodegroupStatus::ACTIVE:
            return "ACTIVE";
          case NodegroupStatus::UPDATING:
            return "UPDATING";
          case NodegroupStatus::DELETING:
            return "DELETING";
          case NodegroupStatus::CREATE_FAILED:
            return "CREATE_FAILED";
          case NodegroupStatus::DELETE_FAILED:
            return "DELETE_FAILED";
          case NodegroupStatus::DEGRADED:
            return "DEGRADED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NodegroupStatusMapper
    } // namespace Model
  } // namespace EKS
} // namespace Aws
