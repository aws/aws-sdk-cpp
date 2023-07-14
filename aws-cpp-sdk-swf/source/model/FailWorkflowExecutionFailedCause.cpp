/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/swf/model/FailWorkflowExecutionFailedCause.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SWF
  {
    namespace Model
    {
      namespace FailWorkflowExecutionFailedCauseMapper
      {

        static const int UNHANDLED_DECISION_HASH = HashingUtils::HashString("UNHANDLED_DECISION");
        static const int OPERATION_NOT_PERMITTED_HASH = HashingUtils::HashString("OPERATION_NOT_PERMITTED");


        FailWorkflowExecutionFailedCause GetFailWorkflowExecutionFailedCauseForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == UNHANDLED_DECISION_HASH)
          {
            return FailWorkflowExecutionFailedCause::UNHANDLED_DECISION;
          }
          else if (hashCode == OPERATION_NOT_PERMITTED_HASH)
          {
            return FailWorkflowExecutionFailedCause::OPERATION_NOT_PERMITTED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FailWorkflowExecutionFailedCause>(hashCode);
          }

          return FailWorkflowExecutionFailedCause::NOT_SET;
        }

        Aws::String GetNameForFailWorkflowExecutionFailedCause(FailWorkflowExecutionFailedCause enumValue)
        {
          switch(enumValue)
          {
          case FailWorkflowExecutionFailedCause::UNHANDLED_DECISION:
            return "UNHANDLED_DECISION";
          case FailWorkflowExecutionFailedCause::OPERATION_NOT_PERMITTED:
            return "OPERATION_NOT_PERMITTED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FailWorkflowExecutionFailedCauseMapper
    } // namespace Model
  } // namespace SWF
} // namespace Aws
