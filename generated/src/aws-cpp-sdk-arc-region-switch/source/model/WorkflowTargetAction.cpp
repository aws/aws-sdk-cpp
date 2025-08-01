/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/arc-region-switch/model/WorkflowTargetAction.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ARCRegionswitch
  {
    namespace Model
    {
      namespace WorkflowTargetActionMapper
      {

        static const int activate_HASH = HashingUtils::HashString("activate");
        static const int deactivate_HASH = HashingUtils::HashString("deactivate");


        WorkflowTargetAction GetWorkflowTargetActionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == activate_HASH)
          {
            return WorkflowTargetAction::activate;
          }
          else if (hashCode == deactivate_HASH)
          {
            return WorkflowTargetAction::deactivate;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<WorkflowTargetAction>(hashCode);
          }

          return WorkflowTargetAction::NOT_SET;
        }

        Aws::String GetNameForWorkflowTargetAction(WorkflowTargetAction enumValue)
        {
          switch(enumValue)
          {
          case WorkflowTargetAction::NOT_SET:
            return {};
          case WorkflowTargetAction::activate:
            return "activate";
          case WorkflowTargetAction::deactivate:
            return "deactivate";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace WorkflowTargetActionMapper
    } // namespace Model
  } // namespace ARCRegionswitch
} // namespace Aws
