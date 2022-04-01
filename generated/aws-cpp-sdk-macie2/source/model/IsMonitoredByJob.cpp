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

        static const int TRUE_HASH = HashingUtils::HashString("TRUE");
        static const int FALSE_HASH = HashingUtils::HashString("FALSE");
        static const int UNKNOWN_HASH = HashingUtils::HashString("UNKNOWN");


        IsMonitoredByJob GetIsMonitoredByJobForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
