/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/ContainerServiceState.h>
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
      namespace ContainerServiceStateMapper
      {

        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int READY_HASH = HashingUtils::HashString("READY");
        static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        ContainerServiceState GetContainerServiceStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return ContainerServiceState::PENDING;
          }
          else if (hashCode == READY_HASH)
          {
            return ContainerServiceState::READY;
          }
          else if (hashCode == RUNNING_HASH)
          {
            return ContainerServiceState::RUNNING;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return ContainerServiceState::UPDATING;
          }
          else if (hashCode == DELETING_HASH)
          {
            return ContainerServiceState::DELETING;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return ContainerServiceState::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ContainerServiceState>(hashCode);
          }

          return ContainerServiceState::NOT_SET;
        }

        Aws::String GetNameForContainerServiceState(ContainerServiceState enumValue)
        {
          switch(enumValue)
          {
          case ContainerServiceState::PENDING:
            return "PENDING";
          case ContainerServiceState::READY:
            return "READY";
          case ContainerServiceState::RUNNING:
            return "RUNNING";
          case ContainerServiceState::UPDATING:
            return "UPDATING";
          case ContainerServiceState::DELETING:
            return "DELETING";
          case ContainerServiceState::DISABLED:
            return "DISABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ContainerServiceStateMapper
    } // namespace Model
  } // namespace Lightsail
} // namespace Aws
