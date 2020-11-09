/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/AutomationExecutionFilterKey.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SSM
  {
    namespace Model
    {
      namespace AutomationExecutionFilterKeyMapper
      {

        static const int DocumentNamePrefix_HASH = HashingUtils::HashString("DocumentNamePrefix");
        static const int ExecutionStatus_HASH = HashingUtils::HashString("ExecutionStatus");
        static const int ExecutionId_HASH = HashingUtils::HashString("ExecutionId");
        static const int ParentExecutionId_HASH = HashingUtils::HashString("ParentExecutionId");
        static const int CurrentAction_HASH = HashingUtils::HashString("CurrentAction");
        static const int StartTimeBefore_HASH = HashingUtils::HashString("StartTimeBefore");
        static const int StartTimeAfter_HASH = HashingUtils::HashString("StartTimeAfter");
        static const int AutomationType_HASH = HashingUtils::HashString("AutomationType");
        static const int TagKey_HASH = HashingUtils::HashString("TagKey");
        static const int TargetResourceGroup_HASH = HashingUtils::HashString("TargetResourceGroup");


        AutomationExecutionFilterKey GetAutomationExecutionFilterKeyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DocumentNamePrefix_HASH)
          {
            return AutomationExecutionFilterKey::DocumentNamePrefix;
          }
          else if (hashCode == ExecutionStatus_HASH)
          {
            return AutomationExecutionFilterKey::ExecutionStatus;
          }
          else if (hashCode == ExecutionId_HASH)
          {
            return AutomationExecutionFilterKey::ExecutionId;
          }
          else if (hashCode == ParentExecutionId_HASH)
          {
            return AutomationExecutionFilterKey::ParentExecutionId;
          }
          else if (hashCode == CurrentAction_HASH)
          {
            return AutomationExecutionFilterKey::CurrentAction;
          }
          else if (hashCode == StartTimeBefore_HASH)
          {
            return AutomationExecutionFilterKey::StartTimeBefore;
          }
          else if (hashCode == StartTimeAfter_HASH)
          {
            return AutomationExecutionFilterKey::StartTimeAfter;
          }
          else if (hashCode == AutomationType_HASH)
          {
            return AutomationExecutionFilterKey::AutomationType;
          }
          else if (hashCode == TagKey_HASH)
          {
            return AutomationExecutionFilterKey::TagKey;
          }
          else if (hashCode == TargetResourceGroup_HASH)
          {
            return AutomationExecutionFilterKey::TargetResourceGroup;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AutomationExecutionFilterKey>(hashCode);
          }

          return AutomationExecutionFilterKey::NOT_SET;
        }

        Aws::String GetNameForAutomationExecutionFilterKey(AutomationExecutionFilterKey enumValue)
        {
          switch(enumValue)
          {
          case AutomationExecutionFilterKey::DocumentNamePrefix:
            return "DocumentNamePrefix";
          case AutomationExecutionFilterKey::ExecutionStatus:
            return "ExecutionStatus";
          case AutomationExecutionFilterKey::ExecutionId:
            return "ExecutionId";
          case AutomationExecutionFilterKey::ParentExecutionId:
            return "ParentExecutionId";
          case AutomationExecutionFilterKey::CurrentAction:
            return "CurrentAction";
          case AutomationExecutionFilterKey::StartTimeBefore:
            return "StartTimeBefore";
          case AutomationExecutionFilterKey::StartTimeAfter:
            return "StartTimeAfter";
          case AutomationExecutionFilterKey::AutomationType:
            return "AutomationType";
          case AutomationExecutionFilterKey::TagKey:
            return "TagKey";
          case AutomationExecutionFilterKey::TargetResourceGroup:
            return "TargetResourceGroup";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AutomationExecutionFilterKeyMapper
    } // namespace Model
  } // namespace SSM
} // namespace Aws
