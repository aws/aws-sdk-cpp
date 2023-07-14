﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotthingsgraph/model/FlowExecutionStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTThingsGraph
  {
    namespace Model
    {
      namespace FlowExecutionStatusMapper
      {

        static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
        static const int ABORTED_HASH = HashingUtils::HashString("ABORTED");
        static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        FlowExecutionStatus GetFlowExecutionStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RUNNING_HASH)
          {
            return FlowExecutionStatus::RUNNING;
          }
          else if (hashCode == ABORTED_HASH)
          {
            return FlowExecutionStatus::ABORTED;
          }
          else if (hashCode == SUCCEEDED_HASH)
          {
            return FlowExecutionStatus::SUCCEEDED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return FlowExecutionStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FlowExecutionStatus>(hashCode);
          }

          return FlowExecutionStatus::NOT_SET;
        }

        Aws::String GetNameForFlowExecutionStatus(FlowExecutionStatus enumValue)
        {
          switch(enumValue)
          {
          case FlowExecutionStatus::RUNNING:
            return "RUNNING";
          case FlowExecutionStatus::ABORTED:
            return "ABORTED";
          case FlowExecutionStatus::SUCCEEDED:
            return "SUCCEEDED";
          case FlowExecutionStatus::FAILED:
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

      } // namespace FlowExecutionStatusMapper
    } // namespace Model
  } // namespace IoTThingsGraph
} // namespace Aws
