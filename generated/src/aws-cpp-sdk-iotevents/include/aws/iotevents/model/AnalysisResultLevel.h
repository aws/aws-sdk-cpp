/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents/IoTEvents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoTEvents
{
namespace Model
{
  enum class AnalysisResultLevel
  {
    NOT_SET,
    INFO,
    WARNING,
    ERROR_
  };

namespace AnalysisResultLevelMapper
{
AWS_IOTEVENTS_API AnalysisResultLevel GetAnalysisResultLevelForName(const Aws::String& name);

AWS_IOTEVENTS_API Aws::String GetNameForAnalysisResultLevel(AnalysisResultLevel value);
} // namespace AnalysisResultLevelMapper
} // namespace Model
} // namespace IoTEvents
} // namespace Aws
