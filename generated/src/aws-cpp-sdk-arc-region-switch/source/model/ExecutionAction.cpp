/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/arc-region-switch/model/ExecutionAction.h>
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
      namespace ExecutionActionMapper
      {

        static const int activate_HASH = HashingUtils::HashString("activate");
        static const int deactivate_HASH = HashingUtils::HashString("deactivate");


        ExecutionAction GetExecutionActionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == activate_HASH)
          {
            return ExecutionAction::activate;
          }
          else if (hashCode == deactivate_HASH)
          {
            return ExecutionAction::deactivate;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ExecutionAction>(hashCode);
          }

          return ExecutionAction::NOT_SET;
        }

        Aws::String GetNameForExecutionAction(ExecutionAction enumValue)
        {
          switch(enumValue)
          {
          case ExecutionAction::NOT_SET:
            return {};
          case ExecutionAction::activate:
            return "activate";
          case ExecutionAction::deactivate:
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

      } // namespace ExecutionActionMapper
    } // namespace Model
  } // namespace ARCRegionswitch
} // namespace Aws
