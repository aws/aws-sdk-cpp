/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-insights/model/ConfigurationEventStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ApplicationInsights
  {
    namespace Model
    {
      namespace ConfigurationEventStatusMapper
      {

        static constexpr uint32_t INFO_HASH = ConstExprHashingUtils::HashString("INFO");
        static constexpr uint32_t WARN_HASH = ConstExprHashingUtils::HashString("WARN");
        static constexpr uint32_t ERROR__HASH = ConstExprHashingUtils::HashString("ERROR");


        ConfigurationEventStatus GetConfigurationEventStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INFO_HASH)
          {
            return ConfigurationEventStatus::INFO;
          }
          else if (hashCode == WARN_HASH)
          {
            return ConfigurationEventStatus::WARN;
          }
          else if (hashCode == ERROR__HASH)
          {
            return ConfigurationEventStatus::ERROR_;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConfigurationEventStatus>(hashCode);
          }

          return ConfigurationEventStatus::NOT_SET;
        }

        Aws::String GetNameForConfigurationEventStatus(ConfigurationEventStatus enumValue)
        {
          switch(enumValue)
          {
          case ConfigurationEventStatus::NOT_SET:
            return {};
          case ConfigurationEventStatus::INFO:
            return "INFO";
          case ConfigurationEventStatus::WARN:
            return "WARN";
          case ConfigurationEventStatus::ERROR_:
            return "ERROR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ConfigurationEventStatusMapper
    } // namespace Model
  } // namespace ApplicationInsights
} // namespace Aws
