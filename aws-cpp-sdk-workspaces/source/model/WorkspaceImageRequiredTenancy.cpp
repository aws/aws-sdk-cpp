/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/WorkspaceImageRequiredTenancy.h>
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
      namespace WorkspaceImageRequiredTenancyMapper
      {

        static const int DEFAULT_HASH = HashingUtils::HashString("DEFAULT");
        static const int DEDICATED_HASH = HashingUtils::HashString("DEDICATED");


        WorkspaceImageRequiredTenancy GetWorkspaceImageRequiredTenancyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DEFAULT_HASH)
          {
            return WorkspaceImageRequiredTenancy::DEFAULT;
          }
          else if (hashCode == DEDICATED_HASH)
          {
            return WorkspaceImageRequiredTenancy::DEDICATED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<WorkspaceImageRequiredTenancy>(hashCode);
          }

          return WorkspaceImageRequiredTenancy::NOT_SET;
        }

        Aws::String GetNameForWorkspaceImageRequiredTenancy(WorkspaceImageRequiredTenancy enumValue)
        {
          switch(enumValue)
          {
          case WorkspaceImageRequiredTenancy::DEFAULT:
            return "DEFAULT";
          case WorkspaceImageRequiredTenancy::DEDICATED:
            return "DEDICATED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace WorkspaceImageRequiredTenancyMapper
    } // namespace Model
  } // namespace WorkSpaces
} // namespace Aws
