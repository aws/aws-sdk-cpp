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

        static constexpr uint32_t INTERNAL_FAILURE_HASH = ConstExprHashingUtils::HashString("INTERNAL_FAILURE");
        static constexpr uint32_t VALIDATION_ERROR_HASH = ConstExprHashingUtils::HashString("VALIDATION_ERROR");
        static constexpr uint32_t LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("LIMIT_EXCEEDED");


        MonitorErrorCode GetMonitorErrorCodeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case MonitorErrorCode::NOT_SET:
            return {};
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
