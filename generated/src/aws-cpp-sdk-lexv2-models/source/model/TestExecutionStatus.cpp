/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/TestExecutionStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LexModelsV2
  {
    namespace Model
    {
      namespace TestExecutionStatusMapper
      {

        static constexpr uint32_t Pending_HASH = ConstExprHashingUtils::HashString("Pending");
        static constexpr uint32_t Waiting_HASH = ConstExprHashingUtils::HashString("Waiting");
        static constexpr uint32_t InProgress_HASH = ConstExprHashingUtils::HashString("InProgress");
        static constexpr uint32_t Completed_HASH = ConstExprHashingUtils::HashString("Completed");
        static constexpr uint32_t Failed_HASH = ConstExprHashingUtils::HashString("Failed");
        static constexpr uint32_t Stopping_HASH = ConstExprHashingUtils::HashString("Stopping");
        static constexpr uint32_t Stopped_HASH = ConstExprHashingUtils::HashString("Stopped");


        TestExecutionStatus GetTestExecutionStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Pending_HASH)
          {
            return TestExecutionStatus::Pending;
          }
          else if (hashCode == Waiting_HASH)
          {
            return TestExecutionStatus::Waiting;
          }
          else if (hashCode == InProgress_HASH)
          {
            return TestExecutionStatus::InProgress;
          }
          else if (hashCode == Completed_HASH)
          {
            return TestExecutionStatus::Completed;
          }
          else if (hashCode == Failed_HASH)
          {
            return TestExecutionStatus::Failed;
          }
          else if (hashCode == Stopping_HASH)
          {
            return TestExecutionStatus::Stopping;
          }
          else if (hashCode == Stopped_HASH)
          {
            return TestExecutionStatus::Stopped;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TestExecutionStatus>(hashCode);
          }

          return TestExecutionStatus::NOT_SET;
        }

        Aws::String GetNameForTestExecutionStatus(TestExecutionStatus enumValue)
        {
          switch(enumValue)
          {
          case TestExecutionStatus::NOT_SET:
            return {};
          case TestExecutionStatus::Pending:
            return "Pending";
          case TestExecutionStatus::Waiting:
            return "Waiting";
          case TestExecutionStatus::InProgress:
            return "InProgress";
          case TestExecutionStatus::Completed:
            return "Completed";
          case TestExecutionStatus::Failed:
            return "Failed";
          case TestExecutionStatus::Stopping:
            return "Stopping";
          case TestExecutionStatus::Stopped:
            return "Stopped";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TestExecutionStatusMapper
    } // namespace Model
  } // namespace LexModelsV2
} // namespace Aws
