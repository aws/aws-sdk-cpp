/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-data-exports/model/ExecutionStatusReason.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace BCMDataExports
  {
    namespace Model
    {
      namespace ExecutionStatusReasonMapper
      {

        static const int INSUFFICIENT_PERMISSION_HASH = HashingUtils::HashString("INSUFFICIENT_PERMISSION");
        static const int BILL_OWNER_CHANGED_HASH = HashingUtils::HashString("BILL_OWNER_CHANGED");
        static const int INTERNAL_FAILURE_HASH = HashingUtils::HashString("INTERNAL_FAILURE");


        ExecutionStatusReason GetExecutionStatusReasonForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INSUFFICIENT_PERMISSION_HASH)
          {
            return ExecutionStatusReason::INSUFFICIENT_PERMISSION;
          }
          else if (hashCode == BILL_OWNER_CHANGED_HASH)
          {
            return ExecutionStatusReason::BILL_OWNER_CHANGED;
          }
          else if (hashCode == INTERNAL_FAILURE_HASH)
          {
            return ExecutionStatusReason::INTERNAL_FAILURE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ExecutionStatusReason>(hashCode);
          }

          return ExecutionStatusReason::NOT_SET;
        }

        Aws::String GetNameForExecutionStatusReason(ExecutionStatusReason enumValue)
        {
          switch(enumValue)
          {
          case ExecutionStatusReason::NOT_SET:
            return {};
          case ExecutionStatusReason::INSUFFICIENT_PERMISSION:
            return "INSUFFICIENT_PERMISSION";
          case ExecutionStatusReason::BILL_OWNER_CHANGED:
            return "BILL_OWNER_CHANGED";
          case ExecutionStatusReason::INTERNAL_FAILURE:
            return "INTERNAL_FAILURE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ExecutionStatusReasonMapper
    } // namespace Model
  } // namespace BCMDataExports
} // namespace Aws
