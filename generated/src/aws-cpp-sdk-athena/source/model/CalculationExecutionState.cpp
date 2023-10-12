/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/athena/model/CalculationExecutionState.h>
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
      namespace CalculationExecutionStateMapper
      {

        static constexpr uint32_t CREATING_HASH = ConstExprHashingUtils::HashString("CREATING");
        static constexpr uint32_t CREATED_HASH = ConstExprHashingUtils::HashString("CREATED");
        static constexpr uint32_t QUEUED_HASH = ConstExprHashingUtils::HashString("QUEUED");
        static constexpr uint32_t RUNNING_HASH = ConstExprHashingUtils::HashString("RUNNING");
        static constexpr uint32_t CANCELING_HASH = ConstExprHashingUtils::HashString("CANCELING");
        static constexpr uint32_t CANCELED_HASH = ConstExprHashingUtils::HashString("CANCELED");
        static constexpr uint32_t COMPLETED_HASH = ConstExprHashingUtils::HashString("COMPLETED");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");


        CalculationExecutionState GetCalculationExecutionStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return CalculationExecutionState::CREATING;
          }
          else if (hashCode == CREATED_HASH)
          {
            return CalculationExecutionState::CREATED;
          }
          else if (hashCode == QUEUED_HASH)
          {
            return CalculationExecutionState::QUEUED;
          }
          else if (hashCode == RUNNING_HASH)
          {
            return CalculationExecutionState::RUNNING;
          }
          else if (hashCode == CANCELING_HASH)
          {
            return CalculationExecutionState::CANCELING;
          }
          else if (hashCode == CANCELED_HASH)
          {
            return CalculationExecutionState::CANCELED;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return CalculationExecutionState::COMPLETED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return CalculationExecutionState::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CalculationExecutionState>(hashCode);
          }

          return CalculationExecutionState::NOT_SET;
        }

        Aws::String GetNameForCalculationExecutionState(CalculationExecutionState enumValue)
        {
          switch(enumValue)
          {
          case CalculationExecutionState::NOT_SET:
            return {};
          case CalculationExecutionState::CREATING:
            return "CREATING";
          case CalculationExecutionState::CREATED:
            return "CREATED";
          case CalculationExecutionState::QUEUED:
            return "QUEUED";
          case CalculationExecutionState::RUNNING:
            return "RUNNING";
          case CalculationExecutionState::CANCELING:
            return "CANCELING";
          case CalculationExecutionState::CANCELED:
            return "CANCELED";
          case CalculationExecutionState::COMPLETED:
            return "COMPLETED";
          case CalculationExecutionState::FAILED:
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

      } // namespace CalculationExecutionStateMapper
    } // namespace Model
  } // namespace Athena
} // namespace Aws
