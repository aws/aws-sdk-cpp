/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/BundleTaskState.h>
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
      namespace BundleTaskStateMapper
      {

        static constexpr uint32_t pending_HASH = ConstExprHashingUtils::HashString("pending");
        static constexpr uint32_t waiting_for_shutdown_HASH = ConstExprHashingUtils::HashString("waiting-for-shutdown");
        static constexpr uint32_t bundling_HASH = ConstExprHashingUtils::HashString("bundling");
        static constexpr uint32_t storing_HASH = ConstExprHashingUtils::HashString("storing");
        static constexpr uint32_t cancelling_HASH = ConstExprHashingUtils::HashString("cancelling");
        static constexpr uint32_t complete_HASH = ConstExprHashingUtils::HashString("complete");
        static constexpr uint32_t failed_HASH = ConstExprHashingUtils::HashString("failed");


        BundleTaskState GetBundleTaskStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == pending_HASH)
          {
            return BundleTaskState::pending;
          }
          else if (hashCode == waiting_for_shutdown_HASH)
          {
            return BundleTaskState::waiting_for_shutdown;
          }
          else if (hashCode == bundling_HASH)
          {
            return BundleTaskState::bundling;
          }
          else if (hashCode == storing_HASH)
          {
            return BundleTaskState::storing;
          }
          else if (hashCode == cancelling_HASH)
          {
            return BundleTaskState::cancelling;
          }
          else if (hashCode == complete_HASH)
          {
            return BundleTaskState::complete;
          }
          else if (hashCode == failed_HASH)
          {
            return BundleTaskState::failed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BundleTaskState>(hashCode);
          }

          return BundleTaskState::NOT_SET;
        }

        Aws::String GetNameForBundleTaskState(BundleTaskState enumValue)
        {
          switch(enumValue)
          {
          case BundleTaskState::NOT_SET:
            return {};
          case BundleTaskState::pending:
            return "pending";
          case BundleTaskState::waiting_for_shutdown:
            return "waiting-for-shutdown";
          case BundleTaskState::bundling:
            return "bundling";
          case BundleTaskState::storing:
            return "storing";
          case BundleTaskState::cancelling:
            return "cancelling";
          case BundleTaskState::complete:
            return "complete";
          case BundleTaskState::failed:
            return "failed";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BundleTaskStateMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
