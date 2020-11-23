/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafka/model/ClusterState.h>
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
      namespace ClusterStateMapper
      {

        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int MAINTENANCE_HASH = HashingUtils::HashString("MAINTENANCE");
        static const int REBOOTING_BROKER_HASH = HashingUtils::HashString("REBOOTING_BROKER");
        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");


        ClusterState GetClusterStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return ClusterState::ACTIVE;
          }
          else if (hashCode == CREATING_HASH)
          {
            return ClusterState::CREATING;
          }
          else if (hashCode == DELETING_HASH)
          {
            return ClusterState::DELETING;
          }
          else if (hashCode == FAILED_HASH)
          {
            return ClusterState::FAILED;
          }
          else if (hashCode == MAINTENANCE_HASH)
          {
            return ClusterState::MAINTENANCE;
          }
          else if (hashCode == REBOOTING_BROKER_HASH)
          {
            return ClusterState::REBOOTING_BROKER;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return ClusterState::UPDATING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ClusterState>(hashCode);
          }

          return ClusterState::NOT_SET;
        }

        Aws::String GetNameForClusterState(ClusterState enumValue)
        {
          switch(enumValue)
          {
          case ClusterState::ACTIVE:
            return "ACTIVE";
          case ClusterState::CREATING:
            return "CREATING";
          case ClusterState::DELETING:
            return "DELETING";
          case ClusterState::FAILED:
            return "FAILED";
          case ClusterState::MAINTENANCE:
            return "MAINTENANCE";
          case ClusterState::REBOOTING_BROKER:
            return "REBOOTING_BROKER";
          case ClusterState::UPDATING:
            return "UPDATING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ClusterStateMapper
    } // namespace Model
  } // namespace Kafka
} // namespace Aws
