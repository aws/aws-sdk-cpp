/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/evidently/model/ExperimentStopDesiredState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudWatchEvidently
  {
    namespace Model
    {
      namespace ExperimentStopDesiredStateMapper
      {

        static constexpr uint32_t COMPLETED_HASH = ConstExprHashingUtils::HashString("COMPLETED");
        static constexpr uint32_t CANCELLED_HASH = ConstExprHashingUtils::HashString("CANCELLED");


        ExperimentStopDesiredState GetExperimentStopDesiredStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == COMPLETED_HASH)
          {
            return ExperimentStopDesiredState::COMPLETED;
          }
          else if (hashCode == CANCELLED_HASH)
          {
            return ExperimentStopDesiredState::CANCELLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ExperimentStopDesiredState>(hashCode);
          }

          return ExperimentStopDesiredState::NOT_SET;
        }

        Aws::String GetNameForExperimentStopDesiredState(ExperimentStopDesiredState enumValue)
        {
          switch(enumValue)
          {
          case ExperimentStopDesiredState::NOT_SET:
            return {};
          case ExperimentStopDesiredState::COMPLETED:
            return "COMPLETED";
          case ExperimentStopDesiredState::CANCELLED:
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

      } // namespace ExperimentStopDesiredStateMapper
    } // namespace Model
  } // namespace CloudWatchEvidently
} // namespace Aws
