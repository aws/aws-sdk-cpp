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
