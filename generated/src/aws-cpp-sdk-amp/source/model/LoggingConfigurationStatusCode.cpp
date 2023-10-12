/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amp/model/LoggingConfigurationStatusCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace PrometheusService
  {
    namespace Model
    {
      namespace LoggingConfigurationStatusCodeMapper
      {

        static constexpr uint32_t CREATING_HASH = ConstExprHashingUtils::HashString("CREATING");
        static constexpr uint32_t ACTIVE_HASH = ConstExprHashingUtils::HashString("ACTIVE");
        static constexpr uint32_t UPDATING_HASH = ConstExprHashingUtils::HashString("UPDATING");
        static constexpr uint32_t DELETING_HASH = ConstExprHashingUtils::HashString("DELETING");
        static constexpr uint32_t CREATION_FAILED_HASH = ConstExprHashingUtils::HashString("CREATION_FAILED");
        static constexpr uint32_t UPDATE_FAILED_HASH = ConstExprHashingUtils::HashString("UPDATE_FAILED");


        LoggingConfigurationStatusCode GetLoggingConfigurationStatusCodeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return LoggingConfigurationStatusCode::CREATING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return LoggingConfigurationStatusCode::ACTIVE;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return LoggingConfigurationStatusCode::UPDATING;
          }
          else if (hashCode == DELETING_HASH)
          {
            return LoggingConfigurationStatusCode::DELETING;
          }
          else if (hashCode == CREATION_FAILED_HASH)
          {
            return LoggingConfigurationStatusCode::CREATION_FAILED;
          }
          else if (hashCode == UPDATE_FAILED_HASH)
          {
            return LoggingConfigurationStatusCode::UPDATE_FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LoggingConfigurationStatusCode>(hashCode);
          }

          return LoggingConfigurationStatusCode::NOT_SET;
        }

        Aws::String GetNameForLoggingConfigurationStatusCode(LoggingConfigurationStatusCode enumValue)
        {
          switch(enumValue)
          {
          case LoggingConfigurationStatusCode::NOT_SET:
            return {};
          case LoggingConfigurationStatusCode::CREATING:
            return "CREATING";
          case LoggingConfigurationStatusCode::ACTIVE:
            return "ACTIVE";
          case LoggingConfigurationStatusCode::UPDATING:
            return "UPDATING";
          case LoggingConfigurationStatusCode::DELETING:
            return "DELETING";
          case LoggingConfigurationStatusCode::CREATION_FAILED:
            return "CREATION_FAILED";
          case LoggingConfigurationStatusCode::UPDATE_FAILED:
            return "UPDATE_FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LoggingConfigurationStatusCodeMapper
    } // namespace Model
  } // namespace PrometheusService
} // namespace Aws
