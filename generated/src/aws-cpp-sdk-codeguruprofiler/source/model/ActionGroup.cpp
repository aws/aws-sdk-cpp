/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeguruprofiler/model/ActionGroup.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodeGuruProfiler
  {
    namespace Model
    {
      namespace ActionGroupMapper
      {

        static const int agentPermissions_HASH = HashingUtils::HashString("agentPermissions");


        ActionGroup GetActionGroupForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == agentPermissions_HASH)
          {
            return ActionGroup::agentPermissions;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ActionGroup>(hashCode);
          }

          return ActionGroup::NOT_SET;
        }

        Aws::String GetNameForActionGroup(ActionGroup enumValue)
        {
          switch(enumValue)
          {
          case ActionGroup::agentPermissions:
            return "agentPermissions";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ActionGroupMapper
    } // namespace Model
  } // namespace CodeGuruProfiler
} // namespace Aws
