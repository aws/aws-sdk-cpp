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

        static const int startExpired_HASH = HashingUtils::HashString("startExpired");
        static const int notStarted_HASH = HashingUtils::HashString("notStarted");
        static const int started_HASH = HashingUtils::HashString("started");
        static const int starting_HASH = HashingUtils::HashString("starting");
        static const int stopped_HASH = HashingUtils::HashString("stopped");
        static const int stopping_HASH = HashingUtils::HashString("stopping");
        static const int settingUpInstance_HASH = HashingUtils::HashString("settingUpInstance");
        static const int failedInstanceCreation_HASH = HashingUtils::HashString("failedInstanceCreation");
        static const int failedStartingGUISession_HASH = HashingUtils::HashString("failedStartingGUISession");
        static const int failedStoppingGUISession_HASH = HashingUtils::HashString("failedStoppingGUISession");


        Status GetStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
