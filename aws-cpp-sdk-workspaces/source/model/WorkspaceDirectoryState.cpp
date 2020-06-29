/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/WorkspaceDirectoryState.h>
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
      namespace WorkspaceDirectoryStateMapper
      {

        static const int REGISTERING_HASH = HashingUtils::HashString("REGISTERING");
        static const int REGISTERED_HASH = HashingUtils::HashString("REGISTERED");
        static const int DEREGISTERING_HASH = HashingUtils::HashString("DEREGISTERING");
        static const int DEREGISTERED_HASH = HashingUtils::HashString("DEREGISTERED");
        static const int ERROR__HASH = HashingUtils::HashString("ERROR");


        WorkspaceDirectoryState GetWorkspaceDirectoryStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == REGISTERING_HASH)
          {
            return WorkspaceDirectoryState::REGISTERING;
          }
          else if (hashCode == REGISTERED_HASH)
          {
            return WorkspaceDirectoryState::REGISTERED;
          }
          else if (hashCode == DEREGISTERING_HASH)
          {
            return WorkspaceDirectoryState::DEREGISTERING;
          }
          else if (hashCode == DEREGISTERED_HASH)
          {
            return WorkspaceDirectoryState::DEREGISTERED;
          }
          else if (hashCode == ERROR__HASH)
          {
            return WorkspaceDirectoryState::ERROR_;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<WorkspaceDirectoryState>(hashCode);
          }

          return WorkspaceDirectoryState::NOT_SET;
        }

        Aws::String GetNameForWorkspaceDirectoryState(WorkspaceDirectoryState enumValue)
        {
          switch(enumValue)
          {
          case WorkspaceDirectoryState::REGISTERING:
            return "REGISTERING";
          case WorkspaceDirectoryState::REGISTERED:
            return "REGISTERED";
          case WorkspaceDirectoryState::DEREGISTERING:
            return "DEREGISTERING";
          case WorkspaceDirectoryState::DEREGISTERED:
            return "DEREGISTERED";
          case WorkspaceDirectoryState::ERROR_:
            return "ERROR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace WorkspaceDirectoryStateMapper
    } // namespace Model
  } // namespace WorkSpaces
} // namespace Aws
