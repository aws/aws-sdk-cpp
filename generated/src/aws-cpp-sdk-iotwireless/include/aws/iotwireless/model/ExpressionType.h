/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoTWireless
{
namespace Model
{
  enum class ExpressionType
  {
    NOT_SET,
    RuleName,
    MqttTopic
  };

namespace ExpressionTypeMapper
{
AWS_IOTWIRELESS_API ExpressionType GetExpressionTypeForName(const Aws::String& name);

AWS_IOTWIRELESS_API Aws::String GetNameForExpressionType(ExpressionType value);
} // namespace ExpressionTypeMapper
} // namespace Model
} // namespace IoTWireless
} // namespace Aws
