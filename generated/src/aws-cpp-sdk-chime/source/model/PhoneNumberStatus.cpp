/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/PhoneNumberStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Chime
  {
    namespace Model
    {
      namespace PhoneNumberStatusMapper
      {

        static constexpr uint32_t AcquireInProgress_HASH = ConstExprHashingUtils::HashString("AcquireInProgress");
        static constexpr uint32_t AcquireFailed_HASH = ConstExprHashingUtils::HashString("AcquireFailed");
        static constexpr uint32_t Unassigned_HASH = ConstExprHashingUtils::HashString("Unassigned");
        static constexpr uint32_t Assigned_HASH = ConstExprHashingUtils::HashString("Assigned");
        static constexpr uint32_t ReleaseInProgress_HASH = ConstExprHashingUtils::HashString("ReleaseInProgress");
        static constexpr uint32_t DeleteInProgress_HASH = ConstExprHashingUtils::HashString("DeleteInProgress");
        static constexpr uint32_t ReleaseFailed_HASH = ConstExprHashingUtils::HashString("ReleaseFailed");
        static constexpr uint32_t DeleteFailed_HASH = ConstExprHashingUtils::HashString("DeleteFailed");


        PhoneNumberStatus GetPhoneNumberStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AcquireInProgress_HASH)
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
          case PhoneNumberStatus::NOT_SET:
            return {};
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
  } // namespace Chime
} // namespace Aws
