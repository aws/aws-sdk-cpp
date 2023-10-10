/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafkaconnect/model/CustomPluginState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace KafkaConnect
  {
    namespace Model
    {
      namespace CustomPluginStateMapper
      {

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int CREATE_FAILED_HASH = HashingUtils::HashString("CREATE_FAILED");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
        static const int UPDATE_FAILED_HASH = HashingUtils::HashString("UPDATE_FAILED");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");


        CustomPluginState GetCustomPluginStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return CustomPluginState::CREATING;
          }
          else if (hashCode == CREATE_FAILED_HASH)
          {
            return CustomPluginState::CREATE_FAILED;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return CustomPluginState::ACTIVE;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return CustomPluginState::UPDATING;
          }
          else if (hashCode == UPDATE_FAILED_HASH)
          {
            return CustomPluginState::UPDATE_FAILED;
          }
          else if (hashCode == DELETING_HASH)
          {
            return CustomPluginState::DELETING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CustomPluginState>(hashCode);
          }

          return CustomPluginState::NOT_SET;
        }

        Aws::String GetNameForCustomPluginState(CustomPluginState enumValue)
        {
          switch(enumValue)
          {
          case CustomPluginState::NOT_SET:
            return {};
          case CustomPluginState::CREATING:
            return "CREATING";
          case CustomPluginState::CREATE_FAILED:
            return "CREATE_FAILED";
          case CustomPluginState::ACTIVE:
            return "ACTIVE";
          case CustomPluginState::UPDATING:
            return "UPDATING";
          case CustomPluginState::UPDATE_FAILED:
            return "UPDATE_FAILED";
          case CustomPluginState::DELETING:
            return "DELETING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CustomPluginStateMapper
    } // namespace Model
  } // namespace KafkaConnect
} // namespace Aws
