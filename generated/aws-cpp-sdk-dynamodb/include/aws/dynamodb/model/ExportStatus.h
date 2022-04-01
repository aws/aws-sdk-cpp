/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DynamoDB
{
namespace Model
{
  enum class ExportStatus
  {
    NOT_SET,
    IN_PROGRESS,
    COMPLETED,
    FAILED
  };

namespace ExportStatusMapper
{
AWS_DYNAMODB_API ExportStatus GetExportStatusForName(const Aws::String& name);

AWS_DYNAMODB_API Aws::String GetNameForExportStatus(ExportStatus value);
} // namespace ExportStatusMapper
} // namespace Model
} // namespace DynamoDB
} // namespace Aws
