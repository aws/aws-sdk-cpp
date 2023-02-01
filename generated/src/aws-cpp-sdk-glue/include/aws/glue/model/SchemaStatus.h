/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Glue
{
namespace Model
{
  enum class SchemaStatus
  {
    NOT_SET,
    AVAILABLE,
    PENDING,
    DELETING
  };

namespace SchemaStatusMapper
{
AWS_GLUE_API SchemaStatus GetSchemaStatusForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForSchemaStatus(SchemaStatus value);
} // namespace SchemaStatusMapper
} // namespace Model
} // namespace Glue
} // namespace Aws
