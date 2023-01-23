/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/ProjectSortByType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodeBuild
  {
    namespace Model
    {
      namespace ProjectSortByTypeMapper
      {

        static const int NAME_HASH = HashingUtils::HashString("NAME");
        static const int CREATED_TIME_HASH = HashingUtils::HashString("CREATED_TIME");
        static const int LAST_MODIFIED_TIME_HASH = HashingUtils::HashString("LAST_MODIFIED_TIME");


        ProjectSortByType GetProjectSortByTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NAME_HASH)
          {
            return ProjectSortByType::NAME;
          }
          else if (hashCode == CREATED_TIME_HASH)
          {
            return ProjectSortByType::CREATED_TIME;
          }
          else if (hashCode == LAST_MODIFIED_TIME_HASH)
          {
            return ProjectSortByType::LAST_MODIFIED_TIME;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ProjectSortByType>(hashCode);
          }

          return ProjectSortByType::NOT_SET;
        }

        Aws::String GetNameForProjectSortByType(ProjectSortByType enumValue)
        {
          switch(enumValue)
          {
          case ProjectSortByType::NAME:
            return "NAME";
          case ProjectSortByType::CREATED_TIME:
            return "CREATED_TIME";
          case ProjectSortByType::LAST_MODIFIED_TIME:
            return "LAST_MODIFIED_TIME";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ProjectSortByTypeMapper
    } // namespace Model
  } // namespace CodeBuild
} // namespace Aws
