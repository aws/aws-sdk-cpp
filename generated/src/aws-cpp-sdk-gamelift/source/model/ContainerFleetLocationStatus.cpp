/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/ContainerFleetLocationStatus.h>
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
      namespace ContainerFleetLocationStatusMapper
      {

        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int CREATED_HASH = HashingUtils::HashString("CREATED");
        static const int ACTIVATING_HASH = HashingUtils::HashString("ACTIVATING");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");


        ContainerFleetLocationStatus GetContainerFleetLocationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return ContainerFleetLocationStatus::PENDING;
          }
          else if (hashCode == CREATING_HASH)
          {
            return ContainerFleetLocationStatus::CREATING;
          }
          else if (hashCode == CREATED_HASH)
          {
            return ContainerFleetLocationStatus::CREATED;
          }
          else if (hashCode == ACTIVATING_HASH)
          {
            return ContainerFleetLocationStatus::ACTIVATING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return ContainerFleetLocationStatus::ACTIVE;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return ContainerFleetLocationStatus::UPDATING;
          }
          else if (hashCode == DELETING_HASH)
          {
            return ContainerFleetLocationStatus::DELETING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ContainerFleetLocationStatus>(hashCode);
          }

          return ContainerFleetLocationStatus::NOT_SET;
        }

        Aws::String GetNameForContainerFleetLocationStatus(ContainerFleetLocationStatus enumValue)
        {
          switch(enumValue)
          {
          case ContainerFleetLocationStatus::NOT_SET:
            return {};
          case ContainerFleetLocationStatus::PENDING:
            return "PENDING";
          case ContainerFleetLocationStatus::CREATING:
            return "CREATING";
          case ContainerFleetLocationStatus::CREATED:
            return "CREATED";
          case ContainerFleetLocationStatus::ACTIVATING:
            return "ACTIVATING";
          case ContainerFleetLocationStatus::ACTIVE:
            return "ACTIVE";
          case ContainerFleetLocationStatus::UPDATING:
            return "UPDATING";
          case ContainerFleetLocationStatus::DELETING:
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

      } // namespace ContainerFleetLocationStatusMapper
    } // namespace Model
  } // namespace GameLift
} // namespace Aws
