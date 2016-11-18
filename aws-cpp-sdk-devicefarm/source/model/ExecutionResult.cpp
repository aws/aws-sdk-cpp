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
#include <aws/devicefarm/model/ExecutionResult.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DeviceFarm
  {
    namespace Model
    {
      namespace ExecutionResultMapper
      {

        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int PASSED_HASH = HashingUtils::HashString("PASSED");
        static const int WARNED_HASH = HashingUtils::HashString("WARNED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int SKIPPED_HASH = HashingUtils::HashString("SKIPPED");
        static const int ERRORED_HASH = HashingUtils::HashString("ERRORED");
        static const int STOPPED_HASH = HashingUtils::HashString("STOPPED");


        ExecutionResult GetExecutionResultForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return ExecutionResult::PENDING;
          }
          else if (hashCode == PASSED_HASH)
          {
            return ExecutionResult::PASSED;
          }
          else if (hashCode == WARNED_HASH)
          {
            return ExecutionResult::WARNED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return ExecutionResult::FAILED;
          }
          else if (hashCode == SKIPPED_HASH)
          {
            return ExecutionResult::SKIPPED;
          }
          else if (hashCode == ERRORED_HASH)
          {
            return ExecutionResult::ERRORED;
          }
          else if (hashCode == STOPPED_HASH)
          {
            return ExecutionResult::STOPPED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ExecutionResult>(hashCode);
          }

          return ExecutionResult::NOT_SET;
        }

        Aws::String GetNameForExecutionResult(ExecutionResult enumValue)
        {
          switch(enumValue)
          {
          case ExecutionResult::PENDING:
            return "PENDING";
          case ExecutionResult::PASSED:
            return "PASSED";
          case ExecutionResult::WARNED:
            return "WARNED";
          case ExecutionResult::FAILED:
            return "FAILED";
          case ExecutionResult::SKIPPED:
            return "SKIPPED";
          case ExecutionResult::ERRORED:
            return "ERRORED";
          case ExecutionResult::STOPPED:
            return "STOPPED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace ExecutionResultMapper
    } // namespace Model
  } // namespace DeviceFarm
} // namespace Aws
