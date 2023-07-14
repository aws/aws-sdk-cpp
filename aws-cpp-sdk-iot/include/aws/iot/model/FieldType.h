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
  enum class FieldType
  {
    NOT_SET,
    Number,
    String,
    Boolean
  };

namespace FieldTypeMapper
{
AWS_IOT_API FieldType GetFieldTypeForName(const Aws::String& name);

AWS_IOT_API Aws::String GetNameForFieldType(FieldType value);
} // namespace FieldTypeMapper
} // namespace Model
} // namespace IoT
} // namespace Aws
