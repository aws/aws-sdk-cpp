/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Connect
{
namespace Model
{
  enum class AttachedFileServiceQuotaExceededExceptionReason
  {
    NOT_SET,
    TOTAL_FILE_SIZE_EXCEEDED,
    TOTAL_FILE_COUNT_EXCEEDED
  };

namespace AttachedFileServiceQuotaExceededExceptionReasonMapper
{
AWS_CONNECT_API AttachedFileServiceQuotaExceededExceptionReason GetAttachedFileServiceQuotaExceededExceptionReasonForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForAttachedFileServiceQuotaExceededExceptionReason(AttachedFileServiceQuotaExceededExceptionReason value);
} // namespace AttachedFileServiceQuotaExceededExceptionReasonMapper
} // namespace Model
} // namespace Connect
} // namespace Aws
