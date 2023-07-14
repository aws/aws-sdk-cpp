﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AppSync
{
namespace Model
{
  enum class SchemaStatus
  {
    NOT_SET,
    PROCESSING,
    ACTIVE,
    DELETING,
    FAILED,
    SUCCESS,
    NOT_APPLICABLE
  };

namespace SchemaStatusMapper
{
AWS_APPSYNC_API SchemaStatus GetSchemaStatusForName(const Aws::String& name);

AWS_APPSYNC_API Aws::String GetNameForSchemaStatus(SchemaStatus value);
} // namespace SchemaStatusMapper
} // namespace Model
} // namespace AppSync
} // namespace Aws
