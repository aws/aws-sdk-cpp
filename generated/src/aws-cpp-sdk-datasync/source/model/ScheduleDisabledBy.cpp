/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/ScheduleDisabledBy.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DataSync
  {
    namespace Model
    {
      namespace ScheduleDisabledByMapper
      {

        static const int USER_HASH = HashingUtils::HashString("USER");
        static const int SERVICE_HASH = HashingUtils::HashString("SERVICE");


        ScheduleDisabledBy GetScheduleDisabledByForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == USER_HASH)
          {
            return ScheduleDisabledBy::USER;
          }
          else if (hashCode == SERVICE_HASH)
          {
            return ScheduleDisabledBy::SERVICE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ScheduleDisabledBy>(hashCode);
          }

          return ScheduleDisabledBy::NOT_SET;
        }

        Aws::String GetNameForScheduleDisabledBy(ScheduleDisabledBy enumValue)
        {
          switch(enumValue)
          {
          case ScheduleDisabledBy::NOT_SET:
            return {};
          case ScheduleDisabledBy::USER:
            return "USER";
          case ScheduleDisabledBy::SERVICE:
            return "SERVICE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ScheduleDisabledByMapper
    } // namespace Model
  } // namespace DataSync
} // namespace Aws
