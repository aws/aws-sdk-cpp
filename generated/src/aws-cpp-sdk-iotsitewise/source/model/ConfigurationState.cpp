/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/ConfigurationState.h>
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
      namespace ConfigurationStateMapper
      {

        static constexpr uint32_t ACTIVE_HASH = ConstExprHashingUtils::HashString("ACTIVE");
        static constexpr uint32_t UPDATE_IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("UPDATE_IN_PROGRESS");
        static constexpr uint32_t UPDATE_FAILED_HASH = ConstExprHashingUtils::HashString("UPDATE_FAILED");


        ConfigurationState GetConfigurationStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return ConfigurationState::ACTIVE;
          }
          else if (hashCode == UPDATE_IN_PROGRESS_HASH)
          {
            return ConfigurationState::UPDATE_IN_PROGRESS;
          }
          else if (hashCode == UPDATE_FAILED_HASH)
          {
            return ConfigurationState::UPDATE_FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConfigurationState>(hashCode);
          }

          return ConfigurationState::NOT_SET;
        }

        Aws::String GetNameForConfigurationState(ConfigurationState enumValue)
        {
          switch(enumValue)
          {
          case ConfigurationState::NOT_SET:
            return {};
          case ConfigurationState::ACTIVE:
            return "ACTIVE";
          case ConfigurationState::UPDATE_IN_PROGRESS:
            return "UPDATE_IN_PROGRESS";
          case ConfigurationState::UPDATE_FAILED:
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

      } // namespace ConfigurationStateMapper
    } // namespace Model
  } // namespace IoTSiteWise
} // namespace Aws
