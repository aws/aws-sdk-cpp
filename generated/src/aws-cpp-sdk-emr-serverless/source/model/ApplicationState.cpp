/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/emr-serverless/model/ApplicationState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EMRServerless
  {
    namespace Model
    {
      namespace ApplicationStateMapper
      {

        static constexpr uint32_t CREATING_HASH = ConstExprHashingUtils::HashString("CREATING");
        static constexpr uint32_t CREATED_HASH = ConstExprHashingUtils::HashString("CREATED");
        static constexpr uint32_t STARTING_HASH = ConstExprHashingUtils::HashString("STARTING");
        static constexpr uint32_t STARTED_HASH = ConstExprHashingUtils::HashString("STARTED");
        static constexpr uint32_t STOPPING_HASH = ConstExprHashingUtils::HashString("STOPPING");
        static constexpr uint32_t STOPPED_HASH = ConstExprHashingUtils::HashString("STOPPED");
        static constexpr uint32_t TERMINATED_HASH = ConstExprHashingUtils::HashString("TERMINATED");


        ApplicationState GetApplicationStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return ApplicationState::CREATING;
          }
          else if (hashCode == CREATED_HASH)
          {
            return ApplicationState::CREATED;
          }
          else if (hashCode == STARTING_HASH)
          {
            return ApplicationState::STARTING;
          }
          else if (hashCode == STARTED_HASH)
          {
            return ApplicationState::STARTED;
          }
          else if (hashCode == STOPPING_HASH)
          {
            return ApplicationState::STOPPING;
          }
          else if (hashCode == STOPPED_HASH)
          {
            return ApplicationState::STOPPED;
          }
          else if (hashCode == TERMINATED_HASH)
          {
            return ApplicationState::TERMINATED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ApplicationState>(hashCode);
          }

          return ApplicationState::NOT_SET;
        }

        Aws::String GetNameForApplicationState(ApplicationState enumValue)
        {
          switch(enumValue)
          {
          case ApplicationState::NOT_SET:
            return {};
          case ApplicationState::CREATING:
            return "CREATING";
          case ApplicationState::CREATED:
            return "CREATED";
          case ApplicationState::STARTING:
            return "STARTING";
          case ApplicationState::STARTED:
            return "STARTED";
          case ApplicationState::STOPPING:
            return "STOPPING";
          case ApplicationState::STOPPED:
            return "STOPPED";
          case ApplicationState::TERMINATED:
            return "TERMINATED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ApplicationStateMapper
    } // namespace Model
  } // namespace EMRServerless
} // namespace Aws
