/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-voice/model/PhoneNumberOrderStatus.h>
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
      namespace PhoneNumberOrderStatusMapper
      {

        static constexpr uint32_t Processing_HASH = ConstExprHashingUtils::HashString("Processing");
        static constexpr uint32_t Successful_HASH = ConstExprHashingUtils::HashString("Successful");
        static constexpr uint32_t Failed_HASH = ConstExprHashingUtils::HashString("Failed");
        static constexpr uint32_t Partial_HASH = ConstExprHashingUtils::HashString("Partial");
        static constexpr uint32_t PendingDocuments_HASH = ConstExprHashingUtils::HashString("PendingDocuments");
        static constexpr uint32_t Submitted_HASH = ConstExprHashingUtils::HashString("Submitted");
        static constexpr uint32_t FOC_HASH = ConstExprHashingUtils::HashString("FOC");
        static constexpr uint32_t ChangeRequested_HASH = ConstExprHashingUtils::HashString("ChangeRequested");
        static constexpr uint32_t Exception_HASH = ConstExprHashingUtils::HashString("Exception");
        static constexpr uint32_t CancelRequested_HASH = ConstExprHashingUtils::HashString("CancelRequested");
        static constexpr uint32_t Cancelled_HASH = ConstExprHashingUtils::HashString("Cancelled");


        PhoneNumberOrderStatus GetPhoneNumberOrderStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Processing_HASH)
          {
            return PhoneNumberOrderStatus::Processing;
          }
          else if (hashCode == Successful_HASH)
          {
            return PhoneNumberOrderStatus::Successful;
          }
          else if (hashCode == Failed_HASH)
          {
            return PhoneNumberOrderStatus::Failed;
          }
          else if (hashCode == Partial_HASH)
          {
            return PhoneNumberOrderStatus::Partial;
          }
          else if (hashCode == PendingDocuments_HASH)
          {
            return PhoneNumberOrderStatus::PendingDocuments;
          }
          else if (hashCode == Submitted_HASH)
          {
            return PhoneNumberOrderStatus::Submitted;
          }
          else if (hashCode == FOC_HASH)
          {
            return PhoneNumberOrderStatus::FOC;
          }
          else if (hashCode == ChangeRequested_HASH)
          {
            return PhoneNumberOrderStatus::ChangeRequested;
          }
          else if (hashCode == Exception_HASH)
          {
            return PhoneNumberOrderStatus::Exception;
          }
          else if (hashCode == CancelRequested_HASH)
          {
            return PhoneNumberOrderStatus::CancelRequested;
          }
          else if (hashCode == Cancelled_HASH)
          {
            return PhoneNumberOrderStatus::Cancelled;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PhoneNumberOrderStatus>(hashCode);
          }

          return PhoneNumberOrderStatus::NOT_SET;
        }

        Aws::String GetNameForPhoneNumberOrderStatus(PhoneNumberOrderStatus enumValue)
        {
          switch(enumValue)
          {
          case PhoneNumberOrderStatus::NOT_SET:
            return {};
          case PhoneNumberOrderStatus::Processing:
            return "Processing";
          case PhoneNumberOrderStatus::Successful:
            return "Successful";
          case PhoneNumberOrderStatus::Failed:
            return "Failed";
          case PhoneNumberOrderStatus::Partial:
            return "Partial";
          case PhoneNumberOrderStatus::PendingDocuments:
            return "PendingDocuments";
          case PhoneNumberOrderStatus::Submitted:
            return "Submitted";
          case PhoneNumberOrderStatus::FOC:
            return "FOC";
          case PhoneNumberOrderStatus::ChangeRequested:
            return "ChangeRequested";
          case PhoneNumberOrderStatus::Exception:
            return "Exception";
          case PhoneNumberOrderStatus::CancelRequested:
            return "CancelRequested";
          case PhoneNumberOrderStatus::Cancelled:
            return "Cancelled";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PhoneNumberOrderStatusMapper
    } // namespace Model
  } // namespace ChimeSDKVoice
} // namespace Aws
