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

#include <aws/sagemaker/model/FlowDefinitionStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SageMaker
  {
    namespace Model
    {
      namespace FlowDefinitionStatusMapper
      {

        static const int Initializing_HASH = HashingUtils::HashString("Initializing");
        static const int Active_HASH = HashingUtils::HashString("Active");
        static const int Failed_HASH = HashingUtils::HashString("Failed");
        static const int Deleting_HASH = HashingUtils::HashString("Deleting");
        static const int Deleted_HASH = HashingUtils::HashString("Deleted");


        FlowDefinitionStatus GetFlowDefinitionStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Initializing_HASH)
          {
            return FlowDefinitionStatus::Initializing;
          }
          else if (hashCode == Active_HASH)
          {
            return FlowDefinitionStatus::Active;
          }
          else if (hashCode == Failed_HASH)
          {
            return FlowDefinitionStatus::Failed;
          }
          else if (hashCode == Deleting_HASH)
          {
            return FlowDefinitionStatus::Deleting;
          }
          else if (hashCode == Deleted_HASH)
          {
            return FlowDefinitionStatus::Deleted;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FlowDefinitionStatus>(hashCode);
          }

          return FlowDefinitionStatus::NOT_SET;
        }

        Aws::String GetNameForFlowDefinitionStatus(FlowDefinitionStatus enumValue)
        {
          switch(enumValue)
          {
          case FlowDefinitionStatus::Initializing:
            return "Initializing";
          case FlowDefinitionStatus::Active:
            return "Active";
          case FlowDefinitionStatus::Failed:
            return "Failed";
          case FlowDefinitionStatus::Deleting:
            return "Deleting";
          case FlowDefinitionStatus::Deleted:
            return "Deleted";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FlowDefinitionStatusMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
