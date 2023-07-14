/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mobile/model/ProjectState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Mobile
  {
    namespace Model
    {
      namespace ProjectStateMapper
      {

        static const int NORMAL_HASH = HashingUtils::HashString("NORMAL");
        static const int SYNCING_HASH = HashingUtils::HashString("SYNCING");
        static const int IMPORTING_HASH = HashingUtils::HashString("IMPORTING");


        ProjectState GetProjectStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NORMAL_HASH)
          {
            return ProjectState::NORMAL;
          }
          else if (hashCode == SYNCING_HASH)
          {
            return ProjectState::SYNCING;
          }
          else if (hashCode == IMPORTING_HASH)
          {
            return ProjectState::IMPORTING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ProjectState>(hashCode);
          }

          return ProjectState::NOT_SET;
        }

        Aws::String GetNameForProjectState(ProjectState enumValue)
        {
          switch(enumValue)
          {
          case ProjectState::NORMAL:
            return "NORMAL";
          case ProjectState::SYNCING:
            return "SYNCING";
          case ProjectState::IMPORTING:
            return "IMPORTING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ProjectStateMapper
    } // namespace Model
  } // namespace Mobile
} // namespace Aws
