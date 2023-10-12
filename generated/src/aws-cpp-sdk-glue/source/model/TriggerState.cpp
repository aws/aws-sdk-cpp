/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/TriggerState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Glue
  {
    namespace Model
    {
      namespace TriggerStateMapper
      {

        static constexpr uint32_t CREATING_HASH = ConstExprHashingUtils::HashString("CREATING");
        static constexpr uint32_t CREATED_HASH = ConstExprHashingUtils::HashString("CREATED");
        static constexpr uint32_t ACTIVATING_HASH = ConstExprHashingUtils::HashString("ACTIVATING");
        static constexpr uint32_t ACTIVATED_HASH = ConstExprHashingUtils::HashString("ACTIVATED");
        static constexpr uint32_t DEACTIVATING_HASH = ConstExprHashingUtils::HashString("DEACTIVATING");
        static constexpr uint32_t DEACTIVATED_HASH = ConstExprHashingUtils::HashString("DEACTIVATED");
        static constexpr uint32_t DELETING_HASH = ConstExprHashingUtils::HashString("DELETING");
        static constexpr uint32_t UPDATING_HASH = ConstExprHashingUtils::HashString("UPDATING");


        TriggerState GetTriggerStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return TriggerState::CREATING;
          }
          else if (hashCode == CREATED_HASH)
          {
            return TriggerState::CREATED;
          }
          else if (hashCode == ACTIVATING_HASH)
          {
            return TriggerState::ACTIVATING;
          }
          else if (hashCode == ACTIVATED_HASH)
          {
            return TriggerState::ACTIVATED;
          }
          else if (hashCode == DEACTIVATING_HASH)
          {
            return TriggerState::DEACTIVATING;
          }
          else if (hashCode == DEACTIVATED_HASH)
          {
            return TriggerState::DEACTIVATED;
          }
          else if (hashCode == DELETING_HASH)
          {
            return TriggerState::DELETING;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return TriggerState::UPDATING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TriggerState>(hashCode);
          }

          return TriggerState::NOT_SET;
        }

        Aws::String GetNameForTriggerState(TriggerState enumValue)
        {
          switch(enumValue)
          {
          case TriggerState::NOT_SET:
            return {};
          case TriggerState::CREATING:
            return "CREATING";
          case TriggerState::CREATED:
            return "CREATED";
          case TriggerState::ACTIVATING:
            return "ACTIVATING";
          case TriggerState::ACTIVATED:
            return "ACTIVATED";
          case TriggerState::DEACTIVATING:
            return "DEACTIVATING";
          case TriggerState::DEACTIVATED:
            return "DEACTIVATED";
          case TriggerState::DELETING:
            return "DELETING";
          case TriggerState::UPDATING:
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

      } // namespace TriggerStateMapper
    } // namespace Model
  } // namespace Glue
} // namespace Aws
