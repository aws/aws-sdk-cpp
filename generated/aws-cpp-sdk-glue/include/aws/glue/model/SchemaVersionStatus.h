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
  enum class SchemaVersionStatus
  {
    NOT_SET,
    AVAILABLE,
    PENDING,
    FAILURE,
    DELETING
  };

namespace SchemaVersionStatusMapper
{
AWS_GLUE_API SchemaVersionStatus GetSchemaVersionStatusForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForSchemaVersionStatus(SchemaVersionStatus value);
} // namespace SchemaVersionStatusMapper
} // namespace Model
} // namespace Glue
} // namespace Aws
