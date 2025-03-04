/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-managed-integrations/model/SchedulingConfigEndBehavior.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTManagedIntegrations
  {
    namespace Model
    {
      namespace SchedulingConfigEndBehaviorMapper
      {

        static const int STOP_ROLLOUT_HASH = HashingUtils::HashString("STOP_ROLLOUT");
        static const int CANCEL_HASH = HashingUtils::HashString("CANCEL");
        static const int FORCE_CANCEL_HASH = HashingUtils::HashString("FORCE_CANCEL");


        SchedulingConfigEndBehavior GetSchedulingConfigEndBehaviorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STOP_ROLLOUT_HASH)
          {
            return SchedulingConfigEndBehavior::STOP_ROLLOUT;
          }
          else if (hashCode == CANCEL_HASH)
          {
            return SchedulingConfigEndBehavior::CANCEL;
          }
          else if (hashCode == FORCE_CANCEL_HASH)
          {
            return SchedulingConfigEndBehavior::FORCE_CANCEL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SchedulingConfigEndBehavior>(hashCode);
          }

          return SchedulingConfigEndBehavior::NOT_SET;
        }

        Aws::String GetNameForSchedulingConfigEndBehavior(SchedulingConfigEndBehavior enumValue)
        {
          switch(enumValue)
          {
          case SchedulingConfigEndBehavior::NOT_SET:
            return {};
          case SchedulingConfigEndBehavior::STOP_ROLLOUT:
            return "STOP_ROLLOUT";
          case SchedulingConfigEndBehavior::CANCEL:
            return "CANCEL";
          case SchedulingConfigEndBehavior::FORCE_CANCEL:
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

      } // namespace SchedulingConfigEndBehaviorMapper
    } // namespace Model
  } // namespace IoTManagedIntegrations
} // namespace Aws
