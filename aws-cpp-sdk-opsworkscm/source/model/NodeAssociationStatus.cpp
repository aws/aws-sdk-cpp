/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opsworkscm/model/NodeAssociationStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace OpsWorksCM
  {
    namespace Model
    {
      namespace NodeAssociationStatusMapper
      {

        static const int SUCCESS_HASH = HashingUtils::HashString("SUCCESS");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");


        NodeAssociationStatus GetNodeAssociationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SUCCESS_HASH)
          {
            return NodeAssociationStatus::SUCCESS;
          }
          else if (hashCode == FAILED_HASH)
          {
            return NodeAssociationStatus::FAILED;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return NodeAssociationStatus::IN_PROGRESS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NodeAssociationStatus>(hashCode);
          }

          return NodeAssociationStatus::NOT_SET;
        }

        Aws::String GetNameForNodeAssociationStatus(NodeAssociationStatus enumValue)
        {
          switch(enumValue)
          {
          case NodeAssociationStatus::SUCCESS:
            return "SUCCESS";
          case NodeAssociationStatus::FAILED:
            return "FAILED";
          case NodeAssociationStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NodeAssociationStatusMapper
    } // namespace Model
  } // namespace OpsWorksCM
} // namespace Aws
