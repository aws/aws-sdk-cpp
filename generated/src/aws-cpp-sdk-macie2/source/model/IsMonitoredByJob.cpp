/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/IsMonitoredByJob.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Macie2
  {
    namespace Model
    {
      namespace IsMonitoredByJobMapper
      {

        static constexpr uint32_t TRUE_HASH = ConstExprHashingUtils::HashString("TRUE");
        static constexpr uint32_t FALSE_HASH = ConstExprHashingUtils::HashString("FALSE");
        static constexpr uint32_t UNKNOWN_HASH = ConstExprHashingUtils::HashString("UNKNOWN");


        IsMonitoredByJob GetIsMonitoredByJobForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TRUE_HASH)
          {
            return IsMonitoredByJob::TRUE;
          }
          else if (hashCode == FALSE_HASH)
          {
            return IsMonitoredByJob::FALSE;
          }
          else if (hashCode == UNKNOWN_HASH)
          {
            return IsMonitoredByJob::UNKNOWN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IsMonitoredByJob>(hashCode);
          }

          return IsMonitoredByJob::NOT_SET;
        }

        Aws::String GetNameForIsMonitoredByJob(IsMonitoredByJob enumValue)
        {
          switch(enumValue)
          {
          case IsMonitoredByJob::NOT_SET:
            return {};
          case IsMonitoredByJob::TRUE:
            return "TRUE";
          case IsMonitoredByJob::FALSE:
            return "FALSE";
          case IsMonitoredByJob::UNKNOWN:
            return "UNKNOWN";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IsMonitoredByJobMapper
    } // namespace Model
  } // namespace Macie2
} // namespace Aws
