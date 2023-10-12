/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amp/model/WorkspaceStatusCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace PrometheusService
  {
    namespace Model
    {
      namespace WorkspaceStatusCodeMapper
      {

        static constexpr uint32_t CREATING_HASH = ConstExprHashingUtils::HashString("CREATING");
        static constexpr uint32_t ACTIVE_HASH = ConstExprHashingUtils::HashString("ACTIVE");
        static constexpr uint32_t UPDATING_HASH = ConstExprHashingUtils::HashString("UPDATING");
        static constexpr uint32_t DELETING_HASH = ConstExprHashingUtils::HashString("DELETING");
        static constexpr uint32_t CREATION_FAILED_HASH = ConstExprHashingUtils::HashString("CREATION_FAILED");


        WorkspaceStatusCode GetWorkspaceStatusCodeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return WorkspaceStatusCode::CREATING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return WorkspaceStatusCode::ACTIVE;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return WorkspaceStatusCode::UPDATING;
          }
          else if (hashCode == DELETING_HASH)
          {
            return WorkspaceStatusCode::DELETING;
          }
          else if (hashCode == CREATION_FAILED_HASH)
          {
            return WorkspaceStatusCode::CREATION_FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<WorkspaceStatusCode>(hashCode);
          }

          return WorkspaceStatusCode::NOT_SET;
        }

        Aws::String GetNameForWorkspaceStatusCode(WorkspaceStatusCode enumValue)
        {
          switch(enumValue)
          {
          case WorkspaceStatusCode::NOT_SET:
            return {};
          case WorkspaceStatusCode::CREATING:
            return "CREATING";
          case WorkspaceStatusCode::ACTIVE:
            return "ACTIVE";
          case WorkspaceStatusCode::UPDATING:
            return "UPDATING";
          case WorkspaceStatusCode::DELETING:
            return "DELETING";
          case WorkspaceStatusCode::CREATION_FAILED:
            return "CREATION_FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace WorkspaceStatusCodeMapper
    } // namespace Model
  } // namespace PrometheusService
} // namespace Aws
