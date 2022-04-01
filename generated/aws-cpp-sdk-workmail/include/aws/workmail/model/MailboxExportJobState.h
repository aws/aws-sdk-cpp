/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmail/WorkMail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace WorkMail
{
namespace Model
{
  enum class MailboxExportJobState
  {
    NOT_SET,
    RUNNING,
    COMPLETED,
    FAILED,
    CANCELLED
  };

namespace MailboxExportJobStateMapper
{
AWS_WORKMAIL_API MailboxExportJobState GetMailboxExportJobStateForName(const Aws::String& name);

AWS_WORKMAIL_API Aws::String GetNameForMailboxExportJobState(MailboxExportJobState value);
} // namespace MailboxExportJobStateMapper
} // namespace Model
} // namespace WorkMail
} // namespace Aws
