/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/VpcBlockPublicAccessExclusionState.h>
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
      namespace VpcBlockPublicAccessExclusionStateMapper
      {

        static const int create_in_progress_HASH = HashingUtils::HashString("create-in-progress");
        static const int create_complete_HASH = HashingUtils::HashString("create-complete");
        static const int create_failed_HASH = HashingUtils::HashString("create-failed");
        static const int update_in_progress_HASH = HashingUtils::HashString("update-in-progress");
        static const int update_complete_HASH = HashingUtils::HashString("update-complete");
        static const int update_failed_HASH = HashingUtils::HashString("update-failed");
        static const int delete_in_progress_HASH = HashingUtils::HashString("delete-in-progress");
        static const int delete_complete_HASH = HashingUtils::HashString("delete-complete");
        static const int disable_in_progress_HASH = HashingUtils::HashString("disable-in-progress");
        static const int disable_complete_HASH = HashingUtils::HashString("disable-complete");


        VpcBlockPublicAccessExclusionState GetVpcBlockPublicAccessExclusionStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == create_in_progress_HASH)
          {
            return VpcBlockPublicAccessExclusionState::create_in_progress;
          }
          else if (hashCode == create_complete_HASH)
          {
            return VpcBlockPublicAccessExclusionState::create_complete;
          }
          else if (hashCode == create_failed_HASH)
          {
            return VpcBlockPublicAccessExclusionState::create_failed;
          }
          else if (hashCode == update_in_progress_HASH)
          {
            return VpcBlockPublicAccessExclusionState::update_in_progress;
          }
          else if (hashCode == update_complete_HASH)
          {
            return VpcBlockPublicAccessExclusionState::update_complete;
          }
          else if (hashCode == update_failed_HASH)
          {
            return VpcBlockPublicAccessExclusionState::update_failed;
          }
          else if (hashCode == delete_in_progress_HASH)
          {
            return VpcBlockPublicAccessExclusionState::delete_in_progress;
          }
          else if (hashCode == delete_complete_HASH)
          {
            return VpcBlockPublicAccessExclusionState::delete_complete;
          }
          else if (hashCode == disable_in_progress_HASH)
          {
            return VpcBlockPublicAccessExclusionState::disable_in_progress;
          }
          else if (hashCode == disable_complete_HASH)
          {
            return VpcBlockPublicAccessExclusionState::disable_complete;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VpcBlockPublicAccessExclusionState>(hashCode);
          }

          return VpcBlockPublicAccessExclusionState::NOT_SET;
        }

        Aws::String GetNameForVpcBlockPublicAccessExclusionState(VpcBlockPublicAccessExclusionState enumValue)
        {
          switch(enumValue)
          {
          case VpcBlockPublicAccessExclusionState::NOT_SET:
            return {};
          case VpcBlockPublicAccessExclusionState::create_in_progress:
            return "create-in-progress";
          case VpcBlockPublicAccessExclusionState::create_complete:
            return "create-complete";
          case VpcBlockPublicAccessExclusionState::create_failed:
            return "create-failed";
          case VpcBlockPublicAccessExclusionState::update_in_progress:
            return "update-in-progress";
          case VpcBlockPublicAccessExclusionState::update_complete:
            return "update-complete";
          case VpcBlockPublicAccessExclusionState::update_failed:
            return "update-failed";
          case VpcBlockPublicAccessExclusionState::delete_in_progress:
            return "delete-in-progress";
          case VpcBlockPublicAccessExclusionState::delete_complete:
            return "delete-complete";
          case VpcBlockPublicAccessExclusionState::disable_in_progress:
            return "disable-in-progress";
          case VpcBlockPublicAccessExclusionState::disable_complete:
            return "disable-complete";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VpcBlockPublicAccessExclusionStateMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
