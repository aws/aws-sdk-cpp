/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/WorkflowStepActionType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace imagebuilder
  {
    namespace Model
    {
      namespace WorkflowStepActionTypeMapper
      {

        static const int RESUME_HASH = HashingUtils::HashString("RESUME");
        static const int STOP_HASH = HashingUtils::HashString("STOP");


        WorkflowStepActionType GetWorkflowStepActionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RESUME_HASH)
          {
            return WorkflowStepActionType::RESUME;
          }
          else if (hashCode == STOP_HASH)
          {
            return WorkflowStepActionType::STOP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<WorkflowStepActionType>(hashCode);
          }

          return WorkflowStepActionType::NOT_SET;
        }

        Aws::String GetNameForWorkflowStepActionType(WorkflowStepActionType enumValue)
        {
          switch(enumValue)
          {
          case WorkflowStepActionType::NOT_SET:
            return {};
          case WorkflowStepActionType::RESUME:
            return "RESUME";
          case WorkflowStepActionType::STOP:
            return "STOP";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace WorkflowStepActionTypeMapper
    } // namespace Model
  } // namespace imagebuilder
} // namespace Aws
