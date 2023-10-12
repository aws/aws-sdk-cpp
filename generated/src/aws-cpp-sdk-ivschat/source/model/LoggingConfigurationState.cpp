/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivschat/model/LoggingConfigurationState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ivschat
  {
    namespace Model
    {
      namespace LoggingConfigurationStateMapper
      {

        static constexpr uint32_t CREATING_HASH = ConstExprHashingUtils::HashString("CREATING");
        static constexpr uint32_t CREATE_FAILED_HASH = ConstExprHashingUtils::HashString("CREATE_FAILED");
        static constexpr uint32_t DELETING_HASH = ConstExprHashingUtils::HashString("DELETING");
        static constexpr uint32_t DELETE_FAILED_HASH = ConstExprHashingUtils::HashString("DELETE_FAILED");
        static constexpr uint32_t UPDATING_HASH = ConstExprHashingUtils::HashString("UPDATING");
        static constexpr uint32_t UPDATE_FAILED_HASH = ConstExprHashingUtils::HashString("UPDATE_FAILED");
        static constexpr uint32_t ACTIVE_HASH = ConstExprHashingUtils::HashString("ACTIVE");


        LoggingConfigurationState GetLoggingConfigurationStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return LoggingConfigurationState::CREATING;
          }
          else if (hashCode == CREATE_FAILED_HASH)
          {
            return LoggingConfigurationState::CREATE_FAILED;
          }
          else if (hashCode == DELETING_HASH)
          {
            return LoggingConfigurationState::DELETING;
          }
          else if (hashCode == DELETE_FAILED_HASH)
          {
            return LoggingConfigurationState::DELETE_FAILED;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return LoggingConfigurationState::UPDATING;
          }
          else if (hashCode == UPDATE_FAILED_HASH)
          {
            return LoggingConfigurationState::UPDATE_FAILED;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return LoggingConfigurationState::ACTIVE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LoggingConfigurationState>(hashCode);
          }

          return LoggingConfigurationState::NOT_SET;
        }

        Aws::String GetNameForLoggingConfigurationState(LoggingConfigurationState enumValue)
        {
          switch(enumValue)
          {
          case LoggingConfigurationState::NOT_SET:
            return {};
          case LoggingConfigurationState::CREATING:
            return "CREATING";
          case LoggingConfigurationState::CREATE_FAILED:
            return "CREATE_FAILED";
          case LoggingConfigurationState::DELETING:
            return "DELETING";
          case LoggingConfigurationState::DELETE_FAILED:
            return "DELETE_FAILED";
          case LoggingConfigurationState::UPDATING:
            return "UPDATING";
          case LoggingConfigurationState::UPDATE_FAILED:
            return "UPDATE_FAILED";
          case LoggingConfigurationState::ACTIVE:
            return "ACTIVE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LoggingConfigurationStateMapper
    } // namespace Model
  } // namespace ivschat
} // namespace Aws
