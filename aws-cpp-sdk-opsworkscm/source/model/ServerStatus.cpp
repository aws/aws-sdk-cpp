/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/opsworkscm/model/ServerStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace OpsWorksCM
  {
    namespace Model
    {
      namespace ServerStatusMapper
      {

        static const int BACKING_UP_HASH = HashingUtils::HashString("BACKING_UP");
        static const int CONNECTION_LOST_HASH = HashingUtils::HashString("CONNECTION_LOST");
        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int MODIFYING_HASH = HashingUtils::HashString("MODIFYING");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int HEALTHY_HASH = HashingUtils::HashString("HEALTHY");
        static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
        static const int RESTORING_HASH = HashingUtils::HashString("RESTORING");
        static const int SETUP_HASH = HashingUtils::HashString("SETUP");
        static const int UNDER_MAINTENANCE_HASH = HashingUtils::HashString("UNDER_MAINTENANCE");
        static const int UNHEALTHY_HASH = HashingUtils::HashString("UNHEALTHY");
        static const int TERMINATED_HASH = HashingUtils::HashString("TERMINATED");


        ServerStatus GetServerStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BACKING_UP_HASH)
          {
            return ServerStatus::BACKING_UP;
          }
          else if (hashCode == CONNECTION_LOST_HASH)
          {
            return ServerStatus::CONNECTION_LOST;
          }
          else if (hashCode == CREATING_HASH)
          {
            return ServerStatus::CREATING;
          }
          else if (hashCode == DELETING_HASH)
          {
            return ServerStatus::DELETING;
          }
          else if (hashCode == MODIFYING_HASH)
          {
            return ServerStatus::MODIFYING;
          }
          else if (hashCode == FAILED_HASH)
          {
            return ServerStatus::FAILED;
          }
          else if (hashCode == HEALTHY_HASH)
          {
            return ServerStatus::HEALTHY;
          }
          else if (hashCode == RUNNING_HASH)
          {
            return ServerStatus::RUNNING;
          }
          else if (hashCode == RESTORING_HASH)
          {
            return ServerStatus::RESTORING;
          }
          else if (hashCode == SETUP_HASH)
          {
            return ServerStatus::SETUP;
          }
          else if (hashCode == UNDER_MAINTENANCE_HASH)
          {
            return ServerStatus::UNDER_MAINTENANCE;
          }
          else if (hashCode == UNHEALTHY_HASH)
          {
            return ServerStatus::UNHEALTHY;
          }
          else if (hashCode == TERMINATED_HASH)
          {
            return ServerStatus::TERMINATED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ServerStatus>(hashCode);
          }

          return ServerStatus::NOT_SET;
        }

        Aws::String GetNameForServerStatus(ServerStatus enumValue)
        {
          switch(enumValue)
          {
          case ServerStatus::BACKING_UP:
            return "BACKING_UP";
          case ServerStatus::CONNECTION_LOST:
            return "CONNECTION_LOST";
          case ServerStatus::CREATING:
            return "CREATING";
          case ServerStatus::DELETING:
            return "DELETING";
          case ServerStatus::MODIFYING:
            return "MODIFYING";
          case ServerStatus::FAILED:
            return "FAILED";
          case ServerStatus::HEALTHY:
            return "HEALTHY";
          case ServerStatus::RUNNING:
            return "RUNNING";
          case ServerStatus::RESTORING:
            return "RESTORING";
          case ServerStatus::SETUP:
            return "SETUP";
          case ServerStatus::UNDER_MAINTENANCE:
            return "UNDER_MAINTENANCE";
          case ServerStatus::UNHEALTHY:
            return "UNHEALTHY";
          case ServerStatus::TERMINATED:
            return "TERMINATED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace ServerStatusMapper
    } // namespace Model
  } // namespace OpsWorksCM
} // namespace Aws
