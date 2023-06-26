/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoTSiteWise
{
namespace Model
{
  enum class MonitorErrorCode
  {
    NOT_SET,
    INTERNAL_FAILURE,
    VALIDATION_ERROR,
    LIMIT_EXCEEDED
  };

namespace MonitorErrorCodeMapper
{
AWS_IOTSITEWISE_API MonitorErrorCode GetMonitorErrorCodeForName(const Aws::String& name);

AWS_IOTSITEWISE_API Aws::String GetNameForMonitorErrorCode(MonitorErrorCode value);
} // namespace MonitorErrorCodeMapper
} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
