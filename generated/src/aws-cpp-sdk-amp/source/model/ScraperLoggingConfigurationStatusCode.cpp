/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amp/model/ScraperLoggingConfigurationStatusCode.h>
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
      namespace ScraperLoggingConfigurationStatusCodeMapper
      {

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int CREATION_FAILED_HASH = HashingUtils::HashString("CREATION_FAILED");
        static const int UPDATE_FAILED_HASH = HashingUtils::HashString("UPDATE_FAILED");


        ScraperLoggingConfigurationStatusCode GetScraperLoggingConfigurationStatusCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return ScraperLoggingConfigurationStatusCode::CREATING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return ScraperLoggingConfigurationStatusCode::ACTIVE;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return ScraperLoggingConfigurationStatusCode::UPDATING;
          }
          else if (hashCode == DELETING_HASH)
          {
            return ScraperLoggingConfigurationStatusCode::DELETING;
          }
          else if (hashCode == CREATION_FAILED_HASH)
          {
            return ScraperLoggingConfigurationStatusCode::CREATION_FAILED;
          }
          else if (hashCode == UPDATE_FAILED_HASH)
          {
            return ScraperLoggingConfigurationStatusCode::UPDATE_FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ScraperLoggingConfigurationStatusCode>(hashCode);
          }

          return ScraperLoggingConfigurationStatusCode::NOT_SET;
        }

        Aws::String GetNameForScraperLoggingConfigurationStatusCode(ScraperLoggingConfigurationStatusCode enumValue)
        {
          switch(enumValue)
          {
          case ScraperLoggingConfigurationStatusCode::NOT_SET:
            return {};
          case ScraperLoggingConfigurationStatusCode::CREATING:
            return "CREATING";
          case ScraperLoggingConfigurationStatusCode::ACTIVE:
            return "ACTIVE";
          case ScraperLoggingConfigurationStatusCode::UPDATING:
            return "UPDATING";
          case ScraperLoggingConfigurationStatusCode::DELETING:
            return "DELETING";
          case ScraperLoggingConfigurationStatusCode::CREATION_FAILED:
            return "CREATION_FAILED";
          case ScraperLoggingConfigurationStatusCode::UPDATE_FAILED:
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

      } // namespace ScraperLoggingConfigurationStatusCodeMapper
    } // namespace Model
  } // namespace PrometheusService
} // namespace Aws
