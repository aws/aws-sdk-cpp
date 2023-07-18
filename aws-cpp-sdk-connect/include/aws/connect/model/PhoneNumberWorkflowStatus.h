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
  enum class PhoneNumberWorkflowStatus
  {
    NOT_SET,
    CLAIMED,
    IN_PROGRESS,
    FAILED
  };

namespace PhoneNumberWorkflowStatusMapper
{
AWS_CONNECT_API PhoneNumberWorkflowStatus GetPhoneNumberWorkflowStatusForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForPhoneNumberWorkflowStatus(PhoneNumberWorkflowStatus value);
} // namespace PhoneNumberWorkflowStatusMapper
} // namespace Model
} // namespace Connect
} // namespace Aws
