/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/Status.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Lightsail
  {
    namespace Model
    {
      namespace StatusMapper
      {

        static constexpr uint32_t startExpired_HASH = ConstExprHashingUtils::HashString("startExpired");
        static constexpr uint32_t notStarted_HASH = ConstExprHashingUtils::HashString("notStarted");
        static constexpr uint32_t started_HASH = ConstExprHashingUtils::HashString("started");
        static constexpr uint32_t starting_HASH = ConstExprHashingUtils::HashString("starting");
        static constexpr uint32_t stopped_HASH = ConstExprHashingUtils::HashString("stopped");
        static constexpr uint32_t stopping_HASH = ConstExprHashingUtils::HashString("stopping");
        static constexpr uint32_t settingUpInstance_HASH = ConstExprHashingUtils::HashString("settingUpInstance");
        static constexpr uint32_t failedInstanceCreation_HASH = ConstExprHashingUtils::HashString("failedInstanceCreation");
        static constexpr uint32_t failedStartingGUISession_HASH = ConstExprHashingUtils::HashString("failedStartingGUISession");
        static constexpr uint32_t failedStoppingGUISession_HASH = ConstExprHashingUtils::HashString("failedStoppingGUISession");


        Status GetStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == startExpired_HASH)
          {
            return Status::startExpired;
          }
          else if (hashCode == notStarted_HASH)
          {
            return Status::notStarted;
          }
          else if (hashCode == started_HASH)
          {
            return Status::started;
          }
          else if (hashCode == starting_HASH)
          {
            return Status::starting;
          }
          else if (hashCode == stopped_HASH)
          {
            return Status::stopped;
          }
          else if (hashCode == stopping_HASH)
          {
            return Status::stopping;
          }
          else if (hashCode == settingUpInstance_HASH)
          {
            return Status::settingUpInstance;
          }
          else if (hashCode == failedInstanceCreation_HASH)
          {
            return Status::failedInstanceCreation;
          }
          else if (hashCode == failedStartingGUISession_HASH)
          {
            return Status::failedStartingGUISession;
          }
          else if (hashCode == failedStoppingGUISession_HASH)
          {
            return Status::failedStoppingGUISession;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Status>(hashCode);
          }

          return Status::NOT_SET;
        }

        Aws::String GetNameForStatus(Status enumValue)
        {
          switch(enumValue)
          {
          case Status::NOT_SET:
            return {};
          case Status::startExpired:
            return "startExpired";
          case Status::notStarted:
            return "notStarted";
          case Status::started:
            return "started";
          case Status::starting:
            return "starting";
          case Status::stopped:
            return "stopped";
          case Status::stopping:
            return "stopping";
          case Status::settingUpInstance:
            return "settingUpInstance";
          case Status::failedInstanceCreation:
            return "failedInstanceCreation";
          case Status::failedStartingGUISession:
            return "failedStartingGUISession";
          case Status::failedStoppingGUISession:
            return "failedStoppingGUISession";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StatusMapper
    } // namespace Model
  } // namespace Lightsail
} // namespace Aws
