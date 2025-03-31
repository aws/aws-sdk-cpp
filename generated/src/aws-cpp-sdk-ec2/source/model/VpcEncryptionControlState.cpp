/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/VpcEncryptionControlState.h>
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
      namespace VpcEncryptionControlStateMapper
      {

        static const int enforce_in_progress_HASH = HashingUtils::HashString("enforce-in-progress");
        static const int monitor_in_progress_HASH = HashingUtils::HashString("monitor-in-progress");
        static const int enforce_failed_HASH = HashingUtils::HashString("enforce-failed");
        static const int monitor_failed_HASH = HashingUtils::HashString("monitor-failed");
        static const int deleting_HASH = HashingUtils::HashString("deleting");
        static const int deleted_HASH = HashingUtils::HashString("deleted");
        static const int available_HASH = HashingUtils::HashString("available");
        static const int creating_HASH = HashingUtils::HashString("creating");
        static const int delete_failed_HASH = HashingUtils::HashString("delete-failed");


        VpcEncryptionControlState GetVpcEncryptionControlStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == enforce_in_progress_HASH)
          {
            return VpcEncryptionControlState::enforce_in_progress;
          }
          else if (hashCode == monitor_in_progress_HASH)
          {
            return VpcEncryptionControlState::monitor_in_progress;
          }
          else if (hashCode == enforce_failed_HASH)
          {
            return VpcEncryptionControlState::enforce_failed;
          }
          else if (hashCode == monitor_failed_HASH)
          {
            return VpcEncryptionControlState::monitor_failed;
          }
          else if (hashCode == deleting_HASH)
          {
            return VpcEncryptionControlState::deleting;
          }
          else if (hashCode == deleted_HASH)
          {
            return VpcEncryptionControlState::deleted;
          }
          else if (hashCode == available_HASH)
          {
            return VpcEncryptionControlState::available;
          }
          else if (hashCode == creating_HASH)
          {
            return VpcEncryptionControlState::creating;
          }
          else if (hashCode == delete_failed_HASH)
          {
            return VpcEncryptionControlState::delete_failed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VpcEncryptionControlState>(hashCode);
          }

          return VpcEncryptionControlState::NOT_SET;
        }

        Aws::String GetNameForVpcEncryptionControlState(VpcEncryptionControlState enumValue)
        {
          switch(enumValue)
          {
          case VpcEncryptionControlState::NOT_SET:
            return {};
          case VpcEncryptionControlState::enforce_in_progress:
            return "enforce-in-progress";
          case VpcEncryptionControlState::monitor_in_progress:
            return "monitor-in-progress";
          case VpcEncryptionControlState::enforce_failed:
            return "enforce-failed";
          case VpcEncryptionControlState::monitor_failed:
            return "monitor-failed";
          case VpcEncryptionControlState::deleting:
            return "deleting";
          case VpcEncryptionControlState::deleted:
            return "deleted";
          case VpcEncryptionControlState::available:
            return "available";
          case VpcEncryptionControlState::creating:
            return "creating";
          case VpcEncryptionControlState::delete_failed:
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

      } // namespace VpcEncryptionControlStateMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
