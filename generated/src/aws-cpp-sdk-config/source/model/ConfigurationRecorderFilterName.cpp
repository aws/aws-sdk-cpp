/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/ConfigurationRecorderFilterName.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ConfigService
  {
    namespace Model
    {
      namespace ConfigurationRecorderFilterNameMapper
      {

        static const int recordingScope_HASH = HashingUtils::HashString("recordingScope");


        ConfigurationRecorderFilterName GetConfigurationRecorderFilterNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == recordingScope_HASH)
          {
            return ConfigurationRecorderFilterName::recordingScope;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConfigurationRecorderFilterName>(hashCode);
          }

          return ConfigurationRecorderFilterName::NOT_SET;
        }

        Aws::String GetNameForConfigurationRecorderFilterName(ConfigurationRecorderFilterName enumValue)
        {
          switch(enumValue)
          {
          case ConfigurationRecorderFilterName::NOT_SET:
            return {};
          case ConfigurationRecorderFilterName::recordingScope:
            return "recordingScope";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ConfigurationRecorderFilterNameMapper
    } // namespace Model
  } // namespace ConfigService
} // namespace Aws
