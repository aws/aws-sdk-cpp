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
  enum class ConnectorStatus
  {
    NOT_SET,
    HEALTHY,
    UNHEALTHY
  };

namespace ConnectorStatusMapper
{
AWS_SMS_API ConnectorStatus GetConnectorStatusForName(const Aws::String& name);

AWS_SMS_API Aws::String GetNameForConnectorStatus(ConnectorStatus value);
} // namespace ConnectorStatusMapper
} // namespace Model
} // namespace SMS
} // namespace Aws
