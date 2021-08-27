/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
