/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafkaconnect/model/ConnectorOperationStepState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace KafkaConnect
  {
    namespace Model
    {
      namespace ConnectorOperationStepStateMapper
      {

        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int CANCELLED_HASH = HashingUtils::HashString("CANCELLED");


        ConnectorOperationStepState GetConnectorOperationStepStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return ConnectorOperationStepState::PENDING;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return ConnectorOperationStepState::IN_PROGRESS;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return ConnectorOperationStepState::COMPLETED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return ConnectorOperationStepState::FAILED;
          }
          else if (hashCode == CANCELLED_HASH)
          {
            return ConnectorOperationStepState::CANCELLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConnectorOperationStepState>(hashCode);
          }

          return ConnectorOperationStepState::NOT_SET;
        }

        Aws::String GetNameForConnectorOperationStepState(ConnectorOperationStepState enumValue)
        {
          switch(enumValue)
          {
          case ConnectorOperationStepState::NOT_SET:
            return {};
          case ConnectorOperationStepState::PENDING:
            return "PENDING";
          case ConnectorOperationStepState::IN_PROGRESS:
            return "IN_PROGRESS";
          case ConnectorOperationStepState::COMPLETED:
            return "COMPLETED";
          case ConnectorOperationStepState::FAILED:
            return "FAILED";
          case ConnectorOperationStepState::CANCELLED:
            return "CANCELLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ConnectorOperationStepStateMapper
    } // namespace Model
  } // namespace KafkaConnect
} // namespace Aws
