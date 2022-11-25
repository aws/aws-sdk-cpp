/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/PrefixListState.h>
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
      namespace PrefixListStateMapper
      {

        static const int create_in_progress_HASH = HashingUtils::HashString("create-in-progress");
        static const int create_complete_HASH = HashingUtils::HashString("create-complete");
        static const int create_failed_HASH = HashingUtils::HashString("create-failed");
        static const int modify_in_progress_HASH = HashingUtils::HashString("modify-in-progress");
        static const int modify_complete_HASH = HashingUtils::HashString("modify-complete");
        static const int modify_failed_HASH = HashingUtils::HashString("modify-failed");
        static const int restore_in_progress_HASH = HashingUtils::HashString("restore-in-progress");
        static const int restore_complete_HASH = HashingUtils::HashString("restore-complete");
        static const int restore_failed_HASH = HashingUtils::HashString("restore-failed");
        static const int delete_in_progress_HASH = HashingUtils::HashString("delete-in-progress");
        static const int delete_complete_HASH = HashingUtils::HashString("delete-complete");
        static const int delete_failed_HASH = HashingUtils::HashString("delete-failed");


        PrefixListState GetPrefixListStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == create_in_progress_HASH)
          {
            return PrefixListState::create_in_progress;
          }
          else if (hashCode == create_complete_HASH)
          {
            return PrefixListState::create_complete;
          }
          else if (hashCode == create_failed_HASH)
          {
            return PrefixListState::create_failed;
          }
          else if (hashCode == modify_in_progress_HASH)
          {
            return PrefixListState::modify_in_progress;
          }
          else if (hashCode == modify_complete_HASH)
          {
            return PrefixListState::modify_complete;
          }
          else if (hashCode == modify_failed_HASH)
          {
            return PrefixListState::modify_failed;
          }
          else if (hashCode == restore_in_progress_HASH)
          {
            return PrefixListState::restore_in_progress;
          }
          else if (hashCode == restore_complete_HASH)
          {
            return PrefixListState::restore_complete;
          }
          else if (hashCode == restore_failed_HASH)
          {
            return PrefixListState::restore_failed;
          }
          else if (hashCode == delete_in_progress_HASH)
          {
            return PrefixListState::delete_in_progress;
          }
          else if (hashCode == delete_complete_HASH)
          {
            return PrefixListState::delete_complete;
          }
          else if (hashCode == delete_failed_HASH)
          {
            return PrefixListState::delete_failed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PrefixListState>(hashCode);
          }

          return PrefixListState::NOT_SET;
        }

        Aws::String GetNameForPrefixListState(PrefixListState enumValue)
        {
          switch(enumValue)
          {
          case PrefixListState::create_in_progress:
            return "create-in-progress";
          case PrefixListState::create_complete:
            return "create-complete";
          case PrefixListState::create_failed:
            return "create-failed";
          case PrefixListState::modify_in_progress:
            return "modify-in-progress";
          case PrefixListState::modify_complete:
            return "modify-complete";
          case PrefixListState::modify_failed:
            return "modify-failed";
          case PrefixListState::restore_in_progress:
            return "restore-in-progress";
          case PrefixListState::restore_complete:
            return "restore-complete";
          case PrefixListState::restore_failed:
            return "restore-failed";
          case PrefixListState::delete_in_progress:
            return "delete-in-progress";
          case PrefixListState::delete_complete:
            return "delete-complete";
          case PrefixListState::delete_failed:
            return "delete-failed";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PrefixListStateMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
