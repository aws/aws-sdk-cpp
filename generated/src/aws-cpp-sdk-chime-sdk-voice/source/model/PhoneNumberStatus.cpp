/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-voice/model/PhoneNumberStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ChimeSDKVoice
  {
    namespace Model
    {
      namespace PhoneNumberStatusMapper
      {

        static const int Cancelled_HASH = HashingUtils::HashString("Cancelled");
        static const int PortinCancelRequested_HASH = HashingUtils::HashString("PortinCancelRequested");
        static const int PortinInProgress_HASH = HashingUtils::HashString("PortinInProgress");
        static const int AcquireInProgress_HASH = HashingUtils::HashString("AcquireInProgress");
        static const int AcquireFailed_HASH = HashingUtils::HashString("AcquireFailed");
        static const int Unassigned_HASH = HashingUtils::HashString("Unassigned");
        static const int Assigned_HASH = HashingUtils::HashString("Assigned");
        static const int ReleaseInProgress_HASH = HashingUtils::HashString("ReleaseInProgress");
        static const int DeleteInProgress_HASH = HashingUtils::HashString("DeleteInProgress");
        static const int ReleaseFailed_HASH = HashingUtils::HashString("ReleaseFailed");
        static const int DeleteFailed_HASH = HashingUtils::HashString("DeleteFailed");


        PhoneNumberStatus GetPhoneNumberStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Cancelled_HASH)
          {
            return PhoneNumberStatus::Cancelled;
          }
          else if (hashCode == PortinCancelRequested_HASH)
          {
            return PhoneNumberStatus::PortinCancelRequested;
          }
          else if (hashCode == PortinInProgress_HASH)
          {
            return PhoneNumberStatus::PortinInProgress;
          }
          else if (hashCode == AcquireInProgress_HASH)
          {
            return PhoneNumberStatus::AcquireInProgress;
          }
          else if (hashCode == AcquireFailed_HASH)
          {
            return PhoneNumberStatus::AcquireFailed;
          }
          else if (hashCode == Unassigned_HASH)
          {
            return PhoneNumberStatus::Unassigned;
          }
          else if (hashCode == Assigned_HASH)
          {
            return PhoneNumberStatus::Assigned;
          }
          else if (hashCode == ReleaseInProgress_HASH)
          {
            return PhoneNumberStatus::ReleaseInProgress;
          }
          else if (hashCode == DeleteInProgress_HASH)
          {
            return PhoneNumberStatus::DeleteInProgress;
          }
          else if (hashCode == ReleaseFailed_HASH)
          {
            return PhoneNumberStatus::ReleaseFailed;
          }
          else if (hashCode == DeleteFailed_HASH)
          {
            return PhoneNumberStatus::DeleteFailed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PhoneNumberStatus>(hashCode);
          }

          return PhoneNumberStatus::NOT_SET;
        }

        Aws::String GetNameForPhoneNumberStatus(PhoneNumberStatus enumValue)
        {
          switch(enumValue)
          {
          case PhoneNumberStatus::Cancelled:
            return "Cancelled";
          case PhoneNumberStatus::PortinCancelRequested:
            return "PortinCancelRequested";
          case PhoneNumberStatus::PortinInProgress:
            return "PortinInProgress";
          case PhoneNumberStatus::AcquireInProgress:
            return "AcquireInProgress";
          case PhoneNumberStatus::AcquireFailed:
            return "AcquireFailed";
          case PhoneNumberStatus::Unassigned:
            return "Unassigned";
          case PhoneNumberStatus::Assigned:
            return "Assigned";
          case PhoneNumberStatus::ReleaseInProgress:
            return "ReleaseInProgress";
          case PhoneNumberStatus::DeleteInProgress:
            return "DeleteInProgress";
          case PhoneNumberStatus::ReleaseFailed:
            return "ReleaseFailed";
          case PhoneNumberStatus::DeleteFailed:
            return "DeleteFailed";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PhoneNumberStatusMapper
    } // namespace Model
  } // namespace ChimeSDKVoice
} // namespace Aws
