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

        static constexpr uint32_t PENDING_HASH = ConstExprHashingUtils::HashString("PENDING");
        static constexpr uint32_t READY_HASH = ConstExprHashingUtils::HashString("READY");
        static constexpr uint32_t RUNNING_HASH = ConstExprHashingUtils::HashString("RUNNING");
        static constexpr uint32_t UPDATING_HASH = ConstExprHashingUtils::HashString("UPDATING");
        static constexpr uint32_t DELETING_HASH = ConstExprHashingUtils::HashString("DELETING");
        static constexpr uint32_t DISABLED_HASH = ConstExprHashingUtils::HashString("DISABLED");
        static constexpr uint32_t DEPLOYING_HASH = ConstExprHashingUtils::HashString("DEPLOYING");


        ContainerServiceState GetContainerServiceStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          else if (hashCode == DEPLOYING_HASH)
          {
            return ContainerServiceState::DEPLOYING;
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
          case ContainerServiceState::NOT_SET:
            return {};
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
          case ContainerServiceState::DEPLOYING:
            return "DEPLOYING";
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
