/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/arc-region-switch/model/UpdatePlanExecutionStepAction.h>
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
      namespace UpdatePlanExecutionStepActionMapper
      {

        static const int switchToUngraceful_HASH = HashingUtils::HashString("switchToUngraceful");
        static const int skip_HASH = HashingUtils::HashString("skip");


        UpdatePlanExecutionStepAction GetUpdatePlanExecutionStepActionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == switchToUngraceful_HASH)
          {
            return UpdatePlanExecutionStepAction::switchToUngraceful;
          }
          else if (hashCode == skip_HASH)
          {
            return UpdatePlanExecutionStepAction::skip;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UpdatePlanExecutionStepAction>(hashCode);
          }

          return UpdatePlanExecutionStepAction::NOT_SET;
        }

        Aws::String GetNameForUpdatePlanExecutionStepAction(UpdatePlanExecutionStepAction enumValue)
        {
          switch(enumValue)
          {
          case UpdatePlanExecutionStepAction::NOT_SET:
            return {};
          case UpdatePlanExecutionStepAction::switchToUngraceful:
            return "switchToUngraceful";
          case UpdatePlanExecutionStepAction::skip:
            return "skip";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace UpdatePlanExecutionStepActionMapper
    } // namespace Model
  } // namespace ARCRegionswitch
} // namespace Aws
