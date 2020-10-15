/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/groundstation/model/ContactStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GroundStation
  {
    namespace Model
    {
      namespace ContactStatusMapper
      {

        static const int AVAILABLE_HASH = HashingUtils::HashString("AVAILABLE");
        static const int AWS_CANCELLED_HASH = HashingUtils::HashString("AWS_CANCELLED");
        static const int AWS_FAILED_HASH = HashingUtils::HashString("AWS_FAILED");
        static const int CANCELLED_HASH = HashingUtils::HashString("CANCELLED");
        static const int CANCELLING_HASH = HashingUtils::HashString("CANCELLING");
        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int FAILED_TO_SCHEDULE_HASH = HashingUtils::HashString("FAILED_TO_SCHEDULE");
        static const int PASS_HASH = HashingUtils::HashString("PASS");
        static const int POSTPASS_HASH = HashingUtils::HashString("POSTPASS");
        static const int PREPASS_HASH = HashingUtils::HashString("PREPASS");
        static const int SCHEDULED_HASH = HashingUtils::HashString("SCHEDULED");
        static const int SCHEDULING_HASH = HashingUtils::HashString("SCHEDULING");


        ContactStatus GetContactStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AVAILABLE_HASH)
          {
            return ContactStatus::AVAILABLE;
          }
          else if (hashCode == AWS_CANCELLED_HASH)
          {
            return ContactStatus::AWS_CANCELLED;
          }
          else if (hashCode == AWS_FAILED_HASH)
          {
            return ContactStatus::AWS_FAILED;
          }
          else if (hashCode == CANCELLED_HASH)
          {
            return ContactStatus::CANCELLED;
          }
          else if (hashCode == CANCELLING_HASH)
          {
            return ContactStatus::CANCELLING;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return ContactStatus::COMPLETED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return ContactStatus::FAILED;
          }
          else if (hashCode == FAILED_TO_SCHEDULE_HASH)
          {
            return ContactStatus::FAILED_TO_SCHEDULE;
          }
          else if (hashCode == PASS_HASH)
          {
            return ContactStatus::PASS;
          }
          else if (hashCode == POSTPASS_HASH)
          {
            return ContactStatus::POSTPASS;
          }
          else if (hashCode == PREPASS_HASH)
          {
            return ContactStatus::PREPASS;
          }
          else if (hashCode == SCHEDULED_HASH)
          {
            return ContactStatus::SCHEDULED;
          }
          else if (hashCode == SCHEDULING_HASH)
          {
            return ContactStatus::SCHEDULING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ContactStatus>(hashCode);
          }

          return ContactStatus::NOT_SET;
        }

        Aws::String GetNameForContactStatus(ContactStatus enumValue)
        {
          switch(enumValue)
          {
          case ContactStatus::AVAILABLE:
            return "AVAILABLE";
          case ContactStatus::AWS_CANCELLED:
            return "AWS_CANCELLED";
          case ContactStatus::AWS_FAILED:
            return "AWS_FAILED";
          case ContactStatus::CANCELLED:
            return "CANCELLED";
          case ContactStatus::CANCELLING:
            return "CANCELLING";
          case ContactStatus::COMPLETED:
            return "COMPLETED";
          case ContactStatus::FAILED:
            return "FAILED";
          case ContactStatus::FAILED_TO_SCHEDULE:
            return "FAILED_TO_SCHEDULE";
          case ContactStatus::PASS:
            return "PASS";
          case ContactStatus::POSTPASS:
            return "POSTPASS";
          case ContactStatus::PREPASS:
            return "PREPASS";
          case ContactStatus::SCHEDULED:
            return "SCHEDULED";
          case ContactStatus::SCHEDULING:
            return "SCHEDULING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ContactStatusMapper
    } // namespace Model
  } // namespace GroundStation
} // namespace Aws
