/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/detective/Detective_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Detective
{
namespace Model
{
  enum class Field
  {
    NOT_SET,
    SEVERITY,
    STATUS,
    CREATED_TIME
  };

namespace FieldMapper
{
AWS_DETECTIVE_API Field GetFieldForName(const Aws::String& name);

AWS_DETECTIVE_API Aws::String GetNameForField(Field value);
} // namespace FieldMapper
} // namespace Model
} // namespace Detective
} // namespace Aws
