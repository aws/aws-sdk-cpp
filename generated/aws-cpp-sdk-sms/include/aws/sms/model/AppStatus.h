/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sms/SMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SMS
{
namespace Model
{
  enum class AppStatus
  {
    NOT_SET,
    CREATING,
    ACTIVE,
    UPDATING,
    DELETING,
    DELETED,
    DELETE_FAILED
  };

namespace AppStatusMapper
{
AWS_SMS_API AppStatus GetAppStatusForName(const Aws::String& name);

AWS_SMS_API Aws::String GetNameForAppStatus(AppStatus value);
} // namespace AppStatusMapper
} // namespace Model
} // namespace SMS
} // namespace Aws
