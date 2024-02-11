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

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int CREATION_FAILED_HASH = HashingUtils::HashString("CREATION_FAILED");
        static const int UPDATE_FAILED_HASH = HashingUtils::HashString("UPDATE_FAILED");


        LoggingConfigurationStatusCode GetLoggingConfigurationStatusCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
