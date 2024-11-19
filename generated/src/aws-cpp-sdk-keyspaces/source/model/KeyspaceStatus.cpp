/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/keyspaces/model/KeyspaceStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Keyspaces
  {
    namespace Model
    {
      namespace KeyspaceStatusMapper
      {

        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");


        KeyspaceStatus GetKeyspaceStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return KeyspaceStatus::ACTIVE;
          }
          else if (hashCode == CREATING_HASH)
          {
            return KeyspaceStatus::CREATING;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return KeyspaceStatus::UPDATING;
          }
          else if (hashCode == DELETING_HASH)
          {
            return KeyspaceStatus::DELETING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<KeyspaceStatus>(hashCode);
          }

          return KeyspaceStatus::NOT_SET;
        }

        Aws::String GetNameForKeyspaceStatus(KeyspaceStatus enumValue)
        {
          switch(enumValue)
          {
          case KeyspaceStatus::NOT_SET:
            return {};
          case KeyspaceStatus::ACTIVE:
            return "ACTIVE";
          case KeyspaceStatus::CREATING:
            return "CREATING";
          case KeyspaceStatus::UPDATING:
            return "UPDATING";
          case KeyspaceStatus::DELETING:
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

      } // namespace KeyspaceStatusMapper
    } // namespace Model
  } // namespace Keyspaces
} // namespace Aws
