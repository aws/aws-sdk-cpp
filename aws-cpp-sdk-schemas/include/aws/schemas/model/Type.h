/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/schemas/Schemas_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Schemas
{
namespace Model
{
  enum class Type
  {
    NOT_SET,
    OpenApi3,
    JSONSchemaDraft4
  };

namespace TypeMapper
{
AWS_SCHEMAS_API Type GetTypeForName(const Aws::String& name);

AWS_SCHEMAS_API Aws::String GetNameForType(Type value);
} // namespace TypeMapper
} // namespace Model
} // namespace Schemas
} // namespace Aws
