/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/ComputeStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GameLift
  {
    namespace Model
    {
      namespace ComputeStatusMapper
      {

        static constexpr uint32_t PENDING_HASH = ConstExprHashingUtils::HashString("PENDING");
        static constexpr uint32_t ACTIVE_HASH = ConstExprHashingUtils::HashString("ACTIVE");
        static constexpr uint32_t TERMINATING_HASH = ConstExprHashingUtils::HashString("TERMINATING");


        ComputeStatus GetComputeStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return ComputeStatus::PENDING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return ComputeStatus::ACTIVE;
          }
          else if (hashCode == TERMINATING_HASH)
          {
            return ComputeStatus::TERMINATING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ComputeStatus>(hashCode);
          }

          return ComputeStatus::NOT_SET;
        }

        Aws::String GetNameForComputeStatus(ComputeStatus enumValue)
        {
          switch(enumValue)
          {
          case ComputeStatus::NOT_SET:
            return {};
          case ComputeStatus::PENDING:
            return "PENDING";
          case ComputeStatus::ACTIVE:
            return "ACTIVE";
          case ComputeStatus::TERMINATING:
            return "TERMINATING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ComputeStatusMapper
    } // namespace Model
  } // namespace GameLift
} // namespace Aws
