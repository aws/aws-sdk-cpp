/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workmail/model/EntityState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WorkMail
  {
    namespace Model
    {
      namespace EntityStateMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
        static const int DELETED_HASH = HashingUtils::HashString("DELETED");


        EntityState GetEntityStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return EntityState::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return EntityState::DISABLED;
          }
          else if (hashCode == DELETED_HASH)
          {
            return EntityState::DELETED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EntityState>(hashCode);
          }

          return EntityState::NOT_SET;
        }

        Aws::String GetNameForEntityState(EntityState enumValue)
        {
          switch(enumValue)
          {
          case EntityState::ENABLED:
            return "ENABLED";
          case EntityState::DISABLED:
            return "DISABLED";
          case EntityState::DELETED:
            return "DELETED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EntityStateMapper
    } // namespace Model
  } // namespace WorkMail
} // namespace Aws
