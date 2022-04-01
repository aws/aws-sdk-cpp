/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DirectoryService
{
namespace Model
{
  enum class SchemaExtensionStatus
  {
    NOT_SET,
    Initializing,
    CreatingSnapshot,
    UpdatingSchema,
    Replicating,
    CancelInProgress,
    RollbackInProgress,
    Cancelled,
    Failed,
    Completed
  };

namespace SchemaExtensionStatusMapper
{
AWS_DIRECTORYSERVICE_API SchemaExtensionStatus GetSchemaExtensionStatusForName(const Aws::String& name);

AWS_DIRECTORYSERVICE_API Aws::String GetNameForSchemaExtensionStatus(SchemaExtensionStatus value);
} // namespace SchemaExtensionStatusMapper
} // namespace Model
} // namespace DirectoryService
} // namespace Aws
