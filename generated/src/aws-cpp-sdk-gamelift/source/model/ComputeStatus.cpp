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

        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int TERMINATING_HASH = HashingUtils::HashString("TERMINATING");


        ComputeStatus GetComputeStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
