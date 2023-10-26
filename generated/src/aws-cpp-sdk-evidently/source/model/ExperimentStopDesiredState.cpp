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

        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
        static const int CANCELLED_HASH = HashingUtils::HashString("CANCELLED");


        ExperimentStopDesiredState GetExperimentStopDesiredStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
