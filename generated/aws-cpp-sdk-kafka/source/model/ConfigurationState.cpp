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

        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int DELETE_FAILED_HASH = HashingUtils::HashString("DELETE_FAILED");


        ConfigurationState GetConfigurationStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
