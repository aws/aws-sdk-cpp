/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apptest/model/StepRunStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AppTest
  {
    namespace Model
    {
      namespace StepRunStatusMapper
      {

        static const int Success_HASH = HashingUtils::HashString("Success");
        static const int Failed_HASH = HashingUtils::HashString("Failed");
        static const int Running_HASH = HashingUtils::HashString("Running");


        StepRunStatus GetStepRunStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Success_HASH)
          {
            return StepRunStatus::Success;
          }
          else if (hashCode == Failed_HASH)
          {
            return StepRunStatus::Failed;
          }
          else if (hashCode == Running_HASH)
          {
            return StepRunStatus::Running;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StepRunStatus>(hashCode);
          }

          return StepRunStatus::NOT_SET;
        }

        Aws::String GetNameForStepRunStatus(StepRunStatus enumValue)
        {
          switch(enumValue)
          {
          case StepRunStatus::NOT_SET:
            return {};
          case StepRunStatus::Success:
            return "Success";
          case StepRunStatus::Failed:
            return "Failed";
          case StepRunStatus::Running:
            return "Running";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StepRunStatusMapper
    } // namespace Model
  } // namespace AppTest
} // namespace Aws
