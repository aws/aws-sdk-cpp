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

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int CREATED_HASH = HashingUtils::HashString("CREATED");
        static const int ACTIVATING_HASH = HashingUtils::HashString("ACTIVATING");
        static const int ACTIVATED_HASH = HashingUtils::HashString("ACTIVATED");
        static const int DEACTIVATING_HASH = HashingUtils::HashString("DEACTIVATING");
        static const int DEACTIVATED_HASH = HashingUtils::HashString("DEACTIVATED");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");


        TriggerState GetTriggerStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
