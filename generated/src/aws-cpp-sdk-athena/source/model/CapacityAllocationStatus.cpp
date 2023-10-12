/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/athena/model/CapacityAllocationStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Athena
  {
    namespace Model
    {
      namespace CapacityAllocationStatusMapper
      {

        static constexpr uint32_t PENDING_HASH = ConstExprHashingUtils::HashString("PENDING");
        static constexpr uint32_t SUCCEEDED_HASH = ConstExprHashingUtils::HashString("SUCCEEDED");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");


        CapacityAllocationStatus GetCapacityAllocationStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return CapacityAllocationStatus::PENDING;
          }
          else if (hashCode == SUCCEEDED_HASH)
          {
            return CapacityAllocationStatus::SUCCEEDED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return CapacityAllocationStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CapacityAllocationStatus>(hashCode);
          }

          return CapacityAllocationStatus::NOT_SET;
        }

        Aws::String GetNameForCapacityAllocationStatus(CapacityAllocationStatus enumValue)
        {
          switch(enumValue)
          {
          case CapacityAllocationStatus::NOT_SET:
            return {};
          case CapacityAllocationStatus::PENDING:
            return "PENDING";
          case CapacityAllocationStatus::SUCCEEDED:
            return "SUCCEEDED";
          case CapacityAllocationStatus::FAILED:
            return "FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CapacityAllocationStatusMapper
    } // namespace Model
  } // namespace Athena
} // namespace Aws
