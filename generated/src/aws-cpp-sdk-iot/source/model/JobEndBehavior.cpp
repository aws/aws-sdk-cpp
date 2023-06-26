/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/JobEndBehavior.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoT
  {
    namespace Model
    {
      namespace JobEndBehaviorMapper
      {

        static const int STOP_ROLLOUT_HASH = HashingUtils::HashString("STOP_ROLLOUT");
        static const int CANCEL_HASH = HashingUtils::HashString("CANCEL");
        static const int FORCE_CANCEL_HASH = HashingUtils::HashString("FORCE_CANCEL");


        JobEndBehavior GetJobEndBehaviorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STOP_ROLLOUT_HASH)
          {
            return JobEndBehavior::STOP_ROLLOUT;
          }
          else if (hashCode == CANCEL_HASH)
          {
            return JobEndBehavior::CANCEL;
          }
          else if (hashCode == FORCE_CANCEL_HASH)
          {
            return JobEndBehavior::FORCE_CANCEL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<JobEndBehavior>(hashCode);
          }

          return JobEndBehavior::NOT_SET;
        }

        Aws::String GetNameForJobEndBehavior(JobEndBehavior enumValue)
        {
          switch(enumValue)
          {
          case JobEndBehavior::STOP_ROLLOUT:
            return "STOP_ROLLOUT";
          case JobEndBehavior::CANCEL:
            return "CANCEL";
          case JobEndBehavior::FORCE_CANCEL:
            return "FORCE_CANCEL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace JobEndBehaviorMapper
    } // namespace Model
  } // namespace IoT
} // namespace Aws
