/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/athena/model/ExecutorState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Athena
  {
    namespace Model
    {
      namespace ExecutorStateMapper
      {

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int CREATED_HASH = HashingUtils::HashString("CREATED");
        static const int REGISTERED_HASH = HashingUtils::HashString("REGISTERED");
        static const int TERMINATING_HASH = HashingUtils::HashString("TERMINATING");
        static const int TERMINATED_HASH = HashingUtils::HashString("TERMINATED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        ExecutorState GetExecutorStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return ExecutorState::CREATING;
          }
          else if (hashCode == CREATED_HASH)
          {
            return ExecutorState::CREATED;
          }
          else if (hashCode == REGISTERED_HASH)
          {
            return ExecutorState::REGISTERED;
          }
          else if (hashCode == TERMINATING_HASH)
          {
            return ExecutorState::TERMINATING;
          }
          else if (hashCode == TERMINATED_HASH)
          {
            return ExecutorState::TERMINATED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return ExecutorState::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ExecutorState>(hashCode);
          }

          return ExecutorState::NOT_SET;
        }

        Aws::String GetNameForExecutorState(ExecutorState enumValue)
        {
          switch(enumValue)
          {
          case ExecutorState::CREATING:
            return "CREATING";
          case ExecutorState::CREATED:
            return "CREATED";
          case ExecutorState::REGISTERED:
            return "REGISTERED";
          case ExecutorState::TERMINATING:
            return "TERMINATING";
          case ExecutorState::TERMINATED:
            return "TERMINATED";
          case ExecutorState::FAILED:
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

      } // namespace ExecutorStateMapper
    } // namespace Model
  } // namespace Athena
} // namespace Aws
