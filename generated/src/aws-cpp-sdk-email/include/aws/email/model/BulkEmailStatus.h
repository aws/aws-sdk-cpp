/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/email/SES_EXPORTS.h>

namespace Aws {
namespace SES {
namespace Model {
enum class BulkEmailStatus {
  NOT_SET,
  Success,
  MessageRejected,
  MailFromDomainNotVerified,
  ConfigurationSetDoesNotExist,
  TemplateDoesNotExist,
  AccountSuspended,
  AccountThrottled,
  AccountDailyQuotaExceeded,
  InvalidSendingPoolName,
  AccountSendingPaused,
  ConfigurationSetSendingPaused,
  InvalidParameterValue,
  TransientFailure,
  Failed
};

namespace BulkEmailStatusMapper {
AWS_SES_API BulkEmailStatus GetBulkEmailStatusForName(const Aws::String& name);

AWS_SES_API Aws::String GetNameForBulkEmailStatus(BulkEmailStatus value);
}  // namespace BulkEmailStatusMapper
}  // namespace Model
}  // namespace SES
}  // namespace Aws
