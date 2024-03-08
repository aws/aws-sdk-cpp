/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecatalyst/model/WorkflowRunMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodeCatalyst
  {
    namespace Model
    {
      namespace WorkflowRunModeMapper
      {

        static const int QUEUED_HASH = HashingUtils::HashString("QUEUED");
        static const int PARALLEL_HASH = HashingUtils::HashString("PARALLEL");
        static const int SUPERSEDED_HASH = HashingUtils::HashString("SUPERSEDED");


        WorkflowRunMode GetWorkflowRunModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == QUEUED_HASH)
          {
            return WorkflowRunMode::QUEUED;
          }
          else if (hashCode == PARALLEL_HASH)
          {
            return WorkflowRunMode::PARALLEL;
          }
          else if (hashCode == SUPERSEDED_HASH)
          {
            return WorkflowRunMode::SUPERSEDED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<WorkflowRunMode>(hashCode);
          }

          return WorkflowRunMode::NOT_SET;
        }

        Aws::String GetNameForWorkflowRunMode(WorkflowRunMode enumValue)
        {
          switch(enumValue)
          {
          case WorkflowRunMode::NOT_SET:
            return {};
          case WorkflowRunMode::QUEUED:
            return "QUEUED";
          case WorkflowRunMode::PARALLEL:
            return "PARALLEL";
          case WorkflowRunMode::SUPERSEDED:
            return "SUPERSEDED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace WorkflowRunModeMapper
    } // namespace Model
  } // namespace CodeCatalyst
} // namespace Aws
