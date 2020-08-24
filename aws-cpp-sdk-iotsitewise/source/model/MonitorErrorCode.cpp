/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/MonitorErrorCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTSiteWise
  {
    namespace Model
    {
      namespace MonitorErrorCodeMapper
      {

        static const int INTERNAL_FAILURE_HASH = HashingUtils::HashString("INTERNAL_FAILURE");
        static const int VALIDATION_ERROR_HASH = HashingUtils::HashString("VALIDATION_ERROR");
        static const int LIMIT_EXCEEDED_HASH = HashingUtils::HashString("LIMIT_EXCEEDED");


        MonitorErrorCode GetMonitorErrorCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INTERNAL_FAILURE_HASH)
          {
            return MonitorErrorCode::INTERNAL_FAILURE;
          }
          else if (hashCode == VALIDATION_ERROR_HASH)
          {
            return MonitorErrorCode::VALIDATION_ERROR;
          }
          else if (hashCode == LIMIT_EXCEEDED_HASH)
          {
            return MonitorErrorCode::LIMIT_EXCEEDED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MonitorErrorCode>(hashCode);
          }

          return MonitorErrorCode::NOT_SET;
        }

        Aws::String GetNameForMonitorErrorCode(MonitorErrorCode enumValue)
        {
          switch(enumValue)
          {
          case MonitorErrorCode::INTERNAL_FAILURE:
            return "INTERNAL_FAILURE";
          case MonitorErrorCode::VALIDATION_ERROR:
            return "VALIDATION_ERROR";
          case MonitorErrorCode::LIMIT_EXCEEDED:
            return "LIMIT_EXCEEDED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MonitorErrorCodeMapper
    } // namespace Model
  } // namespace IoTSiteWise
} // namespace Aws
