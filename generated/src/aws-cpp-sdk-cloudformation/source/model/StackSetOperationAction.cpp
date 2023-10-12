/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/StackSetOperationAction.h>
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
      namespace StackSetOperationActionMapper
      {

        static constexpr uint32_t CREATE_HASH = ConstExprHashingUtils::HashString("CREATE");
        static constexpr uint32_t UPDATE_HASH = ConstExprHashingUtils::HashString("UPDATE");
        static constexpr uint32_t DELETE__HASH = ConstExprHashingUtils::HashString("DELETE");
        static constexpr uint32_t DETECT_DRIFT_HASH = ConstExprHashingUtils::HashString("DETECT_DRIFT");


        StackSetOperationAction GetStackSetOperationActionForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATE_HASH)
          {
            return StackSetOperationAction::CREATE;
          }
          else if (hashCode == UPDATE_HASH)
          {
            return StackSetOperationAction::UPDATE;
          }
          else if (hashCode == DELETE__HASH)
          {
            return StackSetOperationAction::DELETE_;
          }
          else if (hashCode == DETECT_DRIFT_HASH)
          {
            return StackSetOperationAction::DETECT_DRIFT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StackSetOperationAction>(hashCode);
          }

          return StackSetOperationAction::NOT_SET;
        }

        Aws::String GetNameForStackSetOperationAction(StackSetOperationAction enumValue)
        {
          switch(enumValue)
          {
          case StackSetOperationAction::NOT_SET:
            return {};
          case StackSetOperationAction::CREATE:
            return "CREATE";
          case StackSetOperationAction::UPDATE:
            return "UPDATE";
          case StackSetOperationAction::DELETE_:
            return "DELETE";
          case StackSetOperationAction::DETECT_DRIFT:
            return "DETECT_DRIFT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StackSetOperationActionMapper
    } // namespace Model
  } // namespace CloudFormation
} // namespace Aws
