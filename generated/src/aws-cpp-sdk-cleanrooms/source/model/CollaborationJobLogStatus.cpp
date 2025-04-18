﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/CollaborationJobLogStatus.h>
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
      namespace CollaborationJobLogStatusMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        CollaborationJobLogStatus GetCollaborationJobLogStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return CollaborationJobLogStatus::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return CollaborationJobLogStatus::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CollaborationJobLogStatus>(hashCode);
          }

          return CollaborationJobLogStatus::NOT_SET;
        }

        Aws::String GetNameForCollaborationJobLogStatus(CollaborationJobLogStatus enumValue)
        {
          switch(enumValue)
          {
          case CollaborationJobLogStatus::NOT_SET:
            return {};
          case CollaborationJobLogStatus::ENABLED:
            return "ENABLED";
          case CollaborationJobLogStatus::DISABLED:
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

      } // namespace CollaborationJobLogStatusMapper
    } // namespace Model
  } // namespace CleanRooms
} // namespace Aws
