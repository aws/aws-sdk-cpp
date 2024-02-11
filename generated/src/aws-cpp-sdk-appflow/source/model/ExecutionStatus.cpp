/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/ExecutionStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Appflow
  {
    namespace Model
    {
      namespace ExecutionStatusMapper
      {

        static const int InProgress_HASH = HashingUtils::HashString("InProgress");
        static const int Successful_HASH = HashingUtils::HashString("Successful");
        static const int Error_HASH = HashingUtils::HashString("Error");
        static const int CancelStarted_HASH = HashingUtils::HashString("CancelStarted");
        static const int Canceled_HASH = HashingUtils::HashString("Canceled");


        ExecutionStatus GetExecutionStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == InProgress_HASH)
          {
            return ExecutionStatus::InProgress;
          }
          else if (hashCode == Successful_HASH)
          {
            return ExecutionStatus::Successful;
          }
          else if (hashCode == Error_HASH)
          {
            return ExecutionStatus::Error;
          }
          else if (hashCode == CancelStarted_HASH)
          {
            return ExecutionStatus::CancelStarted;
          }
          else if (hashCode == Canceled_HASH)
          {
            return ExecutionStatus::Canceled;
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
          case ExecutionStatus::NOT_SET:
            return {};
          case ExecutionStatus::InProgress:
            return "InProgress";
          case ExecutionStatus::Successful:
            return "Successful";
          case ExecutionStatus::Error:
            return "Error";
          case ExecutionStatus::CancelStarted:
            return "CancelStarted";
          case ExecutionStatus::Canceled:
            return "Canceled";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ExecutionStatusMapper
    } // namespace Model
  } // namespace Appflow
} // namespace Aws
