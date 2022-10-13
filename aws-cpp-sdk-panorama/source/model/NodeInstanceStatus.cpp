/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/panorama/model/NodeInstanceStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Panorama
  {
    namespace Model
    {
      namespace NodeInstanceStatusMapper
      {

        static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
        static const int ERROR__HASH = HashingUtils::HashString("ERROR");
        static const int NOT_AVAILABLE_HASH = HashingUtils::HashString("NOT_AVAILABLE");
        static const int PAUSED_HASH = HashingUtils::HashString("PAUSED");


        NodeInstanceStatus GetNodeInstanceStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RUNNING_HASH)
          {
            return NodeInstanceStatus::RUNNING;
          }
          else if (hashCode == ERROR__HASH)
          {
            return NodeInstanceStatus::ERROR_;
          }
          else if (hashCode == NOT_AVAILABLE_HASH)
          {
            return NodeInstanceStatus::NOT_AVAILABLE;
          }
          else if (hashCode == PAUSED_HASH)
          {
            return NodeInstanceStatus::PAUSED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NodeInstanceStatus>(hashCode);
          }

          return NodeInstanceStatus::NOT_SET;
        }

        Aws::String GetNameForNodeInstanceStatus(NodeInstanceStatus enumValue)
        {
          switch(enumValue)
          {
          case NodeInstanceStatus::RUNNING:
            return "RUNNING";
          case NodeInstanceStatus::ERROR_:
            return "ERROR";
          case NodeInstanceStatus::NOT_AVAILABLE:
            return "NOT_AVAILABLE";
          case NodeInstanceStatus::PAUSED:
            return "PAUSED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NodeInstanceStatusMapper
    } // namespace Model
  } // namespace Panorama
} // namespace Aws
