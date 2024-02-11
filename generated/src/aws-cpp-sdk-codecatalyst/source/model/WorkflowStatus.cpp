/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecatalyst/model/WorkflowStatus.h>
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
      namespace WorkflowStatusMapper
      {

        static const int INVALID_HASH = HashingUtils::HashString("INVALID");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");


        WorkflowStatus GetWorkflowStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INVALID_HASH)
          {
            return WorkflowStatus::INVALID;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return WorkflowStatus::ACTIVE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<WorkflowStatus>(hashCode);
          }

          return WorkflowStatus::NOT_SET;
        }

        Aws::String GetNameForWorkflowStatus(WorkflowStatus enumValue)
        {
          switch(enumValue)
          {
          case WorkflowStatus::NOT_SET:
            return {};
          case WorkflowStatus::INVALID:
            return "INVALID";
          case WorkflowStatus::ACTIVE:
            return "ACTIVE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace WorkflowStatusMapper
    } // namespace Model
  } // namespace CodeCatalyst
} // namespace Aws
