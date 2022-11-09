/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ConnectCases
{
namespace Model
{
  enum class FieldType
  {
    NOT_SET,
    Text,
    Number,
    Boolean,
    DateTime,
    SingleSelect
  };

namespace FieldTypeMapper
{
AWS_CONNECTCASES_API FieldType GetFieldTypeForName(const Aws::String& name);

AWS_CONNECTCASES_API Aws::String GetNameForFieldType(FieldType value);
} // namespace FieldTypeMapper
} // namespace Model
} // namespace ConnectCases
} // namespace Aws
