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

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int CREATE_FAILED_HASH = HashingUtils::HashString("CREATE_FAILED");
        static const int DELETE_FAILED_HASH = HashingUtils::HashString("DELETE_FAILED");
        static const int DEGRADED_HASH = HashingUtils::HashString("DEGRADED");


        NodegroupStatus GetNodegroupStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
