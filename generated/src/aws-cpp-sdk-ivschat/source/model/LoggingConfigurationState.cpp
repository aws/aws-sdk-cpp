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

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int CREATE_FAILED_HASH = HashingUtils::HashString("CREATE_FAILED");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int DELETE_FAILED_HASH = HashingUtils::HashString("DELETE_FAILED");
        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
        static const int UPDATE_FAILED_HASH = HashingUtils::HashString("UPDATE_FAILED");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");


        LoggingConfigurationState GetLoggingConfigurationStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
