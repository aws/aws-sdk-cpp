/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/CollaborationQueryLogStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CleanRooms
  {
    namespace Model
    {
      namespace CollaborationQueryLogStatusMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        CollaborationQueryLogStatus GetCollaborationQueryLogStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return CollaborationQueryLogStatus::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return CollaborationQueryLogStatus::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CollaborationQueryLogStatus>(hashCode);
          }

          return CollaborationQueryLogStatus::NOT_SET;
        }

        Aws::String GetNameForCollaborationQueryLogStatus(CollaborationQueryLogStatus enumValue)
        {
          switch(enumValue)
          {
          case CollaborationQueryLogStatus::NOT_SET:
            return {};
          case CollaborationQueryLogStatus::ENABLED:
            return "ENABLED";
          case CollaborationQueryLogStatus::DISABLED:
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

      } // namespace CollaborationQueryLogStatusMapper
    } // namespace Model
  } // namespace CleanRooms
} // namespace Aws
