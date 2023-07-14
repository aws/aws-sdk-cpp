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
  enum class DynamoKeyType
  {
    NOT_SET,
    STRING,
    NUMBER
  };

namespace DynamoKeyTypeMapper
{
AWS_IOT_API DynamoKeyType GetDynamoKeyTypeForName(const Aws::String& name);

AWS_IOT_API Aws::String GetNameForDynamoKeyType(DynamoKeyType value);
} // namespace DynamoKeyTypeMapper
} // namespace Model
} // namespace IoT
} // namespace Aws
