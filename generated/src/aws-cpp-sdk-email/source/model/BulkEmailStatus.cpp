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

        static constexpr uint32_t Success_HASH = ConstExprHashingUtils::HashString("Success");
        static constexpr uint32_t MessageRejected_HASH = ConstExprHashingUtils::HashString("MessageRejected");
        static constexpr uint32_t MailFromDomainNotVerified_HASH = ConstExprHashingUtils::HashString("MailFromDomainNotVerified");
        static constexpr uint32_t ConfigurationSetDoesNotExist_HASH = ConstExprHashingUtils::HashString("ConfigurationSetDoesNotExist");
        static constexpr uint32_t TemplateDoesNotExist_HASH = ConstExprHashingUtils::HashString("TemplateDoesNotExist");
        static constexpr uint32_t AccountSuspended_HASH = ConstExprHashingUtils::HashString("AccountSuspended");
        static constexpr uint32_t AccountThrottled_HASH = ConstExprHashingUtils::HashString("AccountThrottled");
        static constexpr uint32_t AccountDailyQuotaExceeded_HASH = ConstExprHashingUtils::HashString("AccountDailyQuotaExceeded");
        static constexpr uint32_t InvalidSendingPoolName_HASH = ConstExprHashingUtils::HashString("InvalidSendingPoolName");
        static constexpr uint32_t AccountSendingPaused_HASH = ConstExprHashingUtils::HashString("AccountSendingPaused");
        static constexpr uint32_t ConfigurationSetSendingPaused_HASH = ConstExprHashingUtils::HashString("ConfigurationSetSendingPaused");
        static constexpr uint32_t InvalidParameterValue_HASH = ConstExprHashingUtils::HashString("InvalidParameterValue");
        static constexpr uint32_t TransientFailure_HASH = ConstExprHashingUtils::HashString("TransientFailure");
        static constexpr uint32_t Failed_HASH = ConstExprHashingUtils::HashString("Failed");


        BulkEmailStatus GetBulkEmailStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case BulkEmailStatus::NOT_SET:
            return {};
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
