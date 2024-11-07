/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanroomsml/model/LogsStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CleanRoomsML
  {
    namespace Model
    {
      namespace LogsStatusMapper
      {

        static const int PUBLISH_SUCCEEDED_HASH = HashingUtils::HashString("PUBLISH_SUCCEEDED");
        static const int PUBLISH_FAILED_HASH = HashingUtils::HashString("PUBLISH_FAILED");


        LogsStatus GetLogsStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PUBLISH_SUCCEEDED_HASH)
          {
            return LogsStatus::PUBLISH_SUCCEEDED;
          }
          else if (hashCode == PUBLISH_FAILED_HASH)
          {
            return LogsStatus::PUBLISH_FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LogsStatus>(hashCode);
          }

          return LogsStatus::NOT_SET;
        }

        Aws::String GetNameForLogsStatus(LogsStatus enumValue)
        {
          switch(enumValue)
          {
          case LogsStatus::NOT_SET:
            return {};
          case LogsStatus::PUBLISH_SUCCEEDED:
            return "PUBLISH_SUCCEEDED";
          case LogsStatus::PUBLISH_FAILED:
            return "PUBLISH_FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LogsStatusMapper
    } // namespace Model
  } // namespace CleanRoomsML
} // namespace Aws
