/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-data/IoTDataPlane_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoTDataPlane
{
namespace Model
{
  enum class PayloadFormatIndicator
  {
    NOT_SET,
    UNSPECIFIED_BYTES,
    UTF8_DATA
  };

namespace PayloadFormatIndicatorMapper
{
AWS_IOTDATAPLANE_API PayloadFormatIndicator GetPayloadFormatIndicatorForName(const Aws::String& name);

AWS_IOTDATAPLANE_API Aws::String GetNameForPayloadFormatIndicator(PayloadFormatIndicator value);
} // namespace PayloadFormatIndicatorMapper
} // namespace Model
} // namespace IoTDataPlane
} // namespace Aws
