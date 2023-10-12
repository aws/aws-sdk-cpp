/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/StackInstanceStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudFormation
  {
    namespace Model
    {
      namespace StackInstanceStatusMapper
      {

        static constexpr uint32_t CURRENT_HASH = ConstExprHashingUtils::HashString("CURRENT");
        static constexpr uint32_t OUTDATED_HASH = ConstExprHashingUtils::HashString("OUTDATED");
        static constexpr uint32_t INOPERABLE_HASH = ConstExprHashingUtils::HashString("INOPERABLE");


        StackInstanceStatus GetStackInstanceStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CURRENT_HASH)
          {
            return StackInstanceStatus::CURRENT;
          }
          else if (hashCode == OUTDATED_HASH)
          {
            return StackInstanceStatus::OUTDATED;
          }
          else if (hashCode == INOPERABLE_HASH)
          {
            return StackInstanceStatus::INOPERABLE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StackInstanceStatus>(hashCode);
          }

          return StackInstanceStatus::NOT_SET;
        }

        Aws::String GetNameForStackInstanceStatus(StackInstanceStatus enumValue)
        {
          switch(enumValue)
          {
          case StackInstanceStatus::NOT_SET:
            return {};
          case StackInstanceStatus::CURRENT:
            return "CURRENT";
          case StackInstanceStatus::OUTDATED:
            return "OUTDATED";
          case StackInstanceStatus::INOPERABLE:
            return "INOPERABLE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StackInstanceStatusMapper
    } // namespace Model
  } // namespace CloudFormation
} // namespace Aws
