﻿/**
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
  enum class LogTargetType
  {
    NOT_SET,
    DEFAULT,
    THING_GROUP,
    CLIENT_ID,
    SOURCE_IP,
    PRINCIPAL_ID,
    EVENT_TYPE,
    DEVICE_DEFENDER
  };

namespace LogTargetTypeMapper
{
AWS_IOT_API LogTargetType GetLogTargetTypeForName(const Aws::String& name);

AWS_IOT_API Aws::String GetNameForLogTargetType(LogTargetType value);
} // namespace LogTargetTypeMapper
} // namespace Model
} // namespace IoT
} // namespace Aws
