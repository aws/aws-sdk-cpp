/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/arc-region-switch/model/UpdatePlanExecutionAction.h>
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
      namespace UpdatePlanExecutionActionMapper
      {

        static const int switchToGraceful_HASH = HashingUtils::HashString("switchToGraceful");
        static const int switchToUngraceful_HASH = HashingUtils::HashString("switchToUngraceful");
        static const int pause_HASH = HashingUtils::HashString("pause");
        static const int resume_HASH = HashingUtils::HashString("resume");


        UpdatePlanExecutionAction GetUpdatePlanExecutionActionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == switchToGraceful_HASH)
          {
            return UpdatePlanExecutionAction::switchToGraceful;
          }
          else if (hashCode == switchToUngraceful_HASH)
          {
            return UpdatePlanExecutionAction::switchToUngraceful;
          }
          else if (hashCode == pause_HASH)
          {
            return UpdatePlanExecutionAction::pause;
          }
          else if (hashCode == resume_HASH)
          {
            return UpdatePlanExecutionAction::resume;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UpdatePlanExecutionAction>(hashCode);
          }

          return UpdatePlanExecutionAction::NOT_SET;
        }

        Aws::String GetNameForUpdatePlanExecutionAction(UpdatePlanExecutionAction enumValue)
        {
          switch(enumValue)
          {
          case UpdatePlanExecutionAction::NOT_SET:
            return {};
          case UpdatePlanExecutionAction::switchToGraceful:
            return "switchToGraceful";
          case UpdatePlanExecutionAction::switchToUngraceful:
            return "switchToUngraceful";
          case UpdatePlanExecutionAction::pause:
            return "pause";
          case UpdatePlanExecutionAction::resume:
            return "resume";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace UpdatePlanExecutionActionMapper
    } // namespace Model
  } // namespace ARCRegionswitch
} // namespace Aws
