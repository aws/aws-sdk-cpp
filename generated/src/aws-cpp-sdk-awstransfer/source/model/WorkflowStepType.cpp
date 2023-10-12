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

        static constexpr uint32_t COPY_HASH = ConstExprHashingUtils::HashString("COPY");
        static constexpr uint32_t CUSTOM_HASH = ConstExprHashingUtils::HashString("CUSTOM");
        static constexpr uint32_t TAG_HASH = ConstExprHashingUtils::HashString("TAG");
        static constexpr uint32_t DELETE__HASH = ConstExprHashingUtils::HashString("DELETE");
        static constexpr uint32_t DECRYPT_HASH = ConstExprHashingUtils::HashString("DECRYPT");


        WorkflowStepType GetWorkflowStepTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case WorkflowStepType::NOT_SET:
            return {};
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
