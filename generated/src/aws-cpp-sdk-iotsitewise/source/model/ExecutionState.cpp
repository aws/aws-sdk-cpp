/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/ExecutionState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTSiteWise
  {
    namespace Model
    {
      namespace ExecutionStateMapper
      {

        static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        ExecutionState GetExecutionStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RUNNING_HASH)
          {
            return ExecutionState::RUNNING;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return ExecutionState::COMPLETED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return ExecutionState::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ExecutionState>(hashCode);
          }

          return ExecutionState::NOT_SET;
        }

        Aws::String GetNameForExecutionState(ExecutionState enumValue)
        {
          switch(enumValue)
          {
          case ExecutionState::NOT_SET:
            return {};
          case ExecutionState::RUNNING:
            return "RUNNING";
          case ExecutionState::COMPLETED:
            return "COMPLETED";
          case ExecutionState::FAILED:
            return "FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ExecutionStateMapper
    } // namespace Model
  } // namespace IoTSiteWise
} // namespace Aws
