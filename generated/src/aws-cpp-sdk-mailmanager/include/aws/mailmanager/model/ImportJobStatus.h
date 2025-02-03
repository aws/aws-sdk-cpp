/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MailManager
{
namespace Model
{
  enum class ImportJobStatus
  {
    NOT_SET,
    CREATED,
    PROCESSING,
    COMPLETED,
    FAILED,
    STOPPED
  };

namespace ImportJobStatusMapper
{
AWS_MAILMANAGER_API ImportJobStatus GetImportJobStatusForName(const Aws::String& name);

AWS_MAILMANAGER_API Aws::String GetNameForImportJobStatus(ImportJobStatus value);
} // namespace ImportJobStatusMapper
} // namespace Model
} // namespace MailManager
} // namespace Aws
