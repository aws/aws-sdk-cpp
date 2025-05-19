/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/MacModificationTaskState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EC2
  {
    namespace Model
    {
      namespace MacModificationTaskStateMapper
      {

        static const int successful_HASH = HashingUtils::HashString("successful");
        static const int failed_HASH = HashingUtils::HashString("failed");
        static const int in_progress_HASH = HashingUtils::HashString("in-progress");
        static const int pending_HASH = HashingUtils::HashString("pending");


        MacModificationTaskState GetMacModificationTaskStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == successful_HASH)
          {
            return MacModificationTaskState::successful;
          }
          else if (hashCode == failed_HASH)
          {
            return MacModificationTaskState::failed;
          }
          else if (hashCode == in_progress_HASH)
          {
            return MacModificationTaskState::in_progress;
          }
          else if (hashCode == pending_HASH)
          {
            return MacModificationTaskState::pending;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MacModificationTaskState>(hashCode);
          }

          return MacModificationTaskState::NOT_SET;
        }

        Aws::String GetNameForMacModificationTaskState(MacModificationTaskState enumValue)
        {
          switch(enumValue)
          {
          case MacModificationTaskState::NOT_SET:
            return {};
          case MacModificationTaskState::successful:
            return "successful";
          case MacModificationTaskState::failed:
            return "failed";
          case MacModificationTaskState::in_progress:
            return "in-progress";
          case MacModificationTaskState::pending:
            return "pending";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MacModificationTaskStateMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
