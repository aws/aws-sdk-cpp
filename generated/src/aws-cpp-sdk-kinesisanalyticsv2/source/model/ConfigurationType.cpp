/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisanalyticsv2/model/ConfigurationType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace KinesisAnalyticsV2
  {
    namespace Model
    {
      namespace ConfigurationTypeMapper
      {

        static const int DEFAULT_HASH = HashingUtils::HashString("DEFAULT");
        static const int CUSTOM_HASH = HashingUtils::HashString("CUSTOM");


        ConfigurationType GetConfigurationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DEFAULT_HASH)
          {
            return ConfigurationType::DEFAULT;
          }
          else if (hashCode == CUSTOM_HASH)
          {
            return ConfigurationType::CUSTOM;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConfigurationType>(hashCode);
          }

          return ConfigurationType::NOT_SET;
        }

        Aws::String GetNameForConfigurationType(ConfigurationType enumValue)
        {
          switch(enumValue)
          {
          case ConfigurationType::DEFAULT:
            return "DEFAULT";
          case ConfigurationType::CUSTOM:
            return "CUSTOM";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ConfigurationTypeMapper
    } // namespace Model
  } // namespace KinesisAnalyticsV2
} // namespace Aws
