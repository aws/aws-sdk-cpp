/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/ProjectSelectionScope.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Inspector2
  {
    namespace Model
    {
      namespace ProjectSelectionScopeMapper
      {

        static const int ALL_HASH = HashingUtils::HashString("ALL");


        ProjectSelectionScope GetProjectSelectionScopeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALL_HASH)
          {
            return ProjectSelectionScope::ALL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ProjectSelectionScope>(hashCode);
          }

          return ProjectSelectionScope::NOT_SET;
        }

        Aws::String GetNameForProjectSelectionScope(ProjectSelectionScope enumValue)
        {
          switch(enumValue)
          {
          case ProjectSelectionScope::NOT_SET:
            return {};
          case ProjectSelectionScope::ALL:
            return "ALL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ProjectSelectionScopeMapper
    } // namespace Model
  } // namespace Inspector2
} // namespace Aws
