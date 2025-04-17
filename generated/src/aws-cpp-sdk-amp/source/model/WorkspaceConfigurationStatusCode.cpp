/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amp/model/WorkspaceConfigurationStatusCode.h>
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
      namespace WorkspaceConfigurationStatusCodeMapper
      {

        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
        static const int UPDATE_FAILED_HASH = HashingUtils::HashString("UPDATE_FAILED");


        WorkspaceConfigurationStatusCode GetWorkspaceConfigurationStatusCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return WorkspaceConfigurationStatusCode::ACTIVE;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return WorkspaceConfigurationStatusCode::UPDATING;
          }
          else if (hashCode == UPDATE_FAILED_HASH)
          {
            return WorkspaceConfigurationStatusCode::UPDATE_FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<WorkspaceConfigurationStatusCode>(hashCode);
          }

          return WorkspaceConfigurationStatusCode::NOT_SET;
        }

        Aws::String GetNameForWorkspaceConfigurationStatusCode(WorkspaceConfigurationStatusCode enumValue)
        {
          switch(enumValue)
          {
          case WorkspaceConfigurationStatusCode::NOT_SET:
            return {};
          case WorkspaceConfigurationStatusCode::ACTIVE:
            return "ACTIVE";
          case WorkspaceConfigurationStatusCode::UPDATING:
            return "UPDATING";
          case WorkspaceConfigurationStatusCode::UPDATE_FAILED:
            return "UPDATE_FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace WorkspaceConfigurationStatusCodeMapper
    } // namespace Model
  } // namespace PrometheusService
} // namespace Aws
