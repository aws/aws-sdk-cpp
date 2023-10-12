/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/WorkflowType.h>
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
      namespace WorkflowTypeMapper
      {

        static constexpr uint32_t BUILD_HASH = ConstExprHashingUtils::HashString("BUILD");
        static constexpr uint32_t TEST_HASH = ConstExprHashingUtils::HashString("TEST");
        static constexpr uint32_t DISTRIBUTION_HASH = ConstExprHashingUtils::HashString("DISTRIBUTION");


        WorkflowType GetWorkflowTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BUILD_HASH)
          {
            return WorkflowType::BUILD;
          }
          else if (hashCode == TEST_HASH)
          {
            return WorkflowType::TEST;
          }
          else if (hashCode == DISTRIBUTION_HASH)
          {
            return WorkflowType::DISTRIBUTION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<WorkflowType>(hashCode);
          }

          return WorkflowType::NOT_SET;
        }

        Aws::String GetNameForWorkflowType(WorkflowType enumValue)
        {
          switch(enumValue)
          {
          case WorkflowType::NOT_SET:
            return {};
          case WorkflowType::BUILD:
            return "BUILD";
          case WorkflowType::TEST:
            return "TEST";
          case WorkflowType::DISTRIBUTION:
            return "DISTRIBUTION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace WorkflowTypeMapper
    } // namespace Model
  } // namespace imagebuilder
} // namespace Aws
