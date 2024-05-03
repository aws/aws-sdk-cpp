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
  enum class AttachedFileInvalidRequestExceptionReason
  {
    NOT_SET,
    INVALID_FILE_SIZE,
    INVALID_FILE_TYPE,
    INVALID_FILE_NAME
  };

namespace AttachedFileInvalidRequestExceptionReasonMapper
{
AWS_CONNECT_API AttachedFileInvalidRequestExceptionReason GetAttachedFileInvalidRequestExceptionReasonForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForAttachedFileInvalidRequestExceptionReason(AttachedFileInvalidRequestExceptionReason value);
} // namespace AttachedFileInvalidRequestExceptionReasonMapper
} // namespace Model
} // namespace Connect
} // namespace Aws
