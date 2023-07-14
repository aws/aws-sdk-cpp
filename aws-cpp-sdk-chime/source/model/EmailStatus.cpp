/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/EmailStatus.h>
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
      namespace EmailStatusMapper
      {

        static const int NotSent_HASH = HashingUtils::HashString("NotSent");
        static const int Sent_HASH = HashingUtils::HashString("Sent");
        static const int Failed_HASH = HashingUtils::HashString("Failed");


        EmailStatus GetEmailStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NotSent_HASH)
          {
            return EmailStatus::NotSent;
          }
          else if (hashCode == Sent_HASH)
          {
            return EmailStatus::Sent;
          }
          else if (hashCode == Failed_HASH)
          {
            return EmailStatus::Failed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EmailStatus>(hashCode);
          }

          return EmailStatus::NOT_SET;
        }

        Aws::String GetNameForEmailStatus(EmailStatus enumValue)
        {
          switch(enumValue)
          {
          case EmailStatus::NotSent:
            return "NotSent";
          case EmailStatus::Sent:
            return "Sent";
          case EmailStatus::Failed:
            return "Failed";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EmailStatusMapper
    } // namespace Model
  } // namespace Chime
} // namespace Aws
