/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafka/model/ConfigurationState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Kafka
  {
    namespace Model
    {
      namespace ConfigurationStateMapper
      {

        static constexpr uint32_t ACTIVE_HASH = ConstExprHashingUtils::HashString("ACTIVE");
        static constexpr uint32_t DELETING_HASH = ConstExprHashingUtils::HashString("DELETING");
        static constexpr uint32_t DELETE_FAILED_HASH = ConstExprHashingUtils::HashString("DELETE_FAILED");


        ConfigurationState GetConfigurationStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return ConfigurationState::ACTIVE;
          }
          else if (hashCode == DELETING_HASH)
          {
            return ConfigurationState::DELETING;
          }
          else if (hashCode == DELETE_FAILED_HASH)
          {
            return ConfigurationState::DELETE_FAILED;
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
          case ConfigurationState::DELETING:
            return "DELETING";
          case ConfigurationState::DELETE_FAILED:
            return "DELETE_FAILED";
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
  } // namespace Kafka
} // namespace Aws
