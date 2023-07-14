/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotanalytics/IoTAnalytics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoTAnalytics
{
namespace Model
{
  enum class ChannelStatus
  {
    NOT_SET,
    CREATING,
    ACTIVE,
    DELETING
  };

namespace ChannelStatusMapper
{
AWS_IOTANALYTICS_API ChannelStatus GetChannelStatusForName(const Aws::String& name);

AWS_IOTANALYTICS_API Aws::String GetNameForChannelStatus(ChannelStatus value);
} // namespace ChannelStatusMapper
} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
