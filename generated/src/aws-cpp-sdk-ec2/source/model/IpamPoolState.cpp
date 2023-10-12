/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/IpamPoolState.h>
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
      namespace IpamPoolStateMapper
      {

        static constexpr uint32_t create_in_progress_HASH = ConstExprHashingUtils::HashString("create-in-progress");
        static constexpr uint32_t create_complete_HASH = ConstExprHashingUtils::HashString("create-complete");
        static constexpr uint32_t create_failed_HASH = ConstExprHashingUtils::HashString("create-failed");
        static constexpr uint32_t modify_in_progress_HASH = ConstExprHashingUtils::HashString("modify-in-progress");
        static constexpr uint32_t modify_complete_HASH = ConstExprHashingUtils::HashString("modify-complete");
        static constexpr uint32_t modify_failed_HASH = ConstExprHashingUtils::HashString("modify-failed");
        static constexpr uint32_t delete_in_progress_HASH = ConstExprHashingUtils::HashString("delete-in-progress");
        static constexpr uint32_t delete_complete_HASH = ConstExprHashingUtils::HashString("delete-complete");
        static constexpr uint32_t delete_failed_HASH = ConstExprHashingUtils::HashString("delete-failed");
        static constexpr uint32_t isolate_in_progress_HASH = ConstExprHashingUtils::HashString("isolate-in-progress");
        static constexpr uint32_t isolate_complete_HASH = ConstExprHashingUtils::HashString("isolate-complete");
        static constexpr uint32_t restore_in_progress_HASH = ConstExprHashingUtils::HashString("restore-in-progress");


        IpamPoolState GetIpamPoolStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == create_in_progress_HASH)
          {
            return IpamPoolState::create_in_progress;
          }
          else if (hashCode == create_complete_HASH)
          {
            return IpamPoolState::create_complete;
          }
          else if (hashCode == create_failed_HASH)
          {
            return IpamPoolState::create_failed;
          }
          else if (hashCode == modify_in_progress_HASH)
          {
            return IpamPoolState::modify_in_progress;
          }
          else if (hashCode == modify_complete_HASH)
          {
            return IpamPoolState::modify_complete;
          }
          else if (hashCode == modify_failed_HASH)
          {
            return IpamPoolState::modify_failed;
          }
          else if (hashCode == delete_in_progress_HASH)
          {
            return IpamPoolState::delete_in_progress;
          }
          else if (hashCode == delete_complete_HASH)
          {
            return IpamPoolState::delete_complete;
          }
          else if (hashCode == delete_failed_HASH)
          {
            return IpamPoolState::delete_failed;
          }
          else if (hashCode == isolate_in_progress_HASH)
          {
            return IpamPoolState::isolate_in_progress;
          }
          else if (hashCode == isolate_complete_HASH)
          {
            return IpamPoolState::isolate_complete;
          }
          else if (hashCode == restore_in_progress_HASH)
          {
            return IpamPoolState::restore_in_progress;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IpamPoolState>(hashCode);
          }

          return IpamPoolState::NOT_SET;
        }

        Aws::String GetNameForIpamPoolState(IpamPoolState enumValue)
        {
          switch(enumValue)
          {
          case IpamPoolState::NOT_SET:
            return {};
          case IpamPoolState::create_in_progress:
            return "create-in-progress";
          case IpamPoolState::create_complete:
            return "create-complete";
          case IpamPoolState::create_failed:
            return "create-failed";
          case IpamPoolState::modify_in_progress:
            return "modify-in-progress";
          case IpamPoolState::modify_complete:
            return "modify-complete";
          case IpamPoolState::modify_failed:
            return "modify-failed";
          case IpamPoolState::delete_in_progress:
            return "delete-in-progress";
          case IpamPoolState::delete_complete:
            return "delete-complete";
          case IpamPoolState::delete_failed:
            return "delete-failed";
          case IpamPoolState::isolate_in_progress:
            return "isolate-in-progress";
          case IpamPoolState::isolate_complete:
            return "isolate-complete";
          case IpamPoolState::restore_in_progress:
            return "restore-in-progress";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IpamPoolStateMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
