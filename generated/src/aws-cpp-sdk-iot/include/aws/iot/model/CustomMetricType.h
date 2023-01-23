/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoT
{
namespace Model
{
  enum class CustomMetricType
  {
    NOT_SET,
    string_list,
    ip_address_list,
    number_list,
    number
  };

namespace CustomMetricTypeMapper
{
AWS_IOT_API CustomMetricType GetCustomMetricTypeForName(const Aws::String& name);

AWS_IOT_API Aws::String GetNameForCustomMetricType(CustomMetricType value);
} // namespace CustomMetricTypeMapper
} // namespace Model
} // namespace IoT
} // namespace Aws
