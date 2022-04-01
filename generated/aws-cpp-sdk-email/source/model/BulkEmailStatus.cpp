/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/email/model/BulkEmailStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SES
  {
    namespace Model
    {
      namespace BulkEmailStatusMapper
      {

        static const int Success_HASH = HashingUtils::HashString("Success");
        static const int MessageRejected_HASH = HashingUtils::HashString("MessageRejected");
        static const int MailFromDomainNotVerified_HASH = HashingUtils::HashString("MailFromDomainNotVerified");
        static const int ConfigurationSetDoesNotExist_HASH = HashingUtils::HashString("ConfigurationSetDoesNotExist");
        static const int TemplateDoesNotExist_HASH = HashingUtils::HashString("TemplateDoesNotExist");
        static const int AccountSuspended_HASH = HashingUtils::HashString("AccountSuspended");
        static const int AccountThrottled_HASH = HashingUtils::HashString("AccountThrottled");
        static const int AccountDailyQuotaExceeded_HASH = HashingUtils::HashString("AccountDailyQuotaExceeded");
        static const int InvalidSendingPoolName_HASH = HashingUtils::HashString("InvalidSendingPoolName");
        static const int AccountSendingPaused_HASH = HashingUtils::HashString("AccountSendingPaused");
        static const int ConfigurationSetSendingPaused_HASH = HashingUtils::HashString("ConfigurationSetSendingPaused");
        static const int InvalidParameterValue_HASH = HashingUtils::HashString("InvalidParameterValue");
        static const int TransientFailure_HASH = HashingUtils::HashString("TransientFailure");
        static const int Failed_HASH = HashingUtils::HashString("Failed");


        BulkEmailStatus GetBulkEmailStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Success_HASH)
          {
            return BulkEmailStatus::Success;
          }
          else if (hashCode == MessageRejected_HASH)
          {
            return BulkEmailStatus::MessageRejected;
          }
          else if (hashCode == MailFromDomainNotVerified_HASH)
          {
            return BulkEmailStatus::MailFromDomainNotVerified;
          }
          else if (hashCode == ConfigurationSetDoesNotExist_HASH)
          {
            return BulkEmailStatus::ConfigurationSetDoesNotExist;
          }
          else if (hashCode == TemplateDoesNotExist_HASH)
          {
            return BulkEmailStatus::TemplateDoesNotExist;
          }
          else if (hashCode == AccountSuspended_HASH)
          {
            return BulkEmailStatus::AccountSuspended;
          }
          else if (hashCode == AccountThrottled_HASH)
          {
            return BulkEmailStatus::AccountThrottled;
          }
          else if (hashCode == AccountDailyQuotaExceeded_HASH)
          {
            return BulkEmailStatus::AccountDailyQuotaExceeded;
          }
          else if (hashCode == InvalidSendingPoolName_HASH)
          {
            return BulkEmailStatus::InvalidSendingPoolName;
          }
          else if (hashCode == AccountSendingPaused_HASH)
          {
            return BulkEmailStatus::AccountSendingPaused;
          }
          else if (hashCode == ConfigurationSetSendingPaused_HASH)
          {
            return BulkEmailStatus::ConfigurationSetSendingPaused;
          }
          else if (hashCode == InvalidParameterValue_HASH)
          {
            return BulkEmailStatus::InvalidParameterValue;
          }
          else if (hashCode == TransientFailure_HASH)
          {
            return BulkEmailStatus::TransientFailure;
          }
          else if (hashCode == Failed_HASH)
          {
            return BulkEmailStatus::Failed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BulkEmailStatus>(hashCode);
          }

          return BulkEmailStatus::NOT_SET;
        }

        Aws::String GetNameForBulkEmailStatus(BulkEmailStatus enumValue)
        {
          switch(enumValue)
          {
          case BulkEmailStatus::Success:
            return "Success";
          case BulkEmailStatus::MessageRejected:
            return "MessageRejected";
          case BulkEmailStatus::MailFromDomainNotVerified:
            return "MailFromDomainNotVerified";
          case BulkEmailStatus::ConfigurationSetDoesNotExist:
            return "ConfigurationSetDoesNotExist";
          case BulkEmailStatus::TemplateDoesNotExist:
            return "TemplateDoesNotExist";
          case BulkEmailStatus::AccountSuspended:
            return "AccountSuspended";
          case BulkEmailStatus::AccountThrottled:
            return "AccountThrottled";
          case BulkEmailStatus::AccountDailyQuotaExceeded:
            return "AccountDailyQuotaExceeded";
          case BulkEmailStatus::InvalidSendingPoolName:
            return "InvalidSendingPoolName";
          case BulkEmailStatus::AccountSendingPaused:
            return "AccountSendingPaused";
          case BulkEmailStatus::ConfigurationSetSendingPaused:
            return "ConfigurationSetSendingPaused";
          case BulkEmailStatus::InvalidParameterValue:
            return "InvalidParameterValue";
          case BulkEmailStatus::TransientFailure:
            return "TransientFailure";
          case BulkEmailStatus::Failed:
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

      } // namespace BulkEmailStatusMapper
    } // namespace Model
  } // namespace SES
} // namespace Aws
