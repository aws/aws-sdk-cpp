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

        static const int Processing_HASH = HashingUtils::HashString("Processing");
        static const int Successful_HASH = HashingUtils::HashString("Successful");
        static const int Failed_HASH = HashingUtils::HashString("Failed");
        static const int Partial_HASH = HashingUtils::HashString("Partial");
        static const int PendingDocuments_HASH = HashingUtils::HashString("PendingDocuments");
        static const int Submitted_HASH = HashingUtils::HashString("Submitted");
        static const int FOC_HASH = HashingUtils::HashString("FOC");
        static const int ChangeRequested_HASH = HashingUtils::HashString("ChangeRequested");
        static const int Exception_HASH = HashingUtils::HashString("Exception");
        static const int CancelRequested_HASH = HashingUtils::HashString("CancelRequested");
        static const int Cancelled_HASH = HashingUtils::HashString("Cancelled");


        PhoneNumberOrderStatus GetPhoneNumberOrderStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
