/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amp/model/WorkspacePolicyStatusCode.h>
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
      namespace WorkspacePolicyStatusCodeMapper
      {

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");


        WorkspacePolicyStatusCode GetWorkspacePolicyStatusCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return WorkspacePolicyStatusCode::CREATING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return WorkspacePolicyStatusCode::ACTIVE;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return WorkspacePolicyStatusCode::UPDATING;
          }
          else if (hashCode == DELETING_HASH)
          {
            return WorkspacePolicyStatusCode::DELETING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<WorkspacePolicyStatusCode>(hashCode);
          }

          return WorkspacePolicyStatusCode::NOT_SET;
        }

        Aws::String GetNameForWorkspacePolicyStatusCode(WorkspacePolicyStatusCode enumValue)
        {
          switch(enumValue)
          {
          case WorkspacePolicyStatusCode::NOT_SET:
            return {};
          case WorkspacePolicyStatusCode::CREATING:
            return "CREATING";
          case WorkspacePolicyStatusCode::ACTIVE:
            return "ACTIVE";
          case WorkspacePolicyStatusCode::UPDATING:
            return "UPDATING";
          case WorkspacePolicyStatusCode::DELETING:
            return "DELETING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace WorkspacePolicyStatusCodeMapper
    } // namespace Model
  } // namespace PrometheusService
} // namespace Aws
