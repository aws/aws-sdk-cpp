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
  enum class ExportState
  {
    NOT_SET,
    QUEUED,
    PREPROCESSING,
    PROCESSING,
    COMPLETED,
    FAILED,
    CANCELLED
  };

namespace ExportStateMapper
{
AWS_MAILMANAGER_API ExportState GetExportStateForName(const Aws::String& name);

AWS_MAILMANAGER_API Aws::String GetNameForExportState(ExportState value);
} // namespace ExportStateMapper
} // namespace Model
} // namespace MailManager
} // namespace Aws
