/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/ContainerFleetStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GameLift
  {
    namespace Model
    {
      namespace ContainerFleetStatusMapper
      {

        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int CREATED_HASH = HashingUtils::HashString("CREATED");
        static const int ACTIVATING_HASH = HashingUtils::HashString("ACTIVATING");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");


        ContainerFleetStatus GetContainerFleetStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return ContainerFleetStatus::PENDING;
          }
          else if (hashCode == CREATING_HASH)
          {
            return ContainerFleetStatus::CREATING;
          }
          else if (hashCode == CREATED_HASH)
          {
            return ContainerFleetStatus::CREATED;
          }
          else if (hashCode == ACTIVATING_HASH)
          {
            return ContainerFleetStatus::ACTIVATING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return ContainerFleetStatus::ACTIVE;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return ContainerFleetStatus::UPDATING;
          }
          else if (hashCode == DELETING_HASH)
          {
            return ContainerFleetStatus::DELETING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ContainerFleetStatus>(hashCode);
          }

          return ContainerFleetStatus::NOT_SET;
        }

        Aws::String GetNameForContainerFleetStatus(ContainerFleetStatus enumValue)
        {
          switch(enumValue)
          {
          case ContainerFleetStatus::NOT_SET:
            return {};
          case ContainerFleetStatus::PENDING:
            return "PENDING";
          case ContainerFleetStatus::CREATING:
            return "CREATING";
          case ContainerFleetStatus::CREATED:
            return "CREATED";
          case ContainerFleetStatus::ACTIVATING:
            return "ACTIVATING";
          case ContainerFleetStatus::ACTIVE:
            return "ACTIVE";
          case ContainerFleetStatus::UPDATING:
            return "UPDATING";
          case ContainerFleetStatus::DELETING:
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

      } // namespace ContainerFleetStatusMapper
    } // namespace Model
  } // namespace GameLift
} // namespace Aws
