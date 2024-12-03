/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/ScheduleType.h>
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
      namespace ScheduleTypeMapper
      {

        static const int CRON_HASH = HashingUtils::HashString("CRON");
        static const int AUTO_HASH = HashingUtils::HashString("AUTO");


        ScheduleType GetScheduleTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CRON_HASH)
          {
            return ScheduleType::CRON;
          }
          else if (hashCode == AUTO_HASH)
          {
            return ScheduleType::AUTO;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ScheduleType>(hashCode);
          }

          return ScheduleType::NOT_SET;
        }

        Aws::String GetNameForScheduleType(ScheduleType enumValue)
        {
          switch(enumValue)
          {
          case ScheduleType::NOT_SET:
            return {};
          case ScheduleType::CRON:
            return "CRON";
          case ScheduleType::AUTO:
            return "AUTO";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ScheduleTypeMapper
    } // namespace Model
  } // namespace Glue
} // namespace Aws
