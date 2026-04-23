/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/workspaces/model/TargetWorkspaceState.h>
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
      namespace TargetWorkspaceStateMapper
      {

        static const int AVAILABLE_HASH = HashingUtils::HashString("AVAILABLE");
        static const int ADMIN_MAINTENANCE_HASH = HashingUtils::HashString("ADMIN_MAINTENANCE");


        TargetWorkspaceState GetTargetWorkspaceStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AVAILABLE_HASH)
          {
            return TargetWorkspaceState::AVAILABLE;
          }
          else if (hashCode == ADMIN_MAINTENANCE_HASH)
          {
            return TargetWorkspaceState::ADMIN_MAINTENANCE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TargetWorkspaceState>(hashCode);
          }

          return TargetWorkspaceState::NOT_SET;
        }

        Aws::String GetNameForTargetWorkspaceState(TargetWorkspaceState enumValue)
        {
          switch(enumValue)
          {
          case TargetWorkspaceState::AVAILABLE:
            return "AVAILABLE";
          case TargetWorkspaceState::ADMIN_MAINTENANCE:
            return "ADMIN_MAINTENANCE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TargetWorkspaceStateMapper
    } // namespace Model
  } // namespace WorkSpaces
} // namespace Aws
