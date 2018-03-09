﻿/*
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

#include <aws/ssm/model/StepExecutionFilterKey.h>
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
      namespace StepExecutionFilterKeyMapper
      {

        static const int StartTimeBefore_HASH = HashingUtils::HashString("StartTimeBefore");
        static const int StartTimeAfter_HASH = HashingUtils::HashString("StartTimeAfter");
        static const int StepExecutionStatus_HASH = HashingUtils::HashString("StepExecutionStatus");
        static const int StepExecutionId_HASH = HashingUtils::HashString("StepExecutionId");
        static const int StepName_HASH = HashingUtils::HashString("StepName");
        static const int Action_HASH = HashingUtils::HashString("Action");


        StepExecutionFilterKey GetStepExecutionFilterKeyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == StartTimeBefore_HASH)
          {
            return StepExecutionFilterKey::StartTimeBefore;
          }
          else if (hashCode == StartTimeAfter_HASH)
          {
            return StepExecutionFilterKey::StartTimeAfter;
          }
          else if (hashCode == StepExecutionStatus_HASH)
          {
            return StepExecutionFilterKey::StepExecutionStatus;
          }
          else if (hashCode == StepExecutionId_HASH)
          {
            return StepExecutionFilterKey::StepExecutionId;
          }
          else if (hashCode == StepName_HASH)
          {
            return StepExecutionFilterKey::StepName;
          }
          else if (hashCode == Action_HASH)
          {
            return StepExecutionFilterKey::Action;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StepExecutionFilterKey>(hashCode);
          }

          return StepExecutionFilterKey::NOT_SET;
        }

        Aws::String GetNameForStepExecutionFilterKey(StepExecutionFilterKey enumValue)
        {
          switch(enumValue)
          {
          case StepExecutionFilterKey::StartTimeBefore:
            return "StartTimeBefore";
          case StepExecutionFilterKey::StartTimeAfter:
            return "StartTimeAfter";
          case StepExecutionFilterKey::StepExecutionStatus:
            return "StepExecutionStatus";
          case StepExecutionFilterKey::StepExecutionId:
            return "StepExecutionId";
          case StepExecutionFilterKey::StepName:
            return "StepName";
          case StepExecutionFilterKey::Action:
            return "Action";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace StepExecutionFilterKeyMapper
    } // namespace Model
  } // namespace SSM
} // namespace Aws
