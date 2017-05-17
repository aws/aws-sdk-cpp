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

            return "";
          }
        }

      } // namespace NodeAssociationStatusMapper
    } // namespace Model
  } // namespace OpsWorksCM
} // namespace Aws
