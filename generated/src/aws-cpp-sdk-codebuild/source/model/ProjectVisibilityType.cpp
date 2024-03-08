/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/ProjectVisibilityType.h>
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
      namespace ProjectVisibilityTypeMapper
      {

        static const int PUBLIC_READ_HASH = HashingUtils::HashString("PUBLIC_READ");
        static const int PRIVATE__HASH = HashingUtils::HashString("PRIVATE");


        ProjectVisibilityType GetProjectVisibilityTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PUBLIC_READ_HASH)
          {
            return ProjectVisibilityType::PUBLIC_READ;
          }
          else if (hashCode == PRIVATE__HASH)
          {
            return ProjectVisibilityType::PRIVATE_;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ProjectVisibilityType>(hashCode);
          }

          return ProjectVisibilityType::NOT_SET;
        }

        Aws::String GetNameForProjectVisibilityType(ProjectVisibilityType enumValue)
        {
          switch(enumValue)
          {
          case ProjectVisibilityType::NOT_SET:
            return {};
          case ProjectVisibilityType::PUBLIC_READ:
            return "PUBLIC_READ";
          case ProjectVisibilityType::PRIVATE_:
            return "PRIVATE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ProjectVisibilityTypeMapper
    } // namespace Model
  } // namespace CodeBuild
} // namespace Aws
