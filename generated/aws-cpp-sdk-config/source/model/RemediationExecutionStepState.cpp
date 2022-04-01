/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/RemediationExecutionStepState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ConfigService
  {
    namespace Model
    {
      namespace RemediationExecutionStepStateMapper
      {

        static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");
        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        RemediationExecutionStepState GetRemediationExecutionStepStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SUCCEEDED_HASH)
          {
            return RemediationExecutionStepState::SUCCEEDED;
          }
          else if (hashCode == PENDING_HASH)
          {
            return RemediationExecutionStepState::PENDING;
          }
          else if (hashCode == FAILED_HASH)
          {
            return RemediationExecutionStepState::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RemediationExecutionStepState>(hashCode);
          }

          return RemediationExecutionStepState::NOT_SET;
        }

        Aws::String GetNameForRemediationExecutionStepState(RemediationExecutionStepState enumValue)
        {
          switch(enumValue)
          {
          case RemediationExecutionStepState::SUCCEEDED:
            return "SUCCEEDED";
          case RemediationExecutionStepState::PENDING:
            return "PENDING";
          case RemediationExecutionStepState::FAILED:
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

      } // namespace RemediationExecutionStepStateMapper
    } // namespace Model
  } // namespace ConfigService
} // namespace Aws
