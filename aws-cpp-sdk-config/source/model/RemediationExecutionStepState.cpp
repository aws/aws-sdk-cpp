/*
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
