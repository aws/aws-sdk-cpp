/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/StandbyWorkspaceRelationshipType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WorkSpaces
  {
    namespace Model
    {
      namespace StandbyWorkspaceRelationshipTypeMapper
      {

        static const int PRIMARY_HASH = HashingUtils::HashString("PRIMARY");
        static const int STANDBY_HASH = HashingUtils::HashString("STANDBY");


        StandbyWorkspaceRelationshipType GetStandbyWorkspaceRelationshipTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PRIMARY_HASH)
          {
            return StandbyWorkspaceRelationshipType::PRIMARY;
          }
          else if (hashCode == STANDBY_HASH)
          {
            return StandbyWorkspaceRelationshipType::STANDBY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StandbyWorkspaceRelationshipType>(hashCode);
          }

          return StandbyWorkspaceRelationshipType::NOT_SET;
        }

        Aws::String GetNameForStandbyWorkspaceRelationshipType(StandbyWorkspaceRelationshipType enumValue)
        {
          switch(enumValue)
          {
          case StandbyWorkspaceRelationshipType::PRIMARY:
            return "PRIMARY";
          case StandbyWorkspaceRelationshipType::STANDBY:
            return "STANDBY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StandbyWorkspaceRelationshipTypeMapper
    } // namespace Model
  } // namespace WorkSpaces
} // namespace Aws
