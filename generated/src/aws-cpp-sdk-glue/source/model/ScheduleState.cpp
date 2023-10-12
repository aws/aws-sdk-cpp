/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/ScheduleState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Glue
  {
    namespace Model
    {
      namespace ScheduleStateMapper
      {

        static constexpr uint32_t SCHEDULED_HASH = ConstExprHashingUtils::HashString("SCHEDULED");
        static constexpr uint32_t NOT_SCHEDULED_HASH = ConstExprHashingUtils::HashString("NOT_SCHEDULED");
        static constexpr uint32_t TRANSITIONING_HASH = ConstExprHashingUtils::HashString("TRANSITIONING");


        ScheduleState GetScheduleStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SCHEDULED_HASH)
          {
            return ScheduleState::SCHEDULED;
          }
          else if (hashCode == NOT_SCHEDULED_HASH)
          {
            return ScheduleState::NOT_SCHEDULED;
          }
          else if (hashCode == TRANSITIONING_HASH)
          {
            return ScheduleState::TRANSITIONING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ScheduleState>(hashCode);
          }

          return ScheduleState::NOT_SET;
        }

        Aws::String GetNameForScheduleState(ScheduleState enumValue)
        {
          switch(enumValue)
          {
          case ScheduleState::NOT_SET:
            return {};
          case ScheduleState::SCHEDULED:
            return "SCHEDULED";
          case ScheduleState::NOT_SCHEDULED:
            return "NOT_SCHEDULED";
          case ScheduleState::TRANSITIONING:
            return "TRANSITIONING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ScheduleStateMapper
    } // namespace Model
  } // namespace Glue
} // namespace Aws
