/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/WorkflowStepType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Transfer
  {
    namespace Model
    {
      namespace WorkflowStepTypeMapper
      {

        static const int COPY_HASH = HashingUtils::HashString("COPY");
        static const int CUSTOM_HASH = HashingUtils::HashString("CUSTOM");
        static const int TAG_HASH = HashingUtils::HashString("TAG");
        static const int DELETE__HASH = HashingUtils::HashString("DELETE");
        static const int DECRYPT_HASH = HashingUtils::HashString("DECRYPT");


        WorkflowStepType GetWorkflowStepTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == COPY_HASH)
          {
            return WorkflowStepType::COPY;
          }
          else if (hashCode == CUSTOM_HASH)
          {
            return WorkflowStepType::CUSTOM;
          }
          else if (hashCode == TAG_HASH)
          {
            return WorkflowStepType::TAG;
          }
          else if (hashCode == DELETE__HASH)
          {
            return WorkflowStepType::DELETE_;
          }
          else if (hashCode == DECRYPT_HASH)
          {
            return WorkflowStepType::DECRYPT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<WorkflowStepType>(hashCode);
          }

          return WorkflowStepType::NOT_SET;
        }

        Aws::String GetNameForWorkflowStepType(WorkflowStepType enumValue)
        {
          switch(enumValue)
          {
          case WorkflowStepType::COPY:
            return "COPY";
          case WorkflowStepType::CUSTOM:
            return "CUSTOM";
          case WorkflowStepType::TAG:
            return "TAG";
          case WorkflowStepType::DELETE_:
            return "DELETE";
          case WorkflowStepType::DECRYPT:
            return "DECRYPT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace WorkflowStepTypeMapper
    } // namespace Model
  } // namespace Transfer
} // namespace Aws
