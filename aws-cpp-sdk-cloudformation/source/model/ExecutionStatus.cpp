/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/cloudformation/model/ExecutionStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudFormation
  {
    namespace Model
    {
      namespace ExecutionStatusMapper
      {

        static const int UNAVAILABLE_HASH = HashingUtils::HashString("UNAVAILABLE");
        static const int AVAILABLE_HASH = HashingUtils::HashString("AVAILABLE");
        static const int EXECUTE_IN_PROGRESS_HASH = HashingUtils::HashString("EXECUTE_IN_PROGRESS");
        static const int EXECUTE_COMPLETE_HASH = HashingUtils::HashString("EXECUTE_COMPLETE");
        static const int EXECUTE_FAILED_HASH = HashingUtils::HashString("EXECUTE_FAILED");
        static const int OBSOLETE_HASH = HashingUtils::HashString("OBSOLETE");


        ExecutionStatus GetExecutionStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == UNAVAILABLE_HASH)
          {
            return ExecutionStatus::UNAVAILABLE;
          }
          else if (hashCode == AVAILABLE_HASH)
          {
            return ExecutionStatus::AVAILABLE;
          }
          else if (hashCode == EXECUTE_IN_PROGRESS_HASH)
          {
            return ExecutionStatus::EXECUTE_IN_PROGRESS;
          }
          else if (hashCode == EXECUTE_COMPLETE_HASH)
          {
            return ExecutionStatus::EXECUTE_COMPLETE;
          }
          else if (hashCode == EXECUTE_FAILED_HASH)
          {
            return ExecutionStatus::EXECUTE_FAILED;
          }
          else if (hashCode == OBSOLETE_HASH)
          {
            return ExecutionStatus::OBSOLETE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ExecutionStatus>(hashCode);
          }

          return ExecutionStatus::NOT_SET;
        }

        Aws::String GetNameForExecutionStatus(ExecutionStatus enumValue)
        {
          switch(enumValue)
          {
          case ExecutionStatus::UNAVAILABLE:
            return "UNAVAILABLE";
          case ExecutionStatus::AVAILABLE:
            return "AVAILABLE";
          case ExecutionStatus::EXECUTE_IN_PROGRESS:
            return "EXECUTE_IN_PROGRESS";
          case ExecutionStatus::EXECUTE_COMPLETE:
            return "EXECUTE_COMPLETE";
          case ExecutionStatus::EXECUTE_FAILED:
            return "EXECUTE_FAILED";
          case ExecutionStatus::OBSOLETE:
            return "OBSOLETE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace ExecutionStatusMapper
    } // namespace Model
  } // namespace CloudFormation
} // namespace Aws
