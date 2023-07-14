/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-email/PinpointEmail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace PinpointEmail
{
namespace Model
{
  enum class DkimStatus
  {
    NOT_SET,
    PENDING,
    SUCCESS,
    FAILED,
    TEMPORARY_FAILURE,
    NOT_STARTED
  };

namespace DkimStatusMapper
{
AWS_PINPOINTEMAIL_API DkimStatus GetDkimStatusForName(const Aws::String& name);

AWS_PINPOINTEMAIL_API Aws::String GetNameForDkimStatus(DkimStatus value);
} // namespace DkimStatusMapper
} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
