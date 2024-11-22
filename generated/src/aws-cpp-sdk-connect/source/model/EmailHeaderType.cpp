/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/EmailHeaderType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Connect
  {
    namespace Model
    {
      namespace EmailHeaderTypeMapper
      {

        static const int REFERENCES_HASH = HashingUtils::HashString("REFERENCES");
        static const int MESSAGE_ID_HASH = HashingUtils::HashString("MESSAGE_ID");
        static const int IN_REPLY_TO_HASH = HashingUtils::HashString("IN_REPLY_TO");
        static const int X_SES_SPAM_VERDICT_HASH = HashingUtils::HashString("X_SES_SPAM_VERDICT");
        static const int X_SES_VIRUS_VERDICT_HASH = HashingUtils::HashString("X_SES_VIRUS_VERDICT");


        EmailHeaderType GetEmailHeaderTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == REFERENCES_HASH)
          {
            return EmailHeaderType::REFERENCES;
          }
          else if (hashCode == MESSAGE_ID_HASH)
          {
            return EmailHeaderType::MESSAGE_ID;
          }
          else if (hashCode == IN_REPLY_TO_HASH)
          {
            return EmailHeaderType::IN_REPLY_TO;
          }
          else if (hashCode == X_SES_SPAM_VERDICT_HASH)
          {
            return EmailHeaderType::X_SES_SPAM_VERDICT;
          }
          else if (hashCode == X_SES_VIRUS_VERDICT_HASH)
          {
            return EmailHeaderType::X_SES_VIRUS_VERDICT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EmailHeaderType>(hashCode);
          }

          return EmailHeaderType::NOT_SET;
        }

        Aws::String GetNameForEmailHeaderType(EmailHeaderType enumValue)
        {
          switch(enumValue)
          {
          case EmailHeaderType::NOT_SET:
            return {};
          case EmailHeaderType::REFERENCES:
            return "REFERENCES";
          case EmailHeaderType::MESSAGE_ID:
            return "MESSAGE_ID";
          case EmailHeaderType::IN_REPLY_TO:
            return "IN_REPLY_TO";
          case EmailHeaderType::X_SES_SPAM_VERDICT:
            return "X_SES_SPAM_VERDICT";
          case EmailHeaderType::X_SES_VIRUS_VERDICT:
            return "X_SES_VIRUS_VERDICT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EmailHeaderTypeMapper
    } // namespace Model
  } // namespace Connect
} // namespace Aws
